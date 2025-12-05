
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
#line 1 "Parser2.y"

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
#line 104 "Parser2.tab.c"

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
#line 31 "Parser2.y"

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
#line 236 "Parser2.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 248 "Parser2.tab.c"

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
#define YYLAST   1055

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
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
      64,    65,    56,    54,    70,    55,    61,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    68,
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
       0,     0,     3,     4,     7,     9,    11,    14,    17,    18,
      20,    26,    28,    31,    33,    37,    41,    43,    46,    47,
      49,    51,    53,    55,    57,    59,    63,    67,    69,    71,
      73,    80,    89,    98,   100,   102,   104,   107,   110,   113,
     114,   116,   118,   122,   129,   131,   133,   135,   139,   143,
     146,   149,   154,   159,   169,   179,   190,   201,   203,   207,
     208,   210,   224,   238,   252,   266,   280,   294,   308,   322,
     336,   350,   362,   374,   386,   398,   410,   412,   415,   418,
     421,   423,   425,   427,   429,   431,   435,   439,   441,   444,
     445,   447,   453,   461,   471,   481,   491,   497,   505,   513,
     517,   522,   526,   528,   530,   532,   534,   536,   538,   540,
     545,   549,   556,   560,   564,   568,   572,   576,   580,   584,
     588,   592,   596,   600,   604,   608,   612,   616,   620,   624,
     627,   630,   633,   636,   639,   641,   643,   646,   652,   659,
     664,   670,   671,   673,   675,   679,   680
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    -1,    80,    76,    -1,    88,    -1,    84,
      -1,    73,    88,    -1,    73,    84,    -1,    -1,    73,    -1,
      45,    17,    66,    74,    67,    -1,    75,    -1,    76,    75,
      -1,    17,    -1,    77,    61,    17,    -1,    44,    77,    68,
      -1,    78,    -1,    79,    78,    -1,    -1,    79,    -1,    28,
      -1,    29,    -1,    31,    -1,    32,    -1,    30,    -1,    81,
      63,    62,    -1,    82,    63,    62,    -1,    81,    -1,    82,
      -1,   105,    -1,    38,    42,    17,    66,    86,    67,    -1,
      38,    42,    17,    69,    77,    66,    86,    67,    -1,    38,
      42,    17,    69,    48,    66,    86,    67,    -1,    93,    -1,
      90,    -1,    96,    -1,    85,    93,    -1,    85,    90,    -1,
      85,    96,    -1,    -1,    85,    -1,    17,    -1,    87,    70,
      17,    -1,    38,    43,    17,    66,    87,    67,    -1,    38,
      -1,    39,    -1,    40,    -1,    89,    91,    68,    -1,    89,
      92,    68,    -1,    83,    17,    -1,    50,    17,    -1,    83,
      17,    51,   106,    -1,    50,    17,    51,   106,    -1,    89,
      83,    17,    64,    95,    65,    66,    99,    67,    -1,    89,
      33,    17,    64,    95,    65,    66,    99,    67,    -1,    89,
      41,    33,    17,    64,    95,    65,    66,    99,    67,    -1,
      41,    89,    33,    17,    64,    95,    65,    66,    99,    67,
      -1,    91,    -1,    94,    70,    91,    -1,    -1,    94,    -1,
      89,    41,    83,    49,    54,    64,    91,    70,    91,    65,
      66,    99,    67,    -1,    89,    41,    83,    49,    55,    64,
      91,    70,    91,    65,    66,    99,    67,    -1,    89,    41,
      83,    49,    56,    64,    91,    70,    91,    65,    66,    99,
      67,    -1,    89,    41,    83,    49,    57,    64,    91,    70,
      91,    65,    66,    99,    67,    -1,    89,    41,    83,    49,
      52,    64,    91,    70,    91,    65,    66,    99,    67,    -1,
      89,    41,    83,    49,    53,    64,    91,    70,    91,    65,
      66,    99,    67,    -1,    89,    41,    83,    49,     5,    64,
      91,    70,    91,    65,    66,    99,    67,    -1,    89,    41,
      83,    49,     6,    64,    91,    70,    91,    65,    66,    99,
      67,    -1,    89,    41,    83,    49,     8,    64,    91,    70,
      91,    65,    66,    99,    67,    -1,    89,    41,    83,    49,
       7,    64,    91,    70,    91,    65,    66,    99,    67,    -1,
      89,    41,    83,    49,    58,    64,    91,    65,    66,    99,
      67,    -1,    89,    41,    83,    49,    16,    64,    91,    65,
      66,    99,    67,    -1,    89,    41,    83,    49,    15,    64,
      91,    65,    66,    99,    67,    -1,    89,    41,    83,    49,
      55,    64,    91,    65,    66,    99,    67,    -1,    89,    41,
      83,    49,    54,    64,    91,    65,    66,    99,    67,    -1,
      68,    -1,   106,    68,    -1,    91,    68,    -1,    92,    68,
      -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,    66,    99,    67,    -1,    22,   107,    68,    -1,    97,
      -1,    98,    97,    -1,    -1,    98,    -1,    25,    64,   106,
      65,    97,    -1,    26,    97,    25,    64,   106,    65,    68,
      -1,    27,    64,    91,    68,   107,    68,   107,    65,    97,
      -1,    27,    64,    92,    68,   107,    68,   107,    65,    97,
      -1,    27,    64,   107,    68,   107,    68,   107,    65,    97,
      -1,    23,    64,   106,    65,    97,    -1,    23,    64,   106,
      65,    97,    24,    97,    -1,    46,    64,    91,    47,   106,
      65,    97,    -1,    64,   106,    65,    -1,   105,    63,   106,
      62,    -1,   105,    63,    62,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    36,    -1,    37,    -1,    17,    -1,
      17,    64,   109,    65,    -1,   105,    61,    17,    -1,   105,
      61,    17,    64,   109,    65,    -1,   106,    54,   106,    -1,
     106,    55,   106,    -1,   106,    56,   106,    -1,   106,    57,
     106,    -1,   106,    51,   106,    -1,   106,    11,   106,    -1,
     106,    12,   106,    -1,   106,    13,   106,    -1,   106,    14,
     106,    -1,   106,    52,   106,    -1,   106,    53,   106,    -1,
     106,     5,   106,    -1,   106,     6,   106,    -1,   106,     8,
     106,    -1,   106,     7,   106,    -1,   106,    10,   106,    -1,
     106,     9,   106,    -1,    58,   106,    -1,    15,   106,    -1,
      16,   106,    -1,    54,   106,    -1,    55,   106,    -1,    35,
      -1,   105,    -1,    34,    83,    -1,    34,    83,    66,   109,
      67,    -1,    34,    63,    62,    66,   109,    67,    -1,    64,
      81,    65,   106,    -1,    34,    81,    63,   106,    62,    -1,
      -1,   106,    -1,   106,    -1,   108,    70,   106,    -1,    -1,
     108,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   175,   175,   177,   185,   186,   187,   188,   191,   192,
     195,   198,   199,   203,   204,   207,   210,   211,   214,   215,
     224,   225,   226,   227,   228,   231,   232,   235,   236,   237,
     247,   248,   249,   252,   253,   254,   255,   256,   257,   260,
     261,   270,   271,   274,   284,   285,   286,   294,   295,   299,
     300,   302,   303,   312,   313,   314,   315,   319,   320,   322,
     323,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   361,   362,   364,
     365,   368,   370,   373,   374,   375,   378,   379,   382,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   438,   439,   442,   443,   446,   447
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
  "')'", "'{'", "'}'", "';'", "':'", "','", "$accept", "program",
  "namespace_members", "namespace_members_optional", "namespace_decl",
  "namespace_decl_seq", "using_arg", "using_directive", "using_directives",
  "using_directives_optional", "standard_type", "standard_array_type",
  "type", "class_decl", "class_members", "class_members_optional",
  "enumerators", "enum_decl", "visibility_modifier", "field_decl",
  "var_decl", "var_decl_with_init", "method_decl", "method_arguments",
  "method_arguments_optional", "operator_overload", "stmt", "stmt_seq",
  "stmt_seq_optional", "while_stmt", "do_while_stmt", "for_stmt",
  "if_stmt", "foreach_stmt", "access_expr", "expr", "expr_optional",
  "expr_seq", "expr_seq_optional", 0
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
     307,    46,    93,    91,    40,    41,   123,   125,    59,    58,
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    73,    73,    74,    74,
      75,    76,    76,    77,    77,    78,    79,    79,    80,    80,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   101,   102,   102,   102,   103,   103,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   108,   108,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     0,     1,
       5,     1,     2,     1,     3,     3,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       6,     8,     8,     1,     1,     1,     2,     2,     2,     0,
       1,     1,     3,     6,     1,     1,     1,     3,     3,     2,
       2,     4,     4,     9,     9,    10,    10,     1,     3,     0,
       1,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    11,    11,    11,    11,    11,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     2,     0,
       1,     5,     7,     9,     9,     9,     5,     7,     7,     3,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     1,     1,     2,     5,     6,     4,
       5,     0,     1,     1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,    16,    19,     0,    13,     0,     1,    17,
       0,    11,     3,     0,    15,     0,    12,    14,     8,     0,
       9,     0,     5,     4,     0,     0,     7,     6,    10,     0,
       0,    39,     0,     0,    44,    45,    46,     0,    40,     0,
       0,    34,    33,    35,     0,     0,    41,     0,     0,    37,
      36,    38,    30,   108,   102,   103,   104,   105,    20,    21,
      24,    22,    23,     0,   106,   107,     0,     0,     0,    27,
      28,     0,     0,     0,    29,    39,    39,    43,     0,     0,
     145,     0,     0,     0,    50,     0,     0,     0,   134,     0,
       0,     0,     0,   135,     0,     0,     0,    49,    47,    48,
       0,     0,     0,     0,    42,     0,   143,   146,     0,    59,
       0,     0,     0,   130,   131,     0,    27,   136,   132,   133,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
      25,    26,     0,    59,   110,   101,     0,    32,    31,    59,
       0,   109,     0,     0,    57,    60,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,   145,     0,   123,   124,   126,   125,
     128,   127,   117,   118,   119,   120,   116,   121,   122,   112,
     113,   114,   115,    51,     0,   145,   100,     0,   144,    50,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
     139,     0,     0,     0,    58,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   137,    89,   111,    89,   141,     0,     0,     0,
       0,     0,    89,    76,     0,     0,     0,    87,    90,     0,
      80,    81,    82,    83,    84,   135,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,     0,     0,   142,     0,     0,     0,
       0,   141,     0,     0,    49,    78,    79,    88,    54,    77,
       0,     0,     0,     0,     0,    89,    89,     0,     0,    89,
       0,    89,     0,     0,     0,    89,    53,    56,    86,     0,
       0,     0,     0,     0,     0,     0,    85,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   141,   141,     0,
      89,    89,    89,    89,    73,    72,    89,    89,    75,    89,
      74,    89,    89,    89,    71,    96,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,   141,   141,     0,    67,    68,
      70,    69,    65,    66,    61,    62,    63,    64,    97,    92,
       0,     0,     0,    98,     0,     0,     0,    93,    94,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    20,    21,    11,    12,     7,     3,     4,     5,
      69,    70,   254,    22,    38,    39,    47,    23,    40,    41,
     255,   256,    42,   155,   156,    43,   257,   258,   259,   260,
     261,   262,   263,   264,    93,   266,   287,   107,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -288
