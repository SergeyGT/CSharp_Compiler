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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INTEGER = 259,                 /* INTEGER  */
    FLOATING_POINT = 260,          /* FLOATING_POINT  */
    FLOAT_LITERAL = 261,           /* FLOAT_LITERAL  */
    STRING = 262,                  /* STRING  */
    CHARACTER = 263,               /* CHARACTER  */
    DECIMAL_LITERAL = 264,         /* DECIMAL_LITERAL  */
    BOOL_KW = 265,                 /* BOOL_KW  */
    FLOAT_KW = 266,                /* FLOAT_KW  */
    DOUBLE_KW = 267,               /* DOUBLE_KW  */
    DECIMAL_KW = 268,              /* DECIMAL_KW  */
    INT_KW = 269,                  /* INT_KW  */
    CLASS_KW = 270,                /* CLASS_KW  */
    NULL_KW = 271,                 /* NULL_KW  */
    TRUE_KW = 272,                 /* TRUE_KW  */
    FALSE_KW = 273,                /* FALSE_KW  */
    PUBLIC = 274,                  /* PUBLIC  */
    PROTECTED = 275,               /* PROTECTED  */
    PRIVATE = 276,                 /* PRIVATE  */
    INTERNAL = 277,                /* INTERNAL  */
    PROTECTED_INTERNAL = 278,      /* PROTECTED_INTERNAL  */
    STATIC = 279,                  /* STATIC  */
    STRUCT = 280,                  /* STRUCT  */
    ENUM = 281,                    /* ENUM  */
    TILDE = 282,                   /* TILDE  */
    INTERPOLATED_STRING_START = 283, /* INTERPOLATED_STRING_START  */
    INTERPOLATED_STRING_END = 284, /* INTERPOLATED_STRING_END  */
    INTERPOLATED_STRING_TEXT = 285, /* INTERPOLATED_STRING_TEXT  */
    INTERPOLATED_STRING_EXPR = 286, /* INTERPOLATED_STRING_EXPR  */
    PLUS_ASSIGN = 287,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 288,            /* MINUS_ASSIGN  */
    MULTIPLY_ASSIGN = 289,         /* MULTIPLY_ASSIGN  */
    DIVISION_ASSIGN = 290,         /* DIVISION_ASSIGN  */
    INCREMENT = 291,               /* INCREMENT  */
    DECREMENT = 292,               /* DECREMENT  */
    LESS = 293,                    /* LESS  */
    GREATER = 294,                 /* GREATER  */
    EQUAL = 295,                   /* EQUAL  */
    NOT_EQUAL = 296,               /* NOT_EQUAL  */
    GREATER_OR_EQUAL = 297,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 298,           /* LESS_OR_EQUAL  */
    OR = 299,                      /* OR  */
    AND = 300,                     /* AND  */
    BITWISE_OR = 301,              /* BITWISE_OR  */
    BITWISE_AND = 302,             /* BITWISE_AND  */
    UNARY_MINUS = 303,             /* UNARY_MINUS  */
    UNARY_PLUS = 304               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "myParserPrintf.y"

    int _integer;
    char* string_value;
    char* _identifier;
    double _floatingPoint;
    float _floatValue;
    char _character;
	char char_value;
	int _bool;
	
	int bool_value;
    int int_value; 
    double double_value;

    struct AccessExpr* _accessExpr;
    struct ExprNode* _expr;
    struct ExprSeqNode* _exprSeq;
    
    //enum StandardType _standardType;
    struct TypeNode* _type;
    
    struct VarDeclNode* _varDecl;
    struct StmtSeqNode* _stmtSeq;
    struct StmtNode* _stmt;
    
    //enum VisibilityModifier _visibiltyModifier;
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

#line 156 "myParserPrintf.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MYPARSERPRINTF_TAB_H_INCLUDED  */
