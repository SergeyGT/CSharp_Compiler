
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
     STRING_LITERAL = 261,
     CHAR_LITERAL = 262,
     BOOL_LITERAL_TRUE = 263,
     BOOL_LITERAL_FALSE = 264,
     IDENTIFIER = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     FOR = 269,
     RETURN = 270,
     BREAK = 271,
     CONTINUE = 272,
     CLASS = 273,
     PUBLIC = 274,
     PRIVATE = 275,
     STATIC = 276,
     VOID = 277,
     NEW = 278,
     THIS = 279,
     INT_TYPE = 280,
     FLOAT_TYPE = 281,
     DOUBLE_TYPE = 282,
     BOOL_TYPE = 283,
     CHAR_TYPE = 284,
     STRING_TYPE = 285,
     AND = 286,
     OR = 287,
     EQUAL = 288,
     NOT_EQUAL = 289,
     LESS_EQUAL = 290,
     GREATER_EQUAL = 291,
     NAMESPACE = 292,
     USING = 293,
     VAR = 294,
     OUT = 295,
     REF = 296,
     INTERNAL = 297,
     STRUCT = 298,
     ENUM = 299,
     INTERFACE = 300,
     ABSTRACT = 301,
     SEALED = 302,
     VIRTUAL = 303,
     OVERRIDE = 304,
     BASE = 305,
     SWITCH = 306,
     CASE = 307,
     DEFAULT = 308,
     GOTO = 309,
     PLUS_ASSIGNMENT = 310,
     MINUS_ASSIGNMENT = 311,
     MUL_ASSIGNMENT = 312,
     DIV_ASSIGNMENT = 313,
     MOD_ASSIGNMENT = 314,
     NULL_LITERAL = 315,
     CONSOLE_METHOD = 316,
     OPERATOR = 317,
     LOWEST = 318,
     UMINUS = 319
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;



/* Line 1676 of yacc.c  */
#line 127 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


