
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
     DO = 290,
     CLASS = 291,
     STRUCT = 292,
     ENUM = 293,
     INTERFACE = 294,
     PUBLIC = 295,
     PRIVATE = 296,
     INTERNAL = 297,
     PROTECTED = 298,
     INT_TYPE = 299,
     FLOAT_TYPE = 300,
     DOUBLE_TYPE = 301,
     BOOL_TYPE = 302,
     CHAR_TYPE = 303,
     STRING_TYPE = 304,
     VAR_TYPE = 305,
     VOID_TYPE = 306,
     DECIMAL_TYPE = 307,
     NEW = 308,
     THIS = 309,
     OUT = 310,
     REF = 311,
     NAMESPACE = 312,
     USING = 313,
     ABSTRACT = 314,
     STATIC = 315,
     SEALED = 316,
     VIRTUAL = 317,
     OVERRIDE = 318,
     BASE = 319,
     SWITCH = 320,
     CASE = 321,
     DEFAULT = 322,
     GOTO = 323,
     NULL_LITERAL = 324,
     CONSOLE_METHOD = 325,
     OPERATOR = 326,
     FOREACH = 327,
     IN = 328,
     CONSOLE_WRITELINE = 329,
     CONSOLE_WRITE = 330,
     CONSOLE_READLINE = 331,
     CONSOLE_READ = 332,
     LOWEST = 333,
     THEN = 334,
     UMINUS = 335
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;



/* Line 1676 of yacc.c  */
#line 144 "Parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


