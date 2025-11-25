
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
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE* yyin;
void yyerror(const char *s);


/* Line 189 of yacc.c  */
#line 85 "Parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

/* Line 214 of yacc.c  */
#line 11 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;



/* Line 214 of yacc.c  */
#line 218 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "Parser.tab.c"

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
#define YYLAST   962

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNRULES -- Number of states.  */
#define YYNSTATES  366

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,     2,     2,     2,    91,     2,     2,
      94,   103,    89,    87,   104,    88,    95,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,   101,
      85,    84,    86,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,   100,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    93,
      98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    27,    28,    31,    33,    35,    37,    39,    41,
      43,    47,    53,    55,    57,    59,    61,    63,    65,    67,
      69,    71,    73,    75,    77,    79,    81,    83,    85,    87,
      89,    93,    95,    97,    99,   106,   114,   115,   118,   119,
     122,   125,   128,   131,   133,   135,   141,   148,   150,   152,
     154,   157,   160,   163,   164,   166,   172,   173,   176,   183,
     189,   196,   198,   202,   204,   206,   208,   210,   212,   214,
     217,   219,   225,   232,   237,   238,   241,   248,   256,   263,
     264,   266,   268,   272,   275,   281,   288,   294,   300,   304,
     305,   308,   310,   313,   315,   317,   319,   321,   323,   325,
     327,   329,   331,   336,   337,   340,   346,   354,   360,   370,
     371,   373,   375,   376,   378,   379,   381,   390,   392,   395,
     399,   402,   405,   407,   409,   413,   415,   417,   419,   421,
     423,   425,   427,   429,   431,   435,   437,   441,   443,   447,
     451,   453,   457,   461,   465,   469,   473,   477,   479,   483,
     487,   489,   493,   497,   501,   503,   506,   509,   512,   515,
     520,   522,   526,   531,   536,   539,   542,   546,   551,   557,
     563,   565,   567,   569,   571,   573,   575,   577,   579,   581,
     583,   585,   587,   589,   591,   595,   597,   598,   600,   602,
     606,   610,   611,   614,   618,   620,   624
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     106,     0,    -1,    -1,   106,   107,    -1,   108,    -1,   111,
      -1,   112,    -1,   131,    -1,   134,    -1,   138,    -1,   140,
      -1,    50,   174,    99,   109,   100,    -1,    -1,   109,   110,
      -1,   111,    -1,   112,    -1,   131,    -1,   134,    -1,   138,
      -1,   140,    -1,    51,   174,   101,    -1,    51,    11,    84,
     174,   101,    -1,   117,    -1,   124,    -1,   121,    -1,   127,
      -1,    56,    -1,    57,    -1,    58,    -1,    55,    -1,    59,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    49,    -1,   113,    -1,   115,    -1,   114,
      96,    97,    -1,   114,    -1,    48,    -1,   174,    -1,    32,
      11,   118,    99,   119,   100,    -1,   129,    32,    11,   118,
      99,   119,   100,    -1,    -1,   102,   174,    -1,    -1,   119,
     120,    -1,   130,   131,    -1,   130,   134,    -1,   130,   138,
      -1,   140,    -1,   139,    -1,    63,    11,    99,   123,   100,
      -1,   129,    63,    11,    99,   123,   100,    -1,   131,    -1,
     134,    -1,   139,    -1,   122,   131,    -1,   122,   134,    -1,
     122,   139,    -1,    -1,   122,    -1,    33,    11,    99,   125,
     100,    -1,    -1,   125,   126,    -1,   116,    11,    94,   135,
     103,   101,    -1,    64,    11,    99,   128,   100,    -1,   129,
      64,    11,    99,   128,   100,    -1,    11,    -1,   128,   104,
      11,    -1,    37,    -1,    39,    -1,    38,    -1,    40,    -1,
      41,    -1,   129,    -1,   129,    34,    -1,   132,    -1,   129,
     114,    11,   133,   101,    -1,   129,    34,   114,    11,   133,
     101,    -1,   114,    11,   133,   101,    -1,    -1,    84,   157,
      -1,   114,    11,    94,   135,   103,   141,    -1,   129,   114,
      11,    94,   135,   103,   141,    -1,    48,    11,    94,   135,
     103,   141,    -1,    -1,   136,    -1,   137,    -1,   136,   104,
     137,    -1,   114,    11,    -1,    11,    94,   135,   103,   141,
      -1,   129,    11,    94,   135,   103,   141,    -1,    34,    11,
      94,   103,   141,    -1,    65,    11,    94,   103,   141,    -1,
      99,   142,   100,    -1,    -1,   142,   143,    -1,   144,    -1,
     157,   101,    -1,   146,    -1,   147,    -1,   148,    -1,   152,
      -1,   154,    -1,   155,    -1,   156,    -1,   141,    -1,   101,
      -1,   114,    11,   145,   101,    -1,    -1,    84,   157,    -1,
      25,    94,   157,   103,   143,    -1,    25,    94,   157,   103,
     143,    26,   143,    -1,    27,    94,   157,   103,   143,    -1,
      28,    94,   149,   101,   151,   101,   150,   103,   143,    -1,
      -1,   144,    -1,   171,    -1,    -1,   171,    -1,    -1,   157,
      -1,    52,    94,   153,    11,    53,   157,   103,   143,    -1,
     114,    -1,    29,   101,    -1,    29,   157,   101,    -1,    30,
     101,    -1,    31,   101,    -1,   158,    -1,   160,    -1,   167,
     159,   158,    -1,    84,    -1,    23,    -1,    24,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,   161,    -1,   162,
      -1,   161,    18,   162,    -1,   163,    -1,   162,    17,   163,
      -1,   164,    -1,   163,    19,   164,    -1,   163,    20,   164,
      -1,   165,    -1,   164,    85,   165,    -1,   164,    86,   165,
      -1,   164,    21,   165,    -1,   164,    22,   165,    -1,   164,
      79,   165,    -1,   164,    78,   165,    -1,   166,    -1,   165,
      87,   166,    -1,   165,    88,   166,    -1,   167,    -1,   166,
      89,   167,    -1,   166,    90,   167,    -1,   166,    91,   167,
      -1,   168,    -1,    88,   167,    -1,    92,   167,    -1,    74,
     167,    -1,    75,   167,    -1,    94,   114,   103,   167,    -1,
     169,    -1,   168,    95,    11,    -1,   168,    94,   170,   103,
      -1,   168,    96,   157,    97,    -1,   168,    12,    -1,   168,
      13,    -1,   168,    15,    11,    -1,   168,    16,   157,    97,
      -1,    35,   174,    94,   170,   103,    -1,    35,   114,    96,
     157,    97,    -1,    11,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    61,    -1,    62,    -1,    54,    -1,    60,    -1,    36,
      -1,    94,   157,   103,    -1,   172,    -1,    -1,   171,    -1,
     157,    -1,   171,   104,   157,    -1,    66,   173,    67,    -1,
      -1,    68,   173,    -1,    69,   157,   173,    -1,   175,    -1,
     174,    95,   175,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    76,    80,    81,    82,    83,    84,    85,
      86,    94,    97,    99,   103,   104,   105,   106,   107,   108,
     112,   113,   121,   122,   123,   124,   132,   133,   134,   135,
     136,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     152,   156,   157,   158,   166,   167,   170,   172,   175,   177,
     181,   182,   183,   184,   185,   193,   194,   198,   199,   200,
     201,   202,   203,   206,   208,   216,   219,   221,   225,   233,
     234,   238,   239,   247,   248,   249,   250,   251,   255,   256,
     264,   265,   266,   270,   273,   275,   285,   286,   287,   290,
     292,   296,   297,   301,   309,   310,   314,   318,   325,   327,
     329,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   347,   350,   352,   356,   357,   360,   363,   366,
     368,   369,   372,   374,   377,   379,   383,   387,   391,   392,
     395,   396,   399,   403,   404,   408,   409,   410,   411,   412,
     413,   414,   417,   420,   421,   425,   426,   430,   431,   432,
     436,   437,   438,   439,   440,   441,   442,   446,   447,   448,
     452,   453,   454,   455,   459,   460,   461,   462,   463,   464,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   499,   501,   505,   506,
     514,   517,   519,   520,   528,   529,   537
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_LITERAL", "FLOAT_LITERAL",
  "DOUBLE_LITERAL", "DECIMAL_LITERAL", "STRING_LITERAL", "CHAR_LITERAL",
  "BOOL_LITERAL_TRUE", "BOOL_LITERAL_FALSE", "IDENTIFIER", "PLUSPLUS",
  "MINUSMINUS", "NULL_COALESCE", "NULL_SAFE_DOT", "NULL_SAFE_INDEX", "AND",
  "OR", "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "GREATER_EQUAL",
  "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "IF", "ELSE", "WHILE", "FOR",
  "RETURN", "BREAK", "CONTINUE", "CLASS", "INTERFACE", "STATIC", "NEW",
  "THIS", "PUBLIC", "PRIVATE", "PROTECTED", "INTERNAL",
  "PROTECTED_INTERNAL", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE",
  "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE", "VOID_TYPE", "DECIMAL_TYPE",
  "NAMESPACE", "USING", "FOREACH", "IN", "NULL_LITERAL", "BOOL_KW",
  "FLOAT_KW", "DOUBLE_KW", "DECIMAL_KW", "INT_KW", "NULL_KW", "TRUE_KW",
  "FALSE_KW", "STRUCT", "ENUM", "TILDE", "INTERPOLATED_STRING_START",
  "INTERPOLATED_STRING_END", "INTERPOLATED_STRING_TEXT",
  "INTERPOLATED_STRING_EXPR", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT", "DECREMENT", "LESS",
  "GREATER", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "BITWISE_OR",
  "BITWISE_AND", "THEN", "LOWER_THAN_ELSE", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "'('", "'.'", "'['", "']'",
  "FIELD", "'{'", "'}'", "';'", "':'", "')'", "','", "$accept", "program",
  "top_level_declaration", "namespace_declaration", "namespace_body",
  "namespace_body_element", "using_directive", "type_declaration",
  "standard_type", "primitive_type", "array_type", "method_return_type",
  "class_declaration", "class_parent", "class_body", "class_member",
  "struct_decl", "struct_members", "struct_members_optional",
  "interface_declaration", "interface_body", "interface_member",
  "enum_decl", "enumerators", "visibility_modifier", "member_modifiers",
  "field_declaration", "typed_field_declaration", "field_init",
  "method_declaration", "parameter_list", "parameter_list_tail",
  "parameter", "constructor_declaration", "static_constructor_decl",
  "destructor_decl", "block", "statement_list", "statement",
  "local_variable_declaration", "local_init", "if_statement",
  "while_statement", "for_statement", "for_init_opt", "for_iter_opt",
  "expression_opt", "foreach_statement", "foreach_type",
  "return_statement", "break_statement", "continue_statement",
  "expression", "assignment_expression", "assignment_op",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "primary_expression", "argument_list",
  "expression_list", "interpolated_string", "interpolated_string_content",
  "qualified_identifier", "simple_identifier", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    61,    60,    62,    43,    45,    42,
      47,    37,    33,   339,    40,    46,    91,    93,   340,   123,
     125,    59,    58,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   112,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   116,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   123,   123,   124,   125,   125,   126,   127,
     127,   128,   128,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   131,   132,   133,   133,   134,   134,   134,   135,
     135,   136,   136,   137,   138,   138,   139,   140,   141,   142,
     142,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   145,   145,   146,   146,   147,   148,   149,
     149,   149,   150,   150,   151,   151,   152,   153,   154,   154,
     155,   156,   157,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   160,   161,   161,   162,   162,   163,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     166,   166,   166,   166,   167,   167,   167,   167,   167,   167,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   170,   170,   171,   171,
     172,   173,   173,   173,   174,   174,   175
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     2,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     6,     7,     0,     2,     0,     2,
       2,     2,     2,     1,     1,     5,     6,     1,     1,     1,
       2,     2,     2,     0,     1,     5,     0,     2,     6,     5,
       6,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     5,     6,     4,     0,     2,     6,     7,     6,     0,
       1,     1,     3,     2,     5,     6,     5,     5,     3,     0,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     2,     5,     7,     5,     9,     0,
       1,     1,     0,     1,     0,     1,     8,     1,     2,     3,
       2,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     2,     4,
       1,     3,     4,     4,     2,     2,     3,     4,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     1,     1,     3,
       3,     0,     2,     3,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    73,    75,    74,    76,
      77,    31,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    29,    26,    27,    28,    30,     0,     0,     0,     3,
       4,     5,     6,    38,     0,    39,    22,    24,    23,    25,
       0,     7,    80,     8,     9,    10,    89,    46,     0,     0,
     206,     0,   204,   206,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,    66,    89,     0,    12,     0,    20,    63,     0,
       0,     0,    89,     0,    40,    89,    46,     0,     0,     0,
      84,    93,     0,     0,    47,    48,     0,     0,   205,     0,
       0,     0,    64,     0,     0,    57,    58,    59,    71,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   188,   180,
       0,   193,   191,   192,   189,   190,   201,     0,     0,     0,
       0,     0,    85,   132,   133,   142,   143,   145,   147,   150,
     157,   160,   164,   170,   195,     0,    83,     0,     0,    84,
      63,     0,    89,     0,    99,    94,    92,     0,    42,    65,
      41,     0,    67,    43,     0,    11,    13,    14,    15,    16,
      17,    18,    19,    21,     0,    60,    61,    62,    55,    69,
       0,    97,     0,     0,   201,     0,     0,   167,   168,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,   137,
     138,   139,   140,   141,   135,     0,   174,   175,     0,     0,
     196,     0,     0,     0,     0,    48,     0,     0,     0,     0,
      81,     0,    44,    49,    78,     0,    54,    53,     0,    88,
       0,    72,     0,   196,   202,   201,   200,     0,   194,   144,
     160,   146,   148,   149,   153,   154,   156,   155,   151,   152,
     158,   159,   161,   162,   163,   134,   176,     0,   198,     0,
     197,   171,     0,    86,    95,     0,    82,    56,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   111,     0,
     110,   100,   101,   103,   104,   105,   106,   107,   108,   109,
       0,    79,     0,    50,    51,    52,    89,     0,     0,     0,
     203,   169,   177,   172,     0,   173,    45,    87,     0,     0,
     119,   128,     0,   130,   131,     0,   113,   102,     0,    96,
     179,   178,   199,     0,     0,   120,     0,   121,   129,   127,
       0,     0,     0,     0,     0,     0,   124,     0,   114,   112,
      68,   115,   117,     0,   125,     0,     0,   122,     0,   116,
       0,   123,     0,     0,   126,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    29,    30,    99,   166,    31,    32,    33,    66,
      35,   161,    36,    71,   157,   233,    37,   102,   103,    38,
      96,   162,    39,   109,   104,   235,   105,    42,    83,   106,
      67,    68,    69,    44,   107,   237,   290,   231,   291,   292,
     342,   293,   294,   295,   336,   360,   353,   296,   340,   297,
     298,   299,   300,   133,   215,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   269,   270,   144,   186,    51,
      52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -314
