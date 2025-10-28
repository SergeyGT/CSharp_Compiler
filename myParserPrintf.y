 %{
// Remove warnings from bison
#ifdef _MSC_VER
#pragma warning( push, 0 )
#pragma warning( disable : 6011 )
#pragma warning( disable : 26819 )
#pragma warning( disable : 26812 )
#pragma warning( disable : 6387 )
#endif // _MSC_VER

#include <cstdio>
#include <iostream>

#include "Tree/Program.h"

void __cdecl yyerror(const char* s) {
	std::cerr << s << std::endl;
}

template <char Separator = ' ', typename... Args>
void Print(Args&&... args) {
    ((std::cout << args << Separator), ...);
    std::cout << std::endl;
}

int yylex();
int yyparse();
extern FILE* yyin;
extern struct Program* treeRoot;
%}

%union {
    int _integer;
    char* _string;
    char* _identifier;
    double _floatingPoint;
    float _floatValue;
    char _character;

    struct AccessExpr* _accessExpr;
    struct ExprNode* _expr;
    struct ExprSeqNode* _exprSeq;
    
    enum class StandardType _standardType;
    struct StandardArrayType* _standardArrayType;
    struct TypeNode* _type;
    
    struct VarDeclNode* _varDecl;
    struct WhileNode* _while;
    struct DoWhileNode* _doWhile;
    struct ForNode* _for;
    struct ForEachNode* _foreach;
    struct StmtSeqNode* _stmtSeq;
    struct IfNode* _if;
    struct StmtNode* _stmt;
    
    enum class VisibilityModifier _visibiltyModifier;
    struct FieldDeclNode* _fieldDecl;
    struct MethodArguments* _methodArguments;
    struct MethodDeclNode* _methodDecl;
    struct ConstructorDeclNode* _constructorDecl;
    struct DestructorDeclNode* _destructorDecl;
    struct ClassMembersNode* _classMembers;
    struct ClassDeclNode* _classDecl;
    struct StructDeclNode* _structDecl;

    struct IdentifierList* _enumerators;
    struct EnumDeclNode* _enumDecl;

    struct IdentifierList* _usingArg;
    struct NamespaceMembersNode* _namespaceMembers;
    struct NamespaceDeclNode* _namespaceDecl;
    struct UsingDirectiveNode* _usingDirective;
    struct UsingDirectives* _usingDirectives;
    struct NamespaceDeclSeq* _namespaceDeclSeq;
    
    struct InterpolatedStringNode* _interpolatedString;
    struct StructMembersNode* _structMembers;
	
	//struct QualifiedTypeName* _qualifiedTypeName;
	struct ClassNameNode* _className;
    struct MethodNameNode* _methodName;
}

%type <_className> class_name
%type <_methodName> method_name

%type <_accessExpr> access_expr
%type <_expr> expr expr_optional
%type <_exprSeq> expr_seq expr_seq_optional

%type <_standardType> standard_type
%type <_standardArrayType> standard_array_type
%type <_type> type;

%type <_varDecl> var_decl var_decl_with_init
%type <_while> while_stmt
%type <_doWhile> do_while_stmt
%type <_for> for_stmt
%type <_foreach> foreach_stmt
%type <_stmtSeq> stmt_seq stmt_seq_optional
%type <_if> if_stmt
%type <_stmt> stmt

%type <_visibiltyModifier> visibility_modifier
%type <_fieldDecl> field_decl
%type <_methodArguments> method_arguments method_arguments_optional
%type <_methodDecl> method_decl operator_overload
//%type <_constructorDecl> constructor_decl static_constructor_decl
%type <_constructorDecl> static_constructor_decl

%type <_destructorDecl> destructor_decl
%type <_classMembers> class_members class_members_optional
%type <_classDecl> class_decl
%type <_structDecl> struct_decl
%type <_structMembers> struct_members struct_members_optional

%type <_enumerators> enumerators
%type <_enumDecl> enum_decl

%type <_usingArg> using_arg
%type <_namespaceMembers> namespace_members namespace_members_optional
%type <_namespaceDecl> namespace_decl
%type <_usingDirective> using_directive
%type <_usingDirectives> using_directives using_directives_optional
%type <_namespaceDeclSeq> namespace_decl_seq

