/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER2_TAB_H_INCLUDED
# define YY_YY_PARSER2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    EQUAL = 258,                   /* EQUAL  */
    NOT_EQUAL = 259,               /* NOT_EQUAL  */
    GREATER_OR_EQUAL = 260,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 261,           /* LESS_OR_EQUAL  */
    OR = 262,                      /* OR  */
    AND = 263,                     /* AND  */
    PLUS_ASSIGN = 264,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 265,            /* MINUS_ASSIGN  */
    MULTIPLY_ASSIGN = 266,         /* MULTIPLY_ASSIGN  */
    DIVISION_ASSIGN = 267,         /* DIVISION_ASSIGN  */
    INCREMENT = 268,               /* INCREMENT  */
    DECREMENT = 269,               /* DECREMENT  */
    IDENTIFIER = 270,              /* IDENTIFIER  */
    INTEGER = 271,                 /* INTEGER  */
    FLOATING_POINT = 272,          /* FLOATING_POINT  */
    STRING = 273,                  /* STRING  */
    CHARACTER = 274,               /* CHARACTER  */
    RETURN = 275,                  /* RETURN  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    DO = 279,                      /* DO  */
    FOR = 280,                     /* FOR  */
    CHAR_KW = 281,                 /* CHAR_KW  */
    INT_KW = 282,                  /* INT_KW  */
    STRING_KW = 283,               /* STRING_KW  */
    BOOL_KW = 284,                 /* BOOL_KW  */
    FLOAT_KW = 285,                /* FLOAT_KW  */
    VOID_KW = 286,                 /* VOID_KW  */
    NEW = 287,                     /* NEW  */
    NULL_KW = 288,                 /* NULL_KW  */
    TRUE_KW = 289,                 /* TRUE_KW  */
    FALSE_KW = 290,                /* FALSE_KW  */
    PUBLIC = 291,                  /* PUBLIC  */
    PROTECTED = 292,               /* PROTECTED  */
    PRIVATE = 293,                 /* PRIVATE  */
    STATIC = 294,                  /* STATIC  */
    CLASS = 295,                   /* CLASS  */
    STRUCT = 296,                  /* STRUCT  */
    ENUM = 297,                    /* ENUM  */
    USING = 298,                   /* USING  */
    NAMESPACE = 299,               /* NAMESPACE  */
    FOREACH = 300,                 /* FOREACH  */
    IN_KW = 301,                   /* IN_KW  */
    OBJECT = 302,                  /* OBJECT  */
    OPERATOR = 303,                /* OPERATOR  */
    VAR = 304,                     /* VAR  */
    INTERFACE = 305,               /* INTERFACE  */
    TILDE = 306,                   /* TILDE  */
    INTERNAL = 307,                /* INTERNAL  */
    PROTECTED_INTERNAL = 308,      /* PROTECTED_INTERNAL  */
    UNARY_MINUS = 309,             /* UNARY_MINUS  */
    UNARY_PLUS = 310               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "Parser2.y"

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

#line 168 "Parser2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER2_TAB_H_INCLUDED  */
