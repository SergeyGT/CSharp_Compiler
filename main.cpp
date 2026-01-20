#include <iostream>
#include <fstream>
#include "Tree/Program.h"
#include "Dot.h"
#include "Semantic/Semantic.h"

extern int yyparse();
extern FILE* yyin;
extern struct Program* treeRoot;

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file.cs>" << std::endl;
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
        return 1;
    }

    int result = yyparse();

    if (result == 0 && treeRoot) {
        std::cout << "Parsing successful!" << std::endl;

        // Генерация DOT файла
        std::ofstream dotFile("ast.dot");
        if (dotFile.is_open()) {
            ToDot(treeRoot, dotFile);
            dotFile.close();
            std::cout << "AST saved to ast.dot" << std::endl;

            // Генерация SVG (если установлен Graphviz)
            RunDot("dot", "ast.dot");
        }

        // ДОБАВЛЯЕМ: Семантический анализ
        std::cout << "\n=== Semantic Analysis ===" << std::endl;
        try {
            Semantic semantic(treeRoot);
            semantic.Analyze();

            if (!semantic.Errors.empty()) {
                std::cout << "Semantic errors found:" << std::endl;
                for (const auto& error : semantic.Errors) {
                    std::cout << "  ERROR: " << error << std::endl;
                }
                return 1;
            } else {
                std::cout << "Semantic analysis passed successfully!" << std::endl;

                // Генерация байткода
                std::cout << "\n=== Code Generation ===" << std::endl;
                semantic.Generate();
                std::cout << "Bytecode generated successfully!" << std::endl;

                //Подключение файлов из System.
                std::cout << "\n=== Running Program ===" << std::endl;

                // Собираем classpath
                std::string classpath = "Output";

                #ifdef _WIN32
                    classpath += ";lib";
                #endif

                for (auto* ns : treeRoot->Namespaces->GetSeq()) {
                    if (ns->NamespaceName != "System") {
                        std::string nsPath = "Output/" + std::string(ns->NamespaceName);
                        classpath += (":" + nsPath);
                    }
                }

                // std::string command = "java -cp \"" + classpath + "\" Test.Program";
                // std::cout << "Running: " << command << std::endl;
                // system(command.c_str());

            }
        } catch (const std::exception& e) {
            std::cerr << "Semantic analysis failed with exception: " << e.what() << std::endl;
            return 1;
        }

    } else {
        std::cerr << "Parsing failed!" << std::endl;
    }

    fclose(yyin);
    return result;
}