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

#ifndef YY_YY_MYPARSERPRINTF_TAB_H_INCLUDED
# define YY_YY_MYPARSERPRINTF_TAB_H_INCLUDED
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
    LESS = 258,                    /* LESS  */
    GREATER = 259,                 /* GREATER  */
    EQUAL = 260,                   /* EQUAL  */
    NOT_EQUAL = 261,               /* NOT_EQUAL  */
    GREATER_OR_EQUAL = 262,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 263,           /* LESS_OR_EQUAL  */
    OR = 264,                      /* OR  */
    AND = 265,                     /* AND  */
    BITWISE_OR = 266,              /* BITWISE_OR  */
    BITWISE_AND = 267,             /* BITWISE_AND  */
    PLUS_ASSIGN = 268,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 269,            /* MINUS_ASSIGN  */
    MULTIPLY_ASSIGN = 270,         /* MULTIPLY_ASSIGN  */
    DIVISION_ASSIGN = 271,         /* DIVISION_ASSIGN  */
    INCREMENT = 272,               /* INCREMENT  */
    DECREMENT = 273,               /* DECREMENT  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
    INTEGER = 275,                 /* INTEGER  */
    FLOATING_POINT = 276,          /* FLOATING_POINT  */
    FLOAT_LITERAL = 277,           /* FLOAT_LITERAL  */
    STRING = 278,                  /* STRING  */
    CHARACTER = 279,               /* CHARACTER  */
    DECIMAL_LITERAL = 280,         /* DECIMAL_LITERAL  */
    RETURN = 281,                  /* RETURN  */
    IF = 282,                      /* IF  */
    ELSE = 283,                    /* ELSE  */
    WHILE = 284,                   /* WHILE  */
    DO = 285,                      /* DO  */
    FOR = 286,                     /* FOR  */
    CHAR_KW = 287,                 /* CHAR_KW  */
    INT_KW = 288,                  /* INT_KW  */
    STRING_KW = 289,               /* STRING_KW  */
    BOOL_KW = 290,                 /* BOOL_KW  */
    FLOAT_KW = 291,                /* FLOAT_KW  */
    DOUBLE_KW = 292,               /* DOUBLE_KW  */
    DECIMAL_KW = 293,              /* DECIMAL_KW  */
    VOID_KW = 294,                 /* VOID_KW  */
    NEW = 295,                     /* NEW  */
    NULL_KW = 296,                 /* NULL_KW  */
    TRUE_KW = 297,                 /* TRUE_KW  */
    FALSE_KW = 298,                /* FALSE_KW  */
    PUBLIC = 299,                  /* PUBLIC  */
    PROTECTED = 300,               /* PROTECTED  */
    PRIVATE = 301,                 /* PRIVATE  */
    INTERNAL = 302,                /* INTERNAL  */
    PROTECTED_INTERNAL = 303,      /* PROTECTED_INTERNAL  */
    STATIC = 304,                  /* STATIC  */
    CLASS = 305,                   /* CLASS  */
    STRUCT = 306,                  /* STRUCT  */
    ENUM = 307,                    /* ENUM  */
    USING = 308,                   /* USING  */
    NAMESPACE = 309,               /* NAMESPACE  */
    FOREACH = 310,                 /* FOREACH  */
    IN_KW = 311,                   /* IN_KW  */
    OBJECT = 312,                  /* OBJECT  */
    OPERATOR = 313,                /* OPERATOR  */
    VAR = 314,                     /* VAR  */
    TILDE = 315,                   /* TILDE  */
    INTERPOLATED_STRING_START = 316, /* INTERPOLATED_STRING_START  */
    INTERPOLATED_STRING_END = 317, /* INTERPOLATED_STRING_END  */
    INTERPOLATED_STRING_TEXT = 318, /* INTERPOLATED_STRING_TEXT  */
    INTERPOLATED_STRING_EXPR = 319, /* INTERPOLATED_STRING_EXPR  */
    UNARY_MINUS = 320,             /* UNARY_MINUS  */
    UNARY_PLUS = 321,              /* UNARY_PLUS  */
    LOWER_THAN_ELSE = 322          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "myParserPrintf.y"

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

#line 184 "myParserPrintf.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MYPARSERPRINTF_TAB_H_INCLUDED  */
