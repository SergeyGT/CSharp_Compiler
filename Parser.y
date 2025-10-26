%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern FILE* yyin;

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
}
%}

%union {
    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
}

%token <int_value> INTEGER_LITERAL
%token <float_value> FLOAT_LITERAL  
%token <double_value> DOUBLE_LITERAL
%token <string_value> STRING_LITERAL
%token <char_value> CHAR_LITERAL
%token <bool_value> BOOL_LITERAL_TRUE BOOL_LITERAL_FALSE
%token <string_value> IDENTIFIER

%token IF ELSE WHILE FOR RETURN BREAK CONTINUE
%token CLASS PUBLIC PRIVATE STATIC VOID NEW THIS
%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE CHAR_TYPE STRING_TYPE VAR_TYPE
%token AND OR EQUAL NOT_EQUAL LESS_EQUAL GREATER_EQUAL

// ДОБАВЛЯЕМ ВСЕ НЕДОСТАЮЩИЕ ТОКЕНЫ
%token NAMESPACE USING VAR OUT REF INTERNAL
%token STRUCT ENUM INTERFACE ABSTRACT SEALED VIRTUAL OVERRIDE BASE
%token SWITCH CASE DEFAULT GOTO
%token PLUS_ASSIGNMENT MINUS_ASSIGNMENT MUL_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT
%token NULL_LITERAL CONSOLE_METHOD OPERATOR

%nonassoc LOWEST
%right '='
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left '<' '>' LESS_EQUAL GREATER_EQUAL
%left '+' '-'
%left '*' '/'
%left '!' UMINUS
%left '.' '[' ']'
%nonassoc '(' ')' '{' '}' ',' ';' ':'

%start program

%%

program: 
    | program namespace_declaration { printf(" Found namespace\n"); }
    | program using_directive { printf(" Found using directive\n"); }
    | program class_declaration { printf(" Found class declaration\n"); }
    | program interface_declaration { printf(" Found interface declaration\n"); }
    | program statement { printf(" Found statement\n"); }
    ;

namespace_declaration: 
    NAMESPACE IDENTIFIER '{' program '}' { printf(" Namespace: %s\n", $2); }
    ;

using_directive: 
    USING IDENTIFIER ';' { printf(" Using: %s\n", $2); }
    | USING IDENTIFIER '=' IDENTIFIER ';' { printf(" Using alias: %s = %s\n", $2, $4); }
    ;

class_declaration: CLASS IDENTIFIER '{' class_members '}' ';'{ printf(" Class: %s\n", $2); }
    ;

class_members:
    | class_members class_member { printf(" Default class member\n"); }
    | STATIC method_declaration { printf(" Static method class member\n"); }
    | STATIC field_declaration { printf(" Static field class member\n"); }
    ;

class_member: field_declaration { printf(" Field declaration\n"); }
    | method_declaration { printf(" Method declaration\n"); }
    ;

field_declaration: type IDENTIFIER ';' { printf(" Field: %s\n", $2); }
    | type IDENTIFIER '=' expression ';' { printf(" Field with init: %s\n", $2); }
    | VAR IDENTIFIER '=' expression ';' { printf(" Implicit var: %s\n", $2); }
    ;

type: INT_TYPE { printf(" Type: int\n"); }
    | FLOAT_TYPE { printf(" Type: float\n"); }
    | DOUBLE_TYPE { printf(" Type: double\n"); }
    | BOOL_TYPE { printf(" Type: bool\n"); }
    | CHAR_TYPE { printf(" Type: char\n"); }
    | STRING_TYPE { printf(" Type: string\n"); }
    | VOID { printf(" Type: void\n"); }
    ;

method_declaration: type IDENTIFIER '(' ')' block { printf(" Method: %s\n", $2); }
    | VOID IDENTIFIER '(' ')' block { printf(" Method: void %s()\n", $2); }
    | type IDENTIFIER '(' parameter_list ')' block { printf(" Method with params: %s\n", $2); }
    | VOID IDENTIFIER '(' parameter_list ')' block { printf(" Void method with params: %s\n", $2); }
    ;

parameter_list:
    | parameter
    | parameter_list ',' parameter
    ;

parameter:
    type IDENTIFIER { printf(" Parameter: %s\n", $2); }
    ;


interface_declaration: 
    INTERFACE IDENTIFIER '{' interface_members '}' ';' { printf(" Interface: %s\n", $2); }
    ;

interface_members:
    | interface_members interface_member
    ;

interface_member:
    type IDENTIFIER '(' parameter_list ')' ';' { printf(" Interface method: %s\n", $2); }
    ;


block: '{' statements '}' { printf(" Block\n"); }
    ;

statements:
    | statements statement { printf(" Statement in block\n"); }
    ;

statement: expression ';' { printf(" Expression statement\n"); }
    | if_statement { printf(" If statement\n"); }
    | while_statement { printf(" While statement\n"); }
    | return_statement { printf(" Return statement\n"); }
    | block { printf(" Block statement\n"); }
    ;

if_statement: IF '(' expression ')' statement { printf(" If statement\n"); }
    | IF '(' expression ')' statement ELSE statement { printf(" If-else statement\n"); }
    ;

while_statement: WHILE '(' expression ')' statement { printf(" While statement\n"); }
    ;

return_statement: RETURN ';' { printf(" Return;\n"); }
    | RETURN expression ';' { printf(" Return with value\n"); }
    ;

expression: primary { printf(" Primary expression\n"); }
    | expression '+' expression { printf(" Addition\n"); }
    | expression '-' expression { printf(" Subtraction\n"); }
    | expression '*' expression { printf(" Multiplication\n"); }
    | expression '/' expression { printf(" Division\n"); }
    | expression '<' expression { printf(" Less than\n"); }
    | expression '>' expression { printf(" Greater than\n"); }
    | expression EQUAL expression { printf(" Equals\n"); }
    | expression NOT_EQUAL expression { printf(" Not equals\n"); }
    | expression AND expression { printf(" Logical AND\n"); }
    | expression OR expression { printf(" Logical OR\n"); }
    | expression '=' expression { printf(" Assignment\n"); }
    | '!' expression { printf(" Logical NOT\n"); }
    | '-' expression %prec UMINUS { printf(" Unary minus\n"); }
    | NEW type '[' expression ']' { printf(" New array\n"); }
    | NEW IDENTIFIER '(' ')' { printf(" New object: %s\n", $2); }
    | expression '?' '.' IDENTIFIER { printf(" Null-conditional access: %s\n", $4); }
    | expression '?' '[' expression ']' { printf(" Null-conditional index\n"); }
    ;

primary: IDENTIFIER { printf(" Identifier: %s\n", $1); }
    | INTEGER_LITERAL { printf(" Integer: %d\n", $1); }
    | STRING_LITERAL { printf(" String: %s\n", $1); }
    | CHAR_LITERAL { printf(" Char: %c\n", $1); }
    | BOOL_LITERAL_TRUE { printf(" Boolean: true\n"); }
    | BOOL_LITERAL_FALSE { printf(" Boolean: false\n"); }
    | THIS { printf(" This\n"); }
    | '(' expression ')' { printf(" Parenthesized expression\n"); }
    ;

argument_list: 
    | expression
    | argument_list ',' expression
    ;

expression_list: 
    | expression
    | expression_list ',' expression
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
        printf("Enter C# code (Ctrl+D to end):\n");
    }

    if (yyparse() == 0) {
        printf("=== Parsing completed successfully! ===\n");
    }

    if (yyin != stdin) fclose(yyin);
    return 0;
}