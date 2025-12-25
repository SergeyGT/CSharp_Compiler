%{
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
    
    struct ConstructorDeclNode* _constructorDecl;
    struct DestructorDeclNode* _destructorDecl;
    struct InterfaceDeclNode* _interfaceDecl;
    struct InterfaceMemberNode* _interfaceMember;
    struct InterfaceMembersNode* _interfaceMembers;
    struct QualifiedOrExprNode* _qualifiedOrExpr;
}

%type <_expr> expr expr_optional
%type <_exprSeq> expr_seq expr_seq_optional
%type <_qualifiedOrExpr> qualified_or_expr

%type <_standardType> standard_type
%type <_array_type> array_type;
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
%type <_classMembers> class_members class_members_optional
%type <_classDecl> class_decl

%type <_structDecl> struct_decl
%type <_structMembers> struct_members struct_members_optional

%token INTERPOLATED_STRING_START INTERPOLATED_STRING_END

%token <_string> INTERPOLATED_STRING_TEXT
%type <_accessExpr> interpolated_string
%type <_expr> interpolation_part
%type <_exprSeq> interpolation_parts

%type <_enumerators> enumerators
%type <_enumDecl> enum_decl

%type <_usingArg> using_arg
%type <_namespaceMembers> namespace_members namespace_members_optional
%type <_namespaceDecl> namespace_decl
%type <_usingDirective> using_directive
%type <_usingDirectives> using_directives using_directives_optional
%type <_namespaceDeclSeq> namespace_decl_seq

%type <_constructorDecl> constructor_decl
%type <_destructorDecl> destructor_decl
%type <_interfaceDecl> interface_decl
%type <_interfaceMember> interface_member
%type <_interfaceMembers> interface_members interface_members_optional

%token EQUAL
%token NOT_EQUAL
%token GREATER_OR_EQUAL
%token LESS_OR_EQUAL
%token OR
%token AND

%token PLUS_ASSIGN
%token MINUS_ASSIGN
%token MULTIPLY_ASSIGN
%token DIVISION_ASSIGN
%token INCREMENT
%token DECREMENT

%token <_identifier> IDENTIFIER
%token <_integer> INTEGER
%token <_string> STRING
%token <_character> CHARACTER
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
%token VOID_KW
%token NEW
%token NULL_KW
%token TRUE_KW
%token FALSE_KW
%token PUBLIC
%token PROTECTED
%token PRIVATE
%token STATIC
%token CLASS
%token STRUCT
%token ENUM
%token USING
%token NAMESPACE
%token FOREACH
%token IN_KW
%token OBJECT
%token OPERATOR
%token VAR
%token INTERFACE
%token TILDE
%token INTERNAL
%token PROTECTED_INTERNAL

%right '=' PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVISION_ASSIGN
%left OR
%left AND
%left '<' '>' EQUAL NOT_EQUAL LESS_OR_EQUAL GREATER_OR_EQUAL
%left '+' '-'
%left '*' '/'
%right '!' INCREMENT DECREMENT
%left UNARY_MINUS UNARY_PLUS
%left '.' ']' '['
%nonassoc '(' ')'

%expect 1

%start program

%%

program: 
	/* empty */
	| using_directives_optional namespace_decl_seq { treeRoot = new Program($1, $2); }
;

// ============================================================================
// NAMESPACE И USING
// ============================================================================
namespace_members: enum_decl                    { $$ = new NamespaceMembersNode(); $$ -> Add($1); }           
                | class_decl                    { $$ = new NamespaceMembersNode(); $$ -> Add($1); }           
                | interface_decl                { $$ = new NamespaceMembersNode(); $$ -> Add($1); }
                | struct_decl                   { $$ = new NamespaceMembersNode(); $$ -> Add($1); }
                | namespace_members enum_decl   { $$ -> Add($2); }           
                | namespace_members class_decl  { $$ -> Add($2); }
                | namespace_members interface_decl  { $$ -> Add($2); }
                | namespace_members struct_decl { $$ -> Add($2); }
;

namespace_members_optional:                         { $$ = new NamespaceMembersNode(); }
                            | namespace_members     { $$ = $1; }
;

namespace_decl: NAMESPACE IDENTIFIER '{' namespace_members_optional '}' { $$ = new NamespaceDeclNode($2, $4);  }
;

