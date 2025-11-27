
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
#line 205 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "Parser.tab.c"

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
#define YYLAST   647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNRULES -- Number of states.  */
#define YYNSTATES  356

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    79,     2,     2,
      82,    90,    77,    75,    91,    76,    83,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    88,
      73,    72,    74,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,    87,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    17,    18,    21,
      23,    25,    27,    29,    31,    33,    37,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    65,    67,
      71,    73,    75,    77,    84,    92,    93,    96,    97,   100,
     103,   106,   109,   111,   113,   119,   126,   128,   130,   132,
     135,   138,   141,   142,   144,   150,   151,   154,   161,   167,
     174,   176,   180,   182,   184,   186,   188,   190,   192,   195,
     197,   203,   210,   215,   216,   219,   226,   234,   241,   242,
     244,   246,   250,   253,   259,   266,   272,   278,   282,   283,
     286,   288,   291,   293,   295,   297,   299,   301,   303,   305,
     307,   309,   314,   315,   318,   324,   332,   338,   348,   349,
     351,   353,   354,   356,   357,   359,   368,   370,   373,   377,
     380,   383,   385,   387,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   409,   413,   415,   419,   421,   425,   429,
     431,   435,   439,   443,   447,   451,   455,   459,   463,   465,
     469,   473,   475,   479,   483,   487,   489,   492,   495,   498,
     501,   506,   508,   512,   517,   522,   525,   528,   532,   537,
     543,   549,   551,   553,   555,   557,   559,   561,   563,   565,
     567,   569,   571,   575,   577,   578,   580,   582,   586,   590,
     591,   594,   598,   600,   604
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,    -1,    93,    94,    -1,    98,    -1,    95,
      -1,    49,   160,    86,    96,    87,    -1,    -1,    96,    97,
      -1,    98,    -1,    99,    -1,   117,    -1,   120,    -1,   124,
      -1,   126,    -1,    50,   160,    88,    -1,    50,    11,    72,
     160,    88,    -1,   103,    -1,   110,    -1,   107,    -1,   113,
      -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,
      -1,    46,    -1,    48,    -1,   101,    -1,   100,    84,    85,
      -1,   100,    -1,    47,    -1,   160,    -1,    31,    11,   104,
      86,   105,    87,    -1,   115,    31,    11,   104,    86,   105,
      87,    -1,    -1,    89,   160,    -1,    -1,   105,   106,    -1,
     116,   117,    -1,   116,   120,    -1,   116,   124,    -1,   126,
      -1,   125,    -1,    54,    11,    86,   109,    87,    -1,   115,
      54,    11,    86,   109,    87,    -1,   117,    -1,   120,    -1,
     125,    -1,   108,   117,    -1,   108,   120,    -1,   108,   125,
      -1,    -1,   108,    -1,    32,    11,    86,   111,    87,    -1,
      -1,   111,   112,    -1,   102,    11,    82,   121,    90,    88,
      -1,    55,    11,    86,   114,    87,    -1,   115,    55,    11,
      86,   114,    87,    -1,    11,    -1,   114,    91,    11,    -1,
      36,    -1,    38,    -1,    37,    -1,    39,    -1,    40,    -1,
     115,    -1,   115,    33,    -1,   118,    -1,   115,   100,    11,
     119,    88,    -1,   115,    33,   100,    11,   119,    88,    -1,
     100,    11,   119,    88,    -1,    -1,    72,   143,    -1,   100,
      11,    82,   121,    90,   127,    -1,   115,   100,    11,    82,
     121,    90,   127,    -1,    47,    11,    82,   121,    90,   127,
      -1,    -1,   122,    -1,   123,    -1,   122,    91,   123,    -1,
     100,    11,    -1,    11,    82,   121,    90,   127,    -1,   115,
      11,    82,   121,    90,   127,    -1,    33,    11,    82,    90,
     127,    -1,    56,    11,    82,    90,   127,    -1,    86,   128,
      87,    -1,    -1,   128,   129,    -1,   130,    -1,   143,    88,
      -1,   132,    -1,   133,    -1,   134,    -1,   138,    -1,   140,
      -1,   141,    -1,   142,    -1,   127,    -1,    88,    -1,   100,
      11,   131,    88,    -1,    -1,    72,   143,    -1,    24,    82,
     143,    90,   129,    -1,    24,    82,   143,    90,   129,    25,
     129,    -1,    26,    82,   143,    90,   129,    -1,    27,    82,
     135,    88,   137,    88,   136,    90,   129,    -1,    -1,   130,
      -1,   157,    -1,    -1,   157,    -1,    -1,   143,    -1,    51,
      82,   139,    11,    52,   143,    90,   129,    -1,   100,    -1,
      28,    88,    -1,    28,   143,    88,    -1,    29,    88,    -1,
      30,    88,    -1,   144,    -1,   146,    -1,   153,   145,   144,
      -1,    72,    -1,    22,    -1,    23,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,   147,    -1,   148,    -1,   147,
      17,   148,    -1,   149,    -1,   148,    16,   149,    -1,   150,
      -1,   149,    18,   150,    -1,   149,    19,   150,    -1,   151,
      -1,   150,    73,   151,    -1,   150,    74,   151,    -1,   150,
      68,   151,    -1,   150,    67,   151,    -1,   150,    20,   151,
      -1,   150,    21,   151,    -1,   150,    70,   151,    -1,   150,
      69,   151,    -1,   152,    -1,   151,    75,   152,    -1,   151,
      76,   152,    -1,   153,    -1,   152,    77,   153,    -1,   152,
      78,   153,    -1,   152,    79,   153,    -1,   154,    -1,    76,
     153,    -1,    80,   153,    -1,    65,   153,    -1,    66,   153,
      -1,    82,   100,    90,   153,    -1,   155,    -1,   154,    83,
      11,    -1,   154,    82,   156,    90,    -1,   154,    84,   143,
      85,    -1,   154,    12,    -1,   154,    13,    -1,   154,    14,
      11,    -1,   154,    15,   143,    85,    -1,    34,   160,    82,
     156,    90,    -1,    34,   100,    84,   143,    85,    -1,    11,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    53,    -1,    35,
      -1,    82,   143,    90,    -1,   158,    -1,    -1,   157,    -1,
     143,    -1,   157,    91,   143,    -1,    57,   159,    58,    -1,
      -1,    59,   159,    -1,    60,   143,   159,    -1,   161,    -1,
     160,    83,   161,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    71,    75,    76,    84,    87,    89,    93,
      94,    95,    96,    97,    98,   102,   103,   111,   112,   113,
     114,   122,   123,   124,   125,   126,   127,   128,   129,   133,
     137,   138,   139,   147,   148,   151,   153,   156,   158,   162,
     163,   164,   165,   166,   174,   175,   179,   180,   181,   182,
     183,   184,   187,   189,   197,   200,   202,   206,   214,   215,
     219,   220,   228,   229,   230,   231,   232,   236,   237,   245,
     246,   247,   251,   254,   256,   266,   267,   268,   271,   273,
     277,   278,   282,   290,   291,   295,   299,   306,   308,   310,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   328,   331,   333,   337,   338,   341,   344,   347,   349,
     350,   353,   355,   358,   360,   364,   368,   372,   373,   376,
     377,   380,   384,   385,   389,   390,   391,   392,   393,   394,
     395,   398,   401,   402,   406,   407,   411,   412,   413,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   429,   430,
     431,   435,   436,   437,   438,   442,   443,   444,   445,   446,
     447,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   479,   481,   485,   486,   494,   497,
     499,   500,   508,   509,   517
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
  "MINUSMINUS", "NULL_SAFE_DOT", "NULL_SAFE_INDEX", "AND", "OR", "EQUAL",
  "NOT_EQUAL", "LESS_EQUAL", "GREATER_EQUAL", "PLUS_ASSIGNMENT",
  "MINUS_ASSIGNMENT", "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK",
  "CONTINUE", "CLASS", "INTERFACE", "STATIC", "NEW", "THIS", "PUBLIC",
  "PRIVATE", "PROTECTED", "INTERNAL", "PROTECTED_INTERNAL", "INT_TYPE",
  "FLOAT_TYPE", "DOUBLE_TYPE", "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE",
  "VOID_TYPE", "DECIMAL_TYPE", "NAMESPACE", "USING", "FOREACH", "IN",
  "NULL_LITERAL", "STRUCT", "ENUM", "TILDE", "INTERPOLATED_STRING_START",
  "INTERPOLATED_STRING_END", "INTERPOLATED_STRING_TEXT",
  "INTERPOLATED_STRING_EXPR", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT", "DECREMENT", "LESS",
  "GREATER", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "LOWER_THAN_ELSE", "'='",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "'('",
  "'.'", "'['", "']'", "'{'", "'}'", "';'", "':'", "')'", "','", "$accept",
  "program", "top_level_declaration", "namespace_declaration",
  "namespace_body", "namespace_body_element", "using_directive",
  "type_declaration", "primitive_type", "array_type", "method_return_type",
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
     325,   326,    61,    60,    62,    43,    45,    42,    47,    37,
      33,   327,    40,    46,    91,    93,   123,   125,    59,    58,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   109,   109,   110,   111,   111,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   117,   118,   119,   119,   120,   120,   120,   121,   121,
     122,   122,   123,   124,   124,   125,   126,   127,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   131,   131,   132,   132,   133,   134,   135,   135,
     135,   136,   136,   137,   137,   138,   139,   140,   140,   141,
     142,   143,   144,   144,   145,   145,   145,   145,   145,   145,
     145,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     151,   152,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   156,   156,   157,   157,   158,   159,
     159,   159,   160,   160,   161
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     5,     0,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     6,     7,     0,     2,     0,     2,     2,
       2,     2,     1,     1,     5,     6,     1,     1,     1,     2,
       2,     2,     0,     1,     5,     0,     2,     6,     5,     6,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     6,     4,     0,     2,     6,     7,     6,     0,     1,
       1,     3,     2,     5,     6,     5,     5,     3,     0,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     0,     2,     5,     7,     5,     9,     0,     1,
       1,     0,     1,     0,     1,     8,     1,     2,     3,     2,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       4,     1,     3,     4,     4,     2,     2,     3,     4,     5,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     1,     1,     3,     3,     0,
       2,     3,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     3,     5,     4,   194,     0,
     192,   194,     0,     0,     7,     0,    15,   193,     0,     0,
       0,     0,     0,    62,    64,    63,    65,    66,    21,    22,
      23,    24,    25,    26,     0,    27,     0,     0,     0,     6,
       8,     9,    10,     0,    28,    17,    19,    18,    20,     0,
      11,    69,    12,    13,    14,    16,    78,    35,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,     0,     0,    55,    78,    52,
       0,     0,     0,    78,     0,    29,    78,    35,     0,     0,
       0,    73,    82,     0,     0,    36,    37,     0,     0,     0,
      53,     0,     0,    46,    47,    48,    60,     0,     0,   172,
     173,   174,   175,   176,   177,   178,   179,   171,     0,   181,
     180,   189,     0,     0,     0,     0,     0,    74,   121,   122,
     131,   132,   134,   136,   139,   148,   151,   155,   161,   183,
       0,    72,     0,     0,    73,    52,     0,    78,     0,    88,
      83,    81,     0,    31,    54,    30,     0,    56,    32,     0,
       0,    49,    50,    51,    44,    58,     0,    86,     0,     0,
     189,     0,     0,   158,   159,   156,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   124,     0,   165,   166,     0,     0,   184,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    70,     0,
      33,    38,    67,     0,    43,    42,     0,    77,     0,    61,
       0,   184,   190,   189,   188,     0,   182,   133,   151,   135,
     137,   138,   144,   145,   143,   142,   147,   146,   140,   141,
     149,   150,   152,   153,   154,   123,   167,     0,   186,     0,
     185,   162,     0,    75,    84,     0,    71,    45,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    87,   100,     0,
      99,    89,    90,    92,    93,    94,    95,    96,    97,    98,
       0,    68,     0,    39,    40,    41,    78,     0,     0,     0,
     191,   160,   168,   163,     0,   164,    34,    76,     0,     0,
     108,   117,     0,   119,   120,     0,   102,    91,     0,    85,
     170,   169,   187,     0,     0,   109,     0,   110,   118,   116,
       0,     0,     0,     0,     0,     0,   113,     0,   103,   101,
      57,   104,   106,     0,   114,     0,     0,   111,     0,   105,
       0,   112,     0,     0,   115,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     6,    18,    40,     7,    42,    71,    44,
     156,    45,    76,   152,   221,    46,   100,   101,    47,    97,
     157,    48,   107,   102,   223,   103,    51,    84,   104,    72,
      73,    74,    53,   105,   225,   280,   219,   281,   282,   332,
     283,   284,   285,   326,   350,   343,   286,   330,   287,   288,
     289,   290,   128,   203,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   259,   260,   139,   172,     9,    10
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -311
static const yytype_int16 yypact[] =
{
    -311,    39,  -311,     3,    30,  -311,  -311,  -311,  -311,   -24,
    -311,   -56,   -51,     3,  -311,     3,  -311,  -311,   560,   -48,
     -36,    49,    64,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,    72,  -311,    82,    90,    93,  -311,
    -311,  -311,  -311,     1,  -311,  -311,  -311,  -311,  -311,   308,
    -311,  -311,  -311,  -311,  -311,  -311,   154,    21,    38,    48,
      46,    74,    68,   -38,    85,    76,   178,   154,   192,   193,
       6,     7,   122,   123,  -311,     3,   127,  -311,   154,   584,
     205,   128,   513,   154,   129,  -311,   154,    21,    10,   135,
     136,   -34,  -311,   140,   154,   144,  -311,    22,   142,   222,
     584,   148,   519,  -311,  -311,  -311,  -311,    12,   140,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,   336,  -311,
    -311,    18,   513,   513,   513,   513,   493,  -311,  -311,  -311,
     219,   221,   119,    52,    73,    35,    83,    14,  -311,  -311,
     149,  -311,   151,   156,   171,   584,   205,   154,   157,  -311,
    -311,  -311,   103,  -311,  -311,   160,   236,  -311,   144,   140,
     167,  -311,  -311,  -311,  -311,  -311,   239,  -311,   169,    71,
      18,   513,   196,  -311,  -311,  -311,  -311,   -71,   161,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,   513,  -311,  -311,   244,   513,   513,   247,
     513,   140,   140,  -311,   176,   180,    20,   175,  -311,   279,
    -311,  -311,   237,   431,  -311,  -311,   187,  -311,   181,  -311,
     429,   513,  -311,    18,  -311,   513,  -311,   221,  -311,   119,
      52,    52,    73,    73,    73,    73,    73,    73,    73,    73,
      35,    35,  -311,  -311,  -311,  -311,  -311,   188,  -311,   182,
     184,  -311,   191,  -311,  -311,   223,  -311,  -311,  -311,   140,
     195,   198,   199,   158,   190,   203,   211,  -311,  -311,    11,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
     206,  -311,   413,  -311,  -311,  -311,   154,   140,   210,   208,
    -311,  -311,  -311,  -311,   513,  -311,  -311,  -311,   513,   513,
     493,  -311,   212,  -311,  -311,   154,   224,  -311,   209,  -311,
    -311,  -311,  -311,   214,   225,  -311,   213,   184,  -311,   160,
     291,   513,   230,   238,   365,   365,   513,   259,  -311,  -311,
    -311,   287,  -311,   241,  -311,   513,   365,   513,   243,  -311,
     248,   184,   365,   365,  -311,  -311
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,  -311,  -311,  -311,  -311,   313,  -311,   -18,  -311,
    -311,  -311,   250,   130,  -311,  -311,  -311,   197,  -311,  -311,
    -311,  -311,   194,   -17,  -311,   -14,  -311,   -68,   -13,   -76,
    -311,   252,   125,   -94,   339,   -78,  -311,  -310,    50,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,   -79,   155,  -311,  -311,  -311,   185,   207,   -25,  -133,
      16,    -7,  -311,  -311,   152,  -302,  -311,  -159,     5,   372
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      43,    49,    98,   127,    50,    52,   163,   140,   327,    12,
     142,   232,    63,    64,     8,   150,    15,    91,    92,   235,
      19,   144,   316,   148,   341,   342,   204,   205,   206,   207,
     167,    70,    13,     8,    82,    13,   349,    16,    82,     2,
      55,    11,   354,   355,    83,   351,    56,   178,   147,    88,
     242,   243,   244,   245,   246,   247,   248,   249,   224,    13,
      57,    43,    14,    28,    29,    30,    31,    32,    33,   153,
      35,   217,   183,   184,   300,    58,   214,   170,   171,   155,
      95,   227,    43,    59,    70,    64,   161,   162,     3,     4,
      64,    64,   233,    60,    64,    64,   208,   209,   210,   165,
     168,    61,   158,   166,    62,   196,   197,   268,   177,   154,
      75,   166,   193,   194,   195,   173,   174,   175,   176,   185,
     186,   187,   188,   169,    77,   189,   190,    43,   257,   258,
      78,   262,    79,   263,   264,   222,    99,   181,   182,    23,
      24,    25,    26,    27,   198,   199,   200,   201,   191,   192,
      81,   298,   258,   231,    13,   202,   240,   241,    86,    38,
      80,   109,   110,   111,   112,   113,   114,   115,   116,   117,
      85,   224,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   252,   253,   254,    87,
     220,   307,   118,   119,   312,    28,    29,    30,    31,    32,
      33,   279,    35,    89,    90,    43,   292,   250,   251,   293,
     294,   120,    93,    96,    94,   121,   106,   141,   108,   319,
     318,   145,   146,   122,   123,   322,   149,    13,   301,   323,
     324,   258,   159,   160,   124,   164,   179,   180,   125,   211,
     126,   212,   213,    82,    64,   218,   311,   226,   222,   228,
     229,   236,   338,   230,   234,   256,    99,   344,   261,    23,
      24,    25,    26,    27,   266,   269,   348,   267,   258,   296,
     291,   297,   303,   302,    70,   304,   305,   308,   313,    38,
     309,   310,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   314,   279,   315,   317,   320,   331,   329,   321,   333,
     328,   336,   337,   270,   334,   271,   272,   273,   274,   275,
     306,   345,   346,   118,   119,   335,   279,   279,   339,    65,
      28,    29,    30,    31,    32,    33,   340,    35,   279,   347,
     276,    41,   120,   352,   279,   279,   121,   143,   353,    66,
     216,    67,   215,   265,   122,   123,   151,     8,   295,    28,
      29,    30,    31,    32,    33,   124,    35,    54,   255,   125,
     325,   126,    68,    69,   237,   149,   277,   278,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    28,    29,    30,
      31,    32,    33,   299,    35,    17,     0,   239,     0,   270,
       0,   271,   272,   273,   274,   275,     0,     0,     0,   118,
     119,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,    33,     0,    35,     0,     0,   276,     0,   120,     0,
       0,     0,   121,     0,    65,     0,     0,     0,     0,     0,
     122,   123,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   124,    20,     0,     0,   125,    67,   126,     0,     0,
       0,   149,     0,   278,    28,    29,    30,    31,    32,    33,
       0,    35,     0,   118,   119,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,   120,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   124,     0,     0,     0,   125,
       0,   126,     0,     0,    85,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
       0,    35,     0,     0,     0,     0,   120,   118,   119,     0,
     121,     0,    67,     0,     0,     0,     0,     0,   122,   123,
      28,    29,    30,    31,    32,    33,   120,    35,     0,   124,
     121,    20,     0,   125,     0,   126,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,    21,    22,   125,     0,   126,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       4,     0,     0,     0,    36,    37,    38,    99,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      18,    18,    78,    82,    18,    18,   100,    83,   310,     4,
      86,   170,    11,    84,    11,    93,    72,    11,    11,    90,
      15,    11,    11,    91,   334,   335,    12,    13,    14,    15,
     108,    49,    83,    11,    72,    83,   346,    88,    72,     0,
      88,    11,   352,   353,    82,   347,    82,   126,    82,    67,
     183,   184,   185,   186,   187,   188,   189,   190,   152,    83,
      11,    79,    86,    41,    42,    43,    44,    45,    46,    47,
      48,   147,    20,    21,   233,    11,   144,    59,    60,    97,
      75,   159,   100,    11,   102,    84,   100,   100,    49,    50,
      84,    84,   171,    11,    84,    84,    82,    83,    84,    87,
     118,    11,    97,    91,    11,    22,    23,    87,   126,    87,
      89,    91,    77,    78,    79,   122,   123,   124,   125,    67,
      68,    69,    70,   118,    86,    73,    74,   145,   207,   208,
      82,   210,    86,   211,   212,   152,    33,    18,    19,    36,
      37,    38,    39,    40,    61,    62,    63,    64,    75,    76,
      82,   230,   231,    82,    83,    72,   181,   182,    82,    56,
      86,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      85,   265,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,    11,
      87,   269,    34,    35,   273,    41,    42,    43,    44,    45,
      46,   219,    48,    11,    11,   223,   223,   191,   192,   223,
     223,    53,    90,    86,    91,    57,    11,    88,    90,   297,
     296,    86,    86,    65,    66,   304,    86,    83,   235,   308,
     309,   310,    90,    11,    76,    87,    17,    16,    80,    90,
      82,    90,    86,    72,    84,    88,    88,    11,   265,    82,
      11,    90,   331,    84,    58,    11,    33,   336,    11,    36,
      37,    38,    39,    40,    88,    90,   345,    87,   347,    82,
      33,    90,    90,    85,   292,    91,    85,    82,    88,    56,
      82,    82,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    88,   310,    82,    88,    85,    72,   315,    90,    90,
      88,    88,    11,    24,    90,    26,    27,    28,    29,    30,
      87,    52,    25,    34,    35,    90,   334,   335,    88,    11,
      41,    42,    43,    44,    45,    46,    88,    48,   346,    88,
      51,    18,    53,    90,   352,   353,    57,    87,    90,    31,
     146,    33,   145,   213,    65,    66,    94,    11,   223,    41,
      42,    43,    44,    45,    46,    76,    48,    18,   203,    80,
     310,    82,    54,    55,   179,    86,    87,    88,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    41,    42,    43,
      44,    45,    46,   231,    48,    13,    -1,   180,    -1,    24,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    57,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      65,    66,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    76,    11,    -1,    -1,    80,    33,    82,    -1,    -1,
      -1,    86,    -1,    88,    41,    42,    43,    44,    45,    46,
      -1,    48,    -1,    34,    35,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    76,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    85,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    34,    35,    -1,
      57,    -1,    33,    -1,    -1,    -1,    -1,    -1,    65,    66,
      41,    42,    43,    44,    45,    46,    53,    48,    -1,    76,
      57,    11,    -1,    80,    -1,    82,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    31,    32,    80,    -1,    82,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    54,    55,    56,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,     0,    49,    50,    94,    95,    98,    11,   160,
     161,    11,   160,    83,    86,    72,    88,   161,    96,   160,
      11,    31,    32,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    54,    55,    56,    87,
      97,    98,    99,   100,   101,   103,   107,   110,   113,   115,
     117,   118,   120,   124,   126,    88,    82,    11,    11,    11,
      11,    11,    11,    11,    84,    11,    31,    33,    54,    55,
     100,   100,   121,   122,   123,    89,   104,    86,    82,    86,
      86,    82,    72,    82,   119,    85,    82,    11,   100,    11,
      11,    11,    11,    90,    91,   160,    86,   111,   121,    33,
     108,   109,   115,   117,   120,   125,    11,   114,    90,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    34,    35,
      53,    57,    65,    66,    76,    80,    82,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   158,
     121,    88,   121,   104,    11,    86,    86,    82,   119,    86,
     127,   123,   105,    47,    87,   100,   102,   112,   160,    90,
      11,   117,   120,   125,    87,    87,    91,   127,   100,   160,
      59,    60,   159,   153,   153,   153,   153,   100,   143,    17,
      16,    18,    19,    20,    21,    67,    68,    69,    70,    73,
      74,    75,    76,    77,    78,    79,    22,    23,    61,    62,
      63,    64,    72,   145,    12,    13,    14,    15,    82,    83,
      84,    90,    90,    86,   119,   109,   114,   121,    88,   128,
      87,   106,   115,   116,   125,   126,    11,   127,    82,    11,
      84,    82,   159,   143,    58,    90,    90,   148,   153,   149,
     150,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   153,   144,    11,   143,   143,   156,
     157,    11,   143,   127,   127,   105,    88,    87,    87,    90,
      24,    26,    27,    28,    29,    30,    51,    87,    88,   100,
     127,   129,   130,   132,   133,   134,   138,   140,   141,   142,
     143,    33,   115,   117,   120,   124,    82,    90,   143,   156,
     159,   153,    85,    90,    91,    85,    87,   127,    82,    82,
      82,    88,   143,    88,    88,    82,    11,    88,   121,   127,
      85,    90,   143,   143,   143,   130,   135,   157,    88,   100,
     139,    72,   131,    90,    90,    90,    88,    11,   143,    88,
      88,   129,   129,   137,   143,    52,    25,    88,   143,   129,
     136,   157,    90,    90,   129,   129
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
        case 21:

/* Line 1455 of yacc.c  */
#line 122 "Parser.y"
    { (yyval.type_value) = 1; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 123 "Parser.y"
    { (yyval.type_value) = 2; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 124 "Parser.y"
    { (yyval.type_value) = 3; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 125 "Parser.y"
    { (yyval.type_value) = 4; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 126 "Parser.y"
    { (yyval.type_value) = 5; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 127 "Parser.y"
    { (yyval.type_value) = 6; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 128 "Parser.y"
    { (yyval.type_value) = 7; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 129 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 133 "Parser.y"
    { (yyval.type_value) = 200 + (yyvsp[(1) - (3)].type_value); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 137 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 138 "Parser.y"
    { (yyval.type_value) = 0; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 139 "Parser.y"
    { (yyval.type_value) = 100; ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 510 "Parser.y"
    {
        char* temp = malloc(strlen((yyvsp[(1) - (3)].string_value)) + strlen((yyvsp[(3) - (3)].string_value)) + 2);
        sprintf(temp, "%s.%s", (yyvsp[(1) - (3)].string_value), (yyvsp[(3) - (3)].string_value));
        (yyval.string_value) = temp;
    ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 517 "Parser.y"
    { (yyval.string_value) = (yyvsp[(1) - (1)].string_value); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1930 "Parser.tab.c"
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
#line 519 "Parser.y"


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
