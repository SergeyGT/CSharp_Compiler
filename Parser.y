%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern FILE* yyin;

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
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
}

%token <int_value> INTEGER_LITERAL
%token <float_value> FLOAT_LITERAL  
%token <double_value> DOUBLE_LITERAL
%token <string_value> STRING_LITERAL
%token <char_value> CHAR_LITERAL
%token <bool_value> BOOL_LITERAL_TRUE BOOL_LITERAL_FALSE
%token <string_value> IDENTIFIER

%token IF ELSE WHILE FOR FOREACH DO SWITCH CASE DEFAULT BREAK CONTINUE RETURN GOTO
%token CLASS STRUCT INTERFACE ENUM PUBLIC PRIVATE PROTECTED INTERNAL STATIC 
%token VIRTUAL OVERRIDE ABSTRACT SEALED NEW THIS BASE
%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE CHAR_TYPE STRING_TYPE DECIMAL_TYPE VOID VAR
%token AND OR EQUAL NOT_EQUAL LESS_EQUAL GREATER_EQUAL
%token NAMESPACE USING
%token CONSOLE_WRITELINE CONSOLE_WRITE CONSOLE_READLINE CONSOLE_READ
%token PLUS_ASSIGNMENT MINUS_ASSIGNMENT MUL_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT OR_ASSIGNMENT
%token NULL_COALESCING NAMESPACE_ACCESS
%token NULL_LITERAL
%token INCREMENT DECREMENT
%token GET SET IN

%nonassoc LOWEST
%right '=' PLUS_ASSIGNMENT MINUS_ASSIGNMENT MUL_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT OR_ASSIGNMENT
%left INCREMENT DECREMENT
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left '<' '>' LESS_EQUAL GREATER_EQUAL
%left '+' '-'
%left '*' '/' '%'
%left '!' UMINUS
%left '.' '[' ']'
%nonassoc '(' ')' '{' '}' ',' ';' ':'
%left '?' NULL_COALESCING
%left NAMESPACE_ACCESS

%start program

%%

program: 
    | program using_directive
    | program namespace_declaration
    | program class_declaration 
    | program statement 
    ;

using_directive: USING IDENTIFIER ';' { printf(" Using directive: %s\n", $2); }
    | USING IDENTIFIER '=' IDENTIFIER ';' { printf(" Using alias: %s = %s\n", $2, $4); }
    ;

namespace_declaration: NAMESPACE IDENTIFIER '{' program '}' 
    { printf(" Namespace: %s\n", $2); }
    ;

class_declaration: 
    CLASS IDENTIFIER '{' class_members '}' ';'
    { printf(" Class: %s\n", $2); }
    | CLASS IDENTIFIER '{' class_members '}'
    { printf(" Class: %s\n", $2); }
    | CLASS IDENTIFIER ':' IDENTIFIER '{' class_members '}' ';'
    { printf(" Class %s inherits from %s\n", $2, $4); }
    | CLASS IDENTIFIER ':' IDENTIFIER '{' class_members '}'   
    { printf(" Class %s inherits from %s\n", $2, $4); }
    ;

class_members:
    | class_members class_member
    ;

class_member: 
    field_declaration 
    | method_declaration 
    | property_declaration
    | constructor_declaration
    ;

field_declaration: 
    access_modifier type IDENTIFIER ';'
    { printf(" Field: %s\n", $3); }
    | access_modifier type IDENTIFIER '=' expression ';'
    { printf(" Field with init: %s\n", $3); }
    ;

access_modifier: 
    PUBLIC { printf(" Public "); }
    | PRIVATE { printf(" Private "); }
    | PROTECTED { printf(" Protected "); }
    | INTERNAL { printf(" Internal "); }
    | /* empty */ { printf(" Default "); }
    ;

type: 
    simple_type
    | simple_type '[' ']' { printf(" array type\n"); }
    | simple_type '[' ',' ']' { printf(" multidimensional array type\n"); }
    | IDENTIFIER { printf(" user type\n"); }
    ;

simple_type:
    INT_TYPE { printf(" Type: int "); }
    | FLOAT_TYPE { printf(" Type: float "); }
    | DOUBLE_TYPE { printf(" Type: double "); }
    | BOOL_TYPE { printf(" Type: bool "); }
    | CHAR_TYPE { printf(" Type: char "); }
    | STRING_TYPE { printf(" Type: string "); }
    | DECIMAL_TYPE { printf(" Type: decimal "); }
    | VOID { printf(" Type: void "); }
    | VAR { printf(" Type: var "); }
    ;

	

