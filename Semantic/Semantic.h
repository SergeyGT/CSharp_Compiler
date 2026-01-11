#pragma once
#include <iostream>
#include <vector>
#include <set>
#include "JvmClass.h"
#include "ClassAnalyzer.h"
#include "../Tree/Class.h"

struct Semantic
{
    // ReSharper disable once CppInconsistentNaming
    Program* program;
    std::vector<Class> Classes{};
    std::vector<MethodDeclNode*> AllMains{};

    explicit Semantic(Program* program) : program{ program }
    {
    }

    MethodDeclNode* CurrentMethod = nullptr;
    ClassDeclNode* CurrentClass = nullptr;

    std::set<std::string> Errors;

    // В методе Analyze() Semantic.h
    void Analyze()
    {
        std::cout << "[DEBUG] ===== START Semantic::Analyze() =====" << std::endl;

        std::cout << "[DEBUG] Step 1: CheckSystemNamespace" << std::endl;
        CheckSystemNamespace();

        std::cout << "[DEBUG] Step 2: List all namespaces" << std::endl;
        std::cout << "[DEBUG] program->Namespaces pointer: " << program->Namespaces << std::endl;

        if (program->Namespaces) {
            std::cout << "[DEBUG] Number of namespaces: " << program->Namespaces->GetSeq().size() << std::endl;

            for (size_t i = 0; i < program->Namespaces->GetSeq().size(); ++i) {
                auto* ns = program->Namespaces->GetSeq()[i];
                std::cout << "[DEBUG] Namespace " << i << ": " << ns->NamespaceName
                          << " (System? " << (ns->NamespaceName == "System" ? "yes" : "no") << ")" << std::endl;
            }

            std::cout << "[DEBUG] Step 3: Analyze non-System namespaces" << std::endl;
            for (auto* _namespace : program->Namespaces->GetSeq())
            {
                std::cout << "[DEBUG] Processing namespace: " << _namespace->NamespaceName << std::endl;
                if (_namespace->NamespaceName != "System") {
                    std::cout << "[DEBUG] Calling AnalyzeNamespace for: " << _namespace->NamespaceName << std::endl;
                    AnalyzeNamespace(_namespace);
                    std::cout << "[DEBUG] AnalyzeNamespace completed for: " << _namespace->NamespaceName << std::endl;
                  } else {
                     std::cout << "[DEBUG] Skipping System namespace" << std::endl;
                  }
            }
        } else {
            std::cout << "[DEBUG] ERROR: program->Namespaces is null!" << std::endl;
        }

        std::cout << "[DEBUG] Step 4: Check Main methods" << std::endl;
        std::cout << "[DEBUG] Found " << AllMains.size() << " Main methods" << std::endl;

        if (AllMains.size() > 1) {
            std::cout << "[DEBUG] ERROR: Too many Main methods" << std::endl;
            Errors.insert("There must be only one main in the program");
        }
        if (AllMains.empty()) {
            std::cout << "[DEBUG] ERROR: No Main method found" << std::endl;
            Errors.insert("Cannot run a program without an entry point");
        }

        std::cout << "[DEBUG] Total errors: " << Errors.size() << std::endl;
        std::cout << "[DEBUG] ===== END Semantic::Analyze() =====" << std::endl;
    }

    NamespaceDeclNode* CreateSystemNamespace() const;

    static ClassDeclNode* CreateConsoleClass();

    static ClassDeclNode* CreateStringClass();


    void CheckSystemNamespace()
    {
        for (const auto* _namespace : program->Namespaces->GetSeq())
        {
            if (_namespace->NamespaceName == "System")
            {
                Errors.insert("You cannot declare namespace System");
                return;
            }
        }

        auto* systemNamespace = CreateSystemNamespace();
        program->Namespaces->Add(systemNamespace);
    }

    void AnalyzeNamespace(NamespaceDeclNode* namespace_)
    {

        // Анализ сигнатур классов
        for (auto* class_ : namespace_->Members->Classes)
        {
            ClassAnalyzer analyzer(class_, namespace_, program->Namespaces);
            analyzer.AnalyzeMemberSignatures();
        }

        // Анализ сигнатур структур
        for (auto* struct_ : namespace_->Members->Structs)
        {
            ClassAnalyzer analyzer(struct_, namespace_, program->Namespaces);
            analyzer.AnalyzeMemberSignatures();
        }

        // Полный анализ классов
        for (auto* class_ : namespace_->Members->Classes)
        {
            ClassAnalyzer analyzer(class_, namespace_, program->Namespaces);
            analyzer.Analyze();
            analyzer.AnalyzeMemberSignatures();
            if (class_->Members->Constructors.empty()) {
                std::cout << "[FIX] No constructors in " << class_->ClassName
                          << ", adding default..." << std::endl;

                auto* constructor = new ConstructorDeclNode(
                    VisibilityModifier::Public,
                    std::string{class_->ClassName},
                    MethodArguments::MakeEmpty(),
                    StmtSeqNode::MakeEmpty()
                );
                constructor->Class = class_;
                constructor->IsDefault = true;
                class_->Members->Constructors.push_back(constructor);
            }
            Errors.insert(analyzer.Errors.begin(), analyzer.Errors.end());
            AllMains.insert(AllMains.end(), analyzer.AllMains.begin(), analyzer.AllMains.end());
        }

        // Полный анализ структур
        for (auto* struct_ : namespace_->Members->Structs)
        {
            ClassAnalyzer analyzer(struct_, namespace_, program->Namespaces);
            analyzer.Analyze();
            Errors.insert(analyzer.Errors.begin(), analyzer.Errors.end());
            // Структуры не могут содержать Main метод
        }


    } // TODO enums

    void Generate() const
    {
        if (Errors.empty())
        {
            for (auto* namespace_ : program->Namespaces->GetSeq())
            {
                if (namespace_->NamespaceName != "System")
                {
                    // Генерация классов
                    for (auto* class_ : namespace_->Members->Classes)
                    {
                        ClassAnalyzer analyzer(class_, namespace_, program->Namespaces);
                        analyzer.FillTables();
                        analyzer.Generate();
                    }

                    // Генерация структур
                    for (auto* struct_ : namespace_->Members->Structs)
                    {
                        ClassAnalyzer analyzer(struct_, namespace_, program->Namespaces);
                        analyzer.FillTables();
                        analyzer.Generate();
                    }
                }
            }
        }
    }
};
