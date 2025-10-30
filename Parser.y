%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern FILE* yyin;
extern int yylineno;
extern char* yytext;

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d near '%s': %s\n", yylineno, yytext, s);
    fprintf(stderr, "DEBUG PARSER: Current token: %s\n", yytext);
}
%}

%debug

%union {
    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;
}

// Literals
%token <int_value> INTEGER_LITERAL
%token <float_value> FLOAT_LITERAL  
%token <double_value> DOUBLE_LITERAL
%token <double_value> DECIMAL_LITERAL
%token <string_value> STRING_LITERAL
%token <char_value> CHAR_LITERAL
%token <bool_value> BOOL_LITERAL_TRUE BOOL_LITERAL_FALSE
%token <string_value> IDENTIFIER

%type <type_value> type return_type

// Operators
%token PLUSPLUS MINUSMINUS 
%token OR_ASSIGNMENT NULL_COALESCE SCOPE
%token AND OR EQUAL NOT_EQUAL LESS_EQUAL GREATER_EQUAL
%token PLUS_ASSIGNMENT MINUS_ASSIGNMENT MUL_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT

// Keywords
%token IF ELSE WHILE FOR RETURN BREAK CONTINUE DO
%token CLASS STRUCT ENUM INTERFACE 
%token PUBLIC PRIVATE INTERNAL PROTECTED 
%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE CHAR_TYPE STRING_TYPE VAR_TYPE VOID_TYPE DECIMAL_TYPE
%token NEW THIS
%token OUT REF
%token NAMESPACE USING 
%token ABSTRACT STATIC SEALED VIRTUAL OVERRIDE BASE
%token SWITCH CASE DEFAULT GOTO
%token NULL_LITERAL CONSOLE_METHOD OPERATOR

// Additional tokens from both branches
%token FOREACH IN
%token CONSOLE_WRITELINE CONSOLE_WRITE CONSOLE_READLINE CONSOLE_READ

// Precedence
%nonassoc LOWEST
%nonassoc THEN
%nonassoc ELSE
%right '=' PLUS_ASSIGNMENT MINUS_ASSIGNMENT MUL_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT OR_ASSIGNMENT
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left '<' '>' LESS_EQUAL GREATER_EQUAL
%left '+' '-'
%left '*' '/' '%'
%left '!' UMINUS
%left '.' '[' ']'
%nonassoc '(' ')' '{' '}' ',' ';' ':'
%left NULL_COALESCE
%left SCOPE

%start program

%%

program: 
    | program top_level_declaration
    ;

top_level_declaration:
    namespace_declaration
    | using_directive  
    | type_declaration
    | field_declaration
    | method_declaration
    | statement
    ;

namespace_declaration: 
    NAMESPACE IDENTIFIER '{' namespace_body '}' 
    { printf("Namespace: %s\n", $2); }
    ;

namespace_body:
    | namespace_body using_directive
    | namespace_body type_declaration
    ;

type_declaration:
    class_declaration
    | interface_declaration
    ;

using_directive: 
    USING IDENTIFIER ';' 
    { printf("Using: %s\n", $2); }
    | USING IDENTIFIER '=' IDENTIFIER ';' 
    { printf("Using alias: %s = %s\n", $2, $4); }
    ;

// Class declarations
class_declaration: 
    CLASS IDENTIFIER '{' class_body '}' 
    { printf("Class: %s\n", $2); }
    ;

class_body:
    | class_body class_member
    ;

class_member: 
    field_declaration
    | method_declaration  
    | constructor_declaration
    | static_member_declaration
    ;

static_member_declaration:
    STATIC field_declaration
    { printf("Static field\n"); }
    | STATIC method_declaration
    { printf("Static method\n"); }
    ;

constructor_declaration:
    access_modifier IDENTIFIER '(' ')' block
    { printf("Constructor: %s\n", $2); }
    | access_modifier IDENTIFIER '(' parameter_list ')' block
    { printf("Constructor with params: %s\n", $2); }
    ;

access_modifier:
    /* empty */ 
    { printf("Default access\n"); }
    | PUBLIC 
    { printf("Public\n"); }
    | PRIVATE 
    { printf("Private\n"); }
    | PROTECTED 
    { printf("Protected\n"); }
    | INTERNAL 
    { printf("Internal\n"); }
    ;

