
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
    fprintf(stderr, "DEBUG PARSER: Current token: %s\n", yytext); // ДОБАВЬ ЭТУ СТРОКУ
}


/* Line 189 of yacc.c  */
#line 89 "Parser.tab.c"

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

/* Line 214 of yacc.c  */
#line 16 "Parser.y"

    int int_value;
    float float_value;
    double double_value;
    char* string_value;
    char char_value;
    int bool_value;
    int type_value;



/* Line 214 of yacc.c  */
#line 212 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "Parser.tab.c"

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
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,     2,     2,     2,     2,     2,
      87,    88,    80,    78,    91,    79,    84,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    92,
      76,    75,    77,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,     2,    90,     2,     2,     2,     2,
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
      83
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
     117,   119,   121,   123,   125,   127,   133,   140,   142,   146,
     149,   156,   157,   160,   167,   171,   172,   175,   177,   179,
     181,   183,   185,   187,   190,   194,   200,   206,   212,   220,
     226,   229,   233,   235,   237,   241,   243,   245,   249,   251,
     255,   257,   261,   265,   267,   271,   275,   279,   283,   285,
     289,   293,   295,   299,   303,   305,   308,   311,   313,   315,
     319,   324,   328,   332,   337,   339,   341,   343,   345,   347,
     349,   351,   353,   355,   357,   361,   362,   364,   366
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    -1,    95,    96,    -1,    97,    -1,   100,
      -1,    99,    -1,   107,    -1,   110,    -1,   118,    -1,    58,
      11,    89,    98,    90,    -1,    -1,    98,   100,    -1,    98,
      99,    -1,   101,    -1,   113,    -1,    59,    11,    92,    -1,
      59,    11,    75,    11,    92,    -1,    37,    11,    89,   102,
      90,    -1,    -1,   102,   103,    -1,   107,    -1,   110,    -1,
     105,    -1,   104,    -1,    61,   107,    -1,    61,   110,    -1,
     106,    11,    87,    88,   116,    -1,   106,    11,    87,   111,
      88,   116,    -1,    -1,    41,    -1,    42,    -1,    44,    -1,
      43,    -1,   106,   108,    11,    92,    -1,   106,   108,    11,
      75,   124,    92,    -1,   106,    51,    11,    75,   124,    92,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,   108,    -1,    52,    -1,   109,    11,    87,
      88,   116,    -1,   109,    11,    87,   111,    88,   116,    -1,
     112,    -1,   111,    91,   112,    -1,   108,    11,    -1,    40,
      11,    89,   114,    90,    92,    -1,    -1,   114,   115,    -1,
     109,    11,    87,   111,    88,    92,    -1,    89,   117,    90,
      -1,    -1,   117,   118,    -1,   119,    -1,   120,    -1,   121,
      -1,   122,    -1,   123,    -1,   116,    -1,   124,    92,    -1,
     108,    11,    92,    -1,   108,    11,    75,   124,    92,    -1,
      51,    11,    75,   124,    92,    -1,    28,    87,   124,    88,
     118,    -1,    28,    87,   124,    88,   118,    29,   118,    -1,
      30,    87,   124,    88,   118,    -1,    32,    92,    -1,    32,
     124,    92,    -1,   125,    -1,   126,    -1,    11,    75,   124,
      -1,   127,    -1,   128,    -1,   127,    18,   128,    -1,   129,
      -1,   128,    17,   129,    -1,   130,    -1,   129,    19,   130,
      -1,   129,    20,   130,    -1,   131,    -1,   130,    76,   131,
      -1,   130,    77,   131,    -1,   130,    21,   131,    -1,   130,
      22,   131,    -1,   132,    -1,   131,    78,   132,    -1,   131,
      79,   132,    -1,   133,    -1,   132,    80,   133,    -1,   132,
      81,   133,    -1,   134,    -1,    79,   133,    -1,    82,   133,
      -1,   136,    -1,   135,    -1,   134,    84,    11,    -1,   134,
      87,   137,    88,    -1,    11,    84,    11,    -1,   135,    84,
      11,    -1,   135,    87,   137,    88,    -1,    11,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    55,    -1,    87,   124,    88,
      -1,    -1,   138,    -1,   124,    -1,   138,    91,   124,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    76,    80,    81,    82,    83,    84,    85,
      89,    93,    94,    95,    99,   100,   104,   106,   112,   116,
     117,   121,   122,   123,   124,   128,   130,   135,   137,   143,
     144,   146,   148,   150,   155,   157,   159,   164,   165,   166,
     167,   168,   169,   173,   174,   179,   181,   186,   187,   191,
     197,   201,   202,   206,   212,   216,   217,   221,   222,   223,
     224,   225,   226,   230,   235,   237,   239,   244,   246,   251,
     256,   258,   264,   268,   269,   274,   278,   279,   284,   285,
     290,   291,   293,   298,   299,   301,   303,   305,   310,   311,
     313,   318,   319,   321,   326,   327,   329,   334,   335,   336,
     338,   343,   345,   347,   352,   354,   356,   358,   360,   362,
     364,   366,   368,   370,   372,   380,   381,   385,   386
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
  "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK", "CONTINUE", "FOREACH",
  "DO", "CLASS", "STRUCT", "ENUM", "INTERFACE", "PUBLIC", "PRIVATE",
  "INTERNAL", "PROTECTED", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE",
  "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE", "VAR_TYPE", "VOID_TYPE",
  "DECIMAL_TYPE", "NEW", "THIS", "OUT", "REF", "NAMESPACE", "USING",
  "ABSTRACT", "STATIC", "SEALED", "VIRTUAL", "OVERRIDE", "BASE", "SWITCH",
  "CASE", "DEFAULT", "GOTO", "NULL_LITERAL", "CONSOLE_METHOD", "OPERATOR",
  "LOWEST", "THEN", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'!'",
  "UMINUS", "'.'", "'['", "']'", "'('", "')'", "'{'", "'}'", "','", "';'",
  "':'", "$accept", "program", "top_level_declaration",
  "namespace_declaration", "namespace_body", "type_declaration",
  "using_directive", "class_declaration", "class_body", "class_member",
  "static_member_declaration", "constructor_declaration",
  "access_modifier", "field_declaration", "type", "return_type",
  "method_declaration", "parameter_list", "parameter",
  "interface_declaration", "interface_body", "interface_member", "block",
  "statement_list", "statement", "expression_statement",
  "local_variable_declaration", "if_statement", "while_statement",
  "return_statement", "expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "member_expression", "primary_expression",
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
     325,   326,   327,   328,   329,    61,    60,    62,    43,    45,
      42,    47,    33,   330,    46,    91,    93,    40,    41,   123,
     125,    44,    59,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    98,    98,    98,    99,    99,   100,   100,   101,   102,
     102,   103,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   107,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     113,   114,   114,   115,   116,   117,   117,   118,   118,   118,
     118,   118,   118,   119,   120,   120,   120,   121,   121,   122,
     123,   123,   124,   125,   125,   126,   127,   127,   128,   128,
     129,   129,   129,   130,   130,   130,   130,   130,   131,   131,
     131,   132,   132,   132,   133,   133,   133,   134,   134,   134,
     134,   135,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   138,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     0,     2,     2,     1,     1,     3,     5,     5,     0,
       2,     1,     1,     1,     1,     2,     2,     5,     6,     0,
       1,     1,     1,     1,     4,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     6,     1,     3,     2,
       6,     0,     2,     6,     3,     0,     2,     1,     1,     1,
       1,     1,     1,     2,     3,     5,     5,     5,     7,     5,
       2,     3,     1,     1,     3,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     2,     2,     1,     1,     3,
       4,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   105,   106,   107,   108,   109,   110,   111,
     112,   104,     0,     0,     0,     0,     0,    30,    31,    33,
      32,    37,    38,    39,    40,    41,    42,     0,    44,   113,
       0,     0,     0,     0,     0,    55,     3,     4,     6,     5,
      14,     0,     7,     0,     0,     8,    15,    62,     9,    57,
      58,    59,    60,    61,     0,    72,    73,    75,    76,    78,
      80,    83,    88,    91,    94,    98,    97,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,   104,    95,
      96,     0,     0,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,   115,    74,   101,     0,     0,    71,    19,
      51,     0,    11,     0,    16,   114,    54,     0,    56,     0,
       0,     0,    64,     0,    77,    79,    81,    82,    86,    87,
      84,    85,    89,    90,    92,    93,    99,   117,     0,   116,
     102,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,    47,   100,     0,   103,
      67,    69,    29,    18,    20,    24,    23,     0,    21,    43,
      22,     0,     0,    52,    66,    10,    13,    12,    17,     0,
       0,    65,    45,    49,     0,     0,   118,     0,    25,    26,
       0,    50,     0,    36,    35,    46,    48,    68,     0,     0,
       0,     0,     0,    27,     0,     0,    28,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    36,    37,   147,    38,    39,    40,   144,   164,
     165,   166,    41,    42,   117,    44,    45,   155,   156,    46,
     145,   173,    47,    82,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,   138,   139
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
    -139,    69,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,   -56,   -64,   -62,     4,    19,    26,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,    30,  -139,  -139,
      49,    54,   197,   197,   226,  -139,  -139,  -139,  -139,  -139,
    -139,   131,  -139,    74,    89,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,    50,  -139,  -139,   105,   129,    31,
       5,   -12,    13,  -139,   -55,   -49,  -139,   226,   136,   226,
     226,  -139,    57,    61,    63,    78,    65,   -72,    71,  -139,
    -139,    72,   164,   146,   148,   -59,    75,  -139,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     152,   226,   153,   226,  -139,  -139,    77,    95,  -139,  -139,
    -139,   226,  -139,   180,  -139,  -139,  -139,    74,  -139,   118,
     -53,   226,  -139,   210,   129,    31,     5,     5,   -12,   -12,
     -12,   -12,    13,    13,  -139,  -139,  -139,  -139,   107,   108,
    -139,   128,   217,   217,   273,    -3,   125,    -6,   126,   226,
     226,  -139,   147,   149,   229,   -36,  -139,  -139,   226,  -139,
     212,  -139,   294,  -139,  -139,  -139,  -139,    84,  -139,  -139,
    -139,   150,   233,  -139,  -139,  -139,  -139,  -139,  -139,   156,
     158,  -139,  -139,  -139,   149,   140,  -139,   217,  -139,  -139,
     174,  -139,   182,  -139,  -139,  -139,  -139,  -139,   240,   140,
     149,   -30,     1,  -139,   149,   178,  -139,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,  -139,   124,   127,  -139,  -139,  -139,
    -139,  -139,   133,  -138,    -1,   130,  -126,   -73,    88,  -139,
    -139,  -139,  -136,  -139,   -80,  -139,  -139,  -139,  -139,  -139,
     -13,  -139,  -139,  -139,   190,   191,    48,    10,    44,   -28,
    -139,  -139,  -139,   179,  -139
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,    72,   118,   113,    79,    80,   168,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   121,   182,   170,    67,
     114,    81,   150,    69,   188,    70,    92,    93,    68,   100,
      73,    15,   101,   122,    16,   102,   189,    74,   103,   151,
      84,    75,    21,    22,    23,    24,    25,    26,   195,    28,
      90,    91,   184,    31,   104,   185,   106,   107,   204,    29,
      76,   185,   160,   161,   203,    77,    96,    97,   206,     2,
     134,   135,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    94,    95,    32,   175,    85,    33,   171,   137,   205,
     137,    34,   185,    98,    99,   190,    71,    12,   146,    13,
      86,    14,   128,   129,   130,   131,    15,   197,   152,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   154,    88,    29,   201,   202,    30,    31,    21,
      22,    23,    24,    25,    26,    83,   179,   180,   126,   127,
     132,   133,    87,   169,   169,   186,    89,   105,    32,   108,
     109,    33,   110,   111,   112,    68,    34,   119,    35,   120,
     115,   169,   123,   136,   140,   142,    84,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    21,    22,    23,    24,
      25,    26,    83,   143,   154,    21,    22,    23,    24,    25,
      26,   148,    12,   149,    13,   157,    14,   154,   154,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    78,    21,
      22,    23,    24,    25,    26,    27,   159,   174,   178,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    35,   181,
     183,   187,   191,    32,   192,    12,    33,    13,   193,    14,
     194,    34,    29,    35,   116,    21,    22,    23,    24,    25,
      26,   198,    21,    22,    23,    24,    25,    26,    27,   199,
     207,   176,    29,   196,   177,   172,    32,   167,   124,    33,
     125,    29,   141,     0,    34,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,    32,     0,   153,    33,
       0,     0,     0,     0,    34,    32,    35,     0,    33,     0,
       0,     0,     0,    34,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    28,     0,     0,   200,     0,
       0,     0,     0,     0,   162,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163
};

