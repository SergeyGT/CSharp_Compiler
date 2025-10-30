
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
extern int yylineno;
extern char* yytext;

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d near '%s': %s\n", yylineno, yytext, s);
    fprintf(stderr, "DEBUG PARSER: Current token: %s\n", yytext);
}


/* Line 189 of yacc.c  */
#line 89 "Parser.tab.c"

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

/* Line 214 of yacc.c  */
#line 18 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;



/* Line 214 of yacc.c  */
#line 217 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 229 "Parser.tab.c"

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
#define YYLAST   510

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNRULES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    87,     2,     2,
      93,    94,    85,    83,    97,    84,    90,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    98,
      81,    80,    82,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    91,     2,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,     2,    96,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    25,    26,    29,    32,    34,    36,    40,    46,    52,
      53,    56,    58,    60,    62,    64,    67,    70,    76,    83,
      84,    86,    88,    90,    92,    97,   104,   111,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   135,   142,   151,
     153,   157,   160,   167,   168,   171,   178,   182,   183,   186,
     188,   190,   192,   194,   196,   198,   200,   202,   204,   206,
     209,   213,   219,   225,   231,   239,   245,   255,   264,   273,
     276,   280,   283,   286,   287,   288,   290,   292,   293,   295,
     296,   301,   306,   308,   310,   314,   318,   322,   324,   326,
     330,   332,   336,   338,   342,   346,   348,   352,   356,   360,
     364,   366,   370,   374,   376,   380,   384,   388,   390,   393,
     396,   398,   400,   404,   409,   412,   415,   419,   423,   428,
     430,   432,   434,   436,   438,   440,   442,   444,   446,   448,
     450,   454,   455,   457,   459
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     101,     0,    -1,    -1,   101,   102,    -1,   103,    -1,   106,
      -1,   105,    -1,   113,    -1,   116,    -1,   124,    -1,    57,
      11,    95,   104,    96,    -1,    -1,   104,   106,    -1,   104,
     105,    -1,   107,    -1,   119,    -1,    58,    11,    98,    -1,
      58,    11,    80,    11,    98,    -1,    36,    11,    95,   108,
      96,    -1,    -1,   108,   109,    -1,   113,    -1,   116,    -1,
     111,    -1,   110,    -1,    60,   113,    -1,    60,   116,    -1,
     112,    11,    93,    94,   122,    -1,   112,    11,    93,   117,
      94,   122,    -1,    -1,    40,    -1,    41,    -1,    43,    -1,
      42,    -1,   112,   114,    11,    98,    -1,   112,   114,    11,
      80,   137,    98,    -1,   112,    50,    11,    80,   137,    98,
      -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    52,    -1,   114,    -1,    51,    -1,   115,
      11,    93,    94,   122,    -1,   115,    11,    93,   117,    94,
     122,    -1,   112,    60,   115,    11,    93,   117,    94,   122,
      -1,   118,    -1,   117,    97,   118,    -1,   114,    11,    -1,
      39,    11,    95,   120,    96,    98,    -1,    -1,   120,   121,
      -1,   115,    11,    93,   117,    94,    98,    -1,    95,   123,
      96,    -1,    -1,   123,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,   122,    -1,   137,    98,    -1,   114,
      11,    98,    -1,   114,    11,    80,   137,    98,    -1,    50,
      11,    80,   137,    98,    -1,    28,    93,   137,    94,   124,
      -1,    28,    93,   137,    94,   124,    29,   124,    -1,    30,
      93,   137,    94,   124,    -1,    31,    93,   134,    98,   137,
      98,   135,    94,   124,    -1,    72,    93,   114,    11,    73,
     137,    94,   124,    -1,    72,    93,    50,    11,    73,   137,
      94,   124,    -1,    32,    98,    -1,    32,   137,    98,    -1,
      33,    98,    -1,    34,    98,    -1,    -1,    -1,   136,    -1,
     137,    -1,    -1,   137,    -1,    -1,   114,    11,    80,   137,
      -1,    50,    11,    80,   137,    -1,   138,    -1,   139,    -1,
      11,    80,   137,    -1,    11,    23,   137,    -1,    11,    24,
     137,    -1,   140,    -1,   141,    -1,   140,    18,   141,    -1,
     142,    -1,   141,    17,   142,    -1,   143,    -1,   142,    19,
     143,    -1,   142,    20,   143,    -1,   144,    -1,   143,    81,
     144,    -1,   143,    82,   144,    -1,   143,    21,   144,    -1,
     143,    22,   144,    -1,   145,    -1,   144,    83,   145,    -1,
     144,    84,   145,    -1,   146,    -1,   145,    85,   146,    -1,
     145,    86,   146,    -1,   145,    87,   146,    -1,   147,    -1,
      84,   146,    -1,    88,   146,    -1,   149,    -1,   148,    -1,
     147,    90,    11,    -1,   147,    93,   150,    94,    -1,   147,
      12,    -1,   147,    13,    -1,    11,    90,    11,    -1,   148,
      90,    11,    -1,   148,    93,   150,    94,    -1,    11,    -1,
       3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    54,    -1,    69,    -1,
      93,   137,    94,    -1,    -1,   151,    -1,   137,    -1,   151,
      97,   137,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    84,    88,    89,    90,    91,    92,    93,
      97,   101,   102,   103,   107,   108,   112,   114,   120,   124,
     125,   129,   130,   131,   132,   136,   138,   143,   145,   151,
     152,   154,   156,   158,   163,   165,   167,   172,   173,   174,
     175,   176,   177,   178,   182,   183,   188,   190,   192,   197,
     198,   202,   208,   212,   213,   217,   223,   227,   228,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   245,
     250,   252,   254,   259,   261,   266,   271,   276,   278,   283,
     285,   290,   295,   299,   301,   302,   303,   306,   307,   309,
     313,   315,   321,   325,   326,   328,   330,   335,   339,   340,
     345,   346,   351,   352,   354,   359,   360,   362,   364,   366,
     371,   372,   374,   379,   380,   382,   384,   389,   390,   392,
     397,   398,   399,   401,   403,   405,   410,   412,   414,   419,
     421,   423,   425,   427,   429,   431,   433,   435,   437,   439,
     441,   447,   448,   452,   453
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
  "MINUSMINUS", "OR_ASSIGNMENT", "NULL_COALESCE", "SCOPE", "AND", "OR",
  "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "GREATER_EQUAL", "PLUS_ASSIGNMENT",
  "MINUS_ASSIGNMENT", "MUL_ASSIGNMENT", "DIV_ASSIGNMENT", "MOD_ASSIGNMENT",
  "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK", "CONTINUE", "DO",
  "CLASS", "STRUCT", "ENUM", "INTERFACE", "PUBLIC", "PRIVATE", "INTERNAL",
  "PROTECTED", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE", "BOOL_TYPE",
  "CHAR_TYPE", "STRING_TYPE", "VAR_TYPE", "VOID_TYPE", "DECIMAL_TYPE",
  "NEW", "THIS", "OUT", "REF", "NAMESPACE", "USING", "ABSTRACT", "STATIC",
  "SEALED", "VIRTUAL", "OVERRIDE", "BASE", "SWITCH", "CASE", "DEFAULT",
  "GOTO", "NULL_LITERAL", "CONSOLE_METHOD", "OPERATOR", "FOREACH", "IN",
  "CONSOLE_WRITELINE", "CONSOLE_WRITE", "CONSOLE_READLINE", "CONSOLE_READ",
  "LOWEST", "THEN", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "UMINUS", "'.'", "'['", "']'", "'('", "')'", "'{'", "'}'", "','",
  "';'", "':'", "$accept", "program", "top_level_declaration",
  "namespace_declaration", "namespace_body", "type_declaration",
  "using_directive", "class_declaration", "class_body", "class_member",
  "static_member_declaration", "constructor_declaration",
  "access_modifier", "field_declaration", "type", "return_type",
  "method_declaration", "parameter_list", "parameter",
  "interface_declaration", "interface_body", "interface_member", "block",
  "statement_list", "statement", "expression_statement",
  "local_variable_declaration", "if_statement", "while_statement",
  "for_statement", "foreach_statement", "return_statement",
  "break_statement", "continue_statement", "for_initializer",
  "for_iterator", "local_variable_declaration_no_semicolon", "expression",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
  "member_expression", "primary_expression", "argument_list",
  "expression_list", 0
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
      61,    60,    62,    43,    45,    42,    47,    37,    33,   335,
      46,    91,    93,    40,    41,   123,   125,    44,    59,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   108,
     108,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   116,   117,
     117,   118,   119,   120,   120,   121,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     126,   126,   126,   127,   127,   128,   129,   130,   130,   131,
     131,   132,   133,   134,   134,   134,   134,   135,   135,   135,
     136,   136,   137,   138,   138,   138,   138,   139,   140,   140,
     141,   141,   142,   142,   142,   143,   143,   143,   143,   143,
     144,   144,   144,   145,   145,   145,   145,   146,   146,   146,
     147,   147,   147,   147,   147,   147,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   151,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     0,     2,     2,     1,     1,     3,     5,     5,     0,
       2,     1,     1,     1,     1,     2,     2,     5,     6,     0,
       1,     1,     1,     1,     4,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     6,     8,     1,
       3,     2,     6,     0,     2,     6,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     5,     5,     5,     7,     5,     9,     8,     8,     2,
       3,     2,     2,     0,     0,     1,     1,     0,     1,     0,
       4,     4,     1,     1,     3,     3,     3,     1,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
       1,     1,     3,     4,     2,     2,     3,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    29,     1,   130,   131,   132,   133,   134,   135,   136,
     137,   129,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    33,    32,    37,    38,    39,    40,    41,    42,
       0,    45,    43,   138,     0,     0,   139,     0,     0,     0,
       0,    57,     3,     4,     6,     5,    14,     0,     7,     0,
       0,     8,    15,    68,     9,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,    92,    93,    97,    98,   100,
     102,   105,   110,   113,   117,   121,   120,     0,     0,     0,
       0,     0,     0,    83,    79,     0,    81,    82,     0,     0,
       0,     0,     0,     0,   129,   118,   119,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
       0,   141,     0,   141,    95,    96,    94,   126,     0,     0,
       0,     0,     0,    85,    86,    80,    19,    53,     0,    11,
       0,    16,     0,     0,   140,    56,     0,    58,     0,    44,
       0,     0,     0,    70,     0,    99,   101,   103,   104,   108,
     109,   106,   107,   111,   112,   114,   115,   116,   122,   143,
       0,   142,   127,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,    49,   123,     0,   128,    73,    75,
       0,     0,     0,    29,    18,    20,    24,    23,     0,    21,
      22,     0,     0,    54,    72,    10,    13,    12,    17,     0,
       0,     0,     0,     0,    71,    46,    51,     0,     0,   144,
       0,    91,    90,    87,    25,    26,     0,    52,     0,     0,
       0,    36,     0,    35,    47,    50,    74,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    77,
      48,    76,    27,     0,     0,    28,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    42,    43,   182,    44,    45,    46,   179,   205,
     206,   207,    47,    48,   146,    50,    51,   193,   194,    52,
     180,   213,    53,    98,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,   132,   247,   133,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     170,   171
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
    -178,   225,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,    -5,   -79,   -70,   -64,     2,   -58,   -38,    55,    59,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
      63,  -178,  -178,  -178,    65,    78,  -178,   -31,    27,    27,
      44,  -178,  -178,  -178,  -178,  -178,  -178,   286,  -178,    92,
     101,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,    10,  -178,  -178,    96,    93,    97,
      20,    47,    98,  -178,     4,   -69,  -178,    44,    44,    44,
     116,    44,    44,   417,  -178,    35,  -178,  -178,    40,    41,
      72,    54,   -76,   241,    64,  -178,  -178,    77,   295,   146,
     356,   177,   -55,   105,  -178,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,  -178,  -178,
     188,    44,   189,    44,  -178,  -178,  -178,  -178,   107,   109,
     193,   206,   120,  -178,  -178,  -178,  -178,  -178,    44,  -178,
     209,  -178,   211,   212,  -178,  -178,    92,  -178,   157,  -178,
     215,   -21,    44,  -178,   121,    93,    97,    20,    20,    47,
      47,    47,    47,    98,    98,  -178,  -178,  -178,  -178,  -178,
     144,   142,  -178,   158,   365,   365,   160,   171,    44,    99,
     145,   156,    22,   162,   190,   205,    44,   169,    44,  -178,
     182,   186,   273,   -10,  -178,  -178,    44,  -178,   266,  -178,
      44,    44,   210,   310,  -178,  -178,  -178,  -178,   164,  -178,
    -178,   213,   285,  -178,  -178,  -178,  -178,  -178,  -178,    44,
      44,   214,   394,   216,  -178,  -178,  -178,   186,   394,  -178,
     365,  -178,  -178,    44,  -178,  -178,   217,  -178,   222,   223,
     227,  -178,    -6,  -178,  -178,  -178,  -178,   228,  -178,   198,
     394,   365,   365,   186,   365,   186,    28,    29,  -178,  -178,
    -178,  -178,  -178,   186,   218,  -178,  -178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,  -178,  -178,   125,   137,  -178,  -178,  -178,
    -178,  -178,   181,  -164,    -1,   -97,  -159,  -177,   135,  -178,
    -178,  -178,  -134,  -178,   -96,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,   -14,  -178,  -178,
    -178,   219,   231,    69,    51,    67,   -11,  -178,  -178,  -178,
     242,  -178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      49,    85,   147,   150,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    81,   209,   118,   119,    77,    78,
     210,   122,   141,    82,   123,   152,    97,    95,    96,    83,
       3,     4,     5,     6,     7,     8,     9,    10,    94,   234,
      86,   109,   110,   153,   235,   242,   101,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    33,   225,    18,   188,
      87,    19,    93,   124,   125,   126,    88,   128,   129,   134,
      89,    36,   256,   257,    90,    79,    91,   189,   198,   199,
      35,    33,   131,   212,   227,    80,    38,   228,   253,    92,
      39,   228,   143,   244,   120,    40,    36,   121,    33,   149,
      84,   111,   112,   102,   165,   166,   167,   169,   104,   169,
     106,    38,   103,    36,   105,    39,   107,   108,   215,   260,
      40,   262,   263,   264,   181,   228,   228,   127,    38,   265,
     113,   114,    39,   135,   246,   136,   137,    40,   190,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   139,
      31,    32,   138,   192,    80,   258,   259,   148,   261,   203,
     159,   160,   161,   162,   202,    24,    25,    26,    27,    28,
      29,   144,   221,    32,   223,   236,   157,   158,   149,   149,
     163,   164,   229,   115,   116,   117,   231,   232,   151,    24,
      25,    26,    27,    28,    29,   204,    31,    32,   154,   168,
     172,   174,   149,   175,   176,   239,   240,   101,    24,    25,
      26,    27,    28,    29,    99,   191,    32,   177,   178,   248,
     183,   192,   184,   185,   100,     2,   187,   192,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   186,   195,   196,
     200,   211,    24,    25,    26,    27,    28,    29,   192,   192,
      32,   201,   197,    12,   214,    13,    14,    15,    16,    17,
     218,    18,   222,   219,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   220,    33,
     224,    41,    34,    35,   226,    24,    25,    26,    27,    28,
      29,   142,   255,    32,    36,   230,   238,    37,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   216,   233,    38,
     249,   237,   241,    39,   243,   250,   266,   251,    40,   217,
      41,   252,   254,    12,   155,    13,    14,    15,    16,    17,
      24,    25,    26,    27,    28,    29,    99,   156,    32,    24,
      25,    26,    27,    28,    29,    30,   100,    32,     0,    33,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     208,    31,    32,   245,    36,   173,     0,    37,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    38,
       0,     0,     0,    39,     0,     0,     0,     0,    40,     0,
      41,   145,     0,    12,     0,    13,    14,    15,    16,    17,
      24,    25,    26,    27,    28,    29,     0,    31,    32,    24,
      25,    26,    27,    28,    29,    30,     0,    32,     0,    33,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,    36,     0,     0,    37,    24,    25,
      26,    27,    28,    29,     0,     0,    32,     0,     0,    38,
       0,     0,     0,    39,     0,     0,     0,     0,    40,     0,
      41,    24,    25,    26,    27,    28,    29,   130,     0,    32,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,    39,     0,     0,     0,     0,
      40
};