field_declaration: 
    access_modifier type IDENTIFIER ';' 
    { printf("Field: %s\n", $3); }
    | access_modifier type IDENTIFIER '=' expression ';'
    { printf("Initialized field: %s\n", $3); }
    | access_modifier VAR_TYPE IDENTIFIER '=' expression ';'
    { printf("Var field: %s\n", $3); }
    ;

type:
    INT_TYPE { printf("int "); $$ = 1; }
    | FLOAT_TYPE { printf("float "); $$ = 2; }
    | DOUBLE_TYPE { printf("double "); $$ = 3; }
    | BOOL_TYPE { printf("bool "); $$ = 4; }
    | CHAR_TYPE { printf("char "); $$ = 5; }
    | STRING_TYPE { printf("string "); $$ = 6; }
    | DECIMAL_TYPE { printf("decimal "); $$ = 7; }
    ;

return_type:
    type { $$ = $1; }
    | VOID_TYPE { printf("void "); $$ = 0; }
    ;

// Method declarations  
method_declaration: 
    return_type IDENTIFIER '(' ')' block
    { printf("Method: %s\n", $2); }
    | return_type IDENTIFIER '(' parameter_list ')' block
    { printf("Method with params: %s\n", $2); }
    | access_modifier STATIC return_type IDENTIFIER '(' parameter_list ')' block
    { printf("Static method: %s\n", $4); }
    ;

parameter_list:
    parameter
    | parameter_list ',' parameter
    ;

parameter:
    type IDENTIFIER 
    { printf("Parameter: %s\n", $2); }
    ;

// Interface declarations
interface_declaration: 
    INTERFACE IDENTIFIER '{' interface_body '}' ';'
    { printf("Interface: %s\n", $2); }
    ;

interface_body:
    | interface_body interface_member
    ;

interface_member:
    return_type IDENTIFIER '(' parameter_list ')' ';'
    { printf("Interface method: %s\n", $2); }
    ;

// Statements
block: 
    '{' statement_list '}' 
    { printf("Block\n"); }
    ;

statement_list:
    | statement_list statement
    ;

statement: 
    expression_statement
    | local_variable_declaration
    | if_statement 
    | while_statement 
    | for_statement
    | foreach_statement
    | return_statement 
    | break_statement
    | continue_statement
    | block 
    ;

expression_statement:
    expression ';' 
    { printf("Expression statement\n"); }
    ;

local_variable_declaration:
    type IDENTIFIER ';'
    { printf("Local variable: %s\n", $2); }
    | type IDENTIFIER '=' expression ';'
    { printf("Initialized local variable: %s\n", $2); }
    | VAR_TYPE IDENTIFIER '=' expression ';'
    { printf("Var local variable: %s\n", $2); }
    ;

if_statement: 
    IF '(' expression ')' statement %prec THEN
    { printf("If\n"); }
    | IF '(' expression ')' statement ELSE statement 
    { printf("If-else\n"); }
    ;

while_statement: 
    WHILE '(' expression ')' statement 
    { printf("While\n"); }
    ;

for_statement:
    FOR '(' for_initializer ';' expression ';' for_iterator ')' statement 
    { printf("For statement\n"); }
    ;

foreach_statement:
    FOREACH '(' type IDENTIFIER IN expression ')' statement 
    { printf("Foreach statement\n"); }
    | FOREACH '(' VAR_TYPE IDENTIFIER IN expression ')' statement 
    { printf("Foreach statement with var\n"); }
    ;

return_statement: 
    RETURN ';' 
    { printf("Return void\n"); }
    | RETURN expression ';' 
    { printf("Return value\n"); }
    ;

break_statement:
    BREAK ';' 
    { printf("Break;\n"); }
    ;

continue_statement:
    CONTINUE ';' 
    { printf("Continue;\n"); }
    ;

for_initializer:
    | /* empty */ 
    { printf("No for initializer "); }
    | local_variable_declaration_no_semicolon
    | expression
    ;

for_iterator:
    | expression
    | /* empty */ 
    { printf("No for iterator "); }
    ;

