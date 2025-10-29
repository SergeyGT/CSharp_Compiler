
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Parser.y"

#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern FILE* yyin;

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
}


/* Line 189 of yacc.c  */
#line 86 "Parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 15 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;



/* Line 214 of yacc.c  */
#line 209 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "Parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNRULES -- Number of states.  */
#define YYNSTATES  352

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,     2,     2,     2,    83,     2,     2,
      89,    90,    81,    79,    93,    80,    86,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,    94,
      77,    76,    78,    96,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    87,     2,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,    92,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    20,    26,
      32,    39,    45,    54,    62,    63,    66,    68,    70,    72,
      74,    79,    86,    88,    90,    92,    94,    95,    97,   101,
     106,   108,   110,   112,   114,   116,   118,   120,   122,   124,
     126,   134,   142,   151,   160,   169,   178,   187,   196,   203,
     211,   216,   219,   222,   223,   225,   227,   231,   234,   238,
     239,   242,   245,   247,   249,   251,   253,   255,   257,   259,
     261,   263,   265,   267,   269,   271,   277,   285,   291,   301,
     310,   319,   327,   335,   336,   339,   344,   348,   349,   351,
     353,   354,   356,   361,   364,   368,   371,   374,   380,   386,
     391,   396,   400,   406,   412,   415,   419,   421,   425,   429,
     433,   437,   441,   445,   449,   453,   457,   461,   465,   469,
     473,   477,   481,   485,   489,   493,   496,   499,   502,   505,
     508,   511,   517,   525,   533,   539,   544,   551,   559,   563,
     570,   577,   583,   590,   592,   594,   596,   598,   600,   602,
     604,   606,   608,   610,   612,   616,   617,   619,   623,   624,
     626
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      98,     0,    -1,    -1,    98,    99,    -1,    98,   100,    -1,
      98,   101,    -1,    98,   117,    -1,    56,    10,    94,    -1,
      56,    10,    76,    10,    94,    -1,    55,    10,    91,    98,
      92,    -1,    24,    10,    91,   102,    92,    94,    -1,    24,
      10,    91,   102,    92,    -1,    24,    10,    95,    10,    91,
     102,    92,    94,    -1,    24,    10,    95,    10,    91,   102,
      92,    -1,    -1,   102,   103,    -1,   104,    -1,   108,    -1,
     110,    -1,   109,    -1,   105,   106,    10,    94,    -1,   105,
     106,    10,    76,   135,    94,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    -1,   107,    -1,   107,    87,    88,
      -1,   107,    87,    93,    88,    -1,    10,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,   105,   106,    10,    89,
     112,    90,   115,    -1,   105,    47,    10,    89,   112,    90,
     115,    -1,   105,    33,   106,    10,    89,   112,    90,   115,
      -1,   105,    33,    47,    10,    89,   112,    90,   115,    -1,
     105,    34,   106,    10,    89,   112,    90,   115,    -1,   105,
      34,    47,    10,    89,   112,    90,   115,    -1,   105,    32,
     106,    10,    89,   112,    90,   115,    -1,   105,    32,    47,
      10,    89,   112,    90,   115,    -1,   105,    10,    89,   112,
      90,   115,    -1,   105,   106,    10,    91,   111,    92,    94,
      -1,    72,    94,    73,    94,    -1,    72,    94,    -1,    73,
      94,    -1,    -1,   113,    -1,   114,    -1,   113,    93,   114,
      -1,   106,    10,    -1,    91,   116,    92,    -1,    -1,   116,
     117,    -1,   135,    94,    -1,   118,    -1,   119,    -1,   120,
      -1,   121,    -1,   122,    -1,   123,    -1,   129,    -1,   130,
      -1,   131,    -1,   132,    -1,   133,    -1,   115,    -1,    94,
      -1,    11,    89,   135,    90,   117,    -1,    11,    89,   135,
      90,   117,    12,   117,    -1,    13,    89,   135,    90,   117,
      -1,    14,    89,   126,    94,   135,    94,   127,    90,   117,
      -1,    15,    89,   106,    10,    74,   135,    90,   117,    -1,
      15,    89,    48,    10,    74,   135,    90,   117,    -1,    16,
     117,    13,    89,   135,    90,    94,    -1,    17,    89,   135,
      90,    91,   124,    92,    -1,    -1,   124,   125,    -1,    18,
     135,    95,   116,    -1,    19,    95,   116,    -1,    -1,   128,
      -1,   135,    -1,    -1,   135,    -1,   106,    10,    76,   135,
      -1,    22,    94,    -1,    22,   135,    94,    -1,    20,    94,
      -1,    21,    94,    -1,    57,    89,   135,    90,    94,    -1,
      58,    89,   135,    90,    94,    -1,    59,    89,    90,    94,
      -1,    60,    89,    90,    94,    -1,   106,    10,    94,    -1,
     106,    10,    76,   135,    94,    -1,   106,    10,    76,   134,
      94,    -1,    91,    92,    -1,    91,   138,    92,    -1,   136,
      -1,   135,    79,   135,    -1,   135,    80,   135,    -1,   135,
      81,   135,    -1,   135,    82,   135,    -1,   135,    83,   135,
      -1,   135,    77,   135,    -1,   135,    78,   135,    -1,   135,
      51,   135,    -1,   135,    52,   135,    -1,   135,    53,   135,
      -1,   135,    54,   135,    -1,   135,    49,   135,    -1,   135,
      50,   135,    -1,   135,    76,   135,    -1,   135,    61,   135,
      -1,   135,    62,   135,    -1,   135,    63,   135,    -1,   135,
      64,   135,    -1,    84,   135,    -1,    80,   135,    -1,    70,
     135,    -1,    71,   135,    -1,   135,    70,    -1,   135,    71,
      -1,    37,   107,    87,   135,    88,    -1,    37,   107,    87,
     135,    93,   135,    88,    -1,    37,   107,    87,    88,    87,
     135,    88,    -1,    37,    10,    89,   137,    90,    -1,   135,
      87,   135,    88,    -1,   135,    87,   135,    93,   135,    88,
      -1,   135,    87,   135,    88,    87,   135,    88,    -1,   135,
      86,    10,    -1,   135,    86,    10,    89,   137,    90,    -1,
      39,    86,    10,    89,   137,    90,    -1,    37,   107,    87,
      88,   134,    -1,    37,   107,    87,   135,    88,   134,    -1,
      10,    -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    69,    -1,    38,    -1,
      39,    -1,    89,   135,    90,    -1,    -1,   135,    -1,   137,
      93,   135,    -1,    -1,   135,    -1,   138,    93,   135,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    65,    66,    67,    68,    71,    72,    75,
      80,    82,    84,    86,    90,    91,    95,    96,    97,    98,
     102,   104,   109,   110,   111,   112,   113,   117,   118,   119,
     120,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     138,   140,   142,   144,   146,   148,   150,   152,   164,   169,
     174,   175,   176,   179,   180,   184,   185,   189,   192,   195,
     196,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   217,   218,   222,   226,   231,
     233,   238,   243,   247,   248,   252,   253,   266,   267,   268,
     271,   272,   276,   280,   281,   285,   289,   293,   294,   295,
     296,   300,   301,   302,   307,   308,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   366,   367,   368,   371,   372,
     373
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_LITERAL", "FLOAT_LITERAL",
  "DOUBLE_LITERAL", "STRING_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL_TRUE",
  "BOOL_LITERAL_FALSE", "IDENTIFIER", "IF", "ELSE", "WHILE", "FOR",
  "FOREACH", "DO", "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE",
  "RETURN", "GOTO", "CLASS", "STRUCT", "INTERFACE", "ENUM", "PUBLIC",
  "PRIVATE", "PROTECTED", "INTERNAL", "STATIC", "VIRTUAL", "OVERRIDE",
  "ABSTRACT", "SEALED", "NEW", "THIS", "BASE", "INT_TYPE", "FLOAT_TYPE",
  "DOUBLE_TYPE", "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE", "DECIMAL_TYPE",
  "VOID", "VAR", "AND", "OR", "EQUAL", "NOT_EQUAL", "LESS_EQUAL",
  "GREATER_EQUAL", "NAMESPACE", "USING", "CONSOLE_WRITELINE",
  "CONSOLE_WRITE", "CONSOLE_READLINE", "CONSOLE_READ", "PLUS_ASSIGNMENT",
  "MINUS_ASSIGNMENT", "MUL_ASSIGNMENT", "DIV_ASSIGNMENT", "MOD_ASSIGNMENT",
  "OR_ASSIGNMENT", "NULL_COALESCING", "NAMESPACE_ACCESS", "NULL_LITERAL",
  "INCREMENT", "DECREMENT", "GET", "SET", "IN", "LOWEST", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "'.'", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "','", "';'", "':'", "'?'", "$accept",
  "program", "using_directive", "namespace_declaration",
  "class_declaration", "class_members", "class_member",
  "field_declaration", "access_modifier", "type", "simple_type",
  "method_declaration", "constructor_declaration", "property_declaration",
  "get_set", "parameters", "parameter_list", "parameter", "block",
  "statements", "statement", "if_statement", "while_statement",
  "for_statement", "foreach_statement", "do_while_statement",
  "switch_statement", "case_entries", "case_entry", "for_initializer",
  "for_iterator", "variable_declaration_no_semicolon", "return_statement",
  "break_statement", "continue_statement", "console_statement",
  "variable_declaration", "array_initializer", "expression", "primary",
  "argument_list", "expression_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    61,    60,    62,    43,
      45,    42,    47,    37,    33,   331,    46,    91,    93,    40,
      41,   123,   125,    44,    59,    58,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    98,    98,    98,    98,    99,    99,   100,
     101,   101,   101,   101,   102,   102,   103,   103,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   106,   106,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   110,
     111,   111,   111,   112,   112,   113,   113,   114,   115,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   118,   119,   120,   121,
     121,   122,   123,   124,   124,   125,   125,   126,   126,   126,
     127,   127,   128,   129,   129,   130,   131,   132,   132,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   138,   138,
     138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     3,     5,     5,
       6,     5,     8,     7,     0,     2,     1,     1,     1,     1,
       4,     6,     1,     1,     1,     1,     0,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     7,     8,     8,     8,     8,     8,     8,     6,     7,
       4,     2,     2,     0,     1,     1,     3,     2,     3,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     5,     9,     8,
       8,     7,     7,     0,     2,     4,     3,     0,     1,     1,
       0,     1,     4,     2,     3,     2,     2,     5,     5,     4,
       4,     3,     5,     5,     2,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     5,     7,     7,     5,     4,     6,     7,     3,     6,
       6,     5,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     3,     0,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   144,   145,   146,   147,   148,   149,   150,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,    31,    32,    33,    34,    35,    36,
      37,    38,    39,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,    59,    74,     3,     4,     5,
       0,    27,    73,     6,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,   106,     0,     0,    87,
       0,     0,     0,    95,    96,   143,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   128,
     126,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,    88,    89,    30,    39,     0,     0,     0,
      94,    14,     0,   155,     0,     0,     2,     0,     7,     0,
       0,     0,     0,   154,    58,    60,     0,   101,    28,     0,
     118,   119,   114,   115,   116,   117,   121,   122,   123,   124,
     120,   112,   113,   107,   108,   109,   110,   111,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
     156,     0,     0,     0,   155,     0,     0,     0,     0,    99,
     100,   158,     0,     0,    29,   155,   135,     0,    75,    77,
       0,     0,     0,     0,     0,    83,    22,    23,    24,    25,
      11,    15,    16,     0,    17,    19,    18,    14,   134,     0,
       0,   141,   131,     0,     0,     9,     8,    97,    98,   104,
     159,     0,   103,   102,     0,     0,     0,    92,    90,     0,
       0,     0,     0,    30,     0,     0,     0,    38,     0,    26,
     157,     0,   142,     0,   140,   105,     0,   139,   136,    76,
       0,    91,     0,     0,    81,     0,     0,    82,    84,    53,
      38,     0,    38,     0,    38,     0,     0,     0,    13,   133,
     132,   160,     0,    80,    79,     0,    59,     0,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    53,     0,    53,
       0,    20,    78,    59,    86,    57,     0,     0,    53,    53,
      53,    53,    53,    53,     0,     0,     0,     0,     0,     0,
      85,    48,    56,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    41,    40,     0,    49,    47,    46,    43,    42,    45,
      44,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    47,    48,    49,   178,   211,   212,   213,    50,
      51,   214,   215,   216,   319,   288,   289,   290,    52,    93,
     145,    54,    55,    56,    57,    58,    59,   242,   268,   122,
     260,   123,    60,    61,    62,    63,    64,   192,    65,    66,
     181,   231
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -270
static const yytype_int16 yypact[] =
{
    -270,   297,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
      15,   -38,   -30,   -25,   -14,   573,    -7,   -11,     0,    39,
      85,   110,  -270,    18,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,    96,    97,    28,    29,    35,    36,  -270,
     726,   726,   726,   726,   726,  -270,  -270,  -270,  -270,  -270,
     116,    40,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,   789,  -270,   726,   726,   668,
     374,   117,   726,  -270,  -270,  -270,  -270,   828,   -75,    42,
      45,   119,    44,   -67,   726,   726,    46,    47,    62,    62,
     -48,   -48,  1074,   481,   -61,   -52,   726,   726,   726,   726,
     726,   726,   726,   726,   726,   726,  -270,  -270,   726,   726,
     726,   726,   726,   726,   726,   726,   128,   726,  -270,  1116,
    1158,   136,    53,  -270,  1572,  -270,   149,   150,    73,  1200,
    -270,  -270,   153,   726,   689,    76,  -270,   156,  -270,  1242,
    1284,    74,    77,  -270,  -270,  -270,   599,  -270,  -270,    79,
    1612,   168,   245,   245,    94,    94,  1572,  1572,  1572,  1572,
    1572,    94,    94,   -20,   -20,   -48,   -48,   -48,    89,   984,
     573,   573,   106,   726,   112,   113,   726,    98,   -27,   101,
    1572,   -71,   -37,  1029,   726,   389,    99,   100,   103,  -270,
    -270,   195,   115,   867,  -270,   726,  -270,   726,   183,  -270,
     726,   906,   726,   726,  1326,  -270,  -270,  -270,  -270,  -270,
     118,  -270,  -270,  1628,  -270,  -270,  -270,  -270,  -270,   726,
     726,  -270,   122,   726,   -53,  -270,  -270,  -270,  -270,  -270,
    1572,   -23,  -270,  -270,   -22,  1452,   573,  1572,   726,  1368,
    1410,   120,   -13,   121,   464,   677,   739,   196,   205,   -18,
    1572,  1492,  -270,  1532,  -270,  -270,   726,  -270,  -270,  -270,
     126,  1572,   573,   573,  -270,   726,   123,  -270,  -270,  1637,
     213,   214,   215,   220,   221,   226,   148,   -68,   118,  -270,
    -270,  1572,   573,  -270,  -270,   750,  -270,   228,   151,   146,
    -270,   154,   170,   171,   174,   184,   185,  1637,   726,  1637,
       8,  -270,  -270,  -270,   573,  -270,   166,  1637,  1637,  1637,
    1637,  1637,  1637,  1637,   152,   945,   186,   189,   191,   197,
     573,  -270,  -270,   187,   188,   198,   219,   225,   230,   166,
    -270,   166,   167,  -270,   222,   166,   166,   166,   166,   166,
     166,  -270,  -270,   235,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,   194,  -270,  -270,  -270,   129,  -270,  -270,  -270,   -17,
     312,  -270,  -270,  -270,  -270,   -41,  -270,    41,  1380,  -269,
      -1,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -164,   -12,  -270,
    -160,  -270
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -31
static const yytype_int16 yytable[] =
{
      53,   206,   207,   208,   209,   265,   266,    77,   298,   137,
     206,   207,   208,   209,    71,   146,   131,   304,   221,   218,
     132,   299,   219,   300,   224,   -30,   301,   138,    88,    89,
      90,    91,    92,   147,   320,   234,   148,   254,   116,   117,
     219,   149,     3,     4,     5,     6,     7,     8,     9,    75,
     220,    67,   121,   127,   191,   119,   120,   124,   252,    68,
     129,   113,   114,   115,    69,   210,   116,   117,   257,   255,
     256,   219,   139,   140,   278,    70,    21,    22,    23,   267,
     317,   318,    72,    73,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,    74,    78,   160,   161,   162,   163,
     164,   165,   166,   167,    81,   169,    82,    83,    39,    40,
      41,    96,    97,    98,    99,   100,   101,    84,    85,    42,
      79,   180,   183,    43,    86,    87,    94,    95,    44,   135,
     128,   133,   134,    76,   193,   136,   141,   142,   168,   109,
     110,   111,   112,   113,   114,   115,   172,   173,   116,   117,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   174,
     175,   201,   176,   179,   204,   184,   186,   194,   189,   198,
     199,   190,   180,   111,   112,   113,   114,   115,   195,   230,
     116,   117,   200,   180,    53,   235,   202,   203,   237,   205,
     239,   240,   217,   226,   227,   236,   248,   228,     3,     4,
       5,     6,     7,     8,     9,    75,   276,   250,   251,   232,
     269,   253,   -31,   191,   264,   277,   282,    96,   286,    98,
      99,   100,   101,   291,   292,   293,   261,   271,   273,   275,
     294,   295,    21,    22,    23,   259,   296,   297,   305,   307,
     343,   306,   329,   308,   281,   109,   110,   111,   112,   113,
     114,   115,   287,   285,   116,   117,   314,    45,   316,   309,
     310,   283,   284,   311,    39,    40,    41,   323,   324,   325,
     326,   327,   328,   312,   313,    42,   331,   335,   336,    43,
     287,   302,   287,   332,    44,   333,   315,   229,   337,   334,
     287,   287,   287,   287,   287,   287,   287,     2,   100,   101,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   338,
      12,    13,    14,    15,    16,   339,   344,    17,    18,    19,
     340,    20,   109,   110,   111,   112,   113,   114,   115,   351,
     185,   116,   117,    80,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   249,     0,   322,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,    43,     0,     0,   125,     0,    44,     0,    45,     0,
       0,    46,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,    14,    15,    16,     0,     0,    17,
      18,    19,     0,    20,    24,    25,    26,    27,    28,    29,
      30,    31,   126,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,    43,   125,     0,     0,     0,    44,     0,
      45,   225,     0,    46,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,     0,
       0,    17,    18,    19,    24,    25,    26,    27,    28,    29,
      30,   270,    32,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,    43,     0,     0,     0,     0,
      44,     0,    45,   144,     0,    46,     3,     4,     5,     6,
       7,     8,     9,    10,    11,     0,    12,    13,    14,    15,
      16,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    75,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,    38,     0,     0,    21,    22,    23,     0,
       0,     0,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,    43,     0,     0,
       0,     0,    44,     0,    45,     0,     0,    46,    39,    40,
      41,     3,     4,     5,     6,     7,     8,     9,    10,    42,
       0,     0,     0,    43,     0,     0,     0,   125,    44,     0,
     191,     0,     3,     4,     5,     6,     7,     8,     9,    75,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    24,    25,    26,
      27,    28,    29,    30,   272,    32,    21,    22,    23,     3,
       4,     5,     6,     7,     8,     9,    75,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,   125,
       0,     0,    43,     0,     0,     0,     0,    44,    39,    40,
      41,     0,     0,    21,    22,    23,     0,     0,     0,    42,
       0,     0,     0,    43,     0,     0,     0,   182,    44,    24,
      25,    26,    27,    28,    29,    30,   274,    32,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,    96,
      97,    98,    99,   100,   101,     0,    42,     0,     0,     0,
      43,   102,   103,   104,   105,    44,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   116,   117,    96,    97,
      98,    99,   100,   101,     0,   303,     0,     0,     0,     0,
     102,   103,   104,   105,     0,     0,     0,     0,     0,   106,
     107,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,   116,   117,    96,    97,    98,
      99,   100,   101,   118,     0,     0,     0,     0,     0,   102,
     103,   104,   105,     0,     0,     0,     0,     0,   106,   107,
       0,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   116,   117,    96,    97,    98,    99,
     100,   101,   130,     0,     0,     0,     0,     0,   102,   103,
     104,   105,     0,     0,     0,     0,     0,   106,   107,     0,
       0,     0,     0,   108,   109,   110,   111,   112,   113,   114,
     115,     0,     0,   116,   117,    96,    97,    98,    99,   100,
     101,   233,     0,     0,     0,     0,     0,   102,   103,   104,
     105,     0,     0,     0,     0,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,   116,   117,    96,    97,    98,    99,   100,   101,
     238,     0,     0,     0,     0,     0,   102,   103,   104,   105,
       0,     0,     0,     0,     0,   106,   107,     0,     0,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
       0,   116,   117,    96,    97,    98,    99,   100,   101,   330,
       0,     0,     0,     0,     0,   102,   103,   104,   105,     0,
       0,     0,     0,     0,   106,   107,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,   196,     0,     0,     0,     0,   197,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
     102,   103,   104,   105,     0,     0,     0,     0,     0,   106,
     107,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,   116,   117,   222,     0,     0,
       0,     0,   223,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,     0,
       0,     0,     0,     0,   106,   107,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,     0,     0,   143,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,     0,     0,     0,     0,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,   116,   117,     0,     0,   170,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   105,     0,     0,     0,     0,     0,   106,   107,
       0,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   116,   117,     0,     0,   171,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,     0,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   116,   117,     0,     0,
     177,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,     0,     0,     0,
       0,     0,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
       0,     0,   187,    96,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,     0,
       0,     0,     0,     0,   106,   107,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,     0,     0,   188,    96,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,     0,     0,     0,     0,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,   116,   117,     0,     0,   241,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   105,     0,     0,     0,     0,     0,   106,   107,
       0,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   116,   117,     0,     0,   262,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,     0,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   116,   117,     0,     0,
     263,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,     0,     0,     0,
       0,     0,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
     258,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,     0,     0,     0,
       0,     0,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
     279,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,     0,     0,     0,
       0,     0,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
     280,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,     0,   243,     0,
       0,     0,   106,   107,     0,     0,     0,   125,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
     244,   245,   246,    98,    99,   100,   101,     0,    24,    25,
      26,    27,    28,    29,    30,   247,    32,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   321,     0,     0,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,   342,     0,     0,     0,   345,   346,   347,   348,   349,
     350
};

static const yytype_int16 yycheck[] =
{
       1,    28,    29,    30,    31,    18,    19,    19,    76,    76,
      28,    29,    30,    31,    15,    76,    91,   286,   182,    90,
      95,    89,    93,    91,   184,    10,    94,    94,    40,    41,
      42,    43,    44,    94,   303,   195,    88,    90,    86,    87,
      93,    93,     3,     4,     5,     6,     7,     8,     9,    10,
      87,    89,    69,    70,    91,    67,    68,    69,   222,    89,
      72,    81,    82,    83,    89,    92,    86,    87,    90,    92,
      93,    93,    84,    85,    92,    89,    37,    38,    39,    92,
      72,    73,    89,    94,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    94,    10,   108,   109,   110,   111,
     112,   113,   114,   115,    86,   117,    10,    10,    69,    70,
      71,    49,    50,    51,    52,    53,    54,    89,    89,    80,
      10,   133,   134,    84,    89,    89,    10,    87,    89,    10,
      13,    89,    87,    94,   146,    91,    90,    90,    10,    77,
      78,    79,    80,    81,    82,    83,    10,    94,    86,    87,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    10,
      10,   173,    89,    10,   176,    89,    10,    88,    94,   170,
     171,    94,   184,    79,    80,    81,    82,    83,    89,   191,
      86,    87,    76,   195,   185,   197,    74,    74,   200,    91,
     202,   203,    91,    94,    94,    12,   213,    94,     3,     4,
       5,     6,     7,     8,     9,    10,    10,   219,   220,    94,
      89,   223,    94,    91,    94,    10,    90,    49,    95,    51,
      52,    53,    54,    10,    10,    10,   238,   244,   245,   246,
      10,    10,    37,    38,    39,   236,    10,    89,    10,    93,
      73,    90,    90,    89,   256,    77,    78,    79,    80,    81,
      82,    83,   269,   265,    86,    87,   297,    91,   299,    89,
      89,   262,   263,    89,    69,    70,    71,   308,   309,   310,
     311,   312,   313,    89,    89,    80,    90,    90,    90,    84,
     297,   282,   299,    94,    89,    94,   298,    92,    90,    92,
     307,   308,   309,   310,   311,   312,   313,     0,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    90,
      13,    14,    15,    16,    17,    90,    94,    20,    21,    22,
      90,    24,    77,    78,    79,    80,    81,    82,    83,    94,
     136,    86,    87,    21,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   217,    -1,   307,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    -1,    -1,    10,    -1,    89,    -1,    91,    -1,
      -1,    94,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    -1,    24,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    10,    -1,    -1,    -1,    89,    -1,
      91,    92,    -1,    94,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    -1,
      -1,    20,    21,    22,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    -1,    91,    92,    -1,    94,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    -1,    91,    -1,    -1,    94,    69,    70,
      71,     3,     4,     5,     6,     7,     8,     9,    10,    80,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    10,    89,    -1,
      91,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    37,    38,    39,     3,
       4,     5,     6,     7,     8,     9,    10,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    10,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    69,    70,
      71,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    49,
      50,    51,    52,    53,    54,    -1,    80,    -1,    -1,    -1,
      84,    61,    62,    63,    64,    89,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    49,    50,
      51,    52,    53,    54,    -1,    95,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    49,    50,    51,
      52,    53,    54,    94,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    49,    50,    51,    52,
      53,    54,    94,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    49,    50,    51,    52,    53,
      54,    94,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    49,    50,    51,    52,    53,    54,
      94,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    49,    50,    51,    52,    53,    54,    94,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    93,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    90,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    90,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      90,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    90,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    90,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    90,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      90,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      88,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      88,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      88,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    10,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    10,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      32,    33,    34,    51,    52,    53,    54,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   306,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,   331,    -1,    -1,    -1,   335,   336,   337,   338,   339,
     340
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    98,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    13,    14,    15,    16,    17,    20,    21,    22,
      24,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    55,    56,    57,    58,    59,    60,    69,
      70,    71,    80,    84,    89,    91,    94,    99,   100,   101,
     106,   107,   115,   117,   118,   119,   120,   121,   122,   123,
     129,   130,   131,   132,   133,   135,   136,    89,    89,    89,
      89,   117,    89,    94,    94,    10,    94,   135,    10,    10,
     107,    86,    10,    10,    89,    89,    89,    89,   135,   135,
     135,   135,   135,   116,    10,    87,    49,    50,    51,    52,
      53,    54,    61,    62,    63,    64,    70,    71,    76,    77,
      78,    79,    80,    81,    82,    83,    86,    87,    94,   135,
     135,   106,   126,   128,   135,    10,    48,   106,    13,   135,
      94,    91,    95,    89,    87,    10,    91,    76,    94,   135,
     135,    90,    90,    90,    92,   117,    76,    94,    88,    93,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,    10,   135,
      90,    90,    10,    94,    10,    10,    89,    90,   102,    10,
     135,   137,    88,   135,    89,    98,    10,    90,    90,    94,
      94,    91,   134,   135,    88,    89,    88,    93,   117,   117,
      76,   135,    74,    74,   135,    91,    28,    29,    30,    31,
      92,   103,   104,   105,   108,   109,   110,    91,    90,    93,
      87,   134,    88,    93,   137,    92,    94,    94,    94,    92,
     135,   138,    94,    94,   137,   135,    12,   135,    94,   135,
     135,    90,   124,    10,    32,    33,    34,    47,   106,   102,
     135,   135,   134,   135,    90,    92,    93,    90,    88,   117,
     127,   135,    90,    90,    94,    18,    19,    92,   125,    89,
      47,   106,    47,   106,    47,   106,    10,    10,    92,    88,
      88,   135,    90,   117,   117,   135,    95,   106,   112,   113,
     114,    10,    10,    10,    10,    10,    10,    89,    76,    89,
      91,    94,   117,    95,   116,    10,    90,    93,    89,    89,
      89,    89,    89,    89,   112,   135,   112,    72,    73,   111,
     116,   115,   114,   112,   112,   112,   112,   112,   112,    90,
      94,    90,    94,    94,    92,    90,    90,    90,    90,    90,
      90,   115,   115,    73,    94,   115,   115,   115,   115,   115,
     115,    94
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:

/* Line 1455 of yacc.c  */
#line 71 "Parser.y"
    { printf(" Using directive: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 72 "Parser.y"
    { printf(" Using alias: %s = %s\n", (yyvsp[(2) - (5)].string_value), (yyvsp[(4) - (5)].string_value)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "Parser.y"
    { printf(" Namespace: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 81 "Parser.y"
    { printf(" Class: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 83 "Parser.y"
    { printf(" Class: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 85 "Parser.y"
    { printf(" Class %s inherits from %s\n", (yyvsp[(2) - (8)].string_value), (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 87 "Parser.y"
    { printf(" Class %s inherits from %s\n", (yyvsp[(2) - (7)].string_value), (yyvsp[(4) - (7)].string_value)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 103 "Parser.y"
    { printf(" Field: %s\n", (yyvsp[(3) - (4)].string_value)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 105 "Parser.y"
    { printf(" Field with init: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 109 "Parser.y"
    { printf(" Public "); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 110 "Parser.y"
    { printf(" Private "); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 111 "Parser.y"
    { printf(" Protected "); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 112 "Parser.y"
    { printf(" Internal "); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 113 "Parser.y"
    { printf(" Default "); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "Parser.y"
    { printf(" array type\n"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 119 "Parser.y"
    { printf(" multidimensional array type\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 120 "Parser.y"
    { printf(" user type\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 124 "Parser.y"
    { printf(" Type: int "); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 125 "Parser.y"
    { printf(" Type: float "); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 126 "Parser.y"
    { printf(" Type: double "); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 127 "Parser.y"
    { printf(" Type: bool "); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 128 "Parser.y"
    { printf(" Type: char "); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 129 "Parser.y"
    { printf(" Type: string "); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 130 "Parser.y"
    { printf(" Type: decimal "); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 131 "Parser.y"
    { printf(" Type: void "); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 132 "Parser.y"
    { printf(" Type: var "); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 139 "Parser.y"
    { printf(" Method: %s\n", (yyvsp[(3) - (7)].string_value)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 141 "Parser.y"
    { printf(" Method: void %s\n", (yyvsp[(3) - (7)].string_value)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 143 "Parser.y"
    { printf(" Virtual method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 145 "Parser.y"
    { printf(" Virtual void method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    { printf(" Override method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 149 "Parser.y"
    { printf(" Override void method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 151 "Parser.y"
    { printf(" Static method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 153 "Parser.y"
    { printf(" Static void method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 165 "Parser.y"
    { printf(" Constructor: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 170 "Parser.y"
    { printf(" Property: %s\n", (yyvsp[(3) - (7)].string_value)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    { printf(" Get and set\n"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { printf(" Get only\n"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    { printf(" Set only\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    { printf(" Parameter\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 192 "Parser.y"
    { printf(" Block\n"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 200 "Parser.y"
    { printf(" Expression statement\n"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 213 "Parser.y"
    { printf(" Empty statement\n"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 217 "Parser.y"
    { printf(" If statement\n"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 218 "Parser.y"
    { printf(" If-else statement\n"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 222 "Parser.y"
    { printf(" While statement\n"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 227 "Parser.y"
    { printf(" For statement\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 232 "Parser.y"
    { printf(" Foreach statement\n"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 234 "Parser.y"
    { printf(" Foreach statement with var\n"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 239 "Parser.y"
    { printf(" Do-while statement\n"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 244 "Parser.y"
    { printf(" Switch statement\n"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 252 "Parser.y"
    { printf(" Case entry\n"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
    { printf(" Default entry\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 276 "Parser.y"
    { printf(" For loop variable: %s\n", (yyvsp[(2) - (4)].string_value)); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 280 "Parser.y"
    { printf(" Return;\n"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 281 "Parser.y"
    { printf(" Return with value\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 285 "Parser.y"
    { printf(" Break;\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 289 "Parser.y"
    { printf(" Continue;\n"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 293 "Parser.y"
    { printf(" Console.WriteLine\n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    { printf(" Console.Write\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 295 "Parser.y"
    { printf(" Console.ReadLine\n"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 296 "Parser.y"
    { printf(" Console.Read\n"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 300 "Parser.y"
    { printf(" Variable: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 301 "Parser.y"
    { printf(" Variable with init: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 302 "Parser.y"
    { printf(" Array variable with initializer: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 307 "Parser.y"
    { printf(" Empty array initializer\n"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 308 "Parser.y"
    { printf(" Array initializer\n"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 313 "Parser.y"
    { printf(" Addition\n"); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 314 "Parser.y"
    { printf(" Subtraction\n"); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 315 "Parser.y"
    { printf(" Multiplication\n"); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 316 "Parser.y"
    { printf(" Division\n"); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 317 "Parser.y"
    { printf(" Modulo\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 318 "Parser.y"
    { printf(" Less than\n"); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 319 "Parser.y"
    { printf(" Greater than\n"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 320 "Parser.y"
    { printf(" Equals\n"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 321 "Parser.y"
    { printf(" Not equals\n"); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 322 "Parser.y"
    { printf(" Less or equal\n"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 323 "Parser.y"
    { printf(" Greater or equal\n"); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 324 "Parser.y"
    { printf(" Logical AND\n"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 325 "Parser.y"
    { printf(" Logical OR\n"); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 326 "Parser.y"
    { printf(" Assignment\n"); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 327 "Parser.y"
    { printf(" Plus assignment\n"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 328 "Parser.y"
    { printf(" Minus assignment\n"); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 329 "Parser.y"
    { printf(" Multiply assignment\n"); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 330 "Parser.y"
    { printf(" Divide assignment\n"); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 331 "Parser.y"
    { printf(" Logical NOT\n"); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 332 "Parser.y"
    { printf(" Unary minus\n"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 333 "Parser.y"
    { printf(" Pre-increment\n"); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 334 "Parser.y"
    { printf(" Pre-decrement\n"); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 335 "Parser.y"
    { printf(" Post-increment\n"); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 336 "Parser.y"
    { printf(" Post-decrement\n"); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 337 "Parser.y"
    { printf(" New 1D array\n"); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 338 "Parser.y"
    { printf(" New 2D array\n"); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 339 "Parser.y"
    { printf(" New jagged array\n"); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 340 "Parser.y"
    { printf(" New object: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 341 "Parser.y"
    { printf(" 1D array access\n"); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 342 "Parser.y"
    { printf(" 2D array access\n"); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 343 "Parser.y"
    { printf(" Jagged array access\n"); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 344 "Parser.y"
    { printf(" Member access\n"); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 345 "Parser.y"
    { printf(" Method call\n"); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 346 "Parser.y"
    { printf(" Base method call\n"); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 347 "Parser.y"
    { printf(" New array with initializer\n"); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 348 "Parser.y"
    { printf(" New array with size and initializer\n"); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 352 "Parser.y"
    { printf(" Identifier: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 353 "Parser.y"
    { printf(" Integer: %d\n", (yyvsp[(1) - (1)].int_value)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 354 "Parser.y"
    { printf(" Float: %f\n", (yyvsp[(1) - (1)].float_value)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 355 "Parser.y"
    { printf(" Double: %f\n", (yyvsp[(1) - (1)].double_value)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 356 "Parser.y"
    { printf(" String: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 357 "Parser.y"
    { printf(" Char: %c\n", (yyvsp[(1) - (1)].char_value)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 358 "Parser.y"
    { printf(" Boolean: true\n"); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 359 "Parser.y"
    { printf(" Boolean: false\n"); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 360 "Parser.y"
    { printf(" Null literal\n"); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 361 "Parser.y"
    { printf(" This\n"); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 362 "Parser.y"
    { printf(" Base\n"); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 363 "Parser.y"
    { printf(" Parenthesized expression\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2829 "Parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 376 "Parser.y"


int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            printf("Cannot open file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Enter C# code (Ctrl+D to end):\n");
    }

    if (yyparse() == 0) {
        printf("=== Parsing completed successfully! ===\n");
    }

    if (yyin != stdin) fclose(yyin);
    return 0;
}