%type <_interpolatedString> interpolated_string interpolated_string_content

//%type <_qualifiedTypeName> qualified_type_name

%token LESS
%token GREATER
%token EQUAL
%token NOT_EQUAL
%token GREATER_OR_EQUAL
%token LESS_OR_EQUAL
%token OR
%token AND
%token BITWISE_OR
%token BITWISE_AND

%token PLUS_ASSIGN
%token MINUS_ASSIGN
%token MULTIPLY_ASSIGN
%token DIVISION_ASSIGN
%token INCREMENT
%token DECREMENT

%token <_identifier> IDENTIFIER
%token <_integer> INTEGER
%token <_floatingPoint> FLOATING_POINT
%token <_floatValue> FLOAT_LITERAL
%token <_string> STRING
%token <_character> CHARACTER
%token <_floatingPoint> DECIMAL_LITERAL
%token RETURN
%token IF
%token ELSE
%token WHILE
%token DO
%token FOR
%token CHAR_KW
%token INT_KW
%token STRING_KW
%token BOOL_KW
%token FLOAT_KW
%token DOUBLE_KW      // Добавлен токен для double
%token DECIMAL_KW     // Добавлен токен для decimal
%token VOID_KW
%token NEW
%token NULL_KW
%token TRUE_KW
%token FALSE_KW
%token PUBLIC
%token PROTECTED
%token PRIVATE
%token INTERNAL       // Добавлен токен для internal
%token PROTECTED_INTERNAL // Добавлен токен для protected internal
%token STATIC
%token CLASS
%token STRUCT         // Добавлен токен для struct
%token ENUM
%token USING
%token NAMESPACE
%token FOREACH
%token IN_KW
%token OBJECT
%token OPERATOR
%token VAR
%token TILDE          // Добавлен токен для деструктора ~
%token INTERPOLATED_STRING_START // Добавлен токен для интерполированных строк $"
%token INTERPOLATED_STRING_END   // Добавлен токен для окончания интерполированных строк
%token INTERPOLATED_STRING_TEXT  // Добавлен токен для текста в интерполированных строках
%token INTERPOLATED_STRING_EXPR  // Добавлен токен для выражений в интерполированных строках

%right '=' PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVISION_ASSIGN
%left OR AND BITWISE_OR BITWISE_AND
%left '<' '>' EQUAL NOT_EQUAL LESS_OR_EQUAL GREATER_OR_EQUAL
%left '+' '-'
%left '*' '/'
%right '!' INCREMENT DECREMENT
%right UNARY_MINUS UNARY_PLUS
%left '.' ']' '['
%nonassoc '(' ')'

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start program

%%

program: using_directives_optional namespace_decl_seq { treeRoot = new Program($1, $2); }
;

// ============================================================================
// ВЫРАЖЕНИЯ И ДОСТУП
// ============================================================================

access_expr:  '(' expr ')'                                                  { Print("access_expr -> ( expr )"); }
            |  access_expr '[' expr ']'                                     { Print("access_expr -> access_expr [ expr ]"); }
            |  access_expr '[' ']'                                          { Print("access_expr -> access_expr [ ]"); }
            | INTEGER                                                       { Print("access_expr -> INTEGER", $1); }
            | FLOATING_POINT                                                { Print("access_expr -> FLOATING_POINT", $1); }
            | FLOAT_LITERAL                                                 { Print("access_expr -> FLOAT_LITERAL", $1); } // Литерал с суффиксом f
			| DECIMAL_LITERAL 												{ Print("access_expr -> DECIMAL_LITERAL", $1); }
            | STRING                                                        { Print("access_expr -> FLOATING_STRING", $1); }
            | CHARACTER                                                     { Print("access_expr -> CHARACTER", "'" + $1 + "'"); }
            | TRUE_KW                                                       { Print("access_expr -> TRUE_KW"); }
            | FALSE_KW                                                      { Print("access_expr -> FALSE_KW"); }
            | IDENTIFIER                                                    { Print("access_expr -> IDENTIFIER", $1); }
            | IDENTIFIER '(' expr_seq_optional ')'                          { Print("access_expr -> IDENTIFIER ( expr_seq_optional )", $1); }
            | access_expr '.' IDENTIFIER                                    { Print("access_expr -> access_expr . IDENTIFIER"); }
            | access_expr '.' IDENTIFIER '(' expr_seq_optional ')'          { Print("access_expr -> access_expr . IDENTIFIER ( expr_seq_optional )"); }
            | interpolated_string                                           { Print("access_expr -> interpolated_string"); } // Интерполированные строки
