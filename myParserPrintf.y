%{
#include <stdio.h>
#include <stdlib.h>

// Определения enum
enum StandardType { ST_FLOAT, ST_DOUBLE, ST_DECIMAL, ST_BOOL };
enum VisibilityModifier { VM_PUBLIC, VM_PROTECTED, VM_PRIVATE, VM_INTERNAL, VM_PROTECTED_INTERNAL };


extern int yylex(void);
extern FILE* yyin;

void yyerror(const char* s) {
	 fprintf(stderr, "Syntax Error: %s\n", s);
}

// Простые определения структур (заглушки)
typedef struct { int dummy; } AccessExpr;
typedef struct { int dummy; } ExprNode;
typedef struct { int dummy; } ExprSeqNode;
typedef struct { int dummy; } TypeNode;
typedef struct { int dummy; } VarDeclNode;
typedef struct { int dummy; } StmtSeqNode;
typedef struct { int dummy; } StmtNode;
typedef struct { int dummy; } FieldDeclNode;
typedef struct { int dummy; } MethodArguments;
typedef struct { int dummy; } MethodDeclNode;
typedef struct { int dummy; } ConstructorDeclNode;
typedef struct { int dummy; } DestructorDeclNode;
typedef struct { int dummy; } IdentifierList;
typedef struct { int dummy; } EnumDeclNode;
typedef struct { int dummy; } InterpolatedStringNode;
typedef struct { int dummy; } StructMembersNode;
typedef struct { int dummy; } StructDeclNode;
typedef struct { int dummy; } ClassNameNode;
typedef struct { int dummy; } MethodNameNode;

%}

%union {
    int _integer;
    char* _string;
    char* _identifier;
    double _floatingPoint;
    float _floatValue;
    char _character;
	int _bool;
	
	int bool_value;
    int int_value; 
    double double_value;

    struct AccessExpr* _accessExpr;
    struct ExprNode* _expr;
    struct ExprSeqNode* _exprSeq;
    
    enum StandardType _standardType;
    struct TypeNode* _type;
    
    struct VarDeclNode* _varDecl;
    struct StmtSeqNode* _stmtSeq;
    struct StmtNode* _stmt;
    
    enum VisibilityModifier _visibiltyModifier;
    struct FieldDeclNode* _fieldDecl;
    struct MethodArguments* _methodArguments;
    struct MethodDeclNode* _methodDecl;
    struct ConstructorDeclNode* _constructorDecl;
    struct DestructorDeclNode* _destructorDecl;

    struct IdentifierList* _enumerators;
    struct EnumDeclNode* _enumDecl;
    
    struct InterpolatedStringNode* _interpolatedString;
    struct StructMembersNode* _structMembers;
    struct StructDeclNode* _structDecl;
    
    struct ClassNameNode* _className;
    struct MethodNameNode* _methodName;
}

%type <_className> class_name
%type <_methodName> method_name
%type <_accessExpr> access_expr
%type <_expr> expr
%type <_exprSeq> expr_seq expr_seq_optional
%type <_standardType> standard_type
%type <_type> type
%type <_varDecl> var_decl
%type <_stmtSeq> stmt_seq stmt_seq_optional
%type <_stmt> stmt
%type <_visibiltyModifier> visibility_modifier
%type <_fieldDecl> field_decl
%type <_methodArguments> method_arguments method_arguments_optional
%type <_methodDecl> method_decl
%type <_constructorDecl> constructor_decl static_constructor_decl
%type <_destructorDecl> destructor_decl
%type <_structDecl> struct_decl
%type <_structMembers> struct_members struct_members_optional
%type <_enumerators> enumerators
%type <_enumDecl> enum_decl
%type <_interpolatedString> interpolated_string interpolated_string_content

