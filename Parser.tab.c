
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

// Remove warnings from bison
#ifdef _MSC_VER
#pragma warning( push, 0 )
#pragma warning( disable : 6011 )
#pragma warning( disable : 26819 )
#pragma warning( disable : 26812 )
#pragma warning( disable : 6387 )
#endif // _MSC_VER

#include <cstdio>
#include <iostream>

#include "Tree/Program.h"

void __cdecl yyerror(const char* s) {
	std::cerr << s << std::endl;
}

template <char Separator = ' ', typename... Args>
void Print(Args&&... args) {
    ((std::cout << args << Separator), ...);
    std::cout << std::endl;
}

int yylex();
int yyparse();
extern FILE* yyin;
extern struct Program* treeRoot;


/* Line 189 of yacc.c  */
#line 105 "Parser.tab.c"

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
     LESS = 258,
     GREATER = 259,
     EQUAL = 260,
     NOT_EQUAL = 261,
     GREATER_OR_EQUAL = 262,
     LESS_OR_EQUAL = 263,
     OR = 264,
     AND = 265,
     PLUS_ASSIGN = 266,
     MINUS_ASSIGN = 267,
     MULTIPLY_ASSIGN = 268,
     DIVISION_ASSIGN = 269,
     INCREMENT = 270,
     DECREMENT = 271,
     IDENTIFIER = 272,
     INTEGER = 273,
     FLOATING_POINT = 274,
     STRING = 275,
     CHARACTER = 276,
     RETURN = 277,
     IF = 278,
     ELSE = 279,
     WHILE = 280,
     DO = 281,
     FOR = 282,
     CHAR_KW = 283,
     INT_KW = 284,
     STRING_KW = 285,
     BOOL_KW = 286,
     FLOAT_KW = 287,
     VOID_KW = 288,
     NEW = 289,
     NULL_KW = 290,
     TRUE_KW = 291,
     FALSE_KW = 292,
     PUBLIC = 293,
     PROTECTED = 294,
     PRIVATE = 295,
     STATIC = 296,
     CLASS = 297,
     ENUM = 298,
     USING = 299,
     NAMESPACE = 300,
     FOREACH = 301,
     IN_KW = 302,
     OBJECT = 303,
     OPERATOR = 304,
     VAR = 305,
     UNARY_PLUS = 306,
     UNARY_MINUS = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 32 "Parser.y"

    int _integer;
    char* _string;
    char* _identifier;
    double _floatingPoint;
    char _character;

    struct AccessExpr* _accessExpr;
    struct ExprNode* _expr;
    struct ExprSeqNode* _exprSeq;
    
    enum class StandardType _standardType;
    struct StandardArrayType* _standardArrayType;
    struct TypeNode* _type;
    
    struct VarDeclNode* _varDecl;
    struct WhileNode* _while;
    struct DoWhileNode* _doWhile;
    struct ForNode* _for;
    struct ForEachNode* _foreach;
    struct StmtSeqNode* _stmtSeq;
    struct IfNode* _if;
    struct StmtNode* _stmt;
    
    enum class VisibilityModifier _visibiltyModifier;
    struct FieldDeclNode* _fieldDecl;
    struct MethodArguments* _methodArguments;
    struct MethodDeclNode* _methodDecl;
    struct ClassMembersNode* _classMembers;
    struct ClassDeclNode* _classDecl;

    struct IdentifierList* _enumerators;
    struct EnumDeclNode* _enumDecl;

    struct IdentifierList* _usingArg;
    struct NamespaceMembersNode* _namespaceMembers;
    struct NamespaceDeclNode* _namespaceDecl;
    struct UsingDirectiveNode* _usingDirective;
    struct UsingDirectives* _usingDirectives;
    struct NamespaceDeclSeq* _namespaceDeclSeq;