namespace_decl_seq: namespace_decl                      { $$ = new NamespaceDeclSeq($1); }
                   | namespace_decl_seq namespace_decl  { $$ -> Add($2); }
;

using_arg: IDENTIFIER                   { $$ = new IdentifierList(); $$ -> Add($1); }
         | using_arg '.' IDENTIFIER     { $$ -> Add($3); }
;

using_directive: USING using_arg ';'    { $$ = new UsingDirectiveNode($2); }
;

using_directives:  using_directive                  { $$ = new UsingDirectives($1); }
                | using_directives using_directive  { $$ -> Add($2); }
;

using_directives_optional:                  { $$ = UsingDirectives::MakeEmpty();  }
                        | using_directives  { $$ = $1; }
;

// ============================================================================
// ТИПЫ ДАННЫХ
// ============================================================================

standard_type: CHAR_KW      { $$ = StandardType::Char; }
             | INT_KW       { $$ = StandardType::Int; }
             | BOOL_KW      { $$ = StandardType::Bool; }
             | FLOAT_KW     { $$ = StandardType::Float; }
             | STRING_KW    { $$ = StandardType::String; }
;

array_type: standard_type '[' ']'          { $$ = new StandardArrayType{ $1, 1 }; }
           | array_type '[' ']'            { $$ -> Arity += 1; }
;

qualified_or_expr: IDENTIFIER                       { $$ = new QualifiedOrExprNode($1); }
                 | qualified_or_expr '.' IDENTIFIER { $$ = new QualifiedOrExprNode($1, $3); }
		 | qualified_or_expr '[' ']'     { $$ = new StandardArrayType{ StandardType::UserDefined, 1, $1 }; }
		 | qualified_or_expr '[' expr ']'     { $$ = new StandardArrayType{ StandardType::UserDefined, 1, $1 }; }
		 | qualified_or_expr '.' IDENTIFIER '(' expr_seq ')'          { $$ = AccessExpr::FromDot($1, $3, $5); }
		 | IDENTIFIER '(' expr_seq')'                          { $$ = AccessExpr::FromCall($1, $3); }
		 | qualified_or_expr '.' IDENTIFIER '(' ')'          { $$ = AccessExpr::FromDot($1, $3, null); }
         | IDENTIFIER '(' ')'                          { $$ = AccessExpr::FromCall($1, null); }
         | '(' expr ')'                              { $$ = $2; }
         | NULL_KW                                   { $$ = ExprNode::FromNull(); }
         | INTEGER                                   { $$ = AccessExpr::FromInt($1); }
         | STRING                                    { $$ = AccessExpr::FromString($1); }
         | CHARACTER                                 { $$ = AccessExpr::FromChar($1); }
         | TRUE_KW                                   { $$ = AccessExpr::FromBool(true); }
         | FALSE_KW                                  { $$ = AccessExpr::FromBool(false); }
         | interpolated_string                       { $$ = AccessExpr::FromInterpolatedString($1); }
;


type: standard_type              { $$ = new TypeNode($1); }
    | array_type                 { $$ = new TypeNode(*$1); delete $1; }
    | qualified_or_expr          { $$ = new TypeNode($1); }
;

// ============================================================================
// КЛАССЫ
// ============================================================================

class_decl: PUBLIC CLASS IDENTIFIER '{' class_members_optional '}'                  { $$ = new ClassDeclNode($3, nullptr, $5); }
          | PUBLIC CLASS IDENTIFIER ':' using_arg '{' class_members_optional '}'    { $$ = new ClassDeclNode($3, $5, $7); }
          | PUBLIC CLASS IDENTIFIER ':' OBJECT '{' class_members_optional '}'       { $$ = new ClassDeclNode($3, nullptr, $7); }
;

class_members: method_decl                          { $$ = new ClassMembersNode(); $$ -> Add($1); }
                | field_decl                        { $$ = new ClassMembersNode(); $$ -> Add($1); }
                | operator_overload                 { $$ = new ClassMembersNode(); $$ -> Add($1); }
                | constructor_decl                  { $$ = new ClassMembersNode(); $$ -> Add($1); }
                | destructor_decl                   { $$ = new ClassMembersNode(); $$ -> Add($1); }
                | class_members method_decl         { $$ -> Add($2); }
                | class_members field_decl          { $$ -> Add($2); }
                | class_members operator_overload   { $$ -> Add($2); }
                | class_members constructor_decl    { $$ -> Add($2); }
                | class_members destructor_decl     { $$ -> Add($2); }