;

// ============================================================================
// ВЫРАЖЕНИЯ И ОПЕРАЦИИ
// ============================================================================

expr: expr '+' expr                             { Print("expr + expr"); }
    | expr '-' expr                             { Print("expr - expr"); }
    | expr '*' expr                             { Print("expr * expr"); }
    | expr '/' expr                             { Print("expr / expr"); }
    | expr '=' expr                             { Print("expr = expr"); }
    | expr PLUS_ASSIGN expr                     { Print("expr PLUS_ASSIGN expr"); }
    | expr MINUS_ASSIGN expr                    { Print("expr MINUS_ASSIGN expr"); }
    | expr MULTIPLY_ASSIGN expr                 { Print("expr MULTIPLY_ASSIGN expr"); }
    | expr DIVISION_ASSIGN expr                 { Print("expr DIVISION_ASSIGN expr"); }
    | expr '<' expr                             { Print("expr < expr"); }
    | expr '>' expr                             { Print("expr > expr"); }
    | expr EQUAL expr                           { Print("expr EQUAL expr"); }
    | expr NOT_EQUAL expr                       { Print("expr NOT_EQUAL expr"); }
    | expr LESS_OR_EQUAL expr                   { Print("expr LESS_OR_EQUAL expr"); }
    | expr GREATER_OR_EQUAL expr                { Print("expr GREATER_OR_EQUAL expr"); }
    | expr AND expr                             { Print("expr AND expr"); } // Условное И (&&)
    | expr OR expr                              { Print("expr OR expr"); }  // Условное ИЛИ (||)
    | expr BITWISE_AND expr                     { Print("expr BITWISE_AND expr"); } // Побитовое И (&)
    | expr BITWISE_OR expr                      { Print("expr BITWISE_OR expr"); }  // Побитовое ИЛИ (|)
    | '!' expr                                  { Print(" ! expr"); }
    | INCREMENT expr                            { Print("INCREMENT expr"); }
    | DECREMENT expr                            { Print("DECREMENT expr"); }
    | '+' expr %prec UNARY_PLUS                 { Print("+ expr UNARY_PLUS"); }
    | '-' expr %prec UNARY_MINUS                { Print("- expr UNARY_MINUS"); }
    | NULL_KW                                   { Print("NULL_KW"); }
    | access_expr                               { Print("access_expr"); }
    | NEW type                                  { Print("NEW type"); }
    | NEW type '{' expr_seq_optional '}'        { Print("NEW type { expr_seq_optional }"); }
    | NEW '[' ']' '{' expr_seq_optional '}'     { Print("NEW [] { expr_seq_optional }"); }
    | '(' standard_type ')' expr                { Print("( standard_type )"); }
    | NEW standard_type '[' expr ']'            { Print("NEW standard_type [ expr ]"); }
;

expr_optional:                  { Print(" expr_optional -> empty "); }
              | expr            { Print(" expr_optional -> expr "); }
;

expr_seq: expr                  { Print(" expr_seq -> expr "); }
        | expr_seq ',' expr     { Print(" expr_seq -> expr_seq , expr "); }
;

expr_seq_optional:              { Print("expr_seq_optional -> empty"); }
                 | expr_seq     { Print("expr_seq_optional -> expr_seq"); }
;

// ============================================================================
// ОПЕРАТОРЫ И УПРАВЛЯЮЩИЕ КОНСТРУКЦИИ
// ============================================================================

