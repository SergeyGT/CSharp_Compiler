
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
     OR_ASSIGNMENT = 269,
     NULL_COALESCE = 270,
     SCOPE = 271,
     AND = 272,
     OR = 273,
     EQUAL = 274,
     NOT_EQUAL = 275,
     LESS_EQUAL = 276,
     GREATER_EQUAL = 277,
     PLUS_ASSIGNMENT = 278,
     MINUS_ASSIGNMENT = 279,
     MUL_ASSIGNMENT = 280,
     DIV_ASSIGNMENT = 281,
     MOD_ASSIGNMENT = 282,
     IF = 283,
     ELSE = 284,
     WHILE = 285,
     FOR = 286,
     RETURN = 287,
     BREAK = 288,
     CONTINUE = 289,
     FOREACH = 290,
     DO = 291,
     CLASS = 292,
     STRUCT = 293,
     ENUM = 294,
     INTERFACE = 295,
     PUBLIC = 296,
     PRIVATE = 297,
     INTERNAL = 298,
     PROTECTED = 299,
     INT_TYPE = 300,
     FLOAT_TYPE = 301,
     DOUBLE_TYPE = 302,
     BOOL_TYPE = 303,
     CHAR_TYPE = 304,
     STRING_TYPE = 305,
     VAR_TYPE = 306,
     VOID_TYPE = 307,
     DECIMAL_TYPE = 308,
     NEW = 309,
     THIS = 310,
     OUT = 311,
     REF = 312,
     NAMESPACE = 313,
     USING = 314,
     ABSTRACT = 315,
     STATIC = 316,
     SEALED = 317,
     VIRTUAL = 318,
     OVERRIDE = 319,
     BASE = 320,
     SWITCH = 321,
     CASE = 322,
     DEFAULT = 323,
     GOTO = 324,
     NULL_LITERAL = 325,
     CONSOLE_METHOD = 326,
     OPERATOR = 327,
     LOWEST = 328,
     THEN = 329,
     UMINUS = 330
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;



/* Line 1676 of yacc.c  */
#line 139 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