static const yytype_int16 yycheck[] =
{
       1,    15,    98,   100,    80,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    93,   179,    12,    13,    23,    24,
     179,    90,    98,    93,    93,    80,    40,    38,    39,    93,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   203,
      98,    21,    22,    98,   203,   222,    47,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    54,   191,    36,    80,
      98,    39,    93,    77,    78,    79,    11,    81,    82,    83,
      11,    69,   249,   250,    11,    80,    11,    98,   174,   175,
      58,    54,    83,   180,    94,    90,    84,    97,    94,    11,
      88,    97,    93,   227,    90,    93,    69,    93,    54,   100,
      98,    81,    82,    11,   115,   116,   117,   121,    98,   123,
      17,    84,    11,    69,    18,    88,    19,    20,    96,   253,
      93,   255,    94,    94,   138,    97,    97,    11,    84,   263,
      83,    84,    88,    98,   230,    95,    95,    93,   152,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    95,
      51,    52,    80,   154,    90,   251,   252,    11,   254,    60,
     109,   110,   111,   112,   178,    44,    45,    46,    47,    48,
      49,    94,   186,    52,   188,    11,   107,   108,   179,   180,
     113,   114,   196,    85,    86,    87,   200,   201,    11,    44,
      45,    46,    47,    48,    49,    96,    51,    52,    93,    11,
      11,    94,   203,    94,    11,   219,   220,   208,    44,    45,
      46,    47,    48,    49,    50,    94,    52,    11,    98,   233,
      11,   222,    11,    11,    60,     0,    11,   228,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    80,    94,    97,
      80,    96,    44,    45,    46,    47,    48,    49,   249,   250,
      52,    80,    94,    28,    98,    30,    31,    32,    33,    34,
      98,    36,    93,    73,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    73,    54,
      98,    95,    57,    58,    11,    44,    45,    46,    47,    48,
      49,    50,    94,    52,    69,    29,    11,    72,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   182,    98,    84,
      93,    98,    98,    88,    98,    93,    98,    94,    93,   182,
      95,    94,    94,    28,   105,    30,    31,    32,    33,    34,
      44,    45,    46,    47,    48,    49,    50,   106,    52,    44,
      45,    46,    47,    48,    49,    50,    60,    52,    -1,    54,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     179,    51,    52,   228,    69,   123,    -1,    72,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      95,    96,    -1,    28,    -1,    30,    31,    32,    33,    34,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    54,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    -1,    -1,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      95,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   101,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    28,    30,    31,    32,    33,    34,    36,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    54,    57,    58,    69,    72,    84,    88,
      93,    95,   102,   103,   105,   106,   107,   112,   113,   114,
     115,   116,   119,   122,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    23,    24,    80,
      90,    93,    93,    93,    98,   137,    98,    98,    11,    11,
      11,    11,    11,    93,    11,   146,   146,   137,   123,    50,
      60,   114,    11,    11,    98,    18,    17,    19,    20,    21,
      22,    81,    82,    83,    84,    85,    86,    87,    12,    13,
      90,    93,    90,    93,   137,   137,   137,    11,   137,   137,
      50,   114,   134,   136,   137,    98,    95,    95,    80,    95,
      80,    98,    50,   114,    94,    96,   114,   124,    11,   114,
     115,    11,    80,    98,    93,   141,   142,   143,   143,   144,
     144,   144,   144,   145,   145,   146,   146,   146,    11,   137,
     150,   151,    11,   150,    94,    94,    11,    11,    98,   108,
     120,   137,   104,    11,    11,    11,    80,    11,    80,    98,
     137,    94,   114,   117,   118,    94,    97,    94,   124,   124,
      80,    80,   137,    60,    96,   109,   110,   111,   112,   113,
     116,    96,   115,   121,    98,    96,   105,   106,    98,    73,
      73,   137,    93,   137,    98,   122,    11,    94,    97,   137,
      29,   137,   137,    98,   113,   116,    11,    98,    11,   137,
     137,    98,   117,    98,   122,   118,   124,   135,   137,    93,
      93,    94,    94,    94,    94,    94,   117,   117,   124,   124,
     122,   124,   122,    94,    94,   122,    98
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
        case 10:

/* Line 1455 of yacc.c  */
#line 98 "Parser.y"
    { printf("Namespace: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 113 "Parser.y"
    { printf("Using: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 115 "Parser.y"
    { printf("Using alias: %s = %s\n", (yyvsp[(2) - (5)].string_value), (yyvsp[(4) - (5)].string_value)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 121 "Parser.y"
    { printf("Class: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 137 "Parser.y"
    { printf("Static field\n"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 139 "Parser.y"
    { printf("Static method\n"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 144 "Parser.y"
    { printf("Constructor: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 146 "Parser.y"
    { printf("Constructor with params: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 151 "Parser.y"
    { printf("Default access\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 153 "Parser.y"
    { printf("Public\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 155 "Parser.y"
    { printf("Private\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 157 "Parser.y"
    { printf("Protected\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 159 "Parser.y"
    { printf("Internal\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    { printf("Field: %s\n", (yyvsp[(3) - (4)].string_value)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    { printf("Initialized field: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 168 "Parser.y"
    { printf("Var field: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 172 "Parser.y"
    { printf("int "); (yyval.type_value) = 1; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 173 "Parser.y"
    { printf("float "); (yyval.type_value) = 2; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    { printf("double "); (yyval.type_value) = 3; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { printf("bool "); (yyval.type_value) = 4; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    { printf("char "); (yyval.type_value) = 5; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 177 "Parser.y"
    { printf("string "); (yyval.type_value) = 6; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    { printf("decimal "); (yyval.type_value) = 7; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 183 "Parser.y"
    { printf("void "); (yyval.type_value) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    { printf("Method: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 191 "Parser.y"
    { printf("Method with params: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 193 "Parser.y"
    { printf("Static method: %s\n", (yyvsp[(4) - (8)].string_value)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { printf("Parameter: %s\n", (yyvsp[(2) - (2)].string_value)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 209 "Parser.y"
    { printf("Interface: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 218 "Parser.y"
    { printf("Interface method: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 224 "Parser.y"
    { printf("Block\n"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 246 "Parser.y"
    { printf("Expression statement\n"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 251 "Parser.y"
    { printf("Local variable: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
    { printf("Initialized local variable: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 255 "Parser.y"
    { printf("Var local variable: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 260 "Parser.y"
    { printf("If\n"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 262 "Parser.y"
    { printf("If-else\n"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 267 "Parser.y"
    { printf("While\n"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 272 "Parser.y"
    { printf("For statement\n"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 277 "Parser.y"
    { printf("Foreach statement\n"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 279 "Parser.y"
    { printf("Foreach statement with var\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 284 "Parser.y"
    { printf("Return void\n"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 286 "Parser.y"
    { printf("Return value\n"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 291 "Parser.y"
    { printf("Break;\n"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 296 "Parser.y"
    { printf("Continue;\n"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 301 "Parser.y"
    { printf("No for initializer "); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 309 "Parser.y"
    { printf("No for iterator "); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 314 "Parser.y"
    { printf("For loop variable: %s ", (yyvsp[(2) - (4)].string_value)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 316 "Parser.y"
    { printf("For loop var variable: %s ", (yyvsp[(2) - (4)].string_value)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 327 "Parser.y"
    { printf("Assignment\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 329 "Parser.y"
    { printf("Plus assignment\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 331 "Parser.y"
    { printf("Minus assignment\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 341 "Parser.y"
    { printf("Logical OR\n"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 347 "Parser.y"
    { printf("Logical AND\n"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 353 "Parser.y"
    { printf("Equals\n"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 355 "Parser.y"
    { printf("Not equals\n"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 361 "Parser.y"
    { printf("Less than\n"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 363 "Parser.y"
    { printf("Greater than\n"); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 365 "Parser.y"
    { printf("Less or equal\n"); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 367 "Parser.y"
    { printf("Greater or equal\n"); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 373 "Parser.y"
    { printf("Addition\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 375 "Parser.y"
    { printf("Subtraction\n"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 381 "Parser.y"
    { printf("Multiplication\n"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 383 "Parser.y"
    { printf("Division\n"); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 385 "Parser.y"
    { printf("Modulo\n"); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 391 "Parser.y"
    { printf("Unary minus\n"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 393 "Parser.y"
    { printf("Logical NOT\n"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 400 "Parser.y"
    { printf("Member access: %s\n", (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 402 "Parser.y"
    { printf("Method call\n"); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 404 "Parser.y"
    { printf("Post-increment\n"); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 406 "Parser.y"
    { printf("Post-decrement\n"); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 411 "Parser.y"
    { printf("Member access: %s.%s\n", (yyvsp[(1) - (3)].string_value), (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 413 "Parser.y"
    { printf("Member access: %s\n", (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 415 "Parser.y"
    { printf("Method call\n"); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 420 "Parser.y"
    { printf("Identifier: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 422 "Parser.y"
    { printf("Integer: %d\n", (yyvsp[(1) - (1)].int_value)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 424 "Parser.y"
    { printf("Float: %f\n", (yyvsp[(1) - (1)].float_value)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 426 "Parser.y"
    { printf("Double: %f\n", (yyvsp[(1) - (1)].double_value)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 428 "Parser.y"
    { printf("Decimal: %f\n", (yyvsp[(1) - (1)].double_value)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 430 "Parser.y"
    { printf("String: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 432 "Parser.y"
    { printf("Char: %c\n", (yyvsp[(1) - (1)].char_value)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 434 "Parser.y"
    { printf("Boolean: true\n"); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 436 "Parser.y"
    { printf("Boolean: false\n"); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 438 "Parser.y"
    { printf("This\n"); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 440 "Parser.y"
    { printf("Null literal\n"); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 442 "Parser.y"
    { printf("Parenthesized expression\n"); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 447 "Parser.y"
    { printf("Empty arguments\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2363 "Parser.tab.c"
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
#line 456 "Parser.y"


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