stmt: ';'                           { Print("stmt -> ;"); }
    | expr ';'                      { Print("stmt -> expr ;"); }
    | var_decl ';'                  { Print("stmt -> var_decl ;"); }
    | var_decl_with_init ';'        { Print("stmt -> var_decl_with_init ;"); }
    | while_stmt                    { Print("stmt -> while_stmt ;"); }
    | do_while_stmt                 { Print("stmt -> do_while_stmt ;"); }
    | for_stmt                      { Print("stmt -> for_stmt ;"); }
    | if_stmt                       { Print("stmt -> if_stmt ;"); }
    | foreach_stmt                  { Print("stmt -> foreach_stmt ;"); }
    | '{' stmt_seq_optional '}'     { Print("stmt -> { stmt_seq_optional } ;"); }
    | RETURN expr_optional ';'      { Print("stmt -> RETURN expr_optional ;"); }
;

stmt_seq: stmt              { Print("stmt_seq -> stmt"); }
        | stmt_seq stmt     { Print("stmt_seq -> stmt_seq stmt"); }
;

stmt_seq_optional:          { Print("stmt_seq_optional -> empty"); }
                 | stmt_seq  { Print("stmt_seq_optional -> stmt_seq"); }
;

while_stmt: WHILE '(' expr ')' stmt                 { Print("while_stmt -> WHILE ( expr ) stmt"); }
;

do_while_stmt: DO stmt WHILE '(' expr ')'';'        { Print("do_while_stmt -> DO stmt WHILE ( expr ) ;"); }
;

for_stmt: FOR '(' var_decl ';' expr_optional ';' expr_optional ')' stmt                     { Print("for_stmt -> FOR ( var_decl ; expr_optional ; expr_optional ) stmt"); }
        |  FOR '(' var_decl_with_init ';' expr_optional ';' expr_optional ')' stmt          { Print("for_stmt -> FOR ( var_decl_with_init ; expr_optional ; expr_optional ) stmt"); }
        |  FOR '(' expr_optional ';' expr_optional ';' expr_optional ')' stmt               { Print("for_stmt -> FOR ( expr_optional ; expr_optional ; expr_optional ) stmt"); }
;

if_stmt: IF '(' expr ')' stmt  %prec LOWER_THAN_ELSE             { Print("if_stmt -> IF ( expr ) stmt"); }
        | IF '(' expr ')' stmt ELSE stmt    { Print("if_stmt -> IF ( expr ) stmt ELSE stmt"); }
;

foreach_stmt: FOREACH '(' var_decl IN_KW expr ')' stmt      { Print("foreach_stmt -> FOREACH ( var_decl IN_KW expr ) stmt"); }
;

// ============================================================================
// ТИПЫ ДАННЫХ
// ============================================================================

standard_type: CHAR_KW      { Print("standard_type -> CHAR_KW"); }
             | INT_KW       { Print("standard_type -> INT_KW"); }
             | BOOL_KW      { Print("standard_type -> BOOL_KW"); }
             | FLOAT_KW     { Print("standard_type -> FLOAT_KW"); }
             | DOUBLE_KW    { Print("standard_type -> DOUBLE_KW"); }     // Добавлен double
             | DECIMAL_KW   { Print("standard_type -> DECIMAL_KW"); }    // Добавлен decimal
             | STRING_KW    { Print("standard_type -> STRING_KW"); }
;

standard_array_type: standard_type '[' ']'          { Print("standard_type [ ]"); }
                   | standard_array_type '[' ']'    { Print("standard_array_type [ ]"); }
;

type: standard_type         { Print("type -> standard_type"); }
    | standard_array_type   { Print("type -> standard_array_type"); }
    | access_expr           { Print("type -> access_expr"); }
	//| qualified_type_name	{ Print("type -> qualified_type_name"); }
;

//qualified_type_name: IDENTIFIER								
//                   | qualified_type_name '.' IDENTIFIER		{ Print("qualified_type_name"); }
//;


// ============================================================================
// ПЕРЕМЕННЫЕ И ОБЪЯВЛЕНИЯ
// ============================================================================

var_decl: type IDENTIFIER                           { Print("var_decl -> type IDENTIFIER"); }
        | VAR IDENTIFIER                            { Print("var_decl -> VAR IDENTIFIER"); }
;

var_decl_with_init: type IDENTIFIER '=' expr        { Print("var_decl_with_init -> type IDENTIFIER = expr"); }
                    | VAR IDENTIFIER '=' expr       { Print("var_decl_with_init -> VAR IDENTIFIER = expr"); }
;

// ============================================================================
// МЕТОДЫ И АРГУМЕНТЫ
// ============================================================================

