%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern FILE* yyin;
extern int yylineno;
extern char* yytext;

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d near '%s': %s\n", yylineno, yytext, s);
}

int yyparse(void);
%}

%union {
    int int_value;
    char* string_value;
    char char_value;
    int bool_value;
}

%token <int_value> INTEGER_LITERAL
%token <string_value> STRING_LITERAL
%token <char_value> CHAR_LITERAL
%token <string_value> IDENTIFIER
%token <bool_value> BOOL_LITERAL_TRUE BOOL_LITERAL_FALSE

%token INT_TYPE CHAR_TYPE STRING_TYPE BOOL_TYPE
%token EQUAL NOT_EQUAL LESS_EQUAL GREATER_EQUAL

%start program

%%

program:
    statement_list
    { printf("PARSER: Program parsed successfully\n"); }
    ;

statement_list:
    /* empty */
    | statement_list statement
    ;

statement:
    variable_declaration
    | expression_statement
    | block
    ;

variable_declaration:
    type IDENTIFIER ';' 
    { printf("PARSER: Variable declaration: %s\n", $2); }
    | type IDENTIFIER '=' expression ';' 
    { printf("PARSER: Initialized variable: %s\n", $2); }
    ;

type:
    INT_TYPE    { printf("PARSER: int type\n"); }
    | CHAR_TYPE { printf("PARSER: char type\n"); }
    | STRING_TYPE { printf("PARSER: string type\n"); }
    | BOOL_TYPE { printf("PARSER: bool type\n"); }
    ;

expression_statement:
    expression ';' 
    { printf("PARSER: Expression statement completed\n"); }
    ;

block:
    '{' statement_list '}' 
    { printf("PARSER: Block scope\n"); }
    ;

expression:
    assignment_expression
    ;

assignment_expression:
    logical_expression
    | IDENTIFIER '=' expression 
    { printf("PARSER: Assignment to %s\n", $1); }
    ;

logical_expression:
    comparison_expression
    ;

comparison_expression:
    additive_expression
    | comparison_expression EQUAL additive_expression 
    { printf("PARSER: Equality comparison\n"); }
    | comparison_expression NOT_EQUAL additive_expression 
    { printf("PARSER: Inequality comparison\n"); }
    | comparison_expression '<' additive_expression 
    { printf("PARSER: Less than\n"); }
    | comparison_expression '>' additive_expression 
    { printf("PARSER: Greater than\n"); }
    | comparison_expression LESS_EQUAL additive_expression 
    { printf("PARSER: Less or equal\n"); }
    | comparison_expression GREATER_EQUAL additive_expression 
    { printf("PARSER: Greater or equal\n"); }
    ;

additive_expression:
    multiplicative_expression
    | additive_expression '+' multiplicative_expression 
    { printf("PARSER: Addition\n"); }
    | additive_expression '-' multiplicative_expression 
    { printf("PARSER: Subtraction\n"); }
    ;

multiplicative_expression:
    primary_expression
    | multiplicative_expression '*' primary_expression 
    { printf("PARSER: Multiplication\n"); }
    | multiplicative_expression '/' primary_expression 
    { printf("PARSER: Division\n"); }
    ;

primary_expression:
    IDENTIFIER 
    { printf("PARSER: Variable reference: %s\n", $1); }
    | INTEGER_LITERAL 
    { printf("PARSER: Integer literal: %d\n", $1); }
    | CHAR_LITERAL 
    { printf("PARSER: Char literal: '%c'\n", $1); }
    | STRING_LITERAL 
    { printf("PARSER: String literal: \"%s\"\n", $1); }
    | BOOL_LITERAL_TRUE 
    { printf("PARSER: Boolean literal: true\n"); }
    | BOOL_LITERAL_FALSE 
    { printf("PARSER: Boolean literal: false\n"); }
    | '(' expression ')' 
    { printf("PARSER: Parenthesized expression\n"); }
    ;

%%

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            printf("Cannot open file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Enter C# code with basic variables (Ctrl+D to end):\n");
    }

    printf("=== Starting Simplified Parser for First Assignment ===\n");
    
    if (yyparse() == 0) {
        printf("\n=== Parsing completed successfully! ===\n");
    } else {
        printf("\n=== Parsing failed! ===\n");
    }

    if (yyin != stdin) fclose(yyin);
    return 0;
}