method_declaration: 
    access_modifier type IDENTIFIER '(' parameters ')' block
    { printf(" Method: %s\n", $3); }
    | access_modifier VOID IDENTIFIER '(' parameters ')' block
    { printf(" Method: void %s\n", $3); }
    | access_modifier VIRTUAL type IDENTIFIER '(' parameters ')' block
    { printf(" Virtual method: %s\n", $4); }
    | access_modifier VIRTUAL VOID IDENTIFIER '(' parameters ')' block
    { printf(" Virtual void method: %s\n", $4); }
    | access_modifier OVERRIDE type IDENTIFIER '(' parameters ')' block
    { printf(" Override method: %s\n", $4); }
    | access_modifier OVERRIDE VOID IDENTIFIER '(' parameters ')' block
    { printf(" Override void method: %s\n", $4); }
    | access_modifier STATIC type IDENTIFIER '(' parameters ')' block
    { printf(" Static method: %s\n", $4); }
    | access_modifier STATIC VOID IDENTIFIER '(' parameters ')' block
    { printf(" Static void method: %s\n", $4); }
    ;


method_modifier:
    VIRTUAL { printf(" Virtual "); }
    | OVERRIDE { printf(" Override "); }
    | STATIC { printf(" Static "); }
    ;

constructor_declaration:
    access_modifier IDENTIFIER '(' parameters ')' block
    { printf(" Constructor: %s\n", $2); }
    ;

property_declaration:
    access_modifier type IDENTIFIER '{' get_set '}' ';'
    { printf(" Property: %s\n", $3); }
    ;

get_set:
    GET ';' SET ';' { printf(" Get and set\n"); }
    | GET ';' { printf(" Get only\n"); }
    | SET ';' { printf(" Set only\n"); }
    ;

parameters:
    | parameter_list
    ;

parameter_list:
    parameter
    | parameter_list ',' parameter
    ;

parameter:
    type IDENTIFIER { printf(" Parameter\n"); }
    ;

block: '{' statements '}' { printf(" Block\n"); }
    ;

statements:
    | statements statement
    ;

statement: 
    expression ';' { printf(" Expression statement\n"); }
    | if_statement 
    | while_statement 
    | for_statement
    | foreach_statement
    | do_while_statement
    | switch_statement
    | return_statement 
    | break_statement
    | continue_statement
    | console_statement
    | variable_declaration
    | block 
	| ';' { printf(" Empty statement\n"); }
    ;

if_statement: 
    IF '(' expression ')' statement { printf(" If statement\n"); }
    | IF '(' expression ')' statement ELSE statement { printf(" If-else statement\n"); }
    ;

while_statement: 
    WHILE '(' expression ')' statement { printf(" While statement\n"); }
    ;

for_statement:
    FOR '(' for_initializer ';' expression ';' for_iterator ')' statement
    { printf(" For statement\n"); }
    ;

foreach_statement:
    FOREACH '(' type IDENTIFIER IN expression ')' statement
    { printf(" Foreach statement\n"); }
    | FOREACH '(' VAR IDENTIFIER IN expression ')' statement  
    { printf(" Foreach statement with var\n"); }
    ;

do_while_statement:
    DO statement WHILE '(' expression ')' ';'
    { printf(" Do-while statement\n"); }
    ;

switch_statement:
    SWITCH '(' expression ')' '{' case_entries '}'
    { printf(" Switch statement\n"); }
    ;

case_entries:
    | case_entries case_entry
    ;

case_entry:
    CASE expression ':' statements { printf(" Case entry\n"); }
    | DEFAULT ':' statements { printf(" Default entry\n"); }
    ;


case_label:
    CASE expression ':' { printf(" Case label\n"); }
    | DEFAULT ':' { printf(" Default label\n"); }
    ;

case_statements:
    | case_statements case_label statements
    ;

for_initializer:
    | variable_declaration_no_semicolon
    | expression
    ;
	
for_iterator:
    | expression
    ;
	
variable_declaration_no_semicolon:
    type IDENTIFIER '=' expression { printf(" For loop variable: %s\n", $2); }
    ;

return_statement: 
    RETURN ';' { printf(" Return;\n"); }
    | RETURN expression ';' { printf(" Return with value\n"); }
    ;

break_statement:
    BREAK ';' { printf(" Break;\n"); }
    ;

continue_statement:
    CONTINUE ';' { printf(" Continue;\n"); }
    ;

