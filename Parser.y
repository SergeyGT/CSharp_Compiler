%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE* yyin;
void yyerror(const char *s);
%}
%union {
    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;
}

%token <int_value> INTEGER_LITERAL
%token <float_value> FLOAT_LITERAL
%token <double_value> DOUBLE_LITERAL
%token <double_value> DECIMAL_LITERAL
%token <string_value> STRING_LITERAL
%token <char_value> CHAR_LITERAL
%token <bool_value> BOOL_LITERAL_TRUE BOOL_LITERAL_FALSE
%token <string_value> IDENTIFIER

%token PLUSPLUS MINUSMINUS NULL_COALESCE NULL_SAFE_DOT NULL_SAFE_INDEX
%token AND OR EQUAL NOT_EQUAL LESS_EQUAL GREATER_EQUAL
%token PLUS_ASSIGNMENT MINUS_ASSIGNMENT
%token IF ELSE WHILE FOR RETURN BREAK CONTINUE
%token CLASS INTERFACE STATIC NEW THIS
%token PUBLIC PRIVATE PROTECTED INTERNAL PROTECTED_INTERNAL
%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE CHAR_TYPE STRING_TYPE VAR_TYPE VOID_TYPE DECIMAL_TYPE
%token NAMESPACE USING
%token FOREACH IN NULL_LITERAL

%token BOOL_KW FLOAT_KW DOUBLE_KW DECIMAL_KW INT_KW
%token NULL_KW TRUE_KW FALSE_KW
%token STRUCT ENUM
%token TILDE
%token INTERPOLATED_STRING_START INTERPOLATED_STRING_END
%token INTERPOLATED_STRING_TEXT INTERPOLATED_STRING_EXPR
%token PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVISION_ASSIGN
%token INCREMENT DECREMENT
%token LESS GREATER GREATER_OR_EQUAL LESS_OR_EQUAL
%token BITWISE_OR BITWISE_AND

%type <type_value> primitive_type method_return_type standard_type
%type <string_value> simple_identifier qualified_identifier

%nonassoc THEN
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%right '=' PLUS_ASSIGNMENT MINUS_ASSIGNMENT PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVISION_ASSIGN
%left OR AND
%left EQUAL NOT_EQUAL
%left '<' '>' LESS_EQUAL GREATER_EQUAL LESS_OR_EQUAL GREATER_OR_EQUAL
%left '+' '-'
%left '*' '/' '%'
%right '!' INCREMENT DECREMENT
%right UMINUS
%left '.' '[' ']' NULL_SAFE_DOT NULL_SAFE_INDEX
%left '('
%nonassoc FIELD

%start program

%%

program:
    /* empty */
    | program top_level_declaration
    ;

top_level_declaration:
      namespace_declaration
    | using_directive
    | type_declaration
    | field_declaration
    | method_declaration
    | constructor_declaration
    | destructor_decl
    ;

// ============================================================================
// NAMESPACE И USING
// ============================================================================

namespace_declaration:
    NAMESPACE qualified_identifier '{' namespace_body '}'
    ;

namespace_body:
    /* empty */
    | namespace_body namespace_body_element
    ;

namespace_body_element:
      using_directive
    | type_declaration
    | field_declaration
    | method_declaration
    | constructor_declaration
    | destructor_decl
    ;

using_directive:
      USING qualified_identifier ';'
    | USING IDENTIFIER '=' qualified_identifier ';'
    ;

// ============================================================================
// ОБЪЯВЛЕНИЯ ТИПОВ
// ============================================================================

type_declaration:
      class_declaration
    | interface_declaration
    | struct_decl
    | enum_decl
    ;

// ============================================================================
// ТИПЫ ДАННЫХ
// ============================================================================

standard_type: 
      FLOAT_KW     { $$ = 2; }
    | DOUBLE_KW    { $$ = 3; }
    | DECIMAL_KW   { $$ = 7; }
    | BOOL_KW      { $$ = 4; }
    | INT_KW       { $$ = 1; }
    ;	

primitive_type:
      INT_TYPE     { $$ = 1; }
    | FLOAT_TYPE   { $$ = 2; }
    | DOUBLE_TYPE  { $$ = 3; }
    | BOOL_TYPE    { $$ = 4; }
    | CHAR_TYPE    { $$ = 5; }
    | STRING_TYPE  { $$ = 6; }
    | DECIMAL_TYPE { $$ = 7; }
    | standard_type { $$ = $1; }
    ;
	

method_return_type:
      primitive_type { $$ = $1; }
    | VOID_TYPE      { $$ = 0; }
    | qualified_identifier { $$ = 100; }
    ;

