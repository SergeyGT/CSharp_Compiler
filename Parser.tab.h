
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
     FOREACH = 270,
     DO = 271,
     SWITCH = 272,
     CASE = 273,
     DEFAULT = 274,
     BREAK = 275,
     CONTINUE = 276,
     RETURN = 277,
     GOTO = 278,
     CLASS = 279,
     STRUCT = 280,
     INTERFACE = 281,
     ENUM = 282,
     PUBLIC = 283,
     PRIVATE = 284,
     PROTECTED = 285,
     INTERNAL = 286,
     STATIC = 287,
     VIRTUAL = 288,
     OVERRIDE = 289,
     ABSTRACT = 290,
     SEALED = 291,
     NEW = 292,
     THIS = 293,
     BASE = 294,
     INT_TYPE = 295,
     FLOAT_TYPE = 296,
     DOUBLE_TYPE = 297,
     BOOL_TYPE = 298,
     CHAR_TYPE = 299,
     STRING_TYPE = 300,
     DECIMAL_TYPE = 301,
     VOID = 302,
     VAR = 303,
     AND = 304,
     OR = 305,
     EQUAL = 306,
     NOT_EQUAL = 307,
     LESS_EQUAL = 308,
     GREATER_EQUAL = 309,
     NAMESPACE = 310,
     USING = 311,
     CONSOLE_WRITELINE = 312,
     CONSOLE_WRITE = 313,
     CONSOLE_READLINE = 314,
     CONSOLE_READ = 315,
     PLUS_ASSIGNMENT = 316,
     MINUS_ASSIGNMENT = 317,
     MUL_ASSIGNMENT = 318,
     DIV_ASSIGNMENT = 319,
     MOD_ASSIGNMENT = 320,
     OR_ASSIGNMENT = 321,
     NULL_COALESCING = 322,
     NAMESPACE_ACCESS = 323,
     NULL_LITERAL = 324,
     INCREMENT = 325,
     DECREMENT = 326,
     GET = 327,
     SET = 328,
     IN = 329,
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


