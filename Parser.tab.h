
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
     INTEGER_LITERAL = 258,
     FLOAT_LITERAL = 259,
     DOUBLE_LITERAL = 260,
     DECIMAL_LITERAL = 261,
     STRING_LITERAL = 262,
     CHAR_LITERAL = 263,
     BOOL_LITERAL_TRUE = 264,
     BOOL_LITERAL_FALSE = 265,
     IDENTIFIER = 266,
     PLUSPLUS = 267,
     MINUSMINUS = 268,
     NULL_COALESCE = 269,
     NULL_SAFE_DOT = 270,
     NULL_SAFE_INDEX = 271,
     AND = 272,
     OR = 273,
     EQUAL = 274,
     NOT_EQUAL = 275,
     LESS_EQUAL = 276,
     GREATER_EQUAL = 277,
     PLUS_ASSIGNMENT = 278,
     MINUS_ASSIGNMENT = 279,
     IF = 280,
     ELSE = 281,
     WHILE = 282,
     FOR = 283,
     RETURN = 284,
     BREAK = 285,
     CONTINUE = 286,
     CLASS = 287,
     INTERFACE = 288,
     STATIC = 289,
     NEW = 290,
     THIS = 291,
     PUBLIC = 292,
     PRIVATE = 293,
     PROTECTED = 294,
     INTERNAL = 295,
     PROTECTED_INTERNAL = 296,
     INT_TYPE = 297,
     FLOAT_TYPE = 298,
     DOUBLE_TYPE = 299,
     BOOL_TYPE = 300,
     CHAR_TYPE = 301,
     STRING_TYPE = 302,
     VOID_TYPE = 303,
     DECIMAL_TYPE = 304,
     NAMESPACE = 305,
     USING = 306,
     FOREACH = 307,
     IN = 308,
     NULL_LITERAL = 309,
     BOOL_KW = 310,
     FLOAT_KW = 311,
     DOUBLE_KW = 312,
     DECIMAL_KW = 313,
     INT_KW = 314,
     NULL_KW = 315,
     TRUE_KW = 316,
     FALSE_KW = 317,
     STRUCT = 318,
     ENUM = 319,
     TILDE = 320,
     INTERPOLATED_STRING_START = 321,
     INTERPOLATED_STRING_END = 322,
     INTERPOLATED_STRING_TEXT = 323,
     INTERPOLATED_STRING_EXPR = 324,
     PLUS_ASSIGN = 325,
     MINUS_ASSIGN = 326,
     MULTIPLY_ASSIGN = 327,
     DIVISION_ASSIGN = 328,
     INCREMENT = 329,
     DECREMENT = 330,
     LESS = 331,
     GREATER = 332,
     GREATER_OR_EQUAL = 333,
     LESS_OR_EQUAL = 334,
     BITWISE_OR = 335,
     BITWISE_AND = 336,
     THEN = 337,
     LOWER_THAN_ELSE = 338,
     UMINUS = 339,
     FIELD = 340
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;



/* Line 1676 of yacc.c  */
#line 149 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