// ============================================================================
// КЛАССЫ
// ============================================================================

class_declaration:
      CLASS IDENTIFIER class_parent '{' class_body '}'
    | visibility_modifier CLASS IDENTIFIER '{' class_body '}'
    ;

class_parent:
    /* empty */
    | ':' qualified_identifier
    ;

class_body:
    /* empty */
    | class_body class_member
    ;

class_member:
      member_modifiers field_declaration
    | member_modifiers method_declaration
    | member_modifiers constructor_declaration
    | destructor_decl
    | static_constructor_decl
    ;

// ============================================================================
// СТРУКТУРЫ
// ============================================================================

struct_decl: 
      STRUCT IDENTIFIER '{' struct_members_optional '}'
    | visibility_modifier STRUCT IDENTIFIER '{' struct_members_optional '}' 
    ;

struct_members: 
      field_declaration                              
    | method_declaration                              
    | static_constructor_decl                  
    | struct_members field_declaration                
    | struct_members method_declaration               
    | struct_members static_constructor_decl   
    ;

struct_members_optional: 
      /* empty */      
    | struct_members    
    ;

// ============================================================================
// ИНТЕРФЕЙСЫ
// ============================================================================

interface_declaration:
    INTERFACE IDENTIFIER '{' interface_body '}'
    ;

interface_body:
    /* empty */
    | interface_body interface_member
    ;

interface_member:
    method_return_type IDENTIFIER '(' parameter_list ')' ';'
    ;

// ============================================================================
// ПЕРЕЧИСЛЕНИЯ
// ============================================================================

enum_decl: 
      ENUM IDENTIFIER '{' enumerators '}'
    | visibility_modifier ENUM IDENTIFIER '{' enumerators '}' 
    ;

enumerators: 
      IDENTIFIER                     
    | enumerators ',' IDENTIFIER     
    ;

// ============================================================================
// МОДИФИКАТОРЫ ДОСТУПА
// ============================================================================

visibility_modifier: 
      PUBLIC               
    | PROTECTED            
    | PRIVATE              
    | INTERNAL             
    | PROTECTED_INTERNAL   
    ;

member_modifiers:
      visibility_modifier 
    | visibility_modifier STATIC
    ;

// ============================================================================
// ПОЛЯ И ПЕРЕМЕННЫЕ
// ============================================================================

field_declaration:
      typed_field_declaration
    | var_field_declaration
    | visibility_modifier primitive_type IDENTIFIER field_init ';'
    | visibility_modifier STATIC primitive_type IDENTIFIER field_init ';'
    ;

typed_field_declaration:
      primitive_type IDENTIFIER field_init ';'
    ;

field_init:
    /* empty */
    | '=' expression
    ;

var_field_declaration:
    VAR_TYPE IDENTIFIER '=' expression ';'
    ;

// ============================================================================
// МЕТОДЫ
// ============================================================================


// 
method_declaration:
      primitive_type IDENTIFIER '(' parameter_list ')' block
    | visibility_modifier primitive_type IDENTIFIER '(' parameter_list ')' block
	| VOID_TYPE IDENTIFIER '(' parameter_list ')' block
    ;

parameter_list:
    /* empty */
    | parameter_list_tail
    ;

parameter_list_tail:
      parameter
    | parameter_list_tail ',' parameter
    ;

parameter:
    primitive_type IDENTIFIER
    ;

// ============================================================================
// КОНСТРУКТОРЫ И ДЕСТРУКТОРЫ
// ============================================================================

constructor_declaration:
      IDENTIFIER '(' parameter_list ')' block
    | visibility_modifier IDENTIFIER '(' parameter_list ')' block
    ;

static_constructor_decl: 
      STATIC IDENTIFIER '(' ')' block 
    ;

destructor_decl: 
      TILDE IDENTIFIER '(' ')' block 
    ;

// ============================================================================
// БЛОКИ И УТВЕРЖДЕНИЯ
// ============================================================================

block: '{' statement_list '}' ;

statement_list:
    /* empty */
    | statement_list statement
    ;

statement:
      local_variable_declaration
    | expression ';'
    | if_statement
    | while_statement
    | for_statement
    | foreach_statement
    | return_statement
    | break_statement
    | continue_statement
    | block
    | ';'
    ;

local_variable_declaration:
      primitive_type IDENTIFIER local_init ';'
    | VAR_TYPE IDENTIFIER '=' expression ';'
    ;

local_init:
    /* empty */
    | '=' expression
    ;

if_statement:
      IF '(' expression ')' statement %prec LOWER_THAN_ELSE
    | IF '(' expression ')' statement ELSE statement
    ;

