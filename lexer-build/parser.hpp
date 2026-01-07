
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTERPOLATED_STRING_START = 258,
     INTERPOLATED_STRING_END = 259,
     INTERPOLATED_STRING_TEXT = 260,
     EQUAL = 261,
     NOT_EQUAL = 262,
     GREATER_OR_EQUAL = 263,
     LESS_OR_EQUAL = 264,
     OR = 265,
     AND = 266,
     PLUS_ASSIGN = 267,
     MINUS_ASSIGN = 268,
     MULTIPLY_ASSIGN = 269,
     DIVISION_ASSIGN = 270,
     INCREMENT = 271,
     DECREMENT = 272,
     IDENTIFIER = 273,
     INTEGER = 274,
     STRING = 275,
     CHARACTER = 276,
     RETURN = 277,
     IF = 278,
     ELSE = 279,
     WHILE = 280,
     DO = 281,
     FOR = 282,
     CHAR_KW = 283,
     INT_KW = 284,
     STRING_KW = 285,
     BOOL_KW = 286,
     FLOAT_KW = 287,
     VOID_KW = 288,
     NEW = 289,
     NULL_KW = 290,
     TRUE_KW = 291,
     FALSE_KW = 292,
     PUBLIC = 293,
     PROTECTED = 294,
     PRIVATE = 295,
     STATIC = 296,
     CLASS = 297,
     STRUCT = 298,
     ENUM = 299,
     USING = 300,
     NAMESPACE = 301,
     FOREACH = 302,
     IN_KW = 303,
     OBJECT = 304,
     OPERATOR = 305,
     VAR = 306,
     INTERFACE = 307,
     TILDE = 308,
     INTERNAL = 309,
     PROTECTED_INTERNAL = 310,
     UNARY_PLUS = 311,
     UNARY_MINUS = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 36 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"

    int _integer;
    char* _string;
    char* _identifier;
    double _floatingPoint;
    char _character;

    struct ExprNode* _expr;
    struct ExprSeqNode* _exprSeq;
    
    enum class StandardType _standardType;
    struct StandardArrayType _standardArrayType;
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
    struct TypeMembersNode* _typeMembers;
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
    struct Qualified_or_expr* _qualifiedOrExpr;



/* Line 1676 of yacc.c  */
#line 160 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