%token <_identifier> IDENTIFIER
%token <_integer> INTEGER
%token <_floatingPoint> FLOATING_POINT
%token <_floatValue> FLOAT_LITERAL
%token <_string> STRING
%token <_character> CHARACTER
%token <_floatingPoint> DECIMAL_LITERAL
%token BOOL_KW FLOAT_KW DOUBLE_KW DECIMAL_KW
%token NULL_KW TRUE_KW FALSE_KW
%token PUBLIC PROTECTED PRIVATE INTERNAL PROTECTED_INTERNAL STATIC
%token STRUCT ENUM
%token TILDE
%token INTERPOLATED_STRING_START INTERPOLATED_STRING_END
%token INTERPOLATED_STRING_TEXT INTERPOLATED_STRING_EXPR

%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE CHAR_TYPE STRING_TYPE
%token VOID CLASS NEW THIS NAMESPACE
%token IF ELSE WHILE FOR RETURN BREAK CONTINUE
%token CHAR_LITERAL BOOL_LITERAL_TRUE BOOL_LITERAL_FALSE INTEGER_LITERAL DOUBLE_LITERAL
%token LESS_EQUAL GREATER_EQUAL

%token PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVISION_ASSIGN
%token INCREMENT DECREMENT
%token LESS GREATER EQUAL NOT_EQUAL GREATER_OR_EQUAL LESS_OR_EQUAL
%token OR AND BITWISE_OR BITWISE_AND

%right '=' PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVISION_ASSIGN
%left OR AND BITWISE_OR BITWISE_AND
%left '<' '>' EQUAL NOT_EQUAL LESS_OR_EQUAL GREATER_OR_EQUAL
%left '+' '-'
%left '*' '/'
%right '!' INCREMENT DECREMENT
%right UNARY_MINUS UNARY_PLUS
%left '.' ']' '['
%nonassoc '(' ')'

%start program

%%

program: program_element
       | program program_element
;

program_element: stmt                			{ printf("program_element -> stmt\n"); }
			   | struct_decl                    { printf("program_element -> struct_decl\n"); }
               | enum_decl                      { printf("program_element -> enum_decl\n"); }
               | method_decl                    { printf("program_element -> method_decl\n"); }
               | constructor_decl               { printf("program_element -> constructor_decl\n"); }
               | destructor_decl                { printf("program_element -> destructor_decl\n"); }
               | field_decl                     { printf("program_element -> field_decl\n"); }
;

// ============================================================================
// 1) ЧИСЛА С ПЛАВАЮЩЕЙ ТОЧКОЙ И ОПЕРАЦИИ
// ============================================================================

standard_type: FLOAT_KW     { printf("standard_type -> FLOAT_KW\n"); }
			 | DOUBLE_KW    { printf("standard_type -> DOUBLE_KW\n"); }
			 | DECIMAL_KW   { printf("standard_type -> DECIMAL_KW\n"); }
			 | BOOL_KW      { printf("standard_type -> BOOL_KW\n"); }
;

access_expr: '(' expr ')'                                        { printf("access_expr -> ( expr )\n"); }
           | INTEGER                                             { printf("access_expr -> INTEGER\n"); }
           | FLOATING_POINT                                      { printf("access_expr -> FLOATING_POINT\n"); }
           | FLOAT_LITERAL                                       { printf("access_expr -> FLOAT_LITERAL\n"); }
           | DECIMAL_LITERAL                                     { printf("access_expr -> DECIMAL_LITERAL\n"); }
           | TRUE_KW                                             { printf("access_expr -> TRUE_KW\n"); }
           | FALSE_KW                                            { printf("access_expr -> FALSE_KW\n"); }
           | IDENTIFIER                                          { printf("access_expr -> IDENTIFIER\n"); }
           | access_expr '.' IDENTIFIER                          { printf("access_expr -> access_expr . IDENTIFIER\n"); }
           | access_expr '.' IDENTIFIER '(' expr_seq_optional ')'{ printf("access_expr -> access_expr . IDENTIFIER ( expr_seq_optional )\n"); }
           | interpolated_string                                 { printf("access_expr -> interpolated_string\n"); }
