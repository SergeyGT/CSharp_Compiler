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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "Parser.y"

    typedef struct {
        char** items;      
        int count;         
    } StringArray;
    
    StringArray* create_string_array(const char* str);
    void add_to_string_array(StringArray* array, const char* str);
    void free_string_array(StringArray* array);

#line 60 "Parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER_LITERAL = 258,         /* INTEGER_LITERAL  */
    FLOAT_LITERAL = 259,           /* FLOAT_LITERAL  */
    DOUBLE_LITERAL = 260,          /* DOUBLE_LITERAL  */
    DECIMAL_LITERAL = 261,         /* DECIMAL_LITERAL  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    CHAR_LITERAL = 263,            /* CHAR_LITERAL  */
    BOOL_LITERAL_TRUE = 264,       /* BOOL_LITERAL_TRUE  */
    BOOL_LITERAL_FALSE = 265,      /* BOOL_LITERAL_FALSE  */
    IDENTIFIER = 266,              /* IDENTIFIER  */
    INTERPOLATED_STRING_TEXT = 267, /* INTERPOLATED_STRING_TEXT  */
    PLUSPLUS = 268,                /* PLUSPLUS  */
    MINUSMINUS = 269,              /* MINUSMINUS  */
    NULL_SAFE_DOT = 270,           /* NULL_SAFE_DOT  */
    NULL_SAFE_INDEX = 271,         /* NULL_SAFE_INDEX  */
    AND = 272,                     /* AND  */
    OR = 273,                      /* OR  */
    EQUAL = 274,                   /* EQUAL  */
    NOT_EQUAL = 275,               /* NOT_EQUAL  */
    LESS_EQUAL = 276,              /* LESS_EQUAL  */
    GREATER_EQUAL = 277,           /* GREATER_EQUAL  */
    PLUS_ASSIGNMENT = 278,         /* PLUS_ASSIGNMENT  */
    MINUS_ASSIGNMENT = 279,        /* MINUS_ASSIGNMENT  */
    IF = 280,                      /* IF  */
    ELSE = 281,                    /* ELSE  */
    WHILE = 282,                   /* WHILE  */
    FOR = 283,                     /* FOR  */
    RETURN = 284,                  /* RETURN  */
    BREAK = 285,                   /* BREAK  */
    CONTINUE = 286,                /* CONTINUE  */
    CLASS = 287,                   /* CLASS  */
    INTERFACE = 288,               /* INTERFACE  */
    STATIC = 289,                  /* STATIC  */
    NEW = 290,                     /* NEW  */
    THIS = 291,                    /* THIS  */
    PUBLIC = 292,                  /* PUBLIC  */
    PRIVATE = 293,                 /* PRIVATE  */
    PROTECTED = 294,               /* PROTECTED  */
    INTERNAL = 295,                /* INTERNAL  */
    PROTECTED_INTERNAL = 296,      /* PROTECTED_INTERNAL  */
    INT_TYPE = 297,                /* INT_TYPE  */
    FLOAT_TYPE = 298,              /* FLOAT_TYPE  */
    DOUBLE_TYPE = 299,             /* DOUBLE_TYPE  */
    BOOL_TYPE = 300,               /* BOOL_TYPE  */
    CHAR_TYPE = 301,               /* CHAR_TYPE  */
    STRING_TYPE = 302,             /* STRING_TYPE  */
    VOID_TYPE = 303,               /* VOID_TYPE  */
    DECIMAL_TYPE = 304,            /* DECIMAL_TYPE  */
    NAMESPACE = 305,               /* NAMESPACE  */
    USING = 306,                   /* USING  */
    FOREACH = 307,                 /* FOREACH  */
    IN = 308,                      /* IN  */
    NULL_LITERAL = 309,            /* NULL_LITERAL  */
    INTERPOLATED_EXPR_END = 310,   /* INTERPOLATED_EXPR_END  */
    STRUCT = 311,                  /* STRUCT  */
    ENUM = 312,                    /* ENUM  */
    TILDE = 313,                   /* TILDE  */
    INTERPOLATED_STRING_START = 314, /* INTERPOLATED_STRING_START  */
    INTERPOLATED_STRING_END = 315, /* INTERPOLATED_STRING_END  */
    PLUS_ASSIGN = 316,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 317,            /* MINUS_ASSIGN  */
    MULTIPLY_ASSIGN = 318,         /* MULTIPLY_ASSIGN  */
    DIVISION_ASSIGN = 319,         /* DIVISION_ASSIGN  */
    INCREMENT = 320,               /* INCREMENT  */
    DECREMENT = 321,               /* DECREMENT  */
    LESS = 322,                    /* LESS  */
    GREATER = 323,                 /* GREATER  */
    GREATER_OR_EQUAL = 324,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 325,           /* LESS_OR_EQUAL  */
    LOWER_THAN_ELSE = 326,         /* LOWER_THAN_ELSE  */
    UMINUS = 327                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;

    StringArray* string_array;

#line 161 "Parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