static const yytype_int16 yypact[] =
{
    -314,   800,  -314,   -53,    54,    56,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,    65,  -314,    70,
      73,  -314,  -314,  -314,  -314,  -314,    77,    83,    93,  -314,
    -314,  -314,  -314,  -314,    -4,  -314,  -314,  -314,  -314,  -314,
     660,  -314,  -314,  -314,  -314,  -314,   903,    19,    32,    24,
    -314,   -33,  -314,    53,   -57,    35,    47,    58,   -66,    51,
      68,   136,   903,   139,   150,    -3,    14,    69,    71,  -314,
      70,    72,  -314,   903,    70,  -314,    70,  -314,   885,   162,
      74,   676,   903,    75,  -314,   903,    19,    16,    84,    85,
     -54,  -314,    88,   903,    79,  -314,   111,    82,  -314,   734,
     -50,   178,   885,    90,   760,  -314,  -314,  -314,  -314,   -36,
      88,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
     859,  -314,  -314,  -314,  -314,  -314,   -22,   676,   676,   676,
     676,   603,  -314,  -314,  -314,   177,   179,    67,    50,    12,
     -11,   121,    21,  -314,  -314,    94,  -314,    95,   100,   116,
     885,   162,   903,   101,  -314,  -314,  -314,   -17,  -314,  -314,
     105,   192,  -314,    79,    88,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,   112,  -314,  -314,  -314,  -314,  -314,
     196,  -314,   113,     2,   -22,   676,   141,  -314,  -314,  -314,
    -314,   -61,   107,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,   676,  -314,  -314,   201,   676,
     676,   202,   676,    88,    88,  -314,   114,   117,   -30,   115,
    -314,   322,  -314,  -314,   180,   249,  -314,  -314,   125,  -314,
     118,  -314,   530,   676,  -314,   -22,  -314,   676,  -314,   179,
    -314,    67,    50,    50,    12,    12,    12,    12,    12,    12,
     -11,   -11,  -314,  -314,  -314,  -314,  -314,   123,  -314,   119,
     120,  -314,   126,  -314,  -314,    86,  -314,  -314,  -314,    88,
     131,   132,   133,   494,   127,   128,   137,  -314,  -314,    18,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
     160,  -314,   841,  -314,  -314,  -314,   903,    88,   135,   130,
    -314,  -314,  -314,  -314,   676,  -314,  -314,  -314,   676,   676,
     603,  -314,   163,  -314,  -314,   903,   153,  -314,   165,  -314,
    -314,  -314,  -314,   166,   167,  -314,   164,   120,  -314,   105,
     231,   676,   170,   171,   421,   421,   676,   210,  -314,  -314,
    -314,   240,  -314,   172,  -314,   676,   421,   676,   174,  -314,
     176,   120,   421,   421,  -314,  -314
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,  -314,  -314,  -314,   175,   181,  -314,    -1,
    -314,  -314,  -314,   189,    57,  -314,  -314,  -314,   134,  -314,
    -314,  -314,  -314,   149,     8,  -314,     3,  -314,   -64,     9,
     -70,  -314,   188,   -93,   -97,    10,   -91,  -314,  -313,   -35,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,   -79,    87,  -314,  -314,  -314,   110,   122,  -105,
    -143,   -65,    52,  -314,  -314,    66,  -304,  -314,  -170,    -7,
     236
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      34,   155,   132,    97,    41,   177,   171,    58,    90,    40,
      43,    45,   145,    54,   244,   147,   337,   101,    81,   181,
       6,     7,     8,     9,    10,    91,   153,   149,    82,   326,
      81,   351,   352,   216,   217,    59,   218,   219,    74,    65,
     152,    46,   247,   359,    77,    74,   184,   185,    28,   364,
     365,   173,   192,   361,   254,   255,   256,   257,   258,   259,
     236,    87,    74,    94,   179,    47,    75,    48,   180,   100,
     278,   197,   198,   239,   180,   310,    49,    34,   205,   206,
     207,    50,   229,   232,    53,   226,   195,   196,    55,   163,
     252,   253,    59,    59,    56,   160,   243,    74,    34,   203,
     204,    34,   169,    65,    57,   175,   245,    40,   170,   172,
      59,   176,    59,   183,    59,   220,   221,   222,    73,   182,
     101,    70,    50,     6,     7,     8,     9,    10,   199,   200,
     191,    72,   273,   274,    78,   201,   202,    76,   260,   261,
     267,   268,   305,   272,   208,   209,    79,    86,    84,    34,
      88,    28,    80,    11,    12,    13,    14,    15,    16,   158,
      18,    89,    85,   308,   268,   234,    21,    22,    23,    24,
      25,    95,    92,   108,    74,    93,   146,   110,   236,   187,
     188,   189,   190,   150,   151,   164,   316,   154,   317,   174,
     178,   210,   211,   212,   213,   193,   194,   223,   224,   225,
      81,    59,   230,   238,   322,   214,   240,   241,   246,   242,
     248,   159,   266,   271,   301,   276,   329,   277,   279,   306,
     312,   307,   313,   315,   314,   318,   319,   320,   323,   324,
     289,   325,   330,   331,    34,   332,   328,   341,   303,   333,
     334,   268,   347,   302,   304,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   262,   263,   264,
       3,   327,   348,   355,   338,   346,   356,   354,   343,   344,
     345,   349,   350,   357,   167,   148,   358,   362,   268,   363,
     168,   156,   275,   234,   227,   335,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   311,
     228,    65,   265,   249,    21,    22,    23,    24,    25,   309,
      98,     0,     0,     0,     0,     0,   251,     0,     0,   289,
       0,     0,     0,     0,   339,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   289,   289,     0,     0,   280,     0,   281,
     282,   283,   284,   285,     0,   289,     0,   120,   121,     0,
       0,   289,   289,     0,    11,    12,    13,    14,    15,    16,
       0,    18,     0,     0,   286,     0,   122,    21,    22,    23,
      24,    25,   123,   124,   125,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,   127,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,     0,   130,     0,   131,     0,     0,     0,
       0,   154,   287,   288,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,   281,   282,
     283,   284,   285,     0,     0,     0,   120,   121,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,     0,
      18,     0,     0,   286,     0,   122,    21,    22,    23,    24,
      25,   123,   124,   125,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,   127,   128,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,   129,
       0,     0,     0,   130,     0,   131,     0,     0,     0,     0,
     154,     0,   288,     0,     0,     0,     0,     0,     0,   120,
     121,     0,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,     0,   123,   124,   125,     0,     0,     0,
     126,     0,     0,     0,     0,   120,   121,     0,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,   122,     0,   130,     0,   131,     0,
     123,   124,   125,     0,     0,   321,   126,     0,     0,     0,
       0,     0,     0,     0,   127,   128,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,   129,     0,
       0,     0,   130,     0,   131,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,   121,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,     0,    18,     0,     0,     0,     0,   122,    21,    22,
      23,    24,    25,   123,   124,   125,     0,     0,     0,   126,
       0,    60,     0,     0,     0,     0,     0,   127,   128,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,   129,    61,     0,    62,   130,     0,   131,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,     0,    18,
       0,   120,   121,     0,     0,    21,    22,    23,    24,    25,
       0,     0,     0,    63,    64,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,   124,   125,     0,
       0,     0,   126,     0,     0,     3,     0,     0,     0,     0,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     4,     5,   130,     0,
     131,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,    20,     0,     0,     0,    21,
      22,    23,    24,    25,    62,     0,     0,    26,    27,    28,
       2,     0,    11,    12,    13,    14,    15,    16,     0,    18,
       0,     3,     0,     0,     0,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,   165,     0,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    60,     0,     0,    21,    22,    23,    24,    25,
       0,     0,     0,    26,    27,    28,     0,     0,     0,     0,
      50,     0,     0,     0,     0,    62,     0,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,     0,
      18,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    11,    12,    13,    14,    15,    16,     0,    18,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,   101,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,    11,    12,    13,    14,    15,
      16,     0,    18,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       1,    92,    81,    73,     1,   102,    99,    11,    11,     1,
       1,     1,    82,    20,   184,    85,   320,    34,    84,   110,
      37,    38,    39,    40,    41,    11,    90,    11,    94,    11,
      84,   344,   345,    12,    13,    96,    15,    16,    95,    40,
      94,    94,   103,   356,   101,    95,    68,    69,    65,   362,
     363,   101,   131,   357,   197,   198,   199,   200,   201,   202,
     157,    62,    95,    70,   100,    11,    99,    11,   104,    76,
     100,    21,    22,   164,   104,   245,    11,    78,    89,    90,
      91,    11,   152,   100,    11,   149,    19,    20,    11,    96,
     195,   196,    96,    96,    11,    96,    94,    95,    99,    87,
      88,   102,    99,   104,    11,   102,   185,    99,    99,    99,
      96,   102,    96,   120,    96,    94,    95,    96,    94,   120,
      34,   102,    11,    37,    38,    39,    40,    41,    78,    79,
     131,    99,   223,   224,    99,    85,    86,    84,   203,   204,
     219,   220,   235,   222,    23,    24,    99,    11,    97,   150,
      11,    65,    94,    42,    43,    44,    45,    46,    47,    48,
      49,    11,    94,   242,   243,   157,    55,    56,    57,    58,
      59,    99,   103,    11,    95,   104,   101,   103,   275,   127,
     128,   129,   130,    99,    99,   103,   100,    99,   279,    11,
     100,    70,    71,    72,    73,    18,    17,   103,   103,    99,
      84,    96,   101,    11,   283,    84,    94,    11,    67,    96,
     103,   100,    11,    11,    34,   101,   307,   100,   103,    94,
      97,   103,   103,    97,   104,    94,    94,    94,   101,   101,
     231,    94,    97,   103,   235,   314,   306,    84,   235,   318,
     319,   320,    11,   235,   235,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
      11,   101,   341,    53,   101,   101,    26,   346,   103,   103,
     103,   101,   101,   101,    99,    86,   355,   103,   357,   103,
      99,    93,   225,   275,   150,   320,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   247,
     151,   302,   215,   193,    55,    56,    57,    58,    59,   243,
      74,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,   320,
      -1,    -1,    -1,    -1,   325,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   344,   345,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    -1,   356,    -1,    35,    36,    -1,
      -1,   362,   363,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    99,   100,   101,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    52,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,
      99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    35,    36,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    54,    -1,    92,    -1,    94,    -1,
      60,    61,    62,    -1,    -1,   101,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    -1,    94,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    74,    75,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    88,    32,    -1,    34,    92,    -1,    94,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    35,    36,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,
      -1,    -1,    66,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    32,    33,    92,    -1,
      94,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    34,    -1,    -1,    63,    64,    65,
       0,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    11,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,   100,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    11,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    34,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   106,     0,    11,    32,    33,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    55,    56,    57,    58,    59,    63,    64,    65,   107,
     108,   111,   112,   113,   114,   115,   117,   121,   124,   127,
     129,   131,   132,   134,   138,   140,    94,    11,    11,    11,
      11,   174,   175,    11,   174,    11,    11,    11,    11,    96,
      11,    32,    34,    63,    64,   114,   114,   135,   136,   137,
     102,   118,    99,    94,    95,    99,    84,   101,    99,    99,
      94,    84,    94,   133,    97,    94,    11,   114,    11,    11,
      11,    11,   103,   104,   174,    99,   125,   135,   175,   109,
     174,    34,   122,   123,   129,   131,   134,   139,    11,   128,
     103,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      35,    36,    54,    60,    61,    62,    66,    74,    75,    88,
      92,    94,   157,   158,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   172,   135,   101,   135,   118,    11,
      99,    99,    94,   133,    99,   141,   137,   119,    48,   100,
     114,   116,   126,   174,   103,   100,   110,   111,   112,   131,
     134,   138,   140,   101,    11,   131,   134,   139,   100,   100,
     104,   141,   114,   174,    68,    69,   173,   167,   167,   167,
     167,   114,   157,    18,    17,    19,    20,    21,    22,    78,
      79,    85,    86,    87,    88,    89,    90,    91,    23,    24,
      70,    71,    72,    73,    84,   159,    12,    13,    15,    16,
      94,    95,    96,   103,   103,    99,   133,   123,   128,   135,
     101,   142,   100,   120,   129,   130,   139,   140,    11,   141,
      94,    11,    96,    94,   173,   157,    67,   103,   103,   162,
     167,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     166,   166,   167,   167,   167,   158,    11,   157,   157,   170,
     171,    11,   157,   141,   141,   119,   101,   100,   100,   103,
      25,    27,    28,    29,    30,    31,    52,   100,   101,   114,
     141,   143,   144,   146,   147,   148,   152,   154,   155,   156,
     157,    34,   129,   131,   134,   138,    94,   103,   157,   170,
     173,   167,    97,   103,   104,    97,   100,   141,    94,    94,
      94,   101,   157,   101,   101,    94,    11,   101,   135,   141,
      97,   103,   157,   157,   157,   144,   149,   171,   101,   114,
     153,    84,   145,   103,   103,   103,   101,    11,   157,   101,
     101,   143,   143,   151,   157,    53,    26,   101,   157,   143,
     150,   171,   103,   103,   143,   143
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
        case 26:

/* Line 1455 of yacc.c  */
#line 132 "Parser.y"
    { (yyval.type_value) = 2; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 133 "Parser.y"
    { (yyval.type_value) = 3; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 134 "Parser.y"
    { (yyval.type_value) = 7; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 135 "Parser.y"
    { (yyval.type_value) = 4; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 136 "Parser.y"
    { (yyval.type_value) = 1; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 140 "Parser.y"
    { (yyval.type_value) = 1; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 141 "Parser.y"
    { (yyval.type_value) = 2; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 142 "Parser.y"
    { (yyval.type_value) = 3; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 143 "Parser.y"
    { (yyval.type_value) = 4; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 "Parser.y"
    { (yyval.type_value) = 5; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 145 "Parser.y"
    { (yyval.type_value) = 6; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 146 "Parser.y"
    { (yyval.type_value) = 7; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 148 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 152 "Parser.y"
    { (yyval.type_value) = 200 + (yyvsp[(1) - (3)].type_value); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 156 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 157 "Parser.y"
    { (yyval.type_value) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 158 "Parser.y"
    { (yyval.type_value) = 100; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 530 "Parser.y"
    {
        char* temp = malloc(strlen((yyvsp[(1) - (3)].string_value)) + strlen((yyvsp[(3) - (3)].string_value)) + 2);
        sprintf(temp, "%s.%s", (yyvsp[(1) - (3)].string_value), (yyvsp[(3) - (3)].string_value));
        (yyval.string_value) = temp;
    ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 537 "Parser.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2066 "Parser.tab.c"
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
#line 539 "Parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("fopen");
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Enter C# code (Ctrl+D to end):\n");
        fflush(stdout);
    }
    
    int result = yyparse();
    
    if (result == 0) {
        printf("=== Parsing completed successfully! ===\n");
    } else {
        printf("=== Parsing failed with errors ===\n");
    }

    if (yyin && yyin != stdin) fclose(yyin);
    return result;
}