;

expr_seq: expr                      { printf("expr_seq -> expr\n"); }
        | expr_seq ',' expr         { printf("expr_seq -> expr_seq , expr\n"); }
;

expr_seq_optional: /* empty */               { printf("expr_seq_optional -> empty\n"); }
				 | expr_seq                  { printf("expr_seq_optional -> expr_seq\n"); }
;

expr: expr '+' expr                       { printf("expr + expr\n"); }
    | expr '-' expr                       { printf("expr - expr\n"); }
    | expr '*' expr                       { printf("expr * expr\n"); }
    | expr '/' expr                       { printf("expr / expr\n"); }
    | expr '=' expr                       { printf("expr = expr\n"); }
    | expr PLUS_ASSIGN expr               { printf("expr PLUS_ASSIGN expr\n"); }
    | expr MINUS_ASSIGN expr              { printf("expr MINUS_ASSIGN expr\n"); }
    | expr MULTIPLY_ASSIGN expr           { printf("expr MULTIPLY_ASSIGN expr\n"); }
    | expr DIVISION_ASSIGN expr           { printf("expr DIVISION_ASSIGN expr\n"); }
    | expr '<' expr                       { printf("expr < expr\n"); }
    | expr '>' expr                       { printf("expr > expr\n"); }
    | expr EQUAL expr                     { printf("expr EQUAL expr\n"); }
    | expr NOT_EQUAL expr                 { printf("expr NOT_EQUAL expr\n"); }
    | expr LESS_OR_EQUAL expr             { printf("expr LESS_OR_EQUAL expr\n"); }
    | expr GREATER_OR_EQUAL expr          { printf("expr GREATER_OR_EQUAL expr\n"); }
    | expr AND expr                       { printf("expr AND expr\n"); }
    | expr OR expr                        { printf("expr OR expr\n"); }
    | expr BITWISE_AND expr               { printf("expr BITWISE_AND expr\n"); }
    | expr BITWISE_OR expr                { printf("expr BITWISE_OR expr\n"); }
    | '!' expr                            { printf(" ! expr\n"); }
    | INCREMENT expr                      { printf("INCREMENT expr\n"); }
    | DECREMENT expr                      { printf("DECREMENT expr\n"); }
    | '+' expr %prec UNARY_PLUS           { printf("+ expr UNARY_PLUS\n"); }
    | '-' expr %prec UNARY_MINUS          { printf("- expr UNARY_MINUS\n"); }
    | NULL_KW                             { printf("NULL_KW\n"); }
    | access_expr                         { printf("access_expr\n"); }
;

// ============================================================================
// 3) МОДИФИКАТОРЫ ДОСТУПА
// ============================================================================

visibility_modifier: PUBLIC               { printf("visibility_modifier -> PUBLIC\n"); }
				   | PROTECTED            { printf("visibility_modifier -> PROTECTED\n"); }
				   | PRIVATE              { printf("visibility_modifier -> PRIVATE\n"); }
				   | INTERNAL             { printf("visibility_modifier -> INTERNAL\n"); }
				   | PROTECTED_INTERNAL   { printf("visibility_modifier -> PROTECTED_INTERNAL\n"); }
;

// ============================================================================
// 4) КОНСТРУКТОРЫ И ДЕСТРУКТОРЫ
// ============================================================================

constructor_decl: visibility_modifier class_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'	{ printf("constructor_decl -> visibility_modifier class_name\n"); }
;

static_constructor_decl: STATIC class_name '(' ')' '{' stmt_seq_optional '}'	{ printf("static_constructor_decl -> STATIC class_name\n"); }
;

destructor_decl: 	TILDE class_name '(' ')' '{' stmt_seq_optional '}'		{ printf("destructor_decl -> TILDE class_name\n"); }
;

class_name: 	IDENTIFIER { printf("class_name -> IDENTIFIER\n"); }
;