local_variable_declaration_no_semicolon:
    type IDENTIFIER '=' expression 
    { printf("For loop variable: %s ", $2); }
    | VAR_TYPE IDENTIFIER '=' expression 
    { printf("For loop var variable: %s ", $2); }
    ;

// Expressions
expression: 
    assignment_expression
    ;

assignment_expression:
    conditional_expression
    | IDENTIFIER '=' expression
    { printf("Assignment\n"); }
    | IDENTIFIER PLUS_ASSIGNMENT expression
    { printf("Plus assignment\n"); }
    | IDENTIFIER MINUS_ASSIGNMENT expression
    { printf("Minus assignment\n"); }
    ;

conditional_expression:
    logical_or_expression
    ;

logical_or_expression:
    logical_and_expression
    | logical_or_expression OR logical_and_expression
    { printf("Logical OR\n"); }
    ;

logical_and_expression:
    equality_expression
    | logical_and_expression AND equality_expression
    { printf("Logical AND\n"); }
    ;

equality_expression:
    relational_expression
    | equality_expression EQUAL relational_expression
    { printf("Equals\n"); }
    | equality_expression NOT_EQUAL relational_expression
    { printf("Not equals\n"); }
    ;

relational_expression:
    additive_expression
    | relational_expression '<' additive_expression
    { printf("Less than\n"); }
    | relational_expression '>' additive_expression
    { printf("Greater than\n"); }
    | relational_expression LESS_EQUAL additive_expression
    { printf("Less or equal\n"); }
    | relational_expression GREATER_EQUAL additive_expression
    { printf("Greater or equal\n"); }
    ;

additive_expression:
    multiplicative_expression
    | additive_expression '+' multiplicative_expression
    { printf("Addition\n"); }
    | additive_expression '-' multiplicative_expression
    { printf("Subtraction\n"); }
    ;

multiplicative_expression:
    unary_expression
    | multiplicative_expression '*' unary_expression
    { printf("Multiplication\n"); }
    | multiplicative_expression '/' unary_expression
    { printf("Division\n"); }
    | multiplicative_expression '%' unary_expression
    { printf("Modulo\n"); }
    ;

unary_expression:
    postfix_expression
    | '-' unary_expression %prec UMINUS
    { printf("Unary minus\n"); }
    | '!' unary_expression
    { printf("Logical NOT\n"); }
    ;

postfix_expression:
    primary_expression
    | member_expression
    | postfix_expression '.' IDENTIFIER
    { printf("Member access: %s\n", $3); }
    | postfix_expression '(' argument_list ')'
    { printf("Method call\n"); }
    | postfix_expression PLUSPLUS
    { printf("Post-increment\n"); }
    | postfix_expression MINUSMINUS
    { printf("Post-decrement\n"); }
    ;

member_expression:
    IDENTIFIER '.' IDENTIFIER
    { printf("Member access: %s.%s\n", $1, $3); }
    | member_expression '.' IDENTIFIER
    { printf("Member access: %s\n", $3); }
    | member_expression '(' argument_list ')'
    { printf("Method call\n"); }
    ;

primary_expression:
    IDENTIFIER 
    { printf("Identifier: %s\n", $1); }
    | INTEGER_LITERAL 
    { printf("Integer: %d\n", $1); }
    | FLOAT_LITERAL 
    { printf("Float: %f\n", $1); }
    | DOUBLE_LITERAL 
    { printf("Double: %f\n", $1); }
    | DECIMAL_LITERAL 
    { printf("Decimal: %f\n", $1); }
    | STRING_LITERAL 
    { printf("String: %s\n", $1); }
    | CHAR_LITERAL 
    { printf("Char: %c\n", $1); }
    | BOOL_LITERAL_TRUE 
    { printf("Boolean: true\n"); }
    | BOOL_LITERAL_FALSE 
    { printf("Boolean: false\n"); }
    | THIS 
    { printf("This\n"); }
    | NULL_LITERAL
    { printf("Null literal\n"); }
    | '(' expression ')'
    { printf("Parenthesized expression\n"); }
    ;

argument_list:
    /* empty */
    { printf("Empty arguments\n"); }
    | expression_list
    ;

expression_list:
    expression
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