static const yytype_int16 yycheck[] =
{
       1,    14,    82,    75,    32,    33,   144,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    75,   153,   144,    75,
      92,    34,    75,    87,   162,    87,    21,    22,    84,    84,
      11,    37,    87,    92,    40,    84,   162,    11,    87,    92,
      41,    11,    45,    46,    47,    48,    49,    50,   184,    52,
      19,    20,    88,    59,    67,    91,    69,    70,    88,    55,
      11,    91,   142,   143,   200,    11,    78,    79,   204,     0,
      98,    99,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    76,    77,    79,    90,    11,    82,    90,   101,    88,
     103,    87,    91,    80,    81,    11,    92,    28,   111,    30,
      11,    32,    92,    93,    94,    95,    37,   187,   121,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   123,    18,    55,   198,   199,    58,    59,    45,
      46,    47,    48,    49,    50,    51,   149,   150,    90,    91,
      96,    97,    92,   144,   145,   158,    17,    11,    79,    92,
      89,    82,    89,    75,    89,    84,    87,    11,    89,    11,
      88,   162,    87,    11,    11,    88,   167,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    45,    46,    47,    48,
      49,    50,    51,    88,   185,    45,    46,    47,    48,    49,
      50,    11,    28,    75,    30,    88,    32,   198,   199,    91,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    45,
      46,    47,    48,    49,    50,    51,    88,    92,    92,    55,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    89,    92,
      11,    29,    92,    79,    11,    28,    82,    30,    92,    32,
      92,    87,    55,    89,    90,    45,    46,    47,    48,    49,
      50,    87,    45,    46,    47,    48,    49,    50,    51,    87,
      92,   147,    55,   185,   147,   145,    79,   144,    88,    82,
      89,    55,   103,    -1,    87,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    79,    -1,    88,    82,
      -1,    -1,    -1,    -1,    87,    79,    89,    -1,    82,    -1,
      -1,    -1,    -1,    87,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    61,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    95,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    28,    30,    32,    37,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    55,
      58,    59,    79,    82,    87,    89,    96,    97,    99,   100,
     101,   106,   107,   108,   109,   110,   113,   116,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    75,    84,    87,
      87,    92,   124,    11,    11,    11,    11,    11,    11,   133,
     133,   124,   117,    51,   108,    11,    11,    92,    18,    17,
      19,    20,    21,    22,    76,    77,    78,    79,    80,    81,
      84,    87,    84,    87,   124,    11,   124,   124,    92,    89,
      89,    75,    89,    75,    92,    88,    90,   108,   118,    11,
      11,    75,    92,    87,   128,   129,   130,   130,   131,   131,
     131,   131,   132,   132,   133,   133,    11,   124,   137,   138,
      11,   137,    88,    88,   102,   114,   124,    98,    11,    75,
      75,    92,   124,    88,   108,   111,   112,    88,    91,    88,
     118,   118,    61,    90,   103,   104,   105,   106,   107,   108,
     110,    90,   109,   115,    92,    90,    99,   100,    92,   124,
     124,    92,   116,    11,    88,    91,   124,    29,   107,   110,
      11,    92,    11,    92,    92,   116,   112,   118,    87,    87,
      88,   111,   111,   116,    88,    88,   116,    92
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
#line 90 "Parser.y"
    { printf("Namespace: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 105 "Parser.y"
    { printf("Using: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 107 "Parser.y"
    { printf("Using alias: %s = %s\n", (yyvsp[(2) - (5)].string_value), (yyvsp[(4) - (5)].string_value)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 113 "Parser.y"
    { printf("Class: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 129 "Parser.y"
    { printf("Static field\n"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 131 "Parser.y"
    { printf("Static method\n"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 136 "Parser.y"
    { printf("Constructor: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 138 "Parser.y"
    { printf("Constructor with params: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 143 "Parser.y"
    { printf("Default access\n"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 145 "Parser.y"
    { printf("Public\n"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    { printf("Private\n"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 149 "Parser.y"
    { printf("Protected\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 151 "Parser.y"
    { printf("Internal\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 156 "Parser.y"
    { printf("Field: %s\n", (yyvsp[(3) - (4)].string_value)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 158 "Parser.y"
    { printf("Initialized field: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 160 "Parser.y"
    { printf("Var field: %s\n", (yyvsp[(3) - (6)].string_value)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    { printf("int "); (yyval.type_value) = 1; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 165 "Parser.y"
    { printf("float "); (yyval.type_value) = 2; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    { printf("double "); (yyval.type_value) = 3; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 167 "Parser.y"
    { printf("bool "); (yyval.type_value) = 4; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 168 "Parser.y"
    { printf("char "); (yyval.type_value) = 5; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 169 "Parser.y"
    { printf("string "); (yyval.type_value) = 6; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 173 "Parser.y"
    { (yyval.type_value) = (yyvsp[(1) - (1)].type_value); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    { printf("void "); (yyval.type_value) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 180 "Parser.y"
    { printf("Method: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    { printf("Method with params: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 192 "Parser.y"
    { printf("Parameter: %s\n", (yyvsp[(2) - (2)].string_value)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 198 "Parser.y"
    { printf("Interface: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 207 "Parser.y"
    { printf("Interface method: %s\n", (yyvsp[(2) - (6)].string_value)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 213 "Parser.y"
    { printf("Block\n"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 231 "Parser.y"
    { printf("Expression statement\n"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 236 "Parser.y"
    { printf("Local variable: %s\n", (yyvsp[(2) - (3)].string_value)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 238 "Parser.y"
    { printf("Initialized local variable: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 240 "Parser.y"
    { printf("Var local variable: %s\n", (yyvsp[(2) - (5)].string_value)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 245 "Parser.y"
    { printf("If\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 247 "Parser.y"
    { printf("If-else\n"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 252 "Parser.y"
    { printf("While\n"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 257 "Parser.y"
    { printf("Return void\n"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 259 "Parser.y"
    { printf("Return value\n"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 270 "Parser.y"
    { printf("Assignment\n"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 280 "Parser.y"
    { printf("Logical OR\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 286 "Parser.y"
    { printf("Logical AND\n"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 292 "Parser.y"
    { printf("Equals\n"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    { printf("Not equals\n"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 300 "Parser.y"
    { printf("Less than\n"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 302 "Parser.y"
    { printf("Greater than\n"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 304 "Parser.y"
    { printf("Less or equal\n"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 306 "Parser.y"
    { printf("Greater or equal\n"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 312 "Parser.y"
    { printf("Addition\n"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 314 "Parser.y"
    { printf("Subtraction\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 320 "Parser.y"
    { printf("Multiplication\n"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 322 "Parser.y"
    { printf("Division\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 328 "Parser.y"
    { printf("Unary minus\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 330 "Parser.y"
    { printf("Logical NOT\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 337 "Parser.y"
    { printf("Member access: %s\n", (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 339 "Parser.y"
    { printf("Method call\n"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 344 "Parser.y"
    { printf("Member access: %s.%s\n", (yyvsp[(1) - (3)].string_value), (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 346 "Parser.y"
    { printf("Member access: %s\n", (yyvsp[(3) - (3)].string_value)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 348 "Parser.y"
    { printf("Method call\n"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 353 "Parser.y"
    { printf("Identifier: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 355 "Parser.y"
    { printf("Integer: %d\n", (yyvsp[(1) - (1)].int_value)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 357 "Parser.y"
    { printf("Float: %f\n", (yyvsp[(1) - (1)].float_value)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 359 "Parser.y"
    { printf("Double: %f\n", (yyvsp[(1) - (1)].double_value)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 361 "Parser.y"
    { printf("Decimal: %f\n", (yyvsp[(1) - (1)].double_value)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 363 "Parser.y"
    { printf("String: %s\n", (yyvsp[(1) - (1)].string_value)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 365 "Parser.y"
    { printf("Char: %c\n", (yyvsp[(1) - (1)].char_value)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 367 "Parser.y"
    { printf("Boolean: true\n"); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 369 "Parser.y"
    { printf("Boolean: false\n"); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 371 "Parser.y"
    { printf("This\n"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 373 "Parser.y"
    { printf("Parenthesized expression\n"); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 380 "Parser.y"
    { printf("Empty arguments\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2163 "Parser.tab.c"
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
#line 389 "Parser.y"


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
