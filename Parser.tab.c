
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
#define YYLAST   1639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  328

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
      77,    76,    78,     2,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     4,     7,    10,    16,    17,    20,    22,
      24,    29,    36,    41,    48,    50,    52,    54,    56,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    79,
      84,    92,   100,   109,   118,   127,   136,   137,   139,   140,
     142,   146,   149,   152,   156,   157,   160,   163,   165,   167,
     169,   171,   173,   175,   177,   179,   181,   183,   185,   187,
     189,   195,   203,   209,   219,   228,   237,   246,   254,   262,
     263,   266,   271,   275,   278,   282,   285,   288,   294,   300,
     305,   310,   314,   320,   324,   330,   336,   337,   339,   341,
     342,   343,   345,   346,   351,   356,   361,   363,   367,   371,
     375,   379,   383,   387,   391,   395,   399,   403,   407,   411,
     415,   420,   427,   431,   438,   442,   446,   450,   454,   458,
     462,   466,   469,   472,   475,   478,   481,   484,   490,   496,
     504,   511,   515,   519,   523,   525,   527,   529,   531,   533,
     535,   537,   539,   541,   543,   545,   546,   548
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      97,     0,    -1,    -1,    97,    98,    -1,    97,   111,    -1,
      17,    10,    91,    99,    92,    -1,    -1,    99,   100,    -1,
     101,    -1,   105,    -1,   102,   103,    10,    94,    -1,   102,
     103,    10,    76,   128,    94,    -1,   102,   104,    10,    94,
      -1,   102,   104,    10,    76,   128,    94,    -1,    18,    -1,
      19,    -1,    20,    -1,    56,    -1,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    55,
      -1,    30,    -1,    10,    -1,   103,    87,    88,    -1,   103,
      87,    93,    88,    -1,   102,   103,    10,    89,   106,    90,
     109,    -1,   102,    30,    10,    89,   106,    90,   109,    -1,
     102,    21,   103,    10,    89,   106,    90,   109,    -1,   102,
      21,    30,    10,    89,   106,    90,   109,    -1,   102,    57,
     103,    10,    89,   106,    90,   109,    -1,   102,    58,   103,
      10,    89,   106,    90,   109,    -1,    -1,   107,    -1,    -1,
     108,    -1,   107,    93,   108,    -1,   103,    10,    -1,   104,
      10,    -1,    91,   110,    92,    -1,    -1,   110,   111,    -1,
     128,    94,    -1,   112,    -1,   113,    -1,   114,    -1,   115,
      -1,   116,    -1,   117,    -1,   120,    -1,   121,    -1,   122,
      -1,   123,    -1,   124,    -1,   109,    -1,    94,    -1,    11,
      89,   128,    90,   111,    -1,    11,    89,   128,    90,   111,
      12,   111,    -1,    13,    89,   128,    90,   111,    -1,    14,
      89,   125,    94,   128,    94,   126,    90,   111,    -1,    40,
      89,   103,    10,    41,   128,    90,   111,    -1,    40,    89,
     104,    10,    41,   128,    90,   111,    -1,    40,    89,    31,
      10,    41,   128,    90,   111,    -1,    15,   111,    13,    89,
     128,    90,    94,    -1,    67,    89,   128,    90,    91,   118,
      92,    -1,    -1,   118,   119,    -1,    68,   128,    95,   110,
      -1,    69,    95,   110,    -1,    16,    94,    -1,    16,   128,
      94,    -1,    70,    94,    -1,    71,    94,    -1,    51,    89,
     128,    90,    94,    -1,    52,    89,   128,    90,    94,    -1,
      53,    89,    90,    94,    -1,    54,    89,    90,    94,    -1,
     103,    10,    94,    -1,   103,    10,    76,   128,    94,    -1,
     104,    10,    94,    -1,   104,    10,    76,   128,    94,    -1,
      31,    10,    76,   128,    94,    -1,    -1,   127,    -1,   128,
      -1,    -1,    -1,   128,    -1,    -1,   103,    10,    76,   128,
      -1,   104,    10,    76,   128,    -1,    31,    10,    76,   128,
      -1,   129,    -1,   128,    79,   128,    -1,   128,    80,   128,
      -1,   128,    81,   128,    -1,   128,    82,   128,    -1,   128,
      83,   128,    -1,   128,    77,   128,    -1,   128,    78,   128,
      -1,   128,    34,   128,    -1,   128,    35,   128,    -1,   128,
      36,   128,    -1,   128,    37,   128,    -1,   128,    32,   128,
      -1,   128,    33,   128,    -1,   128,    87,   128,    88,    -1,
     128,    87,   128,    93,   128,    88,    -1,   128,    86,    10,
      -1,   128,    86,    10,    89,   130,    90,    -1,   128,    76,
     128,    -1,   128,    42,   128,    -1,   128,    43,   128,    -1,
     128,    44,   128,    -1,   128,    45,   128,    -1,   128,    46,
     128,    -1,   128,    47,   128,    -1,    84,   128,    -1,    80,
     128,    -1,    49,   128,    -1,    50,   128,    -1,   128,    49,
      -1,   128,    50,    -1,    22,   103,    89,   130,    90,    -1,
      22,   103,    87,   128,    88,    -1,    22,   103,    87,   128,
      93,   128,    88,    -1,    61,    86,    10,    89,   130,    90,
      -1,    89,   128,    90,    -1,   128,    73,   128,    -1,   128,
      74,    10,    -1,    10,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    48,
      -1,    23,    -1,    61,    -1,    -1,   128,    -1,   130,    93,
     128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    68,    69,    73,    76,    77,    81,    82,
      86,    87,    88,    89,    93,    94,    95,    96,    97,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   113,   114,
     118,   119,   120,   121,   122,   123,   126,   127,   128,   132,
     133,   137,   138,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     166,   167,   171,   175,   179,   180,   181,   185,   189,   192,
     193,   197,   198,   202,   203,   207,   211,   215,   216,   217,
     218,   222,   223,   224,   225,   226,   229,   230,   231,   232,
     235,   236,   237,   241,   242,   243,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   301,   302,   303
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_LITERAL", "FLOAT_LITERAL",
  "DOUBLE_LITERAL", "STRING_LITERAL", "CHAR_LITERAL", "BOOL_LITERAL_TRUE",
  "BOOL_LITERAL_FALSE", "IDENTIFIER", "IF", "ELSE", "WHILE", "FOR", "DO",
  "RETURN", "CLASS", "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "NEW",
  "THIS", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE", "BOOL_TYPE",
  "CHAR_TYPE", "STRING_TYPE", "VOID", "VAR", "AND", "OR", "EQUAL",
  "NOT_EQUAL", "LESS_EQUAL", "GREATER_EQUAL", "NAMESPACE", "USING",
  "FOREACH", "IN", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "MUL_ASSIGNMENT",
  "DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "OR_ASSIGNMENT", "NULL_LITERAL",
  "INCREMENT", "DECREMENT", "CONSOLE_WRITELINE", "CONSOLE_WRITE",
  "CONSOLE_READLINE", "CONSOLE_READ", "DECIMAL_TYPE", "INTERNAL",
  "VIRTUAL", "OVERRIDE", "ABSTRACT", "SEALED", "BASE", "GET", "SET",
  "STRUCT", "INTERFACE", "ENUM", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "CONTINUE", "GOTO", "NULL_COALESCING", "NAMESPACE_ACCESS", "LOWEST",
  "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS",
  "'.'", "'['", "']'", "'('", "')'", "'{'", "'}'", "','", "';'", "':'",
  "$accept", "program", "class_declaration", "class_members",
  "class_member", "field_declaration", "visibility_modifier", "type",
  "array_type", "method_declaration", "parameters", "parameter_list",
  "parameter", "block", "statements", "statement", "if_statement",
  "while_statement", "for_statement", "foreach_statement",
  "do_while_statement", "switch_statement", "case_entries", "case_entry",
  "return_statement", "break_statement", "continue_statement",
  "console_statement", "variable_declaration", "for_initializer",
  "for_iterator", "variable_declaration_no_semicolon", "expression",
  "primary", "argument_list", 0
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
      41,   123,   125,    44,    59,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    98,    99,    99,   100,   100,
     101,   101,   101,   101,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   107,
     107,   108,   108,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   114,   115,   115,   115,   116,   117,   118,
     118,   119,   119,   120,   120,   121,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   127,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   130,   130,   130
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     5,     0,     2,     1,     1,
       4,     6,     4,     6,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       7,     7,     8,     8,     8,     8,     0,     1,     0,     1,
       3,     2,     2,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     5,     9,     8,     8,     8,     7,     7,     0,
       2,     4,     3,     2,     3,     2,     2,     5,     5,     4,
       4,     3,     5,     3,     5,     5,     0,     1,     1,     0,
       0,     1,     0,     4,     4,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     6,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     5,     5,     7,
       6,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   135,   136,   137,   138,   139,   140,   141,
     134,     0,     0,     0,     0,     0,     0,     0,   143,    19,
      20,    21,    22,    23,    24,    26,     0,     0,   142,     0,
       0,     0,     0,     0,     0,    25,   144,     0,     0,     0,
       0,     0,     0,    44,    59,     3,     0,     0,    58,     4,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,    96,     0,     0,    86,     0,   134,    73,     0,
       0,    27,     0,     0,     0,   123,   124,     0,     0,     0,
       0,     0,     0,    75,    76,   122,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,    87,    88,     0,    74,     6,
       0,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,    43,    45,     0,    81,    28,     0,     0,
      83,   108,   109,   104,   105,   106,   107,   115,   116,   117,
     118,   119,   120,   132,   133,   114,   102,   103,    97,    98,
      99,   100,   101,   112,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,   146,     0,     0,     0,     0,     0,
       0,     0,    79,    80,   145,     0,     0,    29,     0,   145,
     110,     0,    60,    62,     0,     0,     0,     0,     0,    14,
      15,    16,    17,     5,     7,     8,     0,     9,   128,     0,
     127,     0,    85,     0,     0,     0,    77,    78,     0,    69,
      82,    84,     0,     0,     0,    95,    93,    94,    90,     0,
       0,    26,     0,     0,     0,     0,     0,   147,     0,     0,
       0,   130,     0,   113,   111,    61,     0,    91,    67,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,     0,
       0,     0,    68,    70,     0,     0,     0,    36,     0,     0,
       0,    36,    10,     0,    12,    66,    64,    65,     0,    44,
      63,    36,    36,     0,     0,     0,    37,    39,    36,    36,
       0,     0,     0,    44,    72,     0,     0,    41,    42,     0,
       0,     0,     0,    11,     0,    13,    71,     0,     0,    31,
      40,     0,     0,    30,    33,    32,    34,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    45,   182,   214,   215,   216,    46,    47,   217,
     295,   296,   297,    48,    88,   144,    50,    51,    52,    53,
      54,    55,   252,   273,    56,    57,    58,    59,    60,   124,
     256,   125,    61,    62,   185
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -263
static const yytype_int16 yypact[] =
{
    -263,   291,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
      -9,   -64,   -58,   -27,   475,     4,    46,   299,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,    75,     0,  -263,   567,
     567,     1,     6,     7,     8,  -263,    13,    11,    19,    31,
     567,   567,   567,  -263,  -263,  -263,    -8,    84,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,   625,  -263,   567,   567,   157,   114,  -263,  -263,   644,
      47,  -263,   -12,    71,   104,  1493,  1493,   567,   567,    58,
      61,   142,   567,  -263,  -263,   -53,   -53,  1008,   383,   -48,
     -33,   -31,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,  -263,  -263,   567,   143,   567,   567,
     567,   567,   567,   567,   567,   567,   145,   567,  -263,  1027,
    1086,   146,    -6,   147,    74,  -263,  1474,    80,  -263,  -263,
     567,   567,   567,   160,    -5,   161,  1105,  1164,    78,    79,
      86,  1183,  -263,  -263,  -263,   567,  -263,  -263,    88,   567,
    -263,  1528,  1504,  1552,  1552,    63,    63,  1474,  1474,  1474,
    1474,  1474,  1474,   117,  -263,  1474,    63,    63,   180,   180,
     -53,   -53,   -53,   103,   925,   475,   475,   118,   119,   120,
     567,   567,    24,   946,  1474,   -24,   700,   152,   156,   159,
     108,   110,  -263,  -263,   567,   125,   719,  -263,   775,   567,
    -263,   567,   186,  -263,   567,   567,   567,   794,  1242,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,   523,  -263,  -263,   567,
    -263,   567,  -263,   567,   567,   567,  -263,  -263,   -23,  -263,
    -263,  -263,   -22,  1398,   475,  1474,  1474,  1474,   567,   115,
     340,   191,   299,   299,    -4,   201,  1417,  1474,  1261,  1320,
    1339,  -263,   -51,  -263,  -263,  -263,   127,  1474,  -263,   209,
     210,   132,   212,   214,   -54,   -18,  -263,   475,   475,   475,
     567,   134,  -263,  -263,   475,   138,   149,   299,   151,   153,
     567,   299,  -263,   567,  -263,  -263,  -263,  -263,   559,  -263,
    -263,   299,   299,     5,   221,   154,   150,  -263,   299,   299,
     850,   155,   869,  -263,   475,   158,   162,  -263,  -263,   164,
     299,   168,   169,  -263,   164,  -263,   475,   164,   164,  -263,
    -263,   164,   164,  -263,  -263,  -263,  -263,  -263
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -263,  -263,  -263,  -263,  -263,  -263,  -263,   -17,   -42,  -263,
    -262,  -263,   -59,   107,  -242,     2,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,
    -263,  -263,     9,  -263,  -135
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int16 yytable[] =
{
      72,   -27,    89,    49,   178,   188,   264,     3,     4,     5,
       6,     7,     8,     9,    67,   307,    66,   270,   271,   301,
     106,   107,   280,   123,    69,    63,    17,    18,   145,   305,
     306,    64,   135,   116,   117,   281,   311,   312,    75,    76,
     282,   272,   209,   210,   211,   149,   146,   304,   122,    85,
      86,    87,    28,    29,    30,   147,    70,   134,   283,   228,
     148,   316,    65,   150,   232,    36,   220,   251,   253,   221,
     221,   221,   119,   120,   126,   130,   284,   131,   -27,    90,
     212,    90,    90,    90,    40,    73,   136,   137,    41,    74,
      77,   141,    90,    42,    91,    78,    79,    80,    68,    81,
      82,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    83,    71,   163,   213,   165,   166,   167,
     168,   169,   170,   171,   172,    84,   174,   127,    19,    20,
      21,    22,    23,    24,    25,   133,   106,   107,   129,   183,
     184,   186,   111,   112,   113,   114,   115,   132,   138,   116,
     117,   139,   140,   164,   196,   173,   177,   179,   198,    35,
       3,     4,     5,     6,     7,     8,     9,    10,   180,   181,
     187,   189,   192,   193,   245,   194,   197,   202,   203,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   121,   207,
     208,   107,   199,   223,   204,   205,   206,   224,   234,   244,
     225,   261,   226,   184,   227,    28,    29,    30,   184,   258,
     233,   265,    35,   235,   236,   237,   229,   274,    36,   275,
     276,   277,   278,   260,   279,   262,   263,   291,   246,   289,
     247,   308,   248,   249,   250,   294,   255,    40,   292,   294,
     298,    41,   299,   310,   309,   314,    42,   257,   317,   294,
     294,   320,   318,   106,   107,    43,   294,   294,   321,   322,
     293,   113,   114,   115,   293,     0,   116,   117,   294,   285,
     286,   287,     0,     0,   293,   293,   290,     0,     0,   288,
       0,   293,   293,     0,     0,     0,     0,     0,     0,   300,
       0,     2,   302,   293,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,    12,    13,    14,    15,    16,    71,
       0,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    19,    20,    21,    22,    23,    24,    25,
       0,    27,     0,     0,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
      71,     0,    36,     0,    35,     0,     0,     0,    37,     0,
       0,    38,    39,     0,    19,    20,    21,    22,    23,    24,
     259,    40,     0,     0,     0,    41,     0,     0,     0,     0,
      42,     0,    43,     0,     0,    44,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    35,    12,    13,    14,    15,
       0,     0,     0,     0,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   319,     0,     0,     0,
       0,   323,     0,    27,   324,   325,     0,     0,   326,   327,
       0,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
      37,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,    41,     0,     0,
       0,     0,    42,     0,    43,   143,     0,    44,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,    12,    13,
      14,    15,     0,     0,     0,     0,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,    71,     0,     0,    36,     0,     0,     0,
       0,     0,    37,     0,   240,    38,    39,    19,    20,    21,
      22,    23,    24,   241,     0,    40,     0,     0,     0,    41,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    44,
       3,     4,     5,     6,     7,     8,     9,    67,    35,     0,
     242,   243,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,   104,   105,
       0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,   106,   107,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,   116,   117,    40,     0,     0,
       0,    41,     0,     0,   303,     0,    42,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,     0,   104,   105,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,     0,   104,   105,     0,     0,     0,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,     0,   106,   107,   118,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,    92,    93,    94,    95,    96,    97,   128,     0,
       0,     0,    98,    99,   100,   101,   102,   103,     0,   104,
     105,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,   104,   105,
       0,     0,     0,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,   106,   107,   222,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,   116,   117,    92,    93,    94,
      95,    96,    97,   230,     0,     0,     0,    98,    99,   100,
     101,   102,   103,     0,   104,   105,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,     0,   104,   105,     0,     0,     0,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
       0,   116,   117,     0,     0,     0,     0,   106,   107,   231,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,    92,    93,    94,    95,    96,    97,   238,     0,
       0,     0,    98,    99,   100,   101,   102,   103,     0,   104,
     105,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,   104,   105,
       0,     0,     0,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   116,   117,     0,     0,
       0,     0,   106,   107,   313,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,   116,   117,    92,    93,    94,
      95,    96,    97,   315,     0,     0,     0,    98,    99,   100,
     101,   102,   103,     0,   104,   105,     0,     0,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,     0,   104,   105,     0,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
       0,   116,   117,   200,     0,     0,     0,     0,   201,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,   116,   117,   218,     0,     0,     0,     0,   219,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,     0,   104,   105,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,     0,   104,   105,     0,     0,
       0,   106,   107,     0,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   116,   117,     0,     0,   142,     0,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,     0,     0,   116,   117,     0,     0,   175,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,     0,   104,   105,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,     0,   104,   105,     0,     0,     0,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,   116,   117,     0,     0,   176,     0,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
       0,   116,   117,     0,     0,   190,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,     0,   104,   105,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,     0,   104,   105,     0,     0,     0,   106,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,     0,     0,   191,     0,   106,   107,     0,   108,
     109,   110,   111,   112,   113,   114,   115,     0,     0,   116,
     117,     0,     0,   195,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
       0,   104,   105,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,     0,
     104,   105,     0,     0,     0,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117,
       0,     0,   239,     0,   106,   107,     0,   108,   109,   110,
     111,   112,   113,   114,   115,     0,     0,   116,   117,     0,
       0,   267,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,     0,   104,
     105,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,   104,   105,
       0,     0,     0,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   116,   117,     0,     0,
     268,     0,   106,   107,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,     0,   116,   117,     0,     0,   269,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,     0,   104,   105,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,     0,   104,   105,     0,     0,
       0,   106,   107,     0,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   116,   117,   254,     0,     0,     0,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,     0,     0,   116,   117,   266,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,     0,   104,   105,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,    92,     0,    94,    95,
      96,    97,     0,     0,     0,     0,     0,   106,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     116,   117,    94,    95,    96,    97,   106,   107,     0,     0,
     109,   110,   111,   112,   113,   114,   115,   106,   107,   116,
     117,   109,   110,   111,   112,   113,   114,   115,    96,    97,
     116,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,     0,     0,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,     0,     0,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   116,   117
};

static const yytype_int16 yycheck[] =
{
      17,    10,    10,     1,    10,    10,    10,     3,     4,     5,
       6,     7,     8,     9,    10,    10,    14,    68,    69,   281,
      73,    74,    76,    65,    15,    89,    22,    23,    76,   291,
     292,    89,    74,    86,    87,    89,   298,   299,    29,    30,
      94,    92,    18,    19,    20,    76,    94,   289,    65,    40,
      41,    42,    48,    49,    50,    88,    10,    74,    76,   194,
      93,   303,    89,    94,   199,    61,    90,    90,    90,    93,
      93,    93,    63,    64,    65,    87,    94,    89,    87,    87,
      56,    87,    87,    87,    80,    10,    77,    78,    84,    89,
      89,    82,    87,    89,    10,    89,    89,    89,    94,    86,
      89,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    94,    10,   106,    92,   108,   109,   110,
     111,   112,   113,   114,   115,    94,   117,    13,    24,    25,
      26,    27,    28,    29,    30,    31,    73,    74,    91,   130,
     131,   132,    79,    80,    81,    82,    83,    76,    90,    86,
      87,    90,    10,    10,   145,    10,    10,    10,   149,    55,
       3,     4,     5,     6,     7,     8,     9,    10,    94,    89,
      10,    10,    94,    94,   216,    89,    88,   175,   176,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   180,
     181,    74,    89,    41,    76,    76,    76,    41,    12,   216,
      41,    10,    94,   194,    94,    48,    49,    50,   199,    94,
     201,    10,    55,   204,   205,   206,    91,    90,    61,    10,
      10,    89,    10,   240,    10,   242,   243,    89,   219,    95,
     221,    10,   223,   224,   225,   277,   234,    80,    89,   281,
      89,    84,    89,    93,    90,    90,    89,   238,    90,   291,
     292,   310,    90,    73,    74,    91,   298,   299,    90,    90,
     277,    81,    82,    83,   281,    -1,    86,    87,   310,   267,
     268,   269,    -1,    -1,   291,   292,   274,    -1,    -1,   270,
      -1,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,   280,
      -1,     0,   283,   310,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    10,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    24,    25,    26,    27,    28,    29,    30,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      10,    -1,    61,    -1,    55,    -1,    -1,    -1,    67,    -1,
      -1,    70,    71,    -1,    24,    25,    26,    27,    28,    29,
      30,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      89,    -1,    91,    -1,    -1,    94,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    55,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,   309,    -1,    -1,    -1,
      -1,   314,    -1,    40,   317,   318,    -1,    -1,   321,   322,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    -1,    91,    92,    -1,    94,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    10,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    21,    70,    71,    24,    25,    26,
      27,    28,    29,    30,    -1,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    89,    -1,    91,    -1,    -1,    94,
       3,     4,     5,     6,     7,     8,     9,    10,    55,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    80,    -1,    -1,
      -1,    84,    -1,    -1,    95,    -1,    89,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    -1,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    73,    74,    94,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    32,    33,    34,    35,    36,    37,    94,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      -1,    -1,    -1,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    73,    74,    94,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    32,    33,    34,
      35,    36,    37,    94,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    -1,    -1,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    73,    74,    94,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    32,    33,    34,    35,    36,    37,    94,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      -1,    -1,    -1,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    73,    74,    94,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    32,    33,    34,
      35,    36,    37,    94,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    93,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    -1,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    90,    -1,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    -1,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    -1,    73,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    -1,    -1,    90,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    -1,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    90,    -1,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    -1,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    90,    -1,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      -1,    -1,    -1,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      90,    -1,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    90,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    -1,    -1,
      -1,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    88,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    34,    35,    36,    37,    73,    74,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    73,    74,    86,
      87,    77,    78,    79,    80,    81,    82,    83,    36,    37,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    97,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    13,    14,    15,    16,    17,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    40,    48,    49,
      50,    51,    52,    53,    54,    55,    61,    67,    70,    71,
      80,    84,    89,    91,    94,    98,   103,   104,   109,   111,
     112,   113,   114,   115,   116,   117,   120,   121,   122,   123,
     124,   128,   129,    89,    89,    89,   111,    10,    94,   128,
      10,    10,   103,    10,    89,   128,   128,    89,    89,    89,
      89,    86,    89,    94,    94,   128,   128,   128,   110,    10,
      87,    10,    32,    33,    34,    35,    36,    37,    42,    43,
      44,    45,    46,    47,    49,    50,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    86,    87,    94,   128,
     128,    31,   103,   104,   125,   127,   128,    13,    94,    91,
      87,    89,    76,    31,   103,   104,   128,   128,    90,    90,
      10,   128,    90,    92,   111,    76,    94,    88,    93,    76,
      94,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,    10,   128,   128,   128,   128,   128,
     128,   128,   128,    10,   128,    90,    90,    10,    10,    10,
      94,    89,    99,   128,   128,   130,   128,    10,    10,    10,
      90,    90,    94,    94,    89,    90,   128,    88,   128,    89,
      88,    93,   111,   111,    76,    76,    76,   128,   128,    18,
      19,    20,    56,    92,   100,   101,   102,   105,    88,    93,
      90,    93,    94,    41,    41,    41,    94,    94,   130,    91,
      94,    94,   130,   128,    12,   128,   128,   128,    94,    90,
      21,    30,    57,    58,   103,   104,   128,   128,   128,   128,
     128,    90,   118,    90,    88,   111,   126,   128,    94,    30,
     103,    10,   103,   103,    10,    10,    88,    90,    90,    90,
      68,    69,    92,   119,    90,    10,    10,    89,    10,    10,
      76,    89,    94,    76,    94,   111,   111,   111,   128,    95,
     111,    89,    89,   103,   104,   106,   107,   108,    89,    89,
     128,   106,   128,    95,   110,   106,   106,    10,    10,    90,
      93,   106,   106,    94,    90,    94,   110,    90,    90,   109,
     108,    90,    90,   109,   109,   109,   109,   109
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
        case 5:

/* Line 1455 of yacc.c  */
#line 73 "Parser.y"
    { printf("Class: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 81 "Parser.y"
    { printf("Class field\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 82 "Parser.y"
    { printf("Class method\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 86 "Parser.y"
    { printf("Field: %s\n", (yyvsp[(3) - (4)].string_value)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 87 "Parser.y"
    { printf("Field with init: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 88 "Parser.y"
    { printf("Array field: %s\n", (yyvsp[(3) - (4)].string_value)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 89 "Parser.y"
    { printf("Array field with init: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 93 "Parser.y"
    { printf("Public "); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 94 "Parser.y"
    { printf("Private "); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 95 "Parser.y"
    { printf("Protected "); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 96 "Parser.y"
    { printf("Internal "); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 97 "Parser.y"
    { printf("Default "); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 101 "Parser.y"
    { printf("int "); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 102 "Parser.y"
    { printf("float "); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 103 "Parser.y"
    { printf("double "); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 104 "Parser.y"
    { printf("bool "); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 105 "Parser.y"
    { printf("char "); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 106 "Parser.y"
    { printf("string "); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 107 "Parser.y"
    { printf("decimal "); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 108 "Parser.y"
    { printf("void "); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 109 "Parser.y"
    { printf("user_type:%s ", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 113 "Parser.y"
    { printf("1D array of "); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 114 "Parser.y"
    { printf("2D array of "); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 118 "Parser.y"
    { printf("Method: %s\n", (yyvsp[(3) - (7)].string_value)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 119 "Parser.y"
    { printf("Method: void %s\n", (yyvsp[(3) - (7)].string_value)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 120 "Parser.y"
    { printf("Static method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 121 "Parser.y"
    { printf("Static void method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 122 "Parser.y"
    { printf("Virtual method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 123 "Parser.y"
    { printf("Override method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 128 "Parser.y"
    { printf("No parameters "); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 132 "Parser.y"
    { printf("Parameter "); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 133 "Parser.y"
    { printf("Additional parameter "); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 137 "Parser.y"
    { printf("param:%s ", (yyvsp[(2) - (2)].string_value)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 138 "Parser.y"
    { printf("array param:%s ", (yyvsp[(2) - (2)].string_value)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 141 "Parser.y"
    { printf("Block\n"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 149 "Parser.y"
    { printf("Expression statement\n"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 162 "Parser.y"
    { printf("Empty statement\n"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    { printf("If statement\n"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 167 "Parser.y"
    { printf("If-else statement\n"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    { printf("While statement\n"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { printf("For statement\n"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    { printf("Foreach statement\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 180 "Parser.y"
    { printf("Foreach array statement\n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    { printf("Foreach statement with var\n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 185 "Parser.y"
    { printf("Do-while statement\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    { printf("Switch statement\n"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 197 "Parser.y"
    { printf("Case entry\n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 198 "Parser.y"
    { printf("Default entry\n"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 202 "Parser.y"
    { printf("Return;\n"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { printf("Return with value\n"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 207 "Parser.y"
    { printf("Break;\n"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 211 "Parser.y"
    { printf("Continue;\n"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 215 "Parser.y"
    { printf("Console.WriteLine\n"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 216 "Parser.y"
    { printf("Console.Write\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 217 "Parser.y"
    { printf("Console.ReadLine\n"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 218 "Parser.y"
    { printf("Console.Read\n"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 222 "Parser.y"
    { printf("Variable: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 223 "Parser.y"
    { printf("Variable with init: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 224 "Parser.y"
    { printf("Array variable: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 225 "Parser.y"
    { printf("Array variable with init: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 226 "Parser.y"
    { printf("Var variable: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 232 "Parser.y"
    { printf("No for initializer "); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 237 "Parser.y"
    { printf("No for iterator "); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 241 "Parser.y"
    { printf("For loop variable: %s ", (yyvsp[(2) - (4)].string_value)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 242 "Parser.y"
    { printf("For loop array variable: %s ", (yyvsp[(2) - (4)].string_value)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 243 "Parser.y"
    { printf("For loop var variable: %s ", (yyvsp[(2) - (4)].string_value)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 248 "Parser.y"
    { printf("Addition\n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 249 "Parser.y"
    { printf("Subtraction\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 250 "Parser.y"
    { printf("Multiplication\n"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 251 "Parser.y"
    { printf("Division\n"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 252 "Parser.y"
    { printf("Modulo\n"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
    { printf("Less than\n"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 254 "Parser.y"
    { printf("Greater than\n"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 255 "Parser.y"
    { printf("Equals\n"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 256 "Parser.y"
    { printf("Not equals\n"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 257 "Parser.y"
    { printf("Less or equal\n"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 258 "Parser.y"
    { printf("Greater or equal\n"); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 259 "Parser.y"
    { printf("Logical AND\n"); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 260 "Parser.y"
    { printf("Logical OR\n"); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 261 "Parser.y"
    { printf("Array access\n"); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 262 "Parser.y"
    { printf("2D array access\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 263 "Parser.y"
    { printf("Member access: %s\n", (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 264 "Parser.y"
    { printf("Method call: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 265 "Parser.y"
    { printf("Assignment\n"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 266 "Parser.y"
    { printf("Plus assignment\n"); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 267 "Parser.y"
    { printf("Minus assignment\n"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 268 "Parser.y"
    { printf("Multiply assignment\n"); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 269 "Parser.y"
    { printf("Divide assignment\n"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 270 "Parser.y"
    { printf("Modulo assignment\n"); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 271 "Parser.y"
    { printf("Or assignment\n"); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 272 "Parser.y"
    { printf("Logical NOT\n"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 273 "Parser.y"
    { printf("Unary minus\n"); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 274 "Parser.y"
    { printf("Pre-increment\n"); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 275 "Parser.y"
    { printf("Pre-decrement\n"); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 276 "Parser.y"
    { printf("Post-increment\n"); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 277 "Parser.y"
    { printf("Post-decrement\n"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 278 "Parser.y"
    { printf("New object\n"); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 279 "Parser.y"
    { printf("New 1D array\n"); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 280 "Parser.y"
    { printf("New 2D array\n"); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 281 "Parser.y"
    { printf("Base method call\n"); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 282 "Parser.y"
    { printf("Parenthesized expression\n"); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 283 "Parser.y"
    { printf("Null coalescing\n"); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 284 "Parser.y"
    { printf("Namespace access\n"); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 288 "Parser.y"
    { printf("Identifier: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 289 "Parser.y"
    { printf("Integer: %d\n", (yyvsp[(1) - (1)].int_value)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 290 "Parser.y"
    { printf("Float: %f\n", (yyvsp[(1) - (1)].float_value)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 291 "Parser.y"
    { printf("Double: %f\n", (yyvsp[(1) - (1)].double_value)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 292 "Parser.y"
    { printf("String: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 293 "Parser.y"
    { printf("Char: %c\n", (yyvsp[(1) - (1)].char_value)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    { printf("Boolean: true\n"); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 295 "Parser.y"
    { printf("Boolean: false\n"); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 296 "Parser.y"
    { printf("Null literal\n"); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 297 "Parser.y"
    { printf("This\n"); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 298 "Parser.y"
    { printf("Base\n"); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 302 "Parser.y"
    { printf("Argument "); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 303 "Parser.y"
    { printf("Additional argument "); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2790 "Parser.tab.c"
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
#line 306 "Parser.y"


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
