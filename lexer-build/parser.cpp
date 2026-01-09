
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
#line 1 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"

#ifdef _MSC_VER
#pragma warning( push, 0 )
#pragma warning( disable : 6011 )
#pragma warning( disable : 26819 )
#pragma warning( disable : 26812 )
#pragma warning( disable : 6387 )
#endif // _MSC_VER

#include <cstdio>
#include <iostream>

#include "../Tree/Program.h"
#include "../Tree/Expr.h"
#include "../Tree/Stmt.h"
#include "../Tree/Type.h"
#include "../Tree/Class.h"
#include "../Tree/Enum.h"
#include "../Tree/Interface.h"
#include "../Tree/Qualified_or_expr.h"
#include "../Tree/Struct.h"
#include "../VisibilityModifier.h"

template <char Separator = ' ', typename... Args>
void Print(Args&&... args) {
    ((std::cout << args << Separator), ...);
    std::cout << std::endl;
}

extern int yylineno;
int yylex();
int yyparse();
extern FILE* yyin;
extern struct Program* treeRoot;


/* Line 189 of yacc.c  */
#line 110 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"

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
     INTERPOLATED_STRING_START = 258,
     INTERPOLATED_STRING_END = 259,
     INTERPOLATED_STRING_TEXT = 260,
     EQUAL = 261,
     NOT_EQUAL = 262,
     GREATER_OR_EQUAL = 263,
     LESS_OR_EQUAL = 264,
     OR = 265,
     AND = 266,
     PLUS_ASSIGN = 267,
     MINUS_ASSIGN = 268,
     MULTIPLY_ASSIGN = 269,
     DIVISION_ASSIGN = 270,
     INCREMENT = 271,
     DECREMENT = 272,
     IDENTIFIER = 273,
     INTEGER = 274,
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
     STRUCT = 298,
     ENUM = 299,
     USING = 300,
     NAMESPACE = 301,
     FOREACH = 302,
     IN_KW = 303,
     OBJECT = 304,
     OPERATOR = 305,
     VAR = 306,
     INTERFACE = 307,
     TILDE = 308,
     INTERNAL = 309,
     PROTECTED_INTERNAL = 310,
     UNARY_PLUS = 311,
     UNARY_MINUS = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 37 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"

    int _integer;
    char* _string;
    char* _identifier;
    double _floatingPoint;
    char _character;

    struct ExprNode* _expr;
    struct ExprSeqNode* _exprSeq;
    
    int _standardType;
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
    
    int _visibiltyModifier;
    struct FieldDeclNode* _fieldDecl;
    struct MethodArguments* _methodArguments;
    struct MethodDeclNode* _methodDecl;
    struct TypeMembersNode* _typeMembers;
    struct ClassDeclNode* _classDecl;
    struct StructDeclNode* _structDecl;

    struct IdentifierList* _enumerators;
    struct EnumDeclNode* _enumDecl;

    struct IdentifierList* _usingArg;
    struct NamespaceMembersNode* _namespaceMembers;
    struct NamespaceDeclNode* _namespaceDecl;
    struct UsingDirectiveNode* _usingDirective;
    struct UsingDirectives* _usingDirectives;
    struct NamespaceDeclSeq* _namespaceDeclSeq;
    
    struct ConstructorDeclNode* _constructorDecl;
    struct DestructorDeclNode* _destructorDecl;
    struct InterfaceDeclNode* _interfaceDecl;
    struct InterfaceMemberNode* _interfaceMember;
    struct InterfaceMembersNode* _interfaceMembers;
    struct Qualified_or_expr* _qualifiedOrExpr;



