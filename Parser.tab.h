
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
     DO = 270,
     RETURN = 271,
     CLASS = 272,
     PUBLIC = 273,
     PRIVATE = 274,
     PROTECTED = 275,
     STATIC = 276,
     NEW = 277,
     THIS = 278,
     INT_TYPE = 279,
     FLOAT_TYPE = 280,
     DOUBLE_TYPE = 281,
     BOOL_TYPE = 282,
     CHAR_TYPE = 283,
     STRING_TYPE = 284,
     VOID = 285,
     VAR = 286,
     AND = 287,
     OR = 288,
     EQUAL = 289,
     NOT_EQUAL = 290,
     LESS_EQUAL = 291,
     GREATER_EQUAL = 292,
     NAMESPACE = 293,
     USING = 294,
     FOREACH = 295,
     IN = 296,
     PLUS_ASSIGNMENT = 297,
     MINUS_ASSIGNMENT = 298,
     MUL_ASSIGNMENT = 299,
     DIV_ASSIGNMENT = 300,
     MOD_ASSIGNMENT = 301,
     OR_ASSIGNMENT = 302,
     NULL_LITERAL = 303,
     INCREMENT = 304,
     DECREMENT = 305,
     CONSOLE_WRITELINE = 306,
     CONSOLE_WRITE = 307,
     CONSOLE_READLINE = 308,
     CONSOLE_READ = 309,
     DECIMAL_TYPE = 310,
     INTERNAL = 311,
     VIRTUAL = 312,
     OVERRIDE = 313,
     ABSTRACT = 314,
     SEALED = 315,
     BASE = 316,
     GET = 317,
     SET = 318,
     STRUCT = 319,
     INTERFACE = 320,
     ENUM = 321,
     SWITCH = 322,
     CASE = 323,
     DEFAULT = 324,
     BREAK = 325,
     CONTINUE = 326,
     GOTO = 327,
     NULL_COALESCING = 328,
     NAMESPACE_ACCESS = 329,
     LOWEST = 330,
     UMINUS = 331
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 15 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;



/* Line 1676 of yacc.c  */
#line 139 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


