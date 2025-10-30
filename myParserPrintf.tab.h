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
    NULL_KW = 269,                 /* NULL_KW  */
    TRUE_KW = 270,                 /* TRUE_KW  */
    FALSE_KW = 271,                /* FALSE_KW  */
    PUBLIC = 272,                  /* PUBLIC  */
    PROTECTED = 273,               /* PROTECTED  */
    PRIVATE = 274,                 /* PRIVATE  */
    INTERNAL = 275,                /* INTERNAL  */
    PROTECTED_INTERNAL = 276,      /* PROTECTED_INTERNAL  */
    STATIC = 277,                  /* STATIC  */
    STRUCT = 278,                  /* STRUCT  */
    ENUM = 279,                    /* ENUM  */
    TILDE = 280,                   /* TILDE  */
    INTERPOLATED_STRING_START = 281, /* INTERPOLATED_STRING_START  */
    INTERPOLATED_STRING_END = 282, /* INTERPOLATED_STRING_END  */
    INTERPOLATED_STRING_TEXT = 283, /* INTERPOLATED_STRING_TEXT  */
    INTERPOLATED_STRING_EXPR = 284, /* INTERPOLATED_STRING_EXPR  */
    INT_TYPE = 285,                /* INT_TYPE  */
    FLOAT_TYPE = 286,              /* FLOAT_TYPE  */
    DOUBLE_TYPE = 287,             /* DOUBLE_TYPE  */
    BOOL_TYPE = 288,               /* BOOL_TYPE  */
    CHAR_TYPE = 289,               /* CHAR_TYPE  */
    STRING_TYPE = 290,             /* STRING_TYPE  */
    VOID = 291,                    /* VOID  */
    CLASS = 292,                   /* CLASS  */
    NEW = 293,                     /* NEW  */
    THIS = 294,                    /* THIS  */
    NAMESPACE = 295,               /* NAMESPACE  */
    IF = 296,                      /* IF  */
    ELSE = 297,                    /* ELSE  */
    WHILE = 298,                   /* WHILE  */
    FOR = 299,                     /* FOR  */
    RETURN = 300,                  /* RETURN  */
    BREAK = 301,                   /* BREAK  */
    CONTINUE = 302,                /* CONTINUE  */
    CHAR_LITERAL = 303,            /* CHAR_LITERAL  */
    BOOL_LITERAL_TRUE = 304,       /* BOOL_LITERAL_TRUE  */
    BOOL_LITERAL_FALSE = 305,      /* BOOL_LITERAL_FALSE  */
    INTEGER_LITERAL = 306,         /* INTEGER_LITERAL  */
    DOUBLE_LITERAL = 307,          /* DOUBLE_LITERAL  */
    LESS_EQUAL = 308,              /* LESS_EQUAL  */
    GREATER_EQUAL = 309,           /* GREATER_EQUAL  */
    PLUS_ASSIGN = 310,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 311,            /* MINUS_ASSIGN  */
    MULTIPLY_ASSIGN = 312,         /* MULTIPLY_ASSIGN  */
    DIVISION_ASSIGN = 313,         /* DIVISION_ASSIGN  */
    INCREMENT = 314,               /* INCREMENT  */
    DECREMENT = 315,               /* DECREMENT  */
    LESS = 316,                    /* LESS  */
    GREATER = 317,                 /* GREATER  */
    EQUAL = 318,                   /* EQUAL  */
    NOT_EQUAL = 319,               /* NOT_EQUAL  */
    GREATER_OR_EQUAL = 320,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 321,           /* LESS_OR_EQUAL  */
    OR = 322,                      /* OR  */
    AND = 323,                     /* AND  */
    BITWISE_OR = 324,              /* BITWISE_OR  */
    BITWISE_AND = 325,             /* BITWISE_AND  */
    UNARY_MINUS = 326,             /* UNARY_MINUS  */
    UNARY_PLUS = 327               /* UNARY_PLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "myParserPrintf.y"

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

#line 178 "myParserPrintf.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MYPARSERPRINTF_TAB_H_INCLUDED  */