console_statement:
    CONSOLE_WRITELINE '(' expression ')' ';' { printf(" Console.WriteLine\n"); }
    | CONSOLE_WRITE '(' expression ')' ';' { printf(" Console.Write\n"); }
    | CONSOLE_READLINE '(' ')' ';' { printf(" Console.ReadLine\n"); }
    | CONSOLE_READ '(' ')' ';' { printf(" Console.Read\n"); }
    ;

variable_declaration:
    type IDENTIFIER ';' { printf(" Variable: %s\n", $2); }
    | type IDENTIFIER '=' expression ';' { printf(" Variable with init: %s\n", $2); }
    | type IDENTIFIER '=' array_initializer ';' { printf(" Array variable with initializer: %s\n", $2); }
    ;


array_initializer:
    '{' '}' { printf(" Empty array initializer\n"); }
    | '{' expression_list '}' { printf(" Array initializer\n"); }
    ;

expression: 
    primary 
    | expression '+' expression { printf(" Addition\n"); }
    | expression '-' expression { printf(" Subtraction\n"); }
    | expression '*' expression { printf(" Multiplication\n"); }
    | expression '/' expression { printf(" Division\n"); }
    | expression '%' expression { printf(" Modulo\n"); }
    | expression '<' expression { printf(" Less than\n"); }
    | expression '>' expression { printf(" Greater than\n"); }
    | expression EQUAL expression { printf(" Equals\n"); }
    | expression NOT_EQUAL expression { printf(" Not equals\n"); }
    | expression LESS_EQUAL expression { printf(" Less or equal\n"); }
    | expression GREATER_EQUAL expression { printf(" Greater or equal\n"); }
    | expression AND expression { printf(" Logical AND\n"); }
    | expression OR expression { printf(" Logical OR\n"); }
    | expression '=' expression { printf(" Assignment\n"); }
    | expression PLUS_ASSIGNMENT expression { printf(" Plus assignment\n"); }
    | expression MINUS_ASSIGNMENT expression { printf(" Minus assignment\n"); }
    | expression MUL_ASSIGNMENT expression { printf(" Multiply assignment\n"); }
    | expression DIV_ASSIGNMENT expression { printf(" Divide assignment\n"); }
    | '!' expression { printf(" Logical NOT\n"); }
    | '-' expression %prec UMINUS { printf(" Unary minus\n"); }
	| INCREMENT expression { printf(" Pre-increment\n"); }           
    | DECREMENT expression { printf(" Pre-decrement\n"); }          
    | expression INCREMENT { printf(" Post-increment\n"); }          
    | expression DECREMENT { printf(" Post-decrement\n"); }   
    | NEW simple_type '[' expression ']' { printf(" New 1D array\n"); }
    | NEW simple_type '[' expression ',' expression ']' { printf(" New 2D array\n"); }
    | NEW simple_type '[' ']' '[' expression ']' { printf(" New jagged array\n"); }
    | NEW IDENTIFIER '(' argument_list ')' { printf(" New object: %s\n", $2); }
    | expression '[' expression ']' { printf(" 1D array access\n"); }
    | expression '[' expression ',' expression ']' { printf(" 2D array access\n"); }
    | expression '[' expression ']' '[' expression ']' { printf(" Jagged array access\n"); }
    | expression '.' IDENTIFIER { printf(" Member access\n"); }
    | expression '.' IDENTIFIER '(' argument_list ')' { printf(" Method call\n"); }
    | BASE '.' IDENTIFIER '(' argument_list ')' { printf(" Base method call\n"); }
    | NEW simple_type '[' ']' array_initializer { printf(" New array with initializer\n"); }
    | NEW simple_type '[' expression ']' array_initializer { printf(" New array with size and initializer\n"); }
    ;

primary: 
    IDENTIFIER { printf(" Identifier: %s\n", $1); }
    | INTEGER_LITERAL { printf(" Integer: %d\n", $1); }
    | FLOAT_LITERAL { printf(" Float: %f\n", $1); }
    | DOUBLE_LITERAL { printf(" Double: %f\n", $1); }
    | STRING_LITERAL { printf(" String: %s\n", $1); }
    | CHAR_LITERAL { printf(" Char: %c\n", $1); }
    | BOOL_LITERAL_TRUE { printf(" Boolean: true\n"); }
    | BOOL_LITERAL_FALSE { printf(" Boolean: false\n"); }
    | NULL_LITERAL { printf(" Null literal\n"); }
    | THIS { printf(" This\n"); }
    | BASE { printf(" Base\n"); }
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