/* Line 214 of yacc.c  */
#line 237 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 249 "Parser.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1030

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  410

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,     2,     2,     2,     2,     2,
      64,    65,    56,    54,    68,    55,    61,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    69,
      52,    51,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,    67,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    15,    19,    21,    23,    25,
      27,    29,    31,    33,    38,    42,    49,    53,    57,    61,
      65,    69,    73,    77,    81,    85,    89,    93,    97,   101,
     105,   109,   113,   117,   120,   123,   126,   129,   132,   134,
     136,   139,   145,   152,   157,   163,   164,   166,   168,   172,
     173,   175,   177,   180,   183,   186,   188,   190,   192,   194,
     196,   200,   204,   206,   209,   210,   212,   218,   226,   236,
     246,   256,   262,   270,   278,   280,   282,   284,   286,   288,
     292,   296,   298,   300,   302,   305,   308,   313,   318,   320,
     324,   325,   327,   329,   331,   333,   347,   361,   375,   389,
     403,   417,   431,   445,   459,   473,   485,   497,   509,   521,
     533,   543,   553,   564,   575,   579,   583,   585,   587,   589,
     592,   595,   598,   599,   601,   603,   607,   614,   621,   630,
     639,   641,   643,   646,   649,   650,   652,   658,   660,   663,
     665,   669,   673,   675,   678,   679
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,   109,   105,    -1,    64,    74,    65,    -1,
      73,    63,    74,    62,    -1,    73,    63,    62,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    36,    -1,    37,
      -1,    17,    -1,    17,    64,    77,    65,    -1,    73,    61,
      17,    -1,    73,    61,    17,    64,    77,    65,    -1,    74,
      54,    74,    -1,    74,    55,    74,    -1,    74,    56,    74,
      -1,    74,    57,    74,    -1,    74,    51,    74,    -1,    74,
      11,    74,    -1,    74,    12,    74,    -1,    74,    13,    74,
      -1,    74,    14,    74,    -1,    74,    52,    74,    -1,    74,
      53,    74,    -1,    74,     5,    74,    -1,    74,     6,    74,
      -1,    74,     8,    74,    -1,    74,     7,    74,    -1,    74,
      10,    74,    -1,    74,     9,    74,    -1,    58,    74,    -1,
      15,    74,    -1,    16,    74,    -1,    54,    74,    -1,    55,
      74,    -1,    35,    -1,    73,    -1,    34,    88,    -1,    34,
      88,    66,    77,    67,    -1,    34,    63,    62,    66,    77,
      67,    -1,    64,    86,    65,    74,    -1,    34,    86,    63,
      74,    62,    -1,    -1,    74,    -1,    74,    -1,    76,    68,
      74,    -1,    -1,    76,    -1,    69,    -1,    74,    69,    -1,
      89,    69,    -1,    90,    69,    -1,    81,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,    66,    80,    67,    -1,
      22,    75,    69,    -1,    78,    -1,    79,    78,    -1,    -1,
      79,    -1,    25,    64,    74,    65,    78,    -1,    26,    78,
      25,    64,    74,    65,    69,    -1,    27,    64,    89,    69,
      75,    69,    75,    65,    78,    -1,    27,    64,    90,    69,
      75,    69,    75,    65,    78,    -1,    27,    64,    75,    69,
      75,    69,    75,    65,    78,    -1,    23,    64,    74,    65,
      78,    -1,    23,    64,    74,    65,    78,    24,    78,    -1,
      46,    64,    89,    47,    74,    65,    78,    -1,    28,    -1,
      29,    -1,    31,    -1,    32,    -1,    30,    -1,    86,    63,
      62,    -1,    87,    63,    62,    -1,    86,    -1,    87,    -1,
      73,    -1,    88,    17,    -1,    50,    17,    -1,    88,    17,
      51,    74,    -1,    50,    17,    51,    74,    -1,    89,    -1,
      91,    68,    89,    -1,    -1,    91,    -1,    38,    -1,    39,
      -1,    40,    -1,    93,    41,    88,    49,    54,    64,    89,
      68,    89,    65,    66,    80,    67,    -1,    93,    41,    88,
      49,    55,    64,    89,    68,    89,    65,    66,    80,    67,
      -1,    93,    41,    88,    49,    56,    64,    89,    68,    89,
      65,    66,    80,    67,    -1,    93,    41,    88,    49,    57,
      64,    89,    68,    89,    65,    66,    80,    67,    -1,    93,
      41,    88,    49,    52,    64,    89,    68,    89,    65,    66,
      80,    67,    -1,    93,    41,    88,    49,    53,    64,    89,
      68,    89,    65,    66,    80,    67,    -1,    93,    41,    88,
      49,     5,    64,    89,    68,    89,    65,    66,    80,    67,
      -1,    93,    41,    88,    49,     6,    64,    89,    68,    89,
      65,    66,    80,    67,    -1,    93,    41,    88,    49,     8,
      64,    89,    68,    89,    65,    66,    80,    67,    -1,    93,
      41,    88,    49,     7,    64,    89,    68,    89,    65,    66,
      80,    67,    -1,    93,    41,    88,    49,    58,    64,    89,
      65,    66,    80,    67,    -1,    93,    41,    88,    49,    16,
      64,    89,    65,    66,    80,    67,    -1,    93,    41,    88,
      49,    15,    64,    89,    65,    66,    80,    67,    -1,    93,
      41,    88,    49,    55,    64,    89,    65,    66,    80,    67,
      -1,    93,    41,    88,    49,    54,    64,    89,    65,    66,
      80,    67,    -1,    93,    88,    17,    64,    92,    65,    66,
      80,    67,    -1,    93,    33,    17,    64,    92,    65,    66,
      80,    67,    -1,    93,    41,    33,    17,    64,    92,    65,
      66,    80,    67,    -1,    41,    93,    33,    17,    64,    92,
      65,    66,    80,    67,    -1,    93,    89,    69,    -1,    93,
      90,    69,    -1,    95,    -1,    96,    -1,    94,    -1,    97,
      95,    -1,    97,    96,    -1,    97,    94,    -1,    -1,    97,
      -1,    17,    -1,    99,    68,    17,    -1,    38,    43,    17,
      66,    99,    67,    -1,    38,    42,    17,    66,    98,    67,
      -1,    38,    42,    17,    70,   106,    66,    98,    67,    -1,
      38,    42,    17,    70,    48,    66,    98,    67,    -1,   100,
      -1,   101,    -1,   102,   100,    -1,   102,   101,    -1,    -1,
     102,    -1,    45,    17,    66,   103,    67,    -1,   104,    -1,
     105,   104,    -1,    17,    -1,   106,    61,    17,    -1,    44,
     106,    69,    -1,   107,    -1,   108,   107,    -1,    -1,   108,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   175,   175,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   225,   226,   229,   230,   233,
     234,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   250,   251,   253,   254,   257,   259,   262,   263,
     264,   267,   268,   271,   274,   275,   276,   277,   278,   281,
     282,   285,   286,   287,   290,   291,   293,   294,   297,   298,
     300,   301,   304,   305,   306,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     325,   326,   327,   328,   331,   332,   335,   336,   337,   338,
     339,   340,   343,   344,   347,   348,   351,   353,   354,   355,
     358,   359,   360,   361,   364,   365,   368,   371,   372,   375,
     376,   379,   382,   383,   386,   387
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LESS", "GREATER", "EQUAL", "NOT_EQUAL",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "OR", "AND", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT",
  "DECREMENT", "IDENTIFIER", "INTEGER", "FLOATING_POINT", "STRING",
  "CHARACTER", "RETURN", "IF", "ELSE", "WHILE", "DO", "FOR", "CHAR_KW",
  "INT_KW", "STRING_KW", "BOOL_KW", "FLOAT_KW", "VOID_KW", "NEW",
  "NULL_KW", "TRUE_KW", "FALSE_KW", "PUBLIC", "PROTECTED", "PRIVATE",
  "STATIC", "CLASS", "ENUM", "USING", "NAMESPACE", "FOREACH", "IN_KW",
  "OBJECT", "OPERATOR", "VAR", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'!'", "UNARY_PLUS", "UNARY_MINUS", "'.'", "']'", "'['", "'('",
  "')'", "'{'", "'}'", "','", "';'", "':'", "$accept", "program",
  "access_expr", "expr", "expr_optional", "expr_seq", "expr_seq_optional",
  "stmt", "stmt_seq", "stmt_seq_optional", "while_stmt", "do_while_stmt",
  "for_stmt", "if_stmt", "foreach_stmt", "standard_type",
  "standard_array_type", "type", "var_decl", "var_decl_with_init",
  "method_arguments", "method_arguments_optional", "visibility_modifier",
  "operator_overload", "method_decl", "field_decl", "class_members",
  "class_members_optional", "enumerators", "enum_decl", "class_decl",
  "namespace_members", "namespace_members_optional", "namespace_decl",
  "namespace_decl_seq", "using_arg", "using_directive", "using_directives",
  "using_directives_optional", 0
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
     305,    61,    60,    62,    43,    45,    42,    47,    33,   306,
     307,    46,    93,    91,    40,    41,   123,   125,    44,    59,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    81,    82,    83,    83,
      83,    84,    84,    85,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    97,
      97,    97,    98,    98,    99,    99,   100,   101,   101,   101,
     102,   102,   102,   102,   103,   103,   104,   105,   105,   106,
     106,   107,   108,   108,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     1,
       2,     5,     6,     4,     5,     0,     1,     1,     3,     0,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       3,     3,     1,     2,     0,     1,     5,     7,     9,     9,
       9,     5,     7,     7,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     2,     2,     4,     4,     1,     3,
       0,     1,     1,     1,     1,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    11,    11,    11,    11,    11,
       9,     9,    10,    10,     3,     3,     1,     1,     1,     2,
       2,     2,     0,     1,     1,     3,     6,     6,     8,     8,
       1,     1,     2,     2,     0,     1,     5,     1,     2,     1,
       3,     3,     1,     2,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     144,     0,     0,   142,   145,     0,   139,     0,     1,   143,
       0,   137,     2,     0,   141,     0,   138,   140,   134,     0,
     130,   131,   135,     0,     0,     0,   132,   133,   136,     0,
       0,   122,     0,     0,    92,    93,    94,     0,     0,   118,
     116,   117,   123,     0,     0,     0,   124,     0,     0,    12,
       6,     7,     8,     9,    74,    75,    78,    76,    77,     0,
      10,    11,     0,     0,     0,    83,    81,    82,     0,     0,
       0,   121,   119,   120,   127,   122,   122,   126,     0,     0,
      49,     0,     0,     0,    85,     0,     0,     0,    38,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,    84,
     114,   115,     0,     0,   125,     0,    47,    50,     0,    90,
       0,     0,     0,    34,    35,     0,    81,    40,    36,    37,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      14,     5,     0,    79,    80,     0,    90,   129,   128,    90,
       0,    13,     0,     0,    88,    91,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,    49,     0,    27,    28,    30,    29,
      32,    31,    21,    22,    23,    24,    20,    25,    26,    16,
      17,    18,    19,    49,     4,    86,     0,     0,    48,    85,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      43,     0,     0,     0,    89,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    41,    15,    64,    64,    45,     0,     0,     0,
       0,     0,    64,    51,    39,     0,    62,    65,     0,    55,
      56,    57,    58,    59,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    46,     0,     0,     0,
       0,    45,     0,     0,    52,    63,   111,    84,    53,    54,
       0,     0,     0,     0,     0,    64,    64,     0,     0,    64,
       0,    64,     0,     0,     0,    64,   110,   113,    61,     0,
       0,     0,     0,     0,     0,     0,    60,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    45,    45,     0,
      64,    64,    64,    64,   107,   106,    64,    64,   109,    64,
     108,    64,    64,    64,   105,    71,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    45,    45,     0,   101,   102,
     104,   103,    99,   100,    95,    96,    97,    98,    72,    67,
       0,     0,     0,    73,     0,     0,     0,    70,    68,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    93,   255,   287,   107,   108,   256,   257,   258,
     259,   260,   261,   262,   263,    66,    67,   264,   265,   266,
     155,   156,    38,    39,    40,    41,    42,    43,    47,    20,
      21,    22,    23,    11,    12,     7,     3,     4,     5
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -286
static const yytype_int16 yypact[] =
{
     -40,    16,    64,  -286,   -40,    -1,  -286,   -29,  -286,  -286,
      52,  -286,    -1,    88,  -286,    54,  -286,  -286,    85,    31,
    -286,  -286,    85,    57,   108,   109,  -286,  -286,  -286,   -45,
      61,    44,   -12,   132,  -286,  -286,  -286,    12,   228,  -286,
    -286,  -286,    44,    86,    89,   -24,  -286,   -49,   119,    90,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,   141,
    -286,  -286,   393,   142,   914,   -20,    94,    98,   145,   116,
     117,  -286,  -286,  -286,  -286,    44,    44,  -286,   172,   173,
     914,   127,   181,   151,   150,   914,   914,   945,  -286,   914,
     914,   914,   827,   -20,   477,   185,   852,   143,   146,   -44,
    -286,  -286,   136,   137,  -286,   148,   769,   147,   152,   966,
     154,    23,   914,  -286,  -286,   158,   153,   144,  -286,  -286,
    -286,   156,   914,   914,   914,   914,   914,   914,   914,   914,
     914,   914,   914,   914,   914,   914,   914,   914,   914,  -286,
     160,  -286,   644,  -286,  -286,   914,   966,  -286,  -286,   966,
     914,  -286,   205,   208,  -286,   159,   161,   966,   170,   174,
     176,   180,   186,   187,   198,   199,   202,   206,   210,   212,
     215,   769,   162,   883,   914,   914,    33,    33,    33,    33,
     140,    60,   769,   769,   769,   769,   769,    33,    33,    37,
      37,  -286,  -286,   914,  -286,   769,   216,   217,   769,  -286,
    -286,   966,   218,   220,   966,   966,   966,   966,   966,   966,
     966,   966,   966,   966,   966,   966,   966,   914,   656,   219,
    -286,   222,   223,   224,  -286,   704,   225,   230,   231,   232,
     233,   237,   238,   236,   239,    38,    39,   240,   241,   245,
     221,  -286,  -286,  -286,   704,   704,   914,   229,   247,   704,
     252,   258,   704,  -286,   -16,     3,  -286,   704,   259,  -286,
    -286,  -286,  -286,  -286,   279,   260,   274,   704,   966,   966,
     966,   966,   280,   281,   966,   966,   282,   966,   284,   966,
     966,   966,   290,  -286,   278,   291,   769,   288,   914,   914,
     334,   777,   966,   293,  -286,  -286,  -286,   310,  -286,  -286,
     295,   298,   299,   300,   304,   704,   704,   305,   306,   704,
     308,   704,   309,   323,   324,   704,  -286,  -286,  -286,   492,
     553,   329,   330,   333,   335,   351,  -286,  -286,   349,   353,
     354,   361,   350,   365,   362,   367,   368,   370,   371,   377,
     378,   381,   382,   704,   704,   914,   914,   914,   914,   914,
     704,   704,   704,   704,  -286,  -286,   704,   704,  -286,   704,
    -286,   704,   704,   704,  -286,   410,  -286,   568,   384,   385,
     386,   583,   389,   391,   392,   394,   397,   398,   399,   400,
     401,   404,   704,   403,   914,   914,   914,   704,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
     372,   395,   409,  -286,   704,   704,   704,  -286,  -286,  -286
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,  -286,   -38,     6,  -285,  -286,  -171,  -222,  -286,   164,
    -286,  -286,  -286,  -286,  -286,   -39,  -286,   126,   171,   -36,
    -286,  -123,   439,   435,   436,   438,  -286,    34,  -286,   459,
     470,  -286,  -286,   481,  -286,   462,   491,  -286,  -286
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
      65,   -83,    70,   219,     1,     6,   322,   145,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    77,    78,
     146,    31,   221,   196,    65,    32,   197,   290,   158,   159,
     160,   161,    13,     6,   203,   295,    44,    13,   162,   163,
      14,    95,    76,    96,    10,    95,   240,    96,   116,    65,
      34,    35,    36,   121,   132,   133,   134,   135,   136,   137,
     138,   368,   369,   370,     8,   122,   123,   124,   125,    15,
      94,    65,   294,    24,    25,   164,   165,   166,   167,   168,
     169,   170,    34,    35,    36,    37,   106,   135,   136,   137,
     138,   113,   114,   137,   138,   118,   119,   120,    94,   400,
     401,   402,   142,   276,   278,    17,   277,   279,    65,   102,
     103,    65,   133,   134,   135,   136,   137,   138,   171,    65,
      18,   365,   366,    19,    28,    29,    30,    33,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   122,   123,   124,   125,    46,
     127,   195,    79,    74,    80,    75,   198,    97,    81,    84,
     398,    98,    99,    65,    68,   403,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,   218,
     106,   220,   407,   408,   409,   100,   101,   254,    83,   104,
     105,   109,   133,   134,   135,   136,   137,   138,   110,   106,
     111,   112,   140,   147,   148,   143,   254,   254,   144,    69,
     174,   254,   149,   117,   254,   150,   173,   151,   157,   254,
     172,   175,   199,   106,   193,   200,   202,   201,   217,   254,
      65,    65,    65,    65,   204,   153,    65,    65,   205,    65,
     206,    65,    65,    65,   207,    49,    50,    51,    52,    53,
     208,   209,   286,   254,    65,   324,    54,    55,    56,    57,
      58,    59,   210,   211,    60,    61,   212,   254,   254,    62,
     213,   254,   153,   254,   214,   153,   215,   254,    63,   216,
     154,   222,   223,   153,   225,   226,   242,   243,   283,   244,
     245,   267,    64,   288,   319,   320,   297,   286,   268,   269,
     270,   271,   272,   273,   274,   254,   254,   275,   280,   281,
     282,   289,   254,   254,   254,   254,   291,   154,   254,   254,
     154,   254,   292,   254,   254,   254,   296,   153,   154,   298,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   299,   254,   316,   305,   306,   309,   254,
     311,   367,   286,   286,   286,   371,   315,   318,   317,   321,
     326,   145,   327,   328,   329,   330,   254,   254,   254,   331,
     334,   335,   224,   337,   339,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   340,   341,
     286,   286,   286,   345,   153,   153,   153,   153,   349,   346,
     153,   153,   347,   153,   348,   153,   153,   153,   284,   285,
      49,    50,    51,    52,    53,   350,   293,   354,   153,   351,
     352,    54,    55,    56,    57,    58,    82,   353,   356,    60,
      61,   300,   355,   357,   382,   358,   359,   404,   360,   301,
     302,   303,   304,   361,   362,   307,   308,   363,   310,   364,
     312,   313,   314,   384,   385,   386,   388,    64,   389,   390,
     405,   391,   323,   325,   392,   393,   394,   395,   396,   332,
     333,   397,   399,   336,   406,   338,    48,    71,    72,   342,
      73,    26,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    27,    16,    45,     9,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,     0,
       0,     0,     0,     0,   372,   373,   374,   375,     0,     0,
     376,   377,     0,   378,     0,   379,   380,   381,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,   139,   132,   133,   134,   135,   136,   137,   138,
       0,     0,     0,     0,     0,     0,     0,   343,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,   344,   132,
     133,   134,   135,   136,   137,   138,     0,     0,     0,     0,
       0,     0,     0,   383,   132,   133,   134,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,   387,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,   194,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,   241,    85,
      86,    49,    50,    51,    52,    53,   246,   247,     0,   248,
     249,   250,    54,    55,    56,    57,    58,     0,    87,    88,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
     251,     0,     0,     0,    63,     0,     0,     0,    89,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,     0,
     252,     0,     0,   253,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
       0,    87,    88,    60,    61,     0,     0,     0,     0,     0,
     132,   133,   134,   135,   136,   137,   138,    63,     0,     0,
       0,    89,    90,     0,     0,    91,     0,     0,     0,     0,
       0,    92,    85,    86,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,    54,    55,    56,    57,    58,
       0,    87,    88,    60,    61,     0,     0,    85,    86,    49,
      50,    51,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    89,    90,     0,     0,    91,    87,    88,    60,    61,
       0,    92,     0,     0,     0,     0,     0,     0,    85,    86,
      49,    50,    51,    52,    53,     0,    89,    90,     0,     0,
      91,     0,     0,     0,   141,     0,    92,    87,    88,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    49,    50,    51,    52,    53,     0,    89,    90,     0,
       0,    91,     0,     0,     0,   143,     0,    92,    87,    88,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,     0,    89,    90,
       0,     0,    91,    54,    55,    56,    57,    58,    92,     0,
       0,    60,    61,    49,    50,    51,    52,    53,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,     0,
       0,     0,    60,    61,     0,     0,     0,     0,   115,    64,
       0,     0,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64
};