/* Line 214 of yacc.c  */
#line 254 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 266 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"

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
#define YYLAST   1306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNRULES -- Number of states.  */
#define YYNSTATES  503

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,     2,     2,     2,
      69,    70,    61,    59,    75,    60,    66,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    73,
      57,    56,    58,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,     2,     2,     2,     2,
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
      55,    64,    65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    18,
      21,    24,    27,    28,    30,    36,    38,    41,    43,    47,
      51,    53,    56,    57,    59,    61,    63,    65,    67,    69,
      73,    77,    79,    83,    87,    92,    99,   104,   110,   114,
     118,   120,   122,   124,   126,   128,   130,   132,   134,   136,
     138,   145,   154,   163,   165,   167,   169,   171,   173,   176,
     179,   182,   185,   188,   189,   191,   198,   204,   206,   208,
     210,   213,   216,   219,   220,   222,   229,   236,   243,   245,
     248,   249,   251,   253,   257,   264,   266,   268,   270,   272,
     274,   278,   282,   285,   288,   293,   298,   308,   318,   329,
     340,   351,   362,   364,   368,   369,   371,   385,   399,   413,
     427,   441,   455,   469,   483,   497,   511,   523,   535,   547,
     559,   571,   579,   588,   596,   598,   601,   604,   607,   609,
     611,   613,   615,   617,   621,   625,   627,   630,   631,   633,
     639,   647,   657,   667,   677,   683,   691,   699,   703,   707,
     711,   715,   719,   723,   727,   731,   735,   739,   743,   747,
     751,   755,   759,   763,   767,   770,   773,   776,   779,   782,
     784,   787,   793,   800,   805,   811,   812,   814,   816,   820,
     821,   823,   827,   828,   831,   833
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      77,     0,    -1,    -1,    85,    81,    -1,   101,    -1,    90,
      -1,    96,    -1,    93,    -1,    78,   101,    -1,    78,    90,
      -1,    78,    96,    -1,    78,    93,    -1,    -1,    78,    -1,
      46,    18,    71,    79,    72,    -1,    80,    -1,    81,    80,
      -1,    18,    -1,    82,    66,    18,    -1,    45,    82,    73,
      -1,    83,    -1,    84,    83,    -1,    -1,    84,    -1,    28,
      -1,    29,    -1,    31,    -1,    32,    -1,    30,    -1,    86,
      68,    67,    -1,    87,    68,    67,    -1,    18,    -1,    88,
      66,    18,    -1,    88,    68,    67,    -1,    88,    68,   120,
      67,    -1,    88,    66,    18,    69,   122,    70,    -1,    18,
      69,   122,    70,    -1,    88,    66,    18,    69,    70,    -1,
      18,    69,    70,    -1,    69,   120,    70,    -1,    35,    -1,
      19,    -1,    20,    -1,    21,    -1,    36,    -1,    37,    -1,
     124,    -1,    86,    -1,    87,    -1,    88,    -1,    38,    42,
      18,    71,    92,    72,    -1,    38,    42,    18,    74,    82,
      71,    92,    72,    -1,    38,    42,    18,    74,    49,    71,
      92,    72,    -1,   106,    -1,   103,    -1,   109,    -1,   110,
      -1,   111,    -1,    91,   106,    -1,    91,   103,    -1,    91,
     109,    -1,    91,   110,    -1,    91,   111,    -1,    -1,    91,
      -1,    38,    43,    18,    71,    95,    72,    -1,    43,    18,
      71,    95,    72,    -1,   103,    -1,   106,    -1,   110,    -1,
      94,   103,    -1,    94,   106,    -1,    94,   110,    -1,    -1,
      94,    -1,    38,    52,    18,    71,    99,    72,    -1,    89,
      18,    69,   108,    70,    73,    -1,    33,    18,    69,   108,
      70,    73,    -1,    97,    -1,    98,    97,    -1,    -1,    98,
      -1,    18,    -1,   100,    75,    18,    -1,    38,    44,    18,
      71,   100,    72,    -1,    38,    -1,    39,    -1,    40,    -1,
      54,    -1,    55,    -1,   102,   104,    73,    -1,   102,   105,
      73,    -1,    89,    18,    -1,    51,    18,    -1,    89,    18,
      56,   120,    -1,    51,    18,    56,   120,    -1,   102,    89,
      18,    69,   108,    70,    71,   114,    72,    -1,   102,    33,
      18,    69,   108,    70,    71,   114,    72,    -1,   102,    41,
      33,    18,    69,   108,    70,    71,   114,    72,    -1,    41,
     102,    33,    18,    69,   108,    70,    71,   114,    72,    -1,
     102,    41,    89,    18,    69,   108,    70,    71,   114,    72,
      -1,    41,   102,    89,    18,    69,   108,    70,    71,   114,
      72,    -1,   104,    -1,   107,    75,   104,    -1,    -1,   107,
      -1,   102,    41,    89,    50,    59,    69,   104,    75,   104,
      70,    71,   114,    72,    -1,   102,    41,    89,    50,    60,
      69,   104,    75,   104,    70,    71,   114,    72,    -1,   102,
      41,    89,    50,    61,    69,   104,    75,   104,    70,    71,
     114,    72,    -1,   102,    41,    89,    50,    62,    69,   104,
      75,   104,    70,    71,   114,    72,    -1,   102,    41,    89,
      50,    57,    69,   104,    75,   104,    70,    71,   114,    72,
      -1,   102,    41,    89,    50,    58,    69,   104,    75,   104,
      70,    71,   114,    72,    -1,   102,    41,    89,    50,     6,
      69,   104,    75,   104,    70,    71,   114,    72,    -1,   102,
      41,    89,    50,     7,    69,   104,    75,   104,    70,    71,
     114,    72,    -1,   102,    41,    89,    50,     9,    69,   104,
      75,   104,    70,    71,   114,    72,    -1,   102,    41,    89,
      50,     8,    69,   104,    75,   104,    70,    71,   114,    72,
      -1,   102,    41,    89,    50,    63,    69,   104,    70,    71,
     114,    72,    -1,   102,    41,    89,    50,    17,    69,   104,
      70,    71,   114,    72,    -1,   102,    41,    89,    50,    16,
      69,   104,    70,    71,   114,    72,    -1,   102,    41,    89,
      50,    60,    69,   104,    70,    71,   114,    72,    -1,   102,
      41,    89,    50,    59,    69,   104,    70,    71,   114,    72,
      -1,   102,    18,    69,    70,    71,   114,    72,    -1,   102,
      18,    69,   107,    70,    71,   114,    72,    -1,    53,    18,
      69,    70,    71,   114,    72,    -1,    73,    -1,   120,    73,
      -1,   104,    73,    -1,   105,    73,    -1,   115,    -1,   116,
      -1,   117,    -1,   118,    -1,   119,    -1,    71,   114,    72,
      -1,    22,   121,    73,    -1,   112,    -1,   113,   112,    -1,
      -1,   113,    -1,    25,    69,   120,    70,   112,    -1,    26,
     112,    25,    69,   120,    70,    73,    -1,    27,    69,   104,
      73,   121,    73,   121,    70,   112,    -1,    27,    69,   105,
      73,   121,    73,   121,    70,   112,    -1,    27,    69,   121,
      73,   121,    73,   121,    70,   112,    -1,    23,    69,   120,
      70,   112,    -1,    23,    69,   120,    70,   112,    24,   112,
      -1,    47,    69,   104,    48,   120,    70,   112,    -1,   120,
      59,   120,    -1,   120,    60,   120,    -1,   120,    61,   120,
      -1,   120,    62,   120,    -1,   120,    56,   120,    -1,   120,
      12,   120,    -1,   120,    13,   120,    -1,   120,    14,   120,
      -1,   120,    15,   120,    -1,   120,    57,   120,    -1,   120,
      58,   120,    -1,   120,     6,   120,    -1,   120,     7,   120,
      -1,   120,     9,   120,    -1,   120,     8,   120,    -1,   120,
      11,   120,    -1,   120,    10,   120,    -1,    63,   120,    -1,
      16,   120,    -1,    17,   120,    -1,    59,   120,    -1,    60,
     120,    -1,    88,    -1,    34,    89,    -1,    34,    89,    71,
     123,    72,    -1,    34,    68,    67,    71,   123,    72,    -1,
      69,    86,    70,   120,    -1,    34,    86,    68,   120,    67,
      -1,    -1,   120,    -1,   120,    -1,   122,    75,   120,    -1,
      -1,   122,    -1,     3,   125,     4,    -1,    -1,   125,   126,
      -1,     5,    -1,    71,   120,    72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   207,   213,   214,   215,   216,   217,   218,
     219,   220,   223,   224,   227,   230,   231,   234,   235,   238,
     241,   242,   245,   246,   253,   254,   255,   256,   257,   260,
     261,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   283,   284,   285,
     292,   293,   294,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   309,   310,   318,   319,   322,   323,   324,
     325,   326,   327,   331,   332,   338,   341,   342,   345,   346,
     349,   350,   357,   358,   361,   368,   369,   370,   371,   372,
     378,   381,   385,   386,   388,   389,   396,   397,   398,   399,
     400,   401,   404,   405,   407,   408,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   433,   436,   441,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   463,   464,   466,   467,   470,
     472,   475,   476,   477,   480,   481,   484,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   521,   522,   525,   526,   529,
     530,   537,   540,   541,   544,   545
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTERPOLATED_STRING_START",
  "INTERPOLATED_STRING_END", "INTERPOLATED_STRING_TEXT", "EQUAL",
  "NOT_EQUAL", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "OR", "AND",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVISION_ASSIGN",
  "INCREMENT", "DECREMENT", "IDENTIFIER", "INTEGER", "STRING", "CHARACTER",
  "RETURN", "IF", "ELSE", "WHILE", "DO", "FOR", "CHAR_KW", "INT_KW",
  "STRING_KW", "BOOL_KW", "FLOAT_KW", "VOID_KW", "NEW", "NULL_KW",
  "TRUE_KW", "FALSE_KW", "PUBLIC", "PROTECTED", "PRIVATE", "STATIC",
  "CLASS", "STRUCT", "ENUM", "USING", "NAMESPACE", "FOREACH", "IN_KW",
  "OBJECT", "OPERATOR", "VAR", "INTERFACE", "TILDE", "INTERNAL",
  "PROTECTED_INTERNAL", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'!'", "UNARY_PLUS", "UNARY_MINUS", "'.'", "']'", "'['", "'('", "')'",
  "'{'", "'}'", "';'", "':'", "','", "$accept", "program",
  "namespace_members", "namespace_members_optional", "namespace_decl",
  "namespace_decl_seq", "using_arg", "using_directive", "using_directives",
  "using_directives_optional", "standard_type", "array_type",
  "qualified_or_expr", "type", "class_decl", "class_members",
  "class_members_optional", "struct_decl", "struct_members",
  "struct_members_optional", "interface_decl", "interface_member",
  "interface_members", "interface_members_optional", "enumerators",
  "enum_decl", "visibility_modifier", "field_decl", "var_decl",
  "var_decl_with_init", "method_decl", "method_arguments",
  "method_arguments_optional", "operator_overload", "constructor_decl",
  "destructor_decl", "stmt", "stmt_seq", "stmt_seq_optional", "while_stmt",
  "do_while_stmt", "for_stmt", "if_stmt", "foreach_stmt", "expr",
  "expr_optional", "expr_seq", "expr_seq_optional", "interpolated_string",
  "interpolation_parts", "interpolation_part", 0
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
     305,   306,   307,   308,   309,   310,    61,    60,    62,    43,
      45,    42,    47,    33,   311,   312,    46,    93,    91,    40,
      41,   123,   125,    59,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    80,    81,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   102,   102,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     116,   117,   117,   117,   118,   118,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   125,   125,   126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     0,     1,     5,     1,     2,     1,     3,     3,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     4,     6,     4,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     8,     8,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     0,     1,     6,     5,     1,     1,     1,
       2,     2,     2,     0,     1,     6,     6,     6,     1,     2,
       0,     1,     1,     3,     6,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     4,     4,     9,     9,    10,    10,
      10,    10,     1,     3,     0,     1,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,    11,    11,    11,    11,
      11,     7,     8,     7,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     3,     3,     1,     2,     0,     1,     5,
       7,     9,     9,     9,     5,     7,     7,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     1,
       2,     5,     6,     4,     5,     0,     1,     1,     3,     0,
       1,     3,     0,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,    20,    23,     0,    17,     0,     1,    21,
       0,    15,     3,     0,    19,     0,    16,    18,    12,     0,
       0,    13,     0,     5,     7,     6,     4,     0,     0,     0,
       0,     0,     9,    11,    10,     8,    14,     0,     0,     0,
       0,    73,    63,     0,    73,     0,    80,    85,    86,    87,
       0,    88,    89,    74,     0,     0,    67,    68,    69,     0,
      64,     0,     0,    54,    53,    55,    56,    57,     0,     0,
       0,    82,     0,   182,    31,    41,    42,    43,    24,    25,
      28,    26,    27,     0,    40,    44,    45,     0,    47,    48,
      49,     0,    78,    81,     0,    46,     0,    70,    71,    72,
      66,    31,     0,     0,     0,     0,     0,     0,     0,    59,
      58,    60,    61,    62,    50,     0,    63,    63,    65,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,     0,     0,     0,    79,    75,
       0,     0,     0,     0,     0,     0,    93,    92,    90,    91,
       0,     0,     0,     0,    83,   181,   184,     0,   183,    38,
     177,     0,   104,   165,   166,     0,    47,   170,   167,   168,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      29,    30,    32,    33,     0,   104,     0,     0,     0,    38,
     169,     0,   102,     0,   104,     0,     0,     0,     0,   104,
       0,     0,    52,    51,     0,    36,     0,   105,     0,     0,
       0,   179,     0,   158,   159,   161,   160,   163,   162,   152,
     153,   154,   155,   151,   156,   157,   147,   148,   149,   150,
       0,    34,     0,   104,   104,    93,   137,    92,     0,     0,
       0,   104,   104,    95,    94,     0,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     185,   178,     0,   179,     0,   180,     0,   173,    37,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,   137,
     124,     0,     0,     0,   135,   138,     0,   128,   129,   130,
     131,   132,     0,   137,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,   174,   171,    35,    76,     0,
       0,   176,     0,     0,     0,     0,   175,     0,     0,    92,
     126,   127,   136,   121,   125,     0,   137,     0,     0,   137,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   137,   137,   134,     0,     0,
       0,     0,     0,     0,     0,   133,   122,     0,   137,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,   175,   175,     0,    97,     0,     0,    96,     0,
       0,     0,     0,   137,   137,     0,     0,   137,     0,   137,
       0,     0,     0,   137,    99,   101,   144,   139,     0,     0,
       0,     0,     0,    98,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,   175,   175,     0,   137,   137,   137,   137,
     118,   117,   137,   137,   120,   137,   119,   137,   137,   137,
     116,   145,   140,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,   115,   114,   110,   111,   106,   107,   108,   109,
     141,   142,   143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    21,    22,    11,    12,     7,     3,     4,     5,
      88,    89,   131,   291,    23,    60,    61,    24,    53,    54,
      25,    92,    93,    94,    72,    26,    62,    63,   292,   293,
      64,   217,   218,    65,    66,    67,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   332,   161,   276,    95,   121,
     158
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -330
static const yytype_int16 yypact[] =
{
     -20,   -13,    39,  -330,     3,    13,  -330,   -17,  -330,  -330,
      66,  -330,    13,    81,  -330,    34,  -330,  -330,    40,   144,
      97,    40,    70,  -330,  -330,  -330,  -330,   108,   147,   155,
     171,   128,  -330,  -330,  -330,  -330,  -330,    77,   130,   131,
     133,   187,   191,    -8,   187,   197,   889,  -330,  -330,  -330,
      27,  -330,  -330,   187,   161,   797,  -330,  -330,  -330,   198,
     191,   175,   832,  -330,  -330,  -330,  -330,  -330,   148,   -26,
     176,  -330,    92,  -330,   181,  -330,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,   233,  -330,  -330,  -330,   933,   188,   194,
     111,   245,  -330,   889,   207,  -330,   944,  -330,  -330,  -330,
    -330,   211,   265,   979,   266,   267,   213,   216,   223,  -330,
    -330,  -330,  -330,  -330,  -330,   979,   191,   191,  -330,  -330,
     275,     8,   218,   226,   933,   933,   125,   933,   933,   933,
     567,   111,  1032,   229,   230,   280,   868,   232,  -330,  -330,
     281,   284,     1,   235,   287,   288,   257,   -42,  -330,  -330,
     244,   -16,   243,   246,  -330,  -330,  -330,   933,  -330,  -330,
    1244,    38,  1000,  -330,  -330,   249,   253,   251,  -330,  -330,
    -330,   247,   933,   933,   933,   933,   933,   933,   933,   933,
     933,   933,   933,   933,   933,   933,   933,   933,   933,  -330,
    -330,  -330,   254,  -330,  1159,  1000,   255,   260,   312,   263,
     -15,   313,  -330,    42,  1000,   270,   271,   933,   933,  1000,
     274,  1232,  -330,  -330,   686,  -330,   933,   268,   279,   285,
     879,   933,   933,   199,   199,   199,   199,   378,   123,  1244,
    1244,  1244,  1244,  1244,   199,   199,    15,    15,  -330,  -330,
     291,  -330,   292,  1000,  1000,  -330,   751,  -330,   286,  1000,
     293,  1000,  1000,  1244,  1244,   294,   751,   289,   296,   297,
     300,   301,   303,   305,   306,   307,   309,   310,   311,   319,
    -330,  1244,   282,   933,  1221,   316,   320,  -330,  -330,    52,
     308,   323,   325,   933,   329,   334,   751,   336,   337,   751,
    -330,   364,   345,   347,  -330,   751,   335,  -330,  -330,  -330,
    -330,  -330,    79,   751,  -330,   354,   356,   357,   359,   360,
    1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,  1000,
    1000,  1000,  1000,  -330,   361,  -330,  -330,  -330,  -330,   363,
     390,  1244,   355,   933,   933,   438,   531,  1000,   392,   410,
    -330,  -330,  -330,  -330,  -330,   395,   751,   397,   398,   751,
    -330,   396,   399,   400,   401,   403,   407,   406,   408,   101,
     120,   411,   412,   415,  -330,   751,   751,  -330,  1047,  1064,
     409,   416,   418,   423,   434,  -330,  -330,   425,   751,   751,
     426,  1000,  1000,  1000,  1000,   428,   429,  1000,  1000,   430,
    1000,   431,  1000,  1000,  1000,   432,   433,   435,   751,   751,
     933,   933,   933,   933,   933,  -330,   436,   437,  -330,   440,
     443,   444,   445,   751,   751,   446,   447,   751,   448,   751,
     449,   450,   451,   751,  -330,  -330,   480,  -330,  1129,   452,
     453,   454,  1144,  -330,  -330,   457,   458,   459,   462,   463,
     464,   467,   468,   469,   471,   472,   475,   482,   483,   484,
     751,   470,   933,   933,   933,   751,   751,   751,   751,   751,
    -330,  -330,   751,   751,  -330,   751,  -330,   751,   751,   751,
    -330,  -330,  -330,   487,   488,   499,  -330,   502,   503,   504,
     509,   517,   520,   521,   535,   537,   538,   751,   751,   751,
    -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,  -330,  -330
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -330,  -330,  -330,  -330,   494,  -330,   479,   536,  -330,  -330,
    -102,  -330,   -46,   369,   590,  -330,    75,   593,  -330,   571,
     595,   524,  -330,  -330,  -330,   598,    56,     2,   328,   -54,
      54,   382,  -141,   562,   106,   563,  -280,  -330,  -245,  -330,
    -330,  -330,  -330,  -330,   272,  -329,  -198,   351,  -330,  -330,
    -330
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -50
static const yytype_int16 yytable[] =
{
      90,   107,   206,   -49,    73,     6,   335,   373,   107,    90,
       6,   309,   155,   156,   208,   342,    90,   124,   125,    74,
      75,    76,    77,   275,   166,     1,   -22,   209,   171,    78,
      79,    80,    81,    82,   211,   126,    84,    85,    86,     8,
      13,    68,   279,    56,   338,   117,    56,    90,     1,    13,
      90,   135,   198,   136,   242,    97,    14,    90,   345,    10,
     127,   128,   109,   250,   129,    47,    48,    49,   255,    90,
     130,   199,   429,   430,   431,   275,   187,   188,    19,   157,
      90,    51,    52,    20,    15,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    57,   200,    55,    57,    17,
      55,   377,   281,   282,   380,    18,    96,    98,   215,    55,
     306,   307,   248,   216,   110,    31,    90,   249,   426,   427,
     396,   397,   327,   473,   474,   475,    37,   216,    73,   172,
     173,   174,   175,   406,   407,   182,   183,   184,   185,   186,
     187,   188,    36,    74,    75,    76,    77,    58,    42,    90,
      58,    43,   344,    78,    79,    80,    81,    82,    90,    99,
      84,    85,    86,    90,   119,    38,   112,   120,   439,   440,
     471,   389,   443,    39,   445,   476,   390,   135,   449,   136,
     183,   184,   185,   186,   187,   188,    27,    28,    29,    40,
     391,   152,   153,   165,    87,   392,    30,    90,    90,    41,
     200,    44,    45,    90,    46,    90,    90,   500,   501,   502,
     200,   477,   478,   479,   480,    71,   108,   481,   482,   116,
     483,    73,   484,   485,   486,    47,    48,    49,    50,    47,
      48,    49,    50,   100,   124,   125,    74,    75,    76,    77,
     200,    51,    52,   200,    59,    51,    52,   114,   118,   200,
     122,   123,   126,    84,    85,    86,   133,   200,   185,   186,
     187,   188,   134,   137,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,   127,   128,   139,
     142,   129,   372,   143,   146,   147,   148,   130,   159,   149,
     200,    90,   150,   154,    73,   162,   190,   191,   192,   196,
     200,   195,   197,   200,   204,   205,   206,   124,   125,    74,
      75,    76,    77,   207,   210,   212,   219,   222,   213,   200,
     200,   220,   221,   240,   243,   126,    84,    85,    86,   244,
     245,   247,   200,   200,   246,    90,    90,    90,    90,   251,
     252,    90,    90,   249,    90,   256,    90,    90,    90,   272,
     127,   128,   200,   200,   129,   323,   273,   303,   310,   132,
     130,   278,   280,   305,   308,   311,   312,   200,   200,   313,
     314,   200,   315,   200,   316,   317,   318,   200,   319,   320,
     321,   328,   339,   106,   172,   173,   174,   175,   322,   177,
     106,   216,   326,   329,   160,   330,   163,   164,   333,   168,
     169,   170,   132,   334,   200,   336,   337,   343,   194,   200,
     200,   200,   200,   200,   160,    91,   200,   200,   340,   200,
     341,   200,   200,   200,   105,   346,   347,   348,   367,   214,
     349,   105,   350,   364,   365,   183,   184,   185,   186,   187,
     188,   200,   200,   200,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   366,    91,   370,   375,   141,   208,   376,   378,   379,
     202,   381,   145,   385,   382,   383,   384,   386,   400,   253,
     254,   387,   404,   388,   151,   395,   393,   394,   271,   401,
     202,   402,   274,   160,   277,   167,   403,   405,   408,   413,
     414,   417,   419,   423,   450,   424,    16,   425,   433,   434,
     435,   201,   160,   436,   437,   438,   441,   442,   444,   446,
     447,   448,    69,   202,   203,   452,   453,   454,   456,   457,
     458,   201,   202,   459,    73,   460,   461,   202,   462,   463,
       9,   464,   465,   472,   466,   160,   467,   124,   125,    74,
      75,    76,    77,   468,   469,   331,   470,   487,   488,    78,
      79,    80,    81,    82,   201,   126,    84,    85,    86,   489,
      73,   202,   202,   201,   490,   491,   492,   304,   201,   202,
     202,   493,   104,   124,   125,    74,    75,    76,    77,   494,
     127,   128,   495,   496,   129,    78,    79,    80,    81,    82,
     130,   126,    84,    85,    86,   368,   369,   497,   331,   498,
     499,    32,   201,   201,    33,    70,    34,   138,   201,    35,
     201,   201,   111,   113,   324,     0,   127,   128,     0,     0,
     129,     0,     0,     0,     0,     0,   130,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,   374,     0,     0,     0,     0,
       0,     0,   428,   331,   331,   331,   432,     0,     0,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,     0,     0,     0,     0,   201,     0,     0,   409,
     410,   411,   412,     0,     0,   415,   416,     0,   418,     0,
     420,   421,   422,     0,   331,   331,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   182,   183,   184,   185,   186,   187,   188,     0,
     201,   201,   201,   201,    73,     0,   201,   201,   270,   201,
       0,   201,   201,   201,     0,     0,     0,   124,   125,    74,
      75,    76,    77,   283,   284,     0,   285,   286,   287,    78,
      79,    80,    81,    82,     0,   126,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,     0,
      73,     0,   104,     0,     0,     0,     0,     0,     0,     0,
     127,   128,     0,     0,   129,   101,    75,    76,    77,     0,
     130,     0,   289,     0,   290,    78,    79,    80,    81,    82,
     102,     0,    84,    85,    86,    73,     0,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
     101,    75,    76,    77,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,   102,    87,    84,    85,    86,
       0,    73,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,    73,   104,   124,   125,    74,    75,    76,    77,
       0,     0,    73,     0,     0,   124,   125,    74,    75,    76,
      77,    87,   126,    84,    85,    86,     0,    74,    75,    76,
      77,     0,     0,   126,    84,    85,    86,    78,    79,    80,
      81,    82,    83,     0,    84,    85,    86,   127,   128,     0,
       0,   129,     0,     0,     0,   193,    73,   130,   127,   128,
       0,     0,   129,     0,     0,     0,   190,    73,   130,   124,
     125,    74,    75,    76,    77,     0,     0,     0,    87,     0,
       0,     0,    74,    75,    76,    77,     0,   126,    84,    85,
      86,     0,    78,    79,    80,    81,    82,   140,     0,    84,
      85,    86,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   128,     0,     0,   129,    74,    75,    76,
      77,     0,   130,    73,     0,     0,     0,    78,    79,    80,
      81,    82,   144,    87,    84,    85,    86,     0,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,     0,     0,    84,    85,    86,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    87,     0,
       0,   198,     0,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,     0,     0,     0,     0,     0,    87,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
       0,     0,     0,     0,     0,     0,     0,     0,   182,   183,
     184,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,   189,   182,   183,   184,   185,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
     182,   183,   184,   185,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,   399,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,     0,     0,     0,     0,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
       0,     0,     0,     0,     0,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,   451,
     182,   183,   184,   185,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,   455,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,   241,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,   261,   262,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,     0,     0,     0,   325,   263,
     264,   265,   266,   267,   268,   269,     0,     0,     0,     0,
     182,   183,   184,   185,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
      46,    55,    18,    18,     3,    18,   286,   336,    62,    55,
      18,   256,     4,     5,    56,   295,    62,    16,    17,    18,
      19,    20,    21,   221,   126,    45,    46,    69,   130,    28,
      29,    30,    31,    32,    50,    34,    35,    36,    37,     0,
      66,    49,   240,    41,   289,    71,    44,    93,    45,    66,
      96,    66,    51,    68,   195,    53,    73,   103,   303,    46,
      59,    60,    60,   204,    63,    38,    39,    40,   209,   115,
      69,    70,   401,   402,   403,   273,    61,    62,    38,    71,
     126,    54,    55,    43,    18,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    41,   142,    41,    44,    18,
      44,   346,   243,   244,   349,    71,    50,    53,    70,    53,
     251,   252,    70,    75,    60,    18,   162,    75,   398,   399,
     365,   366,    70,   452,   453,   454,    18,    75,     3,     6,
       7,     8,     9,   378,   379,    56,    57,    58,    59,    60,
      61,    62,    72,    18,    19,    20,    21,    41,    71,   195,
      44,    74,    73,    28,    29,    30,    31,    32,   204,    53,
      35,    36,    37,   209,    72,    18,    60,    75,   413,   414,
     450,    70,   417,    18,   419,   455,    75,    66,   423,    68,
      57,    58,    59,    60,    61,    62,    42,    43,    44,    18,
      70,   116,   117,    68,    69,    75,    52,   243,   244,    71,
     246,    71,    71,   249,    71,   251,   252,   487,   488,   489,
     256,   456,   457,   458,   459,    18,    18,   462,   463,    71,
     465,     3,   467,   468,   469,    38,    39,    40,    41,    38,
      39,    40,    41,    72,    16,    17,    18,    19,    20,    21,
     286,    54,    55,   289,    53,    54,    55,    72,    72,   295,
      69,    18,    34,    35,    36,    37,    68,   303,    59,    60,
      61,    62,    68,    18,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,    59,    60,    72,
      69,    63,   336,    18,    18,    18,    73,    69,    70,    73,
     336,   337,    69,    18,     3,    69,    67,    67,    18,    18,
     346,    69,    18,   349,    69,    18,    18,    16,    17,    18,
      19,    20,    21,    56,    70,    72,    67,    70,    72,   365,
     366,    68,    71,    69,    69,    34,    35,    36,    37,    69,
      18,    18,   378,   379,    71,   381,   382,   383,   384,    69,
      69,   387,   388,    75,   390,    71,   392,   393,   394,    70,
      59,    60,   398,   399,    63,    73,    71,    71,    69,    87,
      69,    70,    70,    70,    70,    69,    69,   413,   414,    69,
      69,   417,    69,   419,    69,    69,    69,   423,    69,    69,
      69,    73,    18,    55,     6,     7,     8,     9,    69,    11,
      62,    75,    72,    70,   122,    70,   124,   125,    69,   127,
     128,   129,   130,    69,   450,    69,    69,    72,   136,   455,
     456,   457,   458,   459,   142,    46,   462,   463,    73,   465,
      73,   467,   468,   469,    55,    71,    70,    70,    73,   157,
      71,    62,    72,    72,    71,    57,    58,    59,    60,    61,
      62,   487,   488,   489,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    71,    93,    25,    72,    96,    56,    72,    71,    71,
     142,    75,   103,    70,    75,    75,    75,    70,    69,   207,
     208,    75,    48,    75,   115,    70,    75,    75,   216,    73,
     162,    73,   220,   221,   222,   126,    73,    72,    72,    71,
      71,    71,    71,    71,    24,    72,    12,    72,    72,    72,
      70,   142,   240,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    43,   195,   142,    73,    73,    73,    71,    71,
      71,   162,   204,    71,     3,    72,    72,   209,    71,    71,
       4,    72,    71,    73,    72,   273,    71,    16,    17,    18,
      19,    20,    21,    71,    71,   283,    72,    70,    70,    28,
      29,    30,    31,    32,   195,    34,    35,    36,    37,    70,
       3,   243,   244,   204,    72,    72,    72,   249,   209,   251,
     252,    72,    51,    16,    17,    18,    19,    20,    21,    72,
      59,    60,    72,    72,    63,    28,    29,    30,    31,    32,
      69,    34,    35,    36,    37,   333,   334,    72,   336,    72,
      72,    21,   243,   244,    21,    44,    21,    93,   249,    21,
     251,   252,    60,    60,   273,    -1,    59,    60,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    -1,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   336,   337,    -1,    -1,    -1,    -1,
      -1,    -1,   400,   401,   402,   403,   404,    -1,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,   337,    -1,    -1,   381,
     382,   383,   384,    -1,    -1,   387,   388,    -1,   390,    -1,
     392,   393,   394,    -1,   452,   453,   454,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
     381,   382,   383,   384,     3,    -1,   387,   388,    72,   390,
      -1,   392,   393,   394,    -1,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
       3,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    63,    18,    19,    20,    21,    -1,
      69,    -1,    71,    -1,    73,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,     3,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    69,    35,    36,    37,
      -1,     3,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    51,    16,    17,    18,    19,    20,    21,
      -1,    -1,     3,    -1,    -1,    16,    17,    18,    19,    20,
      21,    69,    34,    35,    36,    37,    -1,    18,    19,    20,
      21,    -1,    -1,    34,    35,    36,    37,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    59,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67,     3,    69,    59,    60,
      -1,    -1,    63,    -1,    -1,    -1,    67,     3,    69,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    18,    19,    20,    21,    -1,    34,    35,    36,
      37,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    63,    18,    19,    20,
      21,    -1,    69,     3,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    69,    35,    36,    37,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    69,    -1,
      -1,    51,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    69,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    67,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    77,    83,    84,    85,    18,    82,     0,    83,
      46,    80,    81,    66,    73,    18,    80,    18,    71,    38,
      43,    78,    79,    90,    93,    96,   101,    42,    43,    44,
      52,    18,    90,    93,    96,   101,    72,    18,    18,    18,
      18,    71,    71,    74,    71,    71,    71,    38,    39,    40,
      41,    54,    55,    94,    95,   102,   103,   106,   110,    53,
      91,    92,   102,   103,   106,   109,   110,   111,    49,    82,
      95,    18,   100,     3,    18,    19,    20,    21,    28,    29,
      30,    31,    32,    33,    35,    36,    37,    69,    86,    87,
      88,    89,    97,    98,    99,   124,   102,   103,   106,   110,
      72,    18,    33,    41,    51,    89,   104,   105,    18,   103,
     106,   109,   110,   111,    72,    41,    71,    71,    72,    72,
      75,   125,    69,    18,    16,    17,    34,    59,    60,    63,
      69,    88,   120,    68,    68,    66,    68,    18,    97,    72,
      33,    89,    69,    18,    33,    89,    18,    18,    73,    73,
      69,    89,    92,    92,    18,     4,     5,    71,   126,    70,
     120,   122,    69,   120,   120,    68,    86,    89,   120,   120,
     120,    86,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    56,    57,    58,    59,    60,    61,    62,    70,
      67,    67,    18,    67,   120,    69,    18,    18,    51,    70,
      88,    89,   104,   107,    69,    18,    18,    56,    56,    69,
      70,    50,    72,    72,   120,    70,    75,   107,   108,    67,
      68,    71,    70,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
      69,    67,   108,    69,    69,    18,    71,    18,    70,    75,
     108,    69,    69,   120,   120,   108,    71,     6,     7,     8,
       9,    16,    17,    57,    58,    59,    60,    61,    62,    63,
      72,   120,    70,    71,   120,   122,   123,   120,    70,   122,
      70,   108,   108,    22,    23,    25,    26,    27,    47,    71,
      73,    89,   104,   105,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    71,   104,    70,   108,   108,    70,   114,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    73,   123,    67,    72,    70,    73,    70,
      70,   120,   121,    69,    69,   112,    69,    69,   114,    18,
      73,    73,   112,    72,    73,   114,    71,    70,    70,    71,
      72,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,    72,    71,    71,    73,   120,   120,
      25,   104,   105,   121,   104,    72,    72,   114,    71,    71,
     114,    75,    75,    75,    75,    70,    70,    75,    75,    70,
      75,    70,    75,    75,    75,    70,   114,   114,    70,    70,
      69,    73,    73,    73,    48,    72,   114,   114,    72,   104,
     104,   104,   104,    71,    71,   104,   104,    71,   104,    71,
     104,   104,   104,    71,    72,    72,   112,   112,   120,   121,
     121,   121,   120,    72,    72,    70,    70,    70,    70,   114,
     114,    70,    70,   114,    70,   114,    70,    70,    70,   114,
      24,    70,    73,    73,    73,    70,    71,    71,    71,    71,
      72,    72,    71,    71,    72,    71,    72,    71,    71,    71,
      72,   112,    73,   121,   121,   121,   112,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,    70,    70,    70,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
     112,   112,   112
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
#line 207 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { treeRoot = new Program((yyvsp[(1) - (2)]._usingDirectives), (yyvsp[(2) - (2)]._namespaceDeclSeq)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 213 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._enumDecl)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 214 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._classDecl)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 215 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceDecl)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 216 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._structDecl)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 217 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._enumDecl)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 218 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._classDecl)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 219 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceDecl)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 220 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._structDecl)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 223 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 224 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = (yyvsp[(1) - (1)]._namespaceMembers); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 227 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._namespaceMembers));  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 230 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[(1) - (1)]._namespaceDecl)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 231 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceDeclSeq) -> Add((yyvsp[(2) - (2)]._namespaceDecl)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 234 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 235 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingArg) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 238 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[(2) - (3)]._usingArg)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 241 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[(1) - (1)]._usingDirective)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 242 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) -> Add((yyvsp[(2) - (2)]._usingDirective)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 245 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 246 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) = (yyvsp[(1) - (1)]._usingDirectives); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 253 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Char); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 254 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Int); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 255 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Bool); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 256 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Float); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 257 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::String); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 260 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {     (yyval._standardArrayType) = new StandardArrayType{ static_cast<StandardType>((yyvsp[(1) - (3)]._standardType)), 1  };     (yyval._standardArrayType)->Arity = 1; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 261 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {     (yyvsp[(1) - (3)]._standardArrayType)->Arity += 1;     (yyval._standardArrayType) = (yyvsp[(1) - (3)]._standardArrayType); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 264 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromId((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 265 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromDot((yyvsp[(1) - (3)]._qualifiedOrExpr), (yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 266 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBrackets((yyvsp[(1) - (3)]._qualifiedOrExpr)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 267 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBrackets((yyvsp[(1) - (4)]._qualifiedOrExpr), (yyvsp[(3) - (4)]._expr)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 268 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromDot((yyvsp[(1) - (6)]._qualifiedOrExpr), (yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 269 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromCall((yyvsp[(1) - (4)]._identifier), (yyvsp[(3) - (4)]._exprSeq)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 270 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromDot((yyvsp[(1) - (5)]._qualifiedOrExpr), (yyvsp[(3) - (5)]._identifier), nullptr); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 271 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromCall((yyvsp[(1) - (3)]._identifier), nullptr); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 272 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = (yyvsp[(2) - (3)]._expr); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 273 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = ExprNode::FromNull(); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 274 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromInt((yyvsp[(1) - (1)]._integer)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 275 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromString((yyvsp[(1) - (1)]._string)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 276 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromChar((yyvsp[(1) - (1)]._character)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 277 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBool(true); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 278 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBool(false); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 279 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = (yyvsp[(1) - (1)]._qualifiedOrExpr); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 283 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._type) = new TypeNode(static_cast<StandardType>((yyvsp[(1) - (1)]._standardType))); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 284 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._type) = new TypeNode(*(yyvsp[(1) - (1)]._standardArrayType)); delete (yyvsp[(1) - (1)]._standardArrayType); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 285 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._qualifiedOrExpr)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 292 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (6)]._identifier), nullptr, (yyvsp[(5) - (6)]._typeMembers)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 293 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), (yyvsp[(5) - (8)]._usingArg), (yyvsp[(7) - (8)]._typeMembers)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 294 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), nullptr, (yyvsp[(7) - (8)]._typeMembers)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 297 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddMethod((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 298 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddField((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 299 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddMethod((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 300 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddConstructor((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 301 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddDestructor((yyvsp[(1) - (1)]._destructorDecl)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 302 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddMethod((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 303 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddField((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 304 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddMethod((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 305 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddConstructor((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 306 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddDestructor((yyvsp[(2) - (2)]._destructorDecl)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 309 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 310 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = (yyvsp[(1) - (1)]._typeMembers); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 318 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._typeMembers)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 319 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._typeMembers)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 322 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers)->AddField((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 323 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers)->AddMethod((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 324 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers)->AddConstructor((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 325 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers)->AddField((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 326 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers)->AddMethod((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 327 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers)->AddConstructor((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 331 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 332 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = (yyvsp[(1) - (1)]._typeMembers); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 338 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceDecl) = new InterfaceDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._interfaceMembers)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 341 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode((yyvsp[(1) - (6)]._type), (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 342 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode(nullptr, (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 345 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); (yyval._interfaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceMember)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 346 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceMember)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 349 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 350 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) = (yyvsp[(1) - (1)]._interfaceMembers); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 357 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 358 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._enumerators) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 361 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { Print("Found enum declaration with name:", (yyvsp[(3) - (6)]._identifier)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 368 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Public); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 369 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Protected); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 370 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Private); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 371 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Internal); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 372 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::ProtectedInternal); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 378 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {
    (yyval._fieldDecl) = new FieldDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (3)]._visibiltyModifier)), (yyvsp[(2) - (3)]._varDecl));
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 381 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {
    (yyval._fieldDecl) = new FieldDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (3)]._visibiltyModifier)), (yyvsp[(2) - (3)]._varDecl));
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 385 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (2)]._type), (yyvsp[(2) - (2)]._identifier), nullptr); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 386 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (2)]._identifier), nullptr, true); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 388 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (4)]._type), (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 389 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr), true); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 396 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (9)]._visibiltyModifier)), (yyvsp[(2) - (9)]._type), (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 397 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (9)]._visibiltyModifier)), nullptr, (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 398 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (10)]._visibiltyModifier)), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 399 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(2) - (10)]._visibiltyModifier)), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 400 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (10)]._visibiltyModifier)), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 401 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(2) - (10)]._visibiltyModifier)), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 404 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) = new MethodArguments((yyvsp[(1) - (1)]._varDecl)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 405 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) -> Add((yyvsp[(3) - (3)]._varDecl)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 407 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 408 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) = (yyvsp[(1) - (1)]._methodArguments); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 411 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Plus,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 412 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Minus,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 413 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Multiply,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 414 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Divide,            (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 415 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Less,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 416 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Greater,           (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 417 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Equal,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 418 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::NotEqual,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 419 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::LessOrEqual,       (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 420 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::GreaterOrEqual,    (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 421 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::Not,               (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 422 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::Decrement,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 423 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::Increment,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 424 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::UnaryMinus,        (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 425 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::UnaryPlus,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 433 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { 
        (yyval._constructorDecl) = new ConstructorDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (7)]._visibiltyModifier)), (yyvsp[(2) - (7)]._identifier), MethodArguments::MakeEmpty(), (yyvsp[(6) - (7)]._stmtSeq));
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 436 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {
        (yyval._constructorDecl) = new ConstructorDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (8)]._visibiltyModifier)), (yyvsp[(2) - (8)]._identifier), (yyvsp[(4) - (8)]._methodArguments), (yyvsp[(7) - (8)]._stmtSeq));
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 441 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { 
    (yyval._destructorDecl) = new DestructorDeclNode((yyvsp[(2) - (7)]._identifier), (yyvsp[(6) - (7)]._stmtSeq)); 
;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 450 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode(); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 451 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._expr), /* isReturn= */ false); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 452 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 453 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 454 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._while)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 455 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._doWhile)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 456 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._for)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 457 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._if)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 458 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._foreach)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 459 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._stmtSeq)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 460 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._expr), /* isReturn= */ true); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 463 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[(1) - (1)]._stmt)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 464 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) -> Add((yyvsp[(2) - (2)]._stmt)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 466 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 467 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) = (yyvsp[(1) - (1)]._stmtSeq); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 470 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._while) = new WhileNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 472 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._doWhile) = new DoWhileNode((yyvsp[(5) - (7)]._expr), (yyvsp[(2) - (7)]._stmt)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 475 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 476 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 477 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._expr), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 480 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 481 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (7)]._expr), (yyvsp[(5) - (7)]._stmt), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 484 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._foreach) = new ForEachNode((yyvsp[(3) - (7)]._varDecl), (yyvsp[(5) - (7)]._expr), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 491 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 492 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 493 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 494 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 495 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 496 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 497 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 498 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 499 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 500 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 501 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 502 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 503 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 504 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 505 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 506 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 507 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 508 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 509 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 510 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 511 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 512 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 513 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromQualified_or_expr((yyvsp[(1) - (1)]._qualifiedOrExpr)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 514 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (2)]._type)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 515 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._exprSeq)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 516 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 517 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromCast((yyvsp[(2) - (4)]._standardType), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 518 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._standardType), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 521 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = nullptr; ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 522 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = (yyvsp[(1) - (1)]._expr); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 525 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) = new ExprSeqNode((yyvsp[(1) - (1)]._expr)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 526 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) -> Add((yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 529 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 530 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) = (yyvsp[(1) - (1)]._exprSeq); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 537 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromString("interpolated"); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 540 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._exprSeq) = ExprSeqNode::MakeEmpty();;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 541 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._exprSeq)->Add((yyvsp[(2) - (2)]._expr));;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 544 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._expr) = ExprNode::FromString((yyvsp[(1) - (1)]._string));;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 545 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._expr) = (yyvsp[(2) - (3)]._expr);;}
    break;



/* Line 1455 of yacc.c  */
#line 3347 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"
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
#line 548 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"


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
