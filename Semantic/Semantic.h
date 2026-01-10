#pragma once
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

    void Analyze()
    {
        CheckSystemNamespace();
        for (auto* _namespace : program->Namespaces->GetSeq())
        {
            if (_namespace->NamespaceName != "System") { AnalyzeNamespace(_namespace); }
        }
        if (AllMains.size() > 1) { Errors.insert("There must be only one main in the program"); }
        if (AllMains.empty()) { Errors.insert("Cannot run a program without an entry point"); }
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