;

class_members_optional:                     { $$ = new ClassMembersNode(); }
                         | class_members    { $$ = $1; }
;

// ============================================================================
// СТРУКТУРЫ
// ============================================================================

struct_decl: 
    PUBLIC STRUCT IDENTIFIER '{' struct_members_optional '}' { $$ = new StructDeclNode($3, $5); }
    | STRUCT IDENTIFIER '{' struct_members_optional '}' { $$ = new StructDeclNode($2, $4); }
;

struct_members: field_decl                                      { $$ = new StructMembersNode(); $$->Add($1); }
        | method_decl                                   { $$ = new StructMembersNode(); $$->Add($1); }
            | constructor_decl                              { $$ = new StructMembersNode(); $$->Add($1); }
            | destructor_decl                               { $$ = new StructMembersNode(); $$->Add($1); }
            | struct_members field_decl                     { $$->Add($2); }
            | struct_members method_decl                    { $$->Add($2); }
            | struct_members constructor_decl               { $$->Add($2); }
            | struct_members destructor_decl                { $$->Add($2); }
;

struct_members_optional: 
    /* empty */ { $$ = new StructMembersNode(); }
    | struct_members { $$ = $1; }
;

// ============================================================================
// ИНТЕРФЕЙСЫ
// ============================================================================
interface_decl: PUBLIC INTERFACE IDENTIFIER '{' interface_members_optional '}'                 { $$ = new InterfaceDeclNode($3, $5); }
;

interface_member: type IDENTIFIER '(' method_arguments_optional ')' ';'                   { $$ = new InterfaceMemberNode($1, $2, $4); }
                | VOID_KW IDENTIFIER '(' method_arguments_optional ')' ';'                   { $$ = new InterfaceMemberNode(nullptr, $2, $4); }
;

interface_members: interface_member                           { $$ = new InterfaceMembersNode(); $$ -> Add($1); }
                | interface_members interface_member          { $$ -> Add($2); }
;

interface_members_optional:                           { $$ = new InterfaceMembersNode(); }
                         | interface_members          { $$ = $1; }
;

// ============================================================================
// ПЕРЕЧИСЛЕНИЯ
// ============================================================================

enumerators: IDENTIFIER                     { $$ = new IdentifierList(); $$ -> Add($1); }
            | enumerators ',' IDENTIFIER    { $$ -> Add($3); }
;

enum_decl: PUBLIC ENUM IDENTIFIER '{' enumerators '}' { Print("Found enum declaration with name:", $3); }
;

// ============================================================================
// МОДИФИКАТОРЫ ДОСТУПА
// ============================================================================

visibility_modifier: PUBLIC         { $$ = VisibilityModifier::Public; }
                   | PROTECTED      { $$ = VisibilityModifier::Protected; }
                   | PRIVATE        { $$ = VisibilityModifier::Private; }				   
                   | INTERNAL                { $$ = VisibilityModifier::Internal; }
                   | PROTECTED_INTERNAL      { $$ = VisibilityModifier::ProtectedInternal; }
;

// ============================================================================
// ПОЛЯ И ПЕРЕМЕННЫЕ
// ============================================================================

field_decl: visibility_modifier var_decl ';'              { $$ = new FieldDeclNode($1, $2); }
          | visibility_modifier var_decl_with_init ';'    { $$ = new FieldDeclNode($1, $2); }
;
var_decl: type IDENTIFIER                           { $$ = new VarDeclNode($1, $2, nullptr); }
        | VAR IDENTIFIER                            { $$ = new VarDeclNode(nullptr, $2, nullptr, true); }
;
var_decl_with_init: type IDENTIFIER '=' expr        { $$ = new VarDeclNode($1, $2, $4); }
                    | VAR IDENTIFIER '=' expr       { $$ = new VarDeclNode(nullptr, $2, $4, true); }
;

// ============================================================================
// МЕТОДЫ
// ============================================================================