while_statement: WHILE '(' expression ')' statement ;

for_statement:
    FOR '(' for_init_opt ';' expression_opt ';' for_iter_opt ')' statement
    ;

for_init_opt:
    /* empty */
    | local_variable_declaration
    | expression_list
    ;

for_iter_opt:
    /* empty */
    | expression_list
    ;

expression_opt:
    /* empty */
    | expression
    ;

foreach_statement:
    FOREACH '(' foreach_type IDENTIFIER IN expression ')' statement
    ;

foreach_type:
      primitive_type
    | VAR_TYPE
    ;

return_statement:
      RETURN ';'
    | RETURN expression ';'
    ;

break_statement: BREAK ';' ;
continue_statement: CONTINUE ';' ;

expression: 
      assignment_expression
    ;

assignment_expression:
      conditional_expression
    | unary_expression assignment_op assignment_expression
    ;

assignment_op:
    '='
    | PLUS_ASSIGNMENT
    | MINUS_ASSIGNMENT
    | PLUS_ASSIGN
    | MINUS_ASSIGN
    | MULTIPLY_ASSIGN
    | DIVISION_ASSIGN
    ;

conditional_expression: logical_or_expression ;

logical_or_expression:
      logical_and_expression
    | logical_or_expression OR logical_and_expression
    ;

logical_and_expression:
      equality_expression
    | logical_and_expression AND equality_expression
    ;

equality_expression:
      relational_expression
    | equality_expression EQUAL relational_expression
    | equality_expression NOT_EQUAL relational_expression
    ;

relational_expression:
      additive_expression
    | relational_expression '<' additive_expression
    | relational_expression '>' additive_expression
    | relational_expression LESS_EQUAL additive_expression
    | relational_expression GREATER_EQUAL additive_expression
    | relational_expression LESS_OR_EQUAL additive_expression
    | relational_expression GREATER_OR_EQUAL additive_expression
    ;

additive_expression:
      multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

multiplicative_expression:
      unary_expression
    | multiplicative_expression '*' unary_expression
    | multiplicative_expression '/' unary_expression
    | multiplicative_expression '%' unary_expression
    ;

unary_expression:
      postfix_expression
    | '-' unary_expression %prec UMINUS
    | '!' unary_expression
    | INCREMENT unary_expression
    | DECREMENT unary_expression
    ;

postfix_expression:
      primary_expression
    | postfix_expression '.' IDENTIFIER
    | postfix_expression '(' argument_list ')'
    | postfix_expression PLUSPLUS
    | postfix_expression MINUSMINUS
    | postfix_expression NULL_SAFE_DOT IDENTIFIER
    | postfix_expression NULL_SAFE_INDEX expression ']'
    | postfix_expression '[' expression ']'
    ;

primary_expression:
      IDENTIFIER
    | INTEGER_LITERAL 
    | FLOAT_LITERAL 
    | DOUBLE_LITERAL 
    | DECIMAL_LITERAL
    | STRING_LITERAL 
    | CHAR_LITERAL
    | BOOL_LITERAL_TRUE 
    | BOOL_LITERAL_FALSE
    | TRUE_KW
    | FALSE_KW
    | NULL_LITERAL
    | NULL_KW
    | THIS 
    | '(' expression ')'
    | interpolated_string
    ;

argument_list:
    /* empty */
    | expression_list
    ;

expression_list:
      expression
    | expression_list ',' expression
    ;

// ============================================================================
// ИНТЕРПОЛИРОВАННЫЕ СТРОКИ
// ============================================================================

interpolated_string: 
      INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END 
    ;

interpolated_string_content: 
      /* empty */                           
    | INTERPOLATED_STRING_TEXT interpolated_string_content 
    | INTERPOLATED_STRING_EXPR expression interpolated_string_content 
    ;

// ============================================================================
// IDENTIFIERS
// ============================================================================

qualified_identifier:
      simple_identifier
    | qualified_identifier '.' simple_identifier
    {
        char* temp = malloc(strlen($1) + strlen($3) + 2);
        sprintf(temp, "%s.%s", $1, $3);
        $$ = temp;
    }
    ;

simple_identifier: IDENTIFIER { $$ = $1; } ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("fopen");
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Enter C# code (Ctrl+D to end):\n");
        fflush(stdout);
    }
    
    int result = yyparse();
    
    if (result == 0) {
        printf("=== Parsing completed successfully! ===\n");
    } else {
        printf("=== Parsing failed with errors ===\n");
    }

    if (yyin && yyin != stdin) fclose(yyin);
    return result;
}