// ============================================================================
// МЕТОДЫ И ПЕРЕМЕННЫЕ
// ============================================================================

method_arguments: 	var_decl                          { printf("method_arguments -> var_decl\n"); }
			    | method_arguments ',' var_decl       { printf("method_arguments -> method_arguments , var_decl\n"); }
;

method_arguments_optional: /* empty */                       { printf("method_arguments_optional -> empty\n"); }
						 | method_arguments                  { printf("method_arguments_optional -> method_arguments\n"); }
;

method_decl: visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'	{ printf("method_decl -> visibility_modifier type method_name\n"); }
;

method_name: 	IDENTIFIER { printf("method_name -> IDENTIFIER\n"); }
;

var_decl: type IDENTIFIER     { printf("var_decl -> type IDENTIFIER\n"); }
;

type: standard_type     { printf("type -> standard_type\n"); }
    | access_expr       { printf("type -> access_expr\n"); }
;

// ============================================================================
// УТВЕРЖДЕНИЯ
// ============================================================================

stmt: ';'                           { printf("stmt -> ;\n"); }
    | expr ';'                      { printf("stmt -> expr ;\n"); }
    | '{' stmt_seq_optional '}'     { printf("stmt -> { stmt_seq_optional }\n"); }
;

stmt_seq: stmt              { printf("stmt_seq -> stmt\n"); }
        | stmt_seq stmt     { printf("stmt_seq -> stmt_seq stmt\n"); }
;

stmt_seq_optional: /* empty */       { printf("stmt_seq_optional -> empty\n"); }
                 | stmt_seq          { printf("stmt_seq_optional -> stmt_seq\n"); }
;

// ============================================================================
// 5) ПЕРЕЧИСЛЯЕМЫЙ ТИП ДАННЫХ (ENUM)
// ============================================================================

enumerators: IDENTIFIER                     { printf("enumerators -> IDENTIFIER\n"); }
           | enumerators ',' IDENTIFIER     { printf("enumerators -> enumerators , IDENTIFIER\n"); }
;

enum_decl: PUBLIC ENUM class_name '{' enumerators '}'	{ printf("enum_decl -> PUBLIC ENUM class_name\n"); }
;

// ============================================================================
// 6) ИНТЕРПОЛИРОВАННЫЕ СТРОКИ
// ============================================================================

interpolated_string: INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END	{ printf("interpolated_string -> INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END\n"); }
;

interpolated_string_content: /* empty */     												{ printf("interpolated_string_content -> empty\n"); }
						   | INTERPOLATED_STRING_TEXT interpolated_string_content    		{ printf("interpolated_string_content -> INTERPOLATED_STRING_TEXT interpolated_string_content\n"); }
						   | INTERPOLATED_STRING_EXPR expr interpolated_string_content 		{ printf("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr interpolated_string_content\n"); }
;

// ============================================================================
// 7) СТРУКТУРЫ
// ============================================================================

struct_members: field_decl                              { printf("struct_members -> field_decl\n"); }
			  | method_decl                             { printf("struct_members -> method_decl\n"); }
		      | static_constructor_decl                 { printf("struct_members -> static_constructor_decl\n"); }
		      | struct_members field_decl               { printf("struct_members -> struct_members field_decl\n"); }
              | struct_members method_decl              { printf("struct_members -> struct_members method_decl\n"); }
              | struct_members static_constructor_decl  { printf("struct_members -> struct_members static_constructor_decl\n"); }
;

field_decl: visibility_modifier var_decl ';' { printf("field_decl -> visibility_modifier var_decl ;\n"); }
;

struct_members_optional: /* empty */           { printf("struct_members_optional -> empty\n"); }
					   | struct_members        { printf("struct_members_optional -> struct_members\n"); }
;

struct_decl: PUBLIC STRUCT class_name '{' struct_members_optional '}'	{ printf("struct_decl -> PUBLIC STRUCT class_name\n"); }
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