method_decl: visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'                { $$ = new MethodDeclNode($1, $2, $3, $5, $8); }
           | visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'             { $$ = new MethodDeclNode($1, nullptr, $3, $5, $8); }
           | visibility_modifier STATIC VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'      { $$ = new MethodDeclNode($1, nullptr, $4, $6, $9, /* isStatic = */ true); }
           | STATIC visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'      { $$ = new MethodDeclNode($2, nullptr, $4, $6, $9, /* isStatic = */ true); }
           | visibility_modifier STATIC type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'         { $$ = new MethodDeclNode($1, $3, $4, $6, $9, /* isStatic = */ true); }
           | STATIC visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'         { $$ = new MethodDeclNode($2, $3, $4, $6, $9, /* isStatic = */ true); }
;

method_arguments: var_decl                          { $$ = new MethodArguments($1); }
                | method_arguments ',' var_decl     { $$ -> Add($3); }
;
method_arguments_optional:                          { $$ = MethodArguments::MakeEmpty(); }
                         | method_arguments         { $$ = $1; }
;

operator_overload:    visibility_modifier STATIC type OPERATOR '+'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Plus,              $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR '-'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Minus,             $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR '*'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Multiply,          $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR '/'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Divide,            $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR '<'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Less,              $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR '>'              '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Greater,           $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR EQUAL            '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Equal,             $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR NOT_EQUAL        '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::NotEqual,          $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR LESS_OR_EQUAL    '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::LessOrEqual,       $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR GREATER_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::GreaterOrEqual,    $7, $9, $12); }
                    | visibility_modifier STATIC type OPERATOR '!'              '(' var_decl ')'              '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Not,               $7, $10);     }
                    | visibility_modifier STATIC type OPERATOR DECREMENT        '(' var_decl ')'              '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Decrement,         $7, $10);     }
                    | visibility_modifier STATIC type OPERATOR INCREMENT        '(' var_decl ')'              '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::Increment,         $7, $10);     }
                    | visibility_modifier STATIC type OPERATOR '-'              '(' var_decl ')'              '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::UnaryMinus,        $7, $10);     }
                    | visibility_modifier STATIC type OPERATOR '+'              '(' var_decl ')'              '{' stmt_seq_optional '}'  { $$ = new MethodDeclNode($1, $3, OperatorType::UnaryPlus,         $7, $10);     }
;

// ============================================================================
// КОНСТРУКТОРЫ И ДЕСТРУКТОРЫ
// ============================================================================

constructor_decl: 
    visibility_modifier IDENTIFIER '(' ')' '{' stmt_seq_optional '}'                   { $$ = new ConstructorDeclNode($1, $2, MethodArguments::MakeEmpty(), $6); }
    | visibility_modifier IDENTIFIER '(' method_arguments ')' '{' stmt_seq_optional '}'  { $$ = new ConstructorDeclNode($1, $2, $4, $7); }
;

destructor_decl: TILDE IDENTIFIER '(' ')' '{' stmt_seq_optional '}'                  { $$ = new DestructorDeclNode($2, $6); }
;

// ============================================================================
// БЛОКИ И УТВЕРЖДЕНИЯ
// ============================================================================

stmt: ';'                           { $$ = new StmtNode(); }
    | expr ';'                      { $$ = new StmtNode($1, /* isReturn= */ false); }
    | var_decl ';'                  { $$ = new StmtNode($1); }
    | var_decl_with_init ';'        { $$ = new StmtNode($1); }
    | while_stmt                    { $$ = new StmtNode($1); }
    | do_while_stmt                 { $$ = new StmtNode($1); }
    | for_stmt                      { $$ = new StmtNode($1); }
    | if_stmt                       { $$ = new StmtNode($1); }
    | foreach_stmt                  { $$ = new StmtNode($1); }
    | '{' stmt_seq_optional '}'     { $$ = new StmtNode($2); }
    | RETURN expr_optional ';'      { $$ = new StmtNode($2, /* isReturn= */ true); }
;

stmt_seq: stmt              { $$ = new StmtSeqNode($1); }
        | stmt_seq stmt     { $$ -> Add($2); }
;
stmt_seq_optional:          { $$ = StmtSeqNode::MakeEmpty(); }
                | stmt_seq  { $$ = $1; }