method_arguments: var_decl                          { Print("method_arguments -> var_decl"); }
                | method_arguments ',' var_decl     { Print("method_arguments -> method_arguments , var_decl"); }
;
method_arguments_optional:                          { Print("method_arguments_optional -> empty"); }
                         | method_arguments         { Print("method_arguments_optional -> method_arguments"); }
;

// ============================================================================
// МОДИФИКАТОРЫ ДОСТУПА
// ============================================================================

visibility_modifier: PUBLIC                 { Print("visibility_modifier -> PUBLIC"); }
                   | PROTECTED              { Print("visibility_modifier -> PROTECTED"); }
                   | PRIVATE                { Print("visibility_modifier -> PRIVATE"); }
                   | INTERNAL               { Print("visibility_modifier -> INTERNAL"); }           // Добавлен internal
                   | PROTECTED_INTERNAL     { Print("visibility_modifier -> PROTECTED_INTERNAL"); }  // Добавлен protected internal
;

// ============================================================================
// ОПЕРАТОРЫ ПЕРЕГРУЗКИ
// ============================================================================

operator_overload:    visibility_modifier STATIC type OPERATOR '+'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR + ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR '-'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR - ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR '*'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR * ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR '/'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR / ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR '<'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR < ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR '>'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR > ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR EQUAL            '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR == ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR NOT_EQUAL        '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR != ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR LESS_OR_EQUAL    '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR <= ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR GREATER_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR >= ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR '!'              '(' var_decl ')'              '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR ! ( var_decl ) { stmt_seq_optional }");     }
                    | visibility_modifier STATIC type OPERATOR DECREMENT        '(' var_decl ')'              '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR -- ( var_decl ) { stmt_seq_optional }");     }
                    | visibility_modifier STATIC type OPERATOR INCREMENT        '(' var_decl ')'              '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR ++ ( var_decl ) { stmt_seq_optional }");     }
                    | visibility_modifier STATIC type OPERATOR '-'              '(' var_decl ')'              '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR - ( var_decl ) { stmt_seq_optional }");     }
                    | visibility_modifier STATIC type OPERATOR '+'              '(' var_decl ')'              '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR + ( var_decl ) { stmt_seq_optional }");     }
                    | visibility_modifier STATIC type OPERATOR BITWISE_AND      '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR & ( var_decl , var_decl ) { stmt_seq_optional }"); }
                    | visibility_modifier STATIC type OPERATOR BITWISE_OR       '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { Print("operator_overload -> visibility_modifier STATIC type OPERATOR | ( var_decl , var_decl ) { stmt_seq_optional }"); }
;

// ============================================================================
// ИМЕНА КЛАССОВ И МЕТОДОВ (для семантического различения)
// ============================================================================

class_name: IDENTIFIER { Print("class_name -> IDENTIFIER"); }
;

method_name: IDENTIFIER { Print("method_name -> IDENTIFIER"); }
;

// ============================================================================
// МЕТОДЫ, КОНСТРУКТОРЫ И ДЕСТРУКТОРЫ
// ============================================================================

// Конструкторы
//constructor_decl: visibility_modifier IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}' 
//    { Print("IDENTIFIER"); }


//method_decl: visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'                { Print("type IDENTIFIER"); }
//           | visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'             { Print("VOID_KW IDENTIFIER"); }
//           | visibility_modifier STATIC VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'      { Print("STATIC VOID_KW IDENTIFIER"); }
//           | STATIC visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'      { Print("VOID_KW IDENTIFIER"); }
//;

//constructor_decl:
//      visibility_modifier IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'
//      { Print("constructor_decl -> visibility_modifier IDENTIFIER"); }


//method_decl:	visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}' 			{ Print("method_decl -> visibility_modifier type IDENTIFIER"); }
//		   | 	visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}' 			{ Print("method_decl -> visibility_modifier VOID_KW IDENTIFIER"); }
//		   | 	visibility_modifier STATIC VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'	{ Print("method_decl -> visibility_modifier STATIC VOID_KW IDENTIFIER"); }
//		   | 	STATIC visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'	{ Print("method_decl -> STATIC visibility_modifier VOID_KW IDENTIFIER"); }
//           | 	visibility_modifier IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'					{ Print("constructor_decl -> visibility_modifier IDENTIFIER"); }
//;

