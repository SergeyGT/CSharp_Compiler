// main.cpp
#include <iostream>
#include <fstream>
#include <sstream>

// Включите заголовочные файлы парсера
#include "parser.hpp"
#include "lexer.cpp"

extern int yyparse();
extern FILE* yyin;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file.cs>" << std::endl;
        return 1;
    }

    // Открываем файл для парсинга
    FILE* input_file = fopen(argv[1], "r");
    if (!input_file) {
        std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
        return 1;
    }

    yyin = input_file;

    std::cout << "Starting parser..." << std::endl;

    // Запускаем парсер
    int result = yyparse();

    fclose(input_file);

    if (result == 0) {
        std::cout << "Parsing successful!" << std::endl;
    } else {
        std::cout << "Parsing failed!" << std::endl;
    }

    return result;
}