static const yytype_int16 yycheck[] =
{
      38,    17,    38,   174,    44,    17,   291,    51,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    67,    68,
      64,    66,   193,   146,    62,    70,   149,   249,     5,     6,
       7,     8,    61,    17,   157,   257,    48,    61,    15,    16,
      69,    61,    66,    63,    45,    61,   217,    63,    87,    87,
      38,    39,    40,    92,    51,    52,    53,    54,    55,    56,
      57,   346,   347,   348,     0,     5,     6,     7,     8,    17,
      64,   109,    69,    42,    43,    52,    53,    54,    55,    56,
      57,    58,    38,    39,    40,    41,    80,    54,    55,    56,
      57,    85,    86,    56,    57,    89,    90,    91,    92,   384,
     385,   386,    96,    65,    65,    17,    68,    68,   146,    75,
      76,   149,    52,    53,    54,    55,    56,    57,   112,   157,
      66,   343,   344,    38,    67,    17,    17,    66,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     5,     6,     7,     8,    17,
      10,   145,    33,    67,    64,    66,   150,    63,    17,    17,
     382,    63,    17,   201,    38,   387,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   173,
     174,   175,   404,   405,   406,    69,    69,   225,    62,    17,
      17,    64,    52,    53,    54,    55,    56,    57,    17,   193,
      49,    51,    17,    67,    67,    62,   244,   245,    62,    38,
      66,   249,    64,    87,   252,    68,    63,    65,    64,   257,
      62,    65,    17,   217,    64,    17,    65,    68,    66,   267,
     268,   269,   270,   271,    64,   109,   274,   275,    64,   277,
      64,   279,   280,   281,    64,    17,    18,    19,    20,    21,
      64,    64,   246,   291,   292,   291,    28,    29,    30,    31,
      32,    33,    64,    64,    36,    37,    64,   305,   306,    41,
      64,   309,   146,   311,    64,   149,    64,   315,    50,    64,
     109,    65,    65,   157,    66,    65,    67,    65,    67,    66,
      66,    66,    64,    64,   288,   289,    17,   291,    68,    68,
      68,    68,    65,    65,    68,   343,   344,    68,    68,    68,
      65,    64,   350,   351,   352,   353,    64,   146,   356,   357,
     149,   359,    64,   361,   362,   363,    67,   201,   157,    69,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,    69,   382,    67,    66,    66,    66,   387,
      66,   345,   346,   347,   348,   349,    66,    69,    67,    25,
      67,    51,    67,    65,    65,    65,   404,   405,   406,    65,
      65,    65,   201,    65,    65,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,    65,    65,
     384,   385,   386,    64,   268,   269,   270,   271,    47,    69,
     274,   275,    69,   277,    69,   279,   280,   281,   244,   245,
      17,    18,    19,    20,    21,    66,   252,    67,   292,    66,
      66,    28,    29,    30,    31,    32,    33,    66,    66,    36,
      37,   267,    67,    66,    24,    67,    66,    65,    67,   268,
     269,   270,   271,    66,    66,   274,   275,    66,   277,    67,
     279,   280,   281,    69,    69,    69,    67,    64,    67,    67,
      65,    67,   291,   292,    67,    67,    67,    67,    67,   305,
     306,    67,    69,   309,    65,   311,    37,    42,    42,   315,
      42,    22,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    22,    12,    32,     4,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   350,   351,   352,   353,    -1,    -1,
     356,   357,    -1,   359,    -1,   361,   362,   363,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    62,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    69,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    58,    34,    35,    36,    37,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    64,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    64,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    54,    55,
      -1,    -1,    58,    28,    29,    30,    31,    32,    64,    -1,
      -1,    36,    37,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    72,   107,   108,   109,    17,   106,     0,   107,
      45,   104,   105,    61,    69,    17,   104,    17,    66,    38,
     100,   101,   102,   103,    42,    43,   100,   101,    67,    17,
      17,    66,    70,    66,    38,    39,    40,    41,    93,    94,
      95,    96,    97,    98,    48,   106,    17,    99,    93,    17,
      18,    19,    20,    21,    28,    29,    30,    31,    32,    33,
      36,    37,    41,    50,    64,    73,    86,    87,    88,    89,
      90,    94,    95,    96,    67,    66,    66,    67,    68,    33,
      64,    17,    33,    88,    17,    15,    16,    34,    35,    54,
      55,    58,    64,    73,    74,    61,    63,    63,    63,    17,
      69,    69,    98,    98,    17,    17,    74,    76,    77,    64,
      17,    49,    51,    74,    74,    63,    86,    88,    74,    74,
      74,    86,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    51,    52,    53,    54,    55,    56,    57,    65,
      17,    62,    74,    62,    62,    51,    64,    67,    67,    64,
      68,    65,    50,    88,    89,    91,    92,    64,     5,     6,
       7,     8,    15,    16,    52,    53,    54,    55,    56,    57,
      58,    74,    62,    63,    66,    65,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    64,    62,    74,    92,    92,    74,    17,
      17,    68,    65,    92,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    66,    74,    77,
      74,    77,    65,    65,    89,    66,    65,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      77,    62,    67,    65,    66,    66,    22,    23,    25,    26,
      27,    46,    66,    69,    73,    74,    78,    79,    80,    81,
      82,    83,    84,    85,    88,    89,    90,    66,    68,    68,
      68,    68,    65,    65,    68,    68,    65,    68,    65,    68,
      68,    68,    65,    67,    80,    80,    74,    75,    64,    64,
      78,    64,    64,    80,    69,    78,    67,    17,    69,    69,
      80,    89,    89,    89,    89,    66,    66,    89,    89,    66,
      89,    66,    89,    89,    89,    66,    67,    67,    69,    74,
      74,    25,    75,    89,    90,    89,    67,    67,    65,    65,
      65,    65,    80,    80,    65,    65,    80,    65,    80,    65,
      65,    65,    80,    65,    65,    64,    69,    69,    69,    47,
      66,    66,    66,    66,    67,    67,    66,    66,    67,    66,
      67,    66,    66,    66,    67,    78,    78,    74,    75,    75,
      75,    74,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    24,    65,    69,    69,    69,    65,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    78,    69,
      75,    75,    75,    78,    65,    65,    65,    78,    78,    78
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
        case 2:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { treeRoot = new Program((yyvsp[(1) - (2)]._usingDirectives), (yyvsp[(2) - (2)]._namespaceDeclSeq)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromExpr((yyvsp[(2) - (3)]._expr)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[(1) - (4)]._accessExpr), (yyvsp[(3) - (4)]._expr)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 180 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[(1) - (3)]._accessExpr)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromInt((yyvsp[(1) - (1)]._integer)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromFloat((yyvsp[(1) - (1)]._floatingPoint)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 183 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromString((yyvsp[(1) - (1)]._string)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 184 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromChar((yyvsp[(1) - (1)]._character)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 185 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBool(true); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 186 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBool(false); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 187 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromId((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 188 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromCall((yyvsp[(1) - (4)]._identifier), (yyvsp[(3) - (4)]._exprSeq)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[(1) - (3)]._accessExpr), (yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 190 "Parser.y"
    { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[(1) - (6)]._accessExpr), (yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 194 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 195 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 196 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 197 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 198 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 199 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 200 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 201 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 202 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 204 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 205 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 206 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 207 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 208 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 209 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 210 "Parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 211 "Parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 212 "Parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 213 "Parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 214 "Parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 215 "Parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 216 "Parser.y"
    { (yyval._expr) = ExprNode::FromNull(); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 217 "Parser.y"
    { (yyval._expr) = ExprNode::FromAccessExpr((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 218 "Parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (2)]._type)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 219 "Parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._exprSeq)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 220 "Parser.y"
    { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 221 "Parser.y"
    { (yyval._expr) = ExprNode::FromCast((yyvsp[(2) - (4)]._standardType), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 222 "Parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._standardType), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 225 "Parser.y"
    { (yyval._expr) = nullptr; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 226 "Parser.y"
    { (yyval._expr) = (yyvsp[(1) - (1)]._expr); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 229 "Parser.y"
    { (yyval._exprSeq) = new ExprSeqNode((yyvsp[(1) - (1)]._expr)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 230 "Parser.y"
    { (yyval._exprSeq) -> Add((yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 233 "Parser.y"
    { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 234 "Parser.y"
    { (yyval._exprSeq) = (yyvsp[(1) - (1)]._exprSeq); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 237 "Parser.y"
    { (yyval._stmt) = new StmtNode(); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 238 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._expr), /* isReturn= */ false); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 239 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 240 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 241 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._while)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 242 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._doWhile)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 243 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._for)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 244 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._if)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 245 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._foreach)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 246 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._stmtSeq)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 247 "Parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._expr), /* isReturn= */ true); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 250 "Parser.y"
    { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[(1) - (1)]._stmt)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 251 "Parser.y"
    { (yyval._stmtSeq) -> Add((yyvsp[(2) - (2)]._stmt)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
    { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 254 "Parser.y"
    { (yyval._stmtSeq) = (yyvsp[(1) - (1)]._stmtSeq); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 257 "Parser.y"
    { (yyval._while) = new WhileNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 259 "Parser.y"
    { (yyval._doWhile) = new DoWhileNode((yyvsp[(5) - (7)]._expr), (yyvsp[(2) - (7)]._stmt)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 262 "Parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 263 "Parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 264 "Parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._expr), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 267 "Parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 268 "Parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (7)]._expr), (yyvsp[(5) - (7)]._stmt), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 271 "Parser.y"
    { (yyval._foreach) = new ForEachNode((yyvsp[(3) - (7)]._varDecl), (yyvsp[(5) - (7)]._expr), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 274 "Parser.y"
    { (yyval._standardType) = StandardType::Char; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 275 "Parser.y"
    { (yyval._standardType) = StandardType::Int; ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 276 "Parser.y"
    { (yyval._standardType) = StandardType::Bool; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 277 "Parser.y"
    { (yyval._standardType) = StandardType::Float; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 278 "Parser.y"
    { (yyval._standardType) = StandardType::String; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 281 "Parser.y"
    { (yyval._standardArrayType) = new StandardArrayType{ (yyvsp[(1) - (3)]._standardType), 1 }; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 282 "Parser.y"
    { (yyval._standardArrayType) -> Arity += 1; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 285 "Parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._standardType)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 286 "Parser.y"
    { (yyval._type) = new TypeNode(* (yyvsp[(1) - (1)]._standardArrayType)); delete (yyvsp[(1) - (1)]._standardArrayType); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 287 "Parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 290 "Parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (2)]._type), (yyvsp[(2) - (2)]._identifier), nullptr); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 291 "Parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (2)]._identifier), nullptr, true); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 293 "Parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (4)]._type), (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr), true); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 297 "Parser.y"
    { (yyval._methodArguments) = new MethodArguments((yyvsp[(1) - (1)]._varDecl)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 298 "Parser.y"
    { (yyval._methodArguments) -> Add((yyvsp[(3) - (3)]._varDecl)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 300 "Parser.y"
    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 301 "Parser.y"
    { (yyval._methodArguments) = (yyvsp[(1) - (1)]._methodArguments); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 304 "Parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Public; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 305 "Parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Protected; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 306 "Parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Private; ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 309 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Plus,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 310 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Minus,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 311 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Multiply,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 312 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Divide,            (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 313 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Less,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 314 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Greater,           (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 315 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Equal,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 316 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::NotEqual,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 317 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::LessOrEqual,       (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 318 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::GreaterOrEqual,    (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 319 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Not,               (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 320 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Decrement,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 321 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Increment,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 322 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryMinus,        (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 323 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryPlus,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 325 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), (yyvsp[(2) - (9)]._type), (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 326 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), nullptr, (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 327 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 328 "Parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(2) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 331 "Parser.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 332 "Parser.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 335 "Parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 336 "Parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 337 "Parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 338 "Parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 339 "Parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 340 "Parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 343 "Parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 344 "Parser.y"
    { (yyval._classMembers) = (yyvsp[(1) - (1)]._classMembers); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 347 "Parser.y"
    { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 348 "Parser.y"
    { (yyval._enumerators) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 351 "Parser.y"
    { Print("Found enum declaration with name:", (yyvsp[(3) - (6)]._identifier)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 353 "Parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (6)]._identifier), nullptr, (yyvsp[(5) - (6)]._classMembers)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 354 "Parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), (yyvsp[(5) - (8)]._usingArg), (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 355 "Parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), nullptr, (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 358 "Parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._enumDecl)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 359 "Parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._classDecl)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 360 "Parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._enumDecl)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 361 "Parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._classDecl)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 364 "Parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 365 "Parser.y"
    { (yyval._namespaceMembers) = (yyvsp[(1) - (1)]._namespaceMembers); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 368 "Parser.y"
    { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._namespaceMembers));  ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 371 "Parser.y"
    { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[(1) - (1)]._namespaceDecl)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 372 "Parser.y"
    { (yyval._namespaceDeclSeq) -> Add((yyvsp[(2) - (2)]._namespaceDecl)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 375 "Parser.y"
    { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 376 "Parser.y"
    { (yyval._usingArg) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 379 "Parser.y"
    { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[(2) - (3)]._usingArg)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 382 "Parser.y"
    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[(1) - (1)]._usingDirective)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 383 "Parser.y"
    { (yyval._usingDirectives) -> Add((yyvsp[(2) - (2)]._usingDirective)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 386 "Parser.y"
    { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 387 "Parser.y"
    { (yyval._usingDirectives) = (yyvsp[(1) - (1)]._usingDirectives); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2921 "Parser.tab.c"
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
#line 390 "Parser.y"


#ifdef _MSC_VER
#pragma warning( pop )
#endif // _MSC_VER