constructor_decl: 	visibility_modifier class_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'		{ Print("constructor_decl -> visibility_modifier class_name"); }
;

method_decl: visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'    		{ Print("method_decl -> visibility_modifier type IDENTIFIER"); }
		   | visibility_modifier VOID_KW method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'   		{ Print("method_decl -> visibility_modifier VOID_KW IDENTIFIER"); }
           | visibility_modifier STATIC type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'		{ Print("method_decl -> visibility_modifier STATIC type IDENTIFIER"); }
           | visibility_modifier STATIC VOID_KW method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'	{ Print("method_decl -> visibility_modifier STATIC VOID_KW IDENTIFIER"); }
           | STATIC visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'		{ Print("method_decl -> STATIC visibility_modifier type IDENTIFIER"); }
           | STATIC visibility_modifier VOID_KW method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'	{ Print("method_decl -> STATIC visibility_modifier VOID_KW IDENTIFIER"); }
;


//constructor_decl: 	visibility_modifier IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'		{ Print("constructor_decl -> visibility_modifier IDENTIFIER"); }
//;


// Статический конструктор
static_constructor_decl: STATIC class_name '(' ')' '{' stmt_seq_optional '}' 
    { Print("STATIC IDENTIFIER"); }
;

// Деструктор
destructor_decl: TILDE class_name '(' ')' '{' stmt_seq_optional '}' 
    { Print("TILDE IDENTIFIER"); }
;

// ============================================================================
// ПОЛЯ КЛАССА
// ============================================================================

field_decl: visibility_modifier var_decl ';'              { Print("field_decl -> visibility_modifier var_decl ;"); }
          | visibility_modifier var_decl_with_init ';'    { Print("field_decl -> visibility_modifier var_decl_with_init ;"); }
;
    
// ============================================================================
// ЧЛЕНЫ КЛАССА
// ============================================================================

class_members: method_decl                                { Print("class_members -> method_decl"); }
             | field_decl                                 { Print("class_members -> field_decl"); }
             | operator_overload                          { Print("class_members -> operator_overload"); }
             | constructor_decl                           { Print("class_members -> constructor_decl"); }
             | static_constructor_decl                    { Print("class_members -> static_constructor_decl"); }
             | destructor_decl                            { Print("class_members -> destructor_decl"); }
             | class_members method_decl                  { Print("class_members -> class_members method_decl"); }
             | class_members field_decl                   { Print("class_members -> class_members field_decl"); }
             | class_members operator_overload            { Print("class_members -> class_members operator_overload"); }
             | class_members constructor_decl             { Print("class_members -> class_members constructor_decl"); }
             | class_members static_constructor_decl      { Print("class_members -> class_members static_constructor_decl"); }
             | class_members destructor_decl              { Print("class_members -> class_members destructor_decl"); }
;

class_members_optional:                     { Print("class_members_optional -> empty"); }
                         | class_members    { Print("class_members_optional -> class_members"); }
;

// ============================================================================
// СТРУКТУРЫ (типы значений)
// ============================================================================

// Члены структуры (без наследования, без деструкторов)
struct_members: field_decl                              { Print("struct_members -> field_decl"); }
              | method_decl                             { Print("struct_members -> method_decl"); }
              //| constructor_decl                        { Print("struct_members -> constructor_decl"); }
              | static_constructor_decl                 { Print("struct_members -> static_constructor_decl"); }
              | struct_members field_decl               { Print("struct_members -> struct_members field_decl"); }
              | struct_members method_decl              { Print("struct_members -> struct_members method_decl"); }
              //| struct_members constructor_decl         { Print("struct_members -> struct_members constructor_decl"); }
              | struct_members static_constructor_decl  { Print("struct_members -> struct_members static_constructor_decl"); }
;

struct_members_optional:                       { Print("struct_members_optional -> empty"); }
                       | struct_members    { Print("struct_members_optional -> struct_members"); }
;

// Объявление структуры
struct_decl: PUBLIC STRUCT class_name '{' struct_members_optional '}' 
    { Print("public", $3); }
;

