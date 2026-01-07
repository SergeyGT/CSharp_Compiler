#include <iostream>
#include <fstream>
#include "Tree/Program.h"
#include "Dot.h"

extern "C" {
    int yyparse();
    extern FILE* yyin;
    extern Program* treeRoot;
}

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
    } else {
        std::cerr << "Parsing failed!" << std::endl;
    }

    fclose(yyin);
    return result;
}