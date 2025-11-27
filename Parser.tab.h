
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
     NULL_SAFE_DOT = 269,
     NULL_SAFE_INDEX = 270,
     AND = 271,
     OR = 272,
     EQUAL = 273,
     NOT_EQUAL = 274,
     LESS_EQUAL = 275,
     GREATER_EQUAL = 276,
     PLUS_ASSIGNMENT = 277,
     MINUS_ASSIGNMENT = 278,
     IF = 279,
     ELSE = 280,
     WHILE = 281,
     FOR = 282,
     RETURN = 283,
     BREAK = 284,
     CONTINUE = 285,
     CLASS = 286,
     INTERFACE = 287,
     STATIC = 288,
     NEW = 289,
     THIS = 290,
     PUBLIC = 291,
     PRIVATE = 292,
     PROTECTED = 293,
     INTERNAL = 294,
     PROTECTED_INTERNAL = 295,
     INT_TYPE = 296,
     FLOAT_TYPE = 297,
     DOUBLE_TYPE = 298,
     BOOL_TYPE = 299,
     CHAR_TYPE = 300,
     STRING_TYPE = 301,
     VOID_TYPE = 302,
     DECIMAL_TYPE = 303,
     NAMESPACE = 304,
     USING = 305,
     FOREACH = 306,
     IN = 307,
     NULL_LITERAL = 308,
     STRUCT = 309,
     ENUM = 310,
     TILDE = 311,
     INTERPOLATED_STRING_START = 312,
     INTERPOLATED_STRING_END = 313,
     INTERPOLATED_STRING_TEXT = 314,
     INTERPOLATED_STRING_EXPR = 315,
     PLUS_ASSIGN = 316,
     MINUS_ASSIGN = 317,
     MULTIPLY_ASSIGN = 318,
     DIVISION_ASSIGN = 319,
     INCREMENT = 320,
     DECREMENT = 321,
     LESS = 322,
     GREATER = 323,
     GREATER_OR_EQUAL = 324,
     LESS_OR_EQUAL = 325,
     LOWER_THAN_ELSE = 326,
     UMINUS = 327
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
#line 136 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