// ============================================================================
// ПЕРЕЧИСЛЕНИЯ (enum)
// ============================================================================

enumerators: IDENTIFIER                     { Print("enumerators -> IDENTIFIER"); }
            | enumerators ',' IDENTIFIER    { Print("enumerators -> enumerators , IDENTIFIER"); }
;

enum_decl: PUBLIC ENUM class_name '{' enumerators '}' 
    { Print("public", $3); }
;

// ============================================================================
// КЛАССЫ
// ============================================================================

class_decl: PUBLIC CLASS class_name '{' class_members_optional '}'                  { Print("PUBLIC CLASS class_name -> class_members_optional"); }
          | PUBLIC CLASS class_name ':' using_arg '{' class_members_optional '}'    { Print("class_decl -> PUBLIC CLASS IDENTIFIER : using_arg { class_members_optional }"); }
          | PUBLIC CLASS class_name ':' OBJECT '{' class_members_optional '}'       { Print("class_decl -> PUBLIC CLASS IDENTIFIER : OBJECT { class_members_optional }"); }
;
                
// ============================================================================
// ПРОСТРАНСТВА ИМЕН И USING
// ============================================================================

namespace_members: enum_decl                    { Print("namespace_members -> enum_decl"); }           
                | class_decl                    { Print("namespace_members -> class_decl"); }           
                | struct_decl                   { Print("namespace_members -> struct_decl"); } // Добавлены структуры
                | namespace_members enum_decl   { Print("namespace_members -> namespace_members enum_decl"); }           
                | namespace_members class_decl  { Print("namespace_members -> namespace_members class_decl"); }
                | namespace_members struct_decl { Print("namespace_members -> namespace_members struct_decl"); }
;

namespace_members_optional:                         { Print("namespace_members_optional -> empty"); }
                            | namespace_members     { Print("namespace_members_optional -> namespace_members"); }
;

namespace_decl: NAMESPACE IDENTIFIER '{' namespace_members_optional '}' 
    { Print("namespace_decl");  }
;

namespace_decl_seq: namespace_decl                      { Print("namespace_decl_seq -> namespace_decl"); }
                   | namespace_decl_seq namespace_decl  { Print("namespace_decl_seq -> namespace_decl_seq namespace_decl"); }
;

using_arg: IDENTIFIER                   { Print("using_arg", $1); }
         | using_arg '.' IDENTIFIER     { Print("using_arg . IDENTIFIER"); }
;

using_directive: USING using_arg ';'    { Print("using_directive", $2); }
;

using_directives:  using_directive                  { Print("using_directives -> using_directive"); }
                | using_directives using_directive  { Print("using_directives -> using_directives using_directive"); }
;

using_directives_optional:                  { Print("using_directives_optional -> empty");  }
                        | using_directives  { Print("using_directives_optional -> using_directives"); }
;

// ============================================================================
// ИНТЕРПОЛИРОВАННЫЕ СТРОКИ
// ============================================================================

interpolated_string: INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END
    { Print("interpolated_string -> INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END"); }
;

//interpolated_string_content: /* empty */                          { Print("interpolated_string_content -> empty"); }
//                          | INTERPOLATED_STRING_TEXT              { Print("interpolated_string_content -> INTERPOLATED_STRING_TEXT"); }
//                          | INTERPOLATED_STRING_EXPR expr         { Print("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr"); }
//                          | interpolated_string_content INTERPOLATED_STRING_TEXT      { Print("interpolated_string_content -> interpolated_string_content INTERPOLATED_STRING_TEXT"); }
//                          | interpolated_string_content INTERPOLATED_STRING_EXPR expr { Print("interpolated_string_content -> interpolated_string_content INTERPOLATED_STRING_EXPR expr"); }
//;

interpolated_string_content:/* empty */ 	{ Print("interpolated_string_content -> empty"); }
						   | INTERPOLATED_STRING_TEXT interpolated_string_content		{ Print("interpolated_string_content -> INTERPOLATED_STRING_TEXT interpolated_string_content"); }
						   | INTERPOLATED_STRING_EXPR expr interpolated_string_content	{ Print("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr interpolated_string_content"); }
;


%%

#ifdef _MSC_VER
#pragma warning( pop )
#endif // _MSC_VER