static const yytype_int16 yypact[] =
{
     -12,   -14,    21,  -288,     1,    13,  -288,   -37,  -288,  -288,
      56,  -288,    13,    74,  -288,    48,  -288,  -288,    77,    28,
      77,    51,  -288,  -288,   108,   130,  -288,  -288,  -288,   -27,
      82,    72,     2,   132,  -288,  -288,  -288,   105,    72,    83,
     943,  -288,  -288,  -288,    85,   -26,  -288,   -21,   119,  -288,
    -288,  -288,  -288,    89,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,   138,  -288,  -288,   968,   139,   901,    94,
      96,   143,   115,   116,    41,    72,    72,  -288,   145,   169,
     901,   123,   171,   140,   141,   901,   901,   270,  -288,   901,
     901,   901,   814,    41,   465,   128,   129,   -28,  -288,  -288,
     176,   839,   127,   133,  -288,   137,   756,   134,   142,   991,
     144,    22,   901,  -288,  -288,   148,   150,   136,  -288,  -288,
    -288,   146,   901,   901,   901,   901,   901,   901,   901,   901,
     901,   901,   901,   901,   901,   901,   901,   901,   901,  -288,
    -288,  -288,   901,   991,   151,  -288,   632,  -288,  -288,   991,
     901,  -288,   189,   197,  -288,   147,   154,   991,   152,   156,
     158,   159,   160,   161,   162,   168,   172,   174,   184,   185,
     191,   756,   167,   870,   901,   901,    67,    67,    67,    67,
      10,   190,   756,   756,   756,   756,   756,    67,    67,    25,
      25,  -288,  -288,   756,   192,   901,  -288,   194,   756,  -288,
    -288,   991,   188,   195,   991,   991,   991,   991,   991,   991,
     991,   991,   991,   991,   991,   991,   991,   901,   644,   196,
    -288,   198,   202,   204,  -288,   692,   206,   186,   203,   207,
     208,   211,   214,   210,   212,   -22,    18,   213,   215,   216,
     201,  -288,  -288,   692,  -288,   692,   901,   222,   230,   692,
     232,   233,   692,  -288,   244,   240,   241,  -288,   692,   247,
    -288,  -288,  -288,  -288,  -288,    24,     0,   692,   991,   991,
     991,   991,   249,   252,   991,   991,   254,   991,   258,   991,
     991,   991,   259,  -288,   261,   262,   756,   263,   901,   901,
     237,   764,   991,   265,   275,  -288,  -288,  -288,  -288,  -288,
     268,   271,   272,   273,   274,   692,   692,   276,   279,   692,
     280,   692,   289,   291,   292,   692,  -288,  -288,  -288,   526,
     541,   266,   290,   294,   295,   293,  -288,  -288,   302,   303,
     305,   306,   307,   309,   312,   313,   314,   316,   317,   319,
     320,   321,   325,   692,   692,   901,   901,   901,   901,   901,
     692,   692,   692,   692,  -288,  -288,   692,   692,  -288,   692,
    -288,   692,   692,   692,  -288,   335,  -288,   556,   326,   327,
     328,   617,   330,   331,   332,   333,   334,   336,   337,   338,
     339,   340,   692,   342,   901,   901,   901,   692,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
     308,   315,   346,  -288,   692,   692,   692,  -288,  -288,  -288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,  -288,  -288,   348,  -288,   361,   398,  -288,  -288,
      14,  -288,   218,   393,  -288,    32,  -288,   395,   379,   382,
     234,   -38,   383,  -288,   -57,   399,  -224,  -288,   103,  -288,
    -288,  -288,  -288,  -288,   -40,     4,  -287,  -288,  -173
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -30
static const yytype_int16 yytable[] =
{
      74,   219,    73,     6,   324,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   122,   123,   124,   125,     6,
     127,     8,   222,   142,    13,   290,    74,   158,   159,   160,
     161,    14,     1,   -18,   297,    13,   143,   162,   163,    31,
      76,   -29,    32,   276,   240,     1,    77,    74,   277,    78,
      44,   132,   133,   134,   135,   136,   137,   138,    10,   368,
     369,   370,   133,   134,   135,   136,   137,   138,   299,    74,
      24,    25,    94,    15,   164,   165,   166,   167,   168,   169,
     170,   137,   138,   278,   106,   100,   194,   101,   279,   113,
     114,    17,   197,   118,   119,   120,    94,   400,   401,   402,
     203,   116,   100,    74,   101,   146,   121,   102,   103,    74,
      34,    35,    36,    37,    18,    19,   171,    74,    28,   365,
     366,   135,   136,   137,   138,    29,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    34,    35,    36,   193,    30,    33,    46,
      52,    75,    79,    80,   198,    81,    84,    95,   398,    96,
      97,    74,   104,   403,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,   218,   106,   220,
     407,   408,   409,    98,    99,   265,   105,   109,   110,   111,
     140,   141,   112,   144,   147,   122,   123,   124,   125,   106,
     148,   149,   174,   265,   150,   265,   199,   151,   157,   265,
     172,   175,   265,   173,   200,   195,   204,   201,   265,   202,
     205,   106,   206,   207,   208,   209,   210,   265,    74,    74,
      74,    74,   211,   217,    74,    74,   212,    74,   213,    74,
      74,    74,   133,   134,   135,   136,   137,   138,   214,   215,
     286,   265,    74,   323,   225,   216,   268,   221,    71,   223,
     226,   294,   321,   242,   243,   265,   265,   244,   283,   265,
     245,   265,   267,   269,    72,   265,   272,   270,   271,   273,
     274,   282,   275,   280,    83,   281,   288,    53,    54,    55,
      56,    57,   319,   320,   289,   286,   291,   292,    58,    59,
      60,    61,    62,   265,   265,   117,    64,    65,   295,   296,
     265,   265,   265,   265,   298,   305,   265,   265,   306,   265,
     309,   265,   265,   265,   311,   315,   142,   153,   316,   317,
     345,   318,   326,   115,    68,   327,   328,   329,   330,   331,
     349,   334,   265,   154,   335,   337,   284,   265,   285,   367,
     286,   286,   286,   371,   339,   293,   340,   341,   346,   382,
      16,   153,   347,   348,   265,   265,   265,   153,   350,   351,
     300,   352,   353,   404,   354,   153,   355,   154,   356,   357,
     405,   358,   359,   154,   360,   361,   362,   363,   286,   286,
     286,   154,   364,    45,   384,   385,   386,   388,   389,   390,
     391,   392,     9,   393,   394,   395,   396,   397,   332,   333,
     399,   406,   336,    26,   338,    27,    48,     0,   342,   153,
      49,    50,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   224,     0,    51,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,     0,     0,   372,   373,   374,   375,     0,     0,   376,
     377,     0,   378,     0,   379,   380,   381,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,     0,     0,     0,     0,     0,   153,   153,   153,   153,
       0,     0,   153,   153,     0,   153,     0,   153,   153,   153,
       0,     0,   301,   302,   303,   304,     0,     0,   307,   308,
     153,   310,     0,   312,   313,   314,   132,   133,   134,   135,
     136,   137,   138,     0,     0,   322,   325,     0,     0,     0,
     139,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,   343,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,     0,   344,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,   383,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,   387,   132,   133,   134,   135,   136,   137,   138,
       0,     0,     0,     0,   196,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,   241,    85,    86,    53,
      54,    55,    56,    57,   246,   247,     0,   248,   249,   250,
      58,    59,    60,    61,    62,     0,    87,    88,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,   251,     0,
       0,     0,    67,     0,     0,     0,    89,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    92,     0,   252,     0,
     253,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,     0,    87,    88,
      64,    65,     0,     0,     0,     0,     0,   132,   133,   134,
     135,   136,   137,   138,    67,     0,     0,     0,    89,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    85,
      86,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,     0,    87,    88,
      64,    65,     0,     0,    85,    86,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    89,    90,
       0,     0,    91,    87,    88,    64,    65,     0,    92,     0,
       0,     0,     0,     0,     0,    85,    86,    53,    54,    55,
      56,    57,     0,    89,    90,     0,     0,    91,     0,     0,
       0,   145,     0,    92,    87,    88,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    53,    54,
      55,    56,    57,     0,    89,    90,     0,     0,    91,     0,
       0,     0,   140,     0,    92,    87,    88,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,    91,
      53,    54,    55,    56,    57,    92,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,     0,    64,
      65,     0,     0,     0,    66,    53,    54,    55,    56,    57,
       0,     0,     0,    67,     0,     0,    58,    59,    60,    61,
      62,    82,     0,     0,    64,    65,     0,    68,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,    58,
      59,    60,    61,    62,     0,     0,     0,    64,    65,     0,
       0,     0,    68,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      40,   174,    40,    17,   291,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     5,     6,     7,     8,    17,
      10,     0,   195,    51,    61,   249,    66,     5,     6,     7,
       8,    68,    44,    45,   258,    61,    64,    15,    16,    66,
      66,    17,    69,    65,   217,    44,    67,    87,    70,    70,
      48,    51,    52,    53,    54,    55,    56,    57,    45,   346,
     347,   348,    52,    53,    54,    55,    56,    57,    68,   109,
      42,    43,    68,    17,    52,    53,    54,    55,    56,    57,
      58,    56,    57,    65,    80,    61,   143,    63,    70,    85,
      86,    17,   149,    89,    90,    91,    92,   384,   385,   386,
     157,    87,    61,   143,    63,   101,    92,    75,    76,   149,
      38,    39,    40,    41,    66,    38,   112,   157,    67,   343,
     344,    54,    55,    56,    57,    17,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    38,    39,    40,   142,    17,    66,    17,
      67,    66,    33,    64,   150,    17,    17,    63,   382,    63,
      17,   201,    17,   387,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   173,   174,   175,
     404,   405,   406,    68,    68,   225,    17,    64,    17,    49,
      62,    62,    51,    17,    67,     5,     6,     7,     8,   195,
      67,    64,    66,   243,    70,   245,    17,    65,    64,   249,
      62,    65,   252,    63,    17,    64,    64,    70,   258,    65,
      64,   217,    64,    64,    64,    64,    64,   267,   268,   269,
     270,   271,    64,    66,   274,   275,    64,   277,    64,   279,
     280,   281,    52,    53,    54,    55,    56,    57,    64,    64,
     246,   291,   292,   291,    66,    64,    70,    65,    40,    65,
      65,    17,    25,    67,    66,   305,   306,    65,    67,   309,
      66,   311,    66,    70,    40,   315,    65,    70,    70,    65,
      70,    65,    70,    70,    66,    70,    64,    17,    18,    19,
      20,    21,   288,   289,    64,   291,    64,    64,    28,    29,
      30,    31,    32,   343,   344,    87,    36,    37,    68,    68,
     350,   351,   352,   353,    67,    66,   356,   357,    66,   359,
      66,   361,   362,   363,    66,    66,    51,   109,    67,    67,
      64,    68,    67,    63,    64,    67,    65,    65,    65,    65,
      47,    65,   382,   109,    65,    65,   243,   387,   245,   345,
     346,   347,   348,   349,    65,   252,    65,    65,    68,    24,
      12,   143,    68,    68,   404,   405,   406,   149,    66,    66,
     267,    66,    66,    65,    67,   157,    67,   143,    66,    66,
      65,    67,    66,   149,    67,    66,    66,    66,   384,   385,
     386,   157,    67,    32,    68,    68,    68,    67,    67,    67,
      67,    67,     4,    67,    67,    67,    67,    67,   305,   306,
      68,    65,   309,    20,   311,    20,    37,    -1,   315,   201,
      38,    38,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   201,    -1,    38,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    -1,    -1,   350,   351,   352,   353,    -1,    -1,   356,
     357,    -1,   359,    -1,   361,   362,   363,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,   268,   269,   270,   271,
      -1,    -1,   274,   275,    -1,   277,    -1,   279,   280,   281,
      -1,    -1,   268,   269,   270,   271,    -1,    -1,   274,   275,
     292,   277,    -1,   279,   280,   281,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,   291,   292,    -1,    -1,    -1,
      65,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      68,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    50,    -1,    -1,    -1,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    58,    34,    35,    36,    37,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    64,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    64,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    58,
      17,    18,    19,    20,    21,    64,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    -1,    -1,    -1,    41,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    50,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    -1,    64,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    72,    78,    79,    80,    17,    77,     0,    78,
      45,    75,    76,    61,    68,    17,    75,    17,    66,    38,
      73,    74,    84,    88,    42,    43,    84,    88,    67,    17,
      17,    66,    69,    66,    38,    39,    40,    41,    85,    86,
      89,    90,    93,    96,    48,    77,    17,    87,    89,    90,
      93,    96,    67,    17,    18,    19,    20,    21,    28,    29,
      30,    31,    32,    33,    36,    37,    41,    50,    64,    81,
      82,    83,    91,    92,   105,    66,    66,    67,    70,    33,
      64,    17,    33,    83,    17,    15,    16,    34,    35,    54,
      55,    58,    64,   105,   106,    63,    63,    17,    68,    68,
      61,    63,    86,    86,    17,    17,   106,   108,   109,    64,
      17,    49,    51,   106,   106,    63,    81,    83,   106,   106,
     106,    81,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    51,    52,    53,    54,    55,    56,    57,    65,
      62,    62,    51,    64,    17,    62,   106,    67,    67,    64,
      70,    65,    50,    83,    91,    94,    95,    64,     5,     6,
       7,     8,    15,    16,    52,    53,    54,    55,    56,    57,
      58,   106,    62,    63,    66,    65,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,    95,    64,    62,    95,   106,    17,
      17,    70,    65,    95,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    66,   106,   109,
     106,    65,   109,    65,    91,    66,    65,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
     109,    62,    67,    66,    65,    66,    22,    23,    25,    26,
      27,    46,    66,    68,    83,    91,    92,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    66,    70,    70,
      70,    70,    65,    65,    70,    70,    65,    70,    65,    70,
      70,    70,    65,    67,    99,    99,   106,   107,    64,    64,
      97,    64,    64,    99,    17,    68,    68,    97,    67,    68,
      99,    91,    91,    91,    91,    66,    66,    91,    91,    66,
      91,    66,    91,    91,    91,    66,    67,    67,    68,   106,
     106,    25,    91,    92,   107,    91,    67,    67,    65,    65,
      65,    65,    99,    99,    65,    65,    99,    65,    99,    65,
      65,    65,    99,    65,    65,    64,    68,    68,    68,    47,
      66,    66,    66,    66,    67,    67,    66,    66,    67,    66,
      67,    66,    66,    66,    67,    97,    97,   106,   107,   107,
     107,   106,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    24,    65,    68,    68,    68,    65,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    97,    68,
     107,   107,   107,    97,    65,    65,    65,    97,    97,    97
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
        case 3:

/* Line 1455 of yacc.c  */
#line 177 "Parser2.y"
    { treeRoot = new Program((yyvsp[(1) - (2)]._usingDirectives), (yyvsp[(2) - (2)]._namespaceDeclSeq)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 185 "Parser2.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._enumDecl)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 186 "Parser2.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._classDecl)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 187 "Parser2.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._enumDecl)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 188 "Parser2.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._classDecl)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 191 "Parser2.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 192 "Parser2.y"
    { (yyval._namespaceMembers) = (yyvsp[(1) - (1)]._namespaceMembers); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 195 "Parser2.y"
    { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._namespaceMembers));  ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 198 "Parser2.y"
    { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[(1) - (1)]._namespaceDecl)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 199 "Parser2.y"
    { (yyval._namespaceDeclSeq) -> Add((yyvsp[(2) - (2)]._namespaceDecl)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 203 "Parser2.y"
    { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 204 "Parser2.y"
    { (yyval._usingArg) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 207 "Parser2.y"
    { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[(2) - (3)]._usingArg)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 210 "Parser2.y"
    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[(1) - (1)]._usingDirective)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 211 "Parser2.y"
    { (yyval._usingDirectives) -> Add((yyvsp[(2) - (2)]._usingDirective)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 214 "Parser2.y"
    { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 215 "Parser2.y"
    { (yyval._usingDirectives) = (yyvsp[(1) - (1)]._usingDirectives); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 224 "Parser2.y"
    { (yyval._standardType) = StandardType::Char; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 225 "Parser2.y"
    { (yyval._standardType) = StandardType::Int; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 226 "Parser2.y"
    { (yyval._standardType) = StandardType::Bool; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 227 "Parser2.y"
    { (yyval._standardType) = StandardType::Float; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 228 "Parser2.y"
    { (yyval._standardType) = StandardType::String; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 231 "Parser2.y"
    { (yyval._standardArrayType) = new StandardArrayType{ (yyvsp[(1) - (3)]._standardType), 1 }; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 232 "Parser2.y"
    { (yyval._standardArrayType) -> Arity += 1; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 235 "Parser2.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._standardType)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 236 "Parser2.y"
    { (yyval._type) = new TypeNode(* (yyvsp[(1) - (1)]._standardArrayType)); delete (yyvsp[(1) - (1)]._standardArrayType); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 237 "Parser2.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 247 "Parser2.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (6)]._identifier), nullptr, (yyvsp[(5) - (6)]._classMembers)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 248 "Parser2.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), (yyvsp[(5) - (8)]._usingArg), (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 249 "Parser2.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), nullptr, (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 252 "Parser2.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 253 "Parser2.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 254 "Parser2.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 255 "Parser2.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 256 "Parser2.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 257 "Parser2.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 260 "Parser2.y"
    { (yyval._classMembers) = new ClassMembersNode(); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 261 "Parser2.y"
    { (yyval._classMembers) = (yyvsp[(1) - (1)]._classMembers); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 270 "Parser2.y"
    { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 271 "Parser2.y"
    { (yyval._enumerators) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 274 "Parser2.y"
    { Print("Found enum declaration with name:", (yyvsp[(3) - (6)]._identifier)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 284 "Parser2.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Public; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 285 "Parser2.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Protected; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 286 "Parser2.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Private; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 294 "Parser2.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 295 "Parser2.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 299 "Parser2.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (2)]._type), (yyvsp[(2) - (2)]._identifier), nullptr); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 300 "Parser2.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (2)]._identifier), nullptr, true); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 302 "Parser2.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (4)]._type), (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 303 "Parser2.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr), true); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 312 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), (yyvsp[(2) - (9)]._type), (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 313 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), nullptr, (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 314 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 315 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(2) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 319 "Parser2.y"
    { (yyval._methodArguments) = new MethodArguments((yyvsp[(1) - (1)]._varDecl)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 320 "Parser2.y"
    { (yyval._methodArguments) -> Add((yyvsp[(3) - (3)]._varDecl)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 322 "Parser2.y"
    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 323 "Parser2.y"
    { (yyval._methodArguments) = (yyvsp[(1) - (1)]._methodArguments); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 325 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Plus,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 326 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Minus,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 327 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Multiply,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 328 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Divide,            (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 329 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Less,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 330 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Greater,           (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 331 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Equal,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 332 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::NotEqual,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 333 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::LessOrEqual,       (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 334 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::GreaterOrEqual,    (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 335 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Not,               (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 336 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Decrement,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 337 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Increment,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 338 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryMinus,        (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 339 "Parser2.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryPlus,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 348 "Parser2.y"
    { (yyval._stmt) = new StmtNode(); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 349 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._expr), /* isReturn= */ false); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 350 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 351 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 352 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._while)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 353 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._doWhile)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 354 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._for)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 355 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._if)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 356 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._foreach)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 357 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._stmtSeq)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 358 "Parser2.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._expr), /* isReturn= */ true); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 361 "Parser2.y"
    { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[(1) - (1)]._stmt)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 362 "Parser2.y"
    { (yyval._stmtSeq) -> Add((yyvsp[(2) - (2)]._stmt)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 364 "Parser2.y"
    { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 365 "Parser2.y"
    { (yyval._stmtSeq) = (yyvsp[(1) - (1)]._stmtSeq); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 368 "Parser2.y"
    { (yyval._while) = new WhileNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 370 "Parser2.y"
    { (yyval._doWhile) = new DoWhileNode((yyvsp[(5) - (7)]._expr), (yyvsp[(2) - (7)]._stmt)); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 373 "Parser2.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 374 "Parser2.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 375 "Parser2.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._expr), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 378 "Parser2.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 379 "Parser2.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (7)]._expr), (yyvsp[(5) - (7)]._stmt), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 382 "Parser2.y"
    { (yyval._foreach) = new ForEachNode((yyvsp[(3) - (7)]._varDecl), (yyvsp[(5) - (7)]._expr), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 391 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromExpr((yyvsp[(2) - (3)]._expr)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 392 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[(1) - (4)]._accessExpr), (yyvsp[(3) - (4)]._expr)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 393 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[(1) - (3)]._accessExpr)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 394 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromInt((yyvsp[(1) - (1)]._integer)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 395 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromFloat((yyvsp[(1) - (1)]._floatingPoint)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 396 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromString((yyvsp[(1) - (1)]._string)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 397 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromChar((yyvsp[(1) - (1)]._character)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 398 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromBool(true); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 399 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromBool(false); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 400 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromId((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 401 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromCall((yyvsp[(1) - (4)]._identifier), (yyvsp[(3) - (4)]._exprSeq)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 402 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[(1) - (3)]._accessExpr), (yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 403 "Parser2.y"
    { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[(1) - (6)]._accessExpr), (yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 407 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 408 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 409 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 410 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 411 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 412 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 413 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 414 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 415 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 416 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 417 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 418 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 419 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 420 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 421 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 422 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 423 "Parser2.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 424 "Parser2.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 425 "Parser2.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 426 "Parser2.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 427 "Parser2.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 428 "Parser2.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 429 "Parser2.y"
    { (yyval._expr) = ExprNode::FromNull(); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 430 "Parser2.y"
    { (yyval._expr) = ExprNode::FromAccessExpr((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 431 "Parser2.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (2)]._type)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 432 "Parser2.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._exprSeq)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 433 "Parser2.y"
    { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 434 "Parser2.y"
    { (yyval._expr) = ExprNode::FromCast((yyvsp[(2) - (4)]._standardType), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 435 "Parser2.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._standardType), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 438 "Parser2.y"
    { (yyval._expr) = nullptr; ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 439 "Parser2.y"
    { (yyval._expr) = (yyvsp[(1) - (1)]._expr); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 442 "Parser2.y"
    { (yyval._exprSeq) = new ExprSeqNode((yyvsp[(1) - (1)]._expr)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 443 "Parser2.y"
    { (yyval._exprSeq) -> Add((yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 446 "Parser2.y"
    { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 447 "Parser2.y"
    { (yyval._exprSeq) = (yyvsp[(1) - (1)]._exprSeq); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2924 "Parser2.tab.c"
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
#line 453 "Parser2.y"


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