;

while_stmt: WHILE '(' expr ')' stmt                 { $$ = new WhileNode($3, $5); }
;
do_while_stmt: DO stmt WHILE '(' expr ')'';'        { $$ = new DoWhileNode($5, $2); }
;

for_stmt: FOR '(' var_decl ';' expr_optional ';' expr_optional ')' stmt                     { $$ = new ForNode($3, $5, $7, $9); }
        |  FOR '(' var_decl_with_init ';' expr_optional ';' expr_optional ')' stmt          { $$ = new ForNode($3, $5, $7, $9); }
        |  FOR '(' expr_optional ';' expr_optional ';' expr_optional ')' stmt               { $$ = new ForNode($3, $5, $7, $9); }
;

if_stmt: IF '(' expr ')' stmt               { $$ = new IfNode($3, $5); }
        | IF '(' expr ')' stmt ELSE stmt    { $$ = new IfNode($3, $5, $7); }
;

foreach_stmt: FOREACH '(' var_decl IN_KW expr ')' stmt      { $$ = new ForEachNode($3, $5, $7); }
;

// ============================================================================
// ВЫРАЖЕНИЯ
// ============================================================================

expr: expr '+' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, $1, $3); }
    | expr '-' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, $1, $3); }
    | expr '*' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, $1, $3); }
    | expr '/' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, $1, $3); }
    | expr '=' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, $1, $3); }
    | expr PLUS_ASSIGN expr                     { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, $1, $3); }
    | expr MINUS_ASSIGN expr                    { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, $1, $3); }
    | expr MULTIPLY_ASSIGN expr                 { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, $1, $3); }
    | expr DIVISION_ASSIGN expr                 { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, $1, $3); }
    | expr '<' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, $1, $3); }
    | expr '>' expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, $1, $3); }
    | expr EQUAL expr                           { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, $1, $3); }
    | expr NOT_EQUAL expr                       { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, $1, $3); }
    | expr LESS_OR_EQUAL expr                   { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, $1, $3); }
    | expr GREATER_OR_EQUAL expr                { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, $1, $3); }
    | expr AND expr                             { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, $1, $3); }
    | expr OR expr                              { $$ = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, $1, $3); }
    | '!' expr                                  { $$ = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, $2); }
    | INCREMENT expr                            { $$ = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, $2); }
    | DECREMENT expr                            { $$ = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, $2); }
    | '+' expr %prec UNARY_PLUS                 { $$ = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, $2); }
    | '-' expr %prec UNARY_MINUS                { $$ = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, $2); }
    | qualified_or_expr                         { $$ = ExprNode::FromQualifiedOrExpr($1); }
    | NEW type                                  { $$ = ExprNode::FromNew($2); }
    | NEW type '{' expr_seq_optional '}'        { $$ = ExprNode::FromNew($2, $4); }
    | NEW '[' ']' '{' expr_seq_optional '}'     { $$ = ExprNode::FromNew(nullptr, $5); }
    | '(' standard_type ')' expr                { $$ = ExprNode::FromCast($2, $4); }
    | NEW standard_type '[' expr ']'            { $$ = ExprNode::FromNew($2, $4); }
;

expr_optional:                  { $$ = nullptr; }
              | expr            { $$ = $1; }
;

expr_seq: expr                  { $$ = new ExprSeqNode($1); }
        | expr_seq ',' expr     { $$ -> Add($3); }
;

expr_seq_optional:              { $$ = ExprSeqNode::MakeEmpty(); }
                 | expr_seq     { $$ = $1; }
;

// ============================================================================
// ИНТЕРПОЛИРОВАННЫЕ СТРОКИ
// ============================================================================

interpolated_string: INTERPOLATED_STRING_START interpolation_parts INTERPOLATED_STRING_END { $$ = AccessExpr::FromInterpolatedString($2);}
;

interpolation_parts: /* empty */ {$$ = ExprSeqNode::MakeEmpty();}
                   | interpolation_parts interpolation_part {$$->Add($2);} 
;

interpolation_part: INTERPOLATED_STRING_TEXT	{$$ = ExprNode::FromString($1);}
                  | '{' expr '}'               {$$ = $2;}
;				   

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