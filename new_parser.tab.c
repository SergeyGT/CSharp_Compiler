
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
#line 1 "new_parser.y"

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
#line 104 "new_parser.tab.c"

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
     FLOATING_POINT = 275,
     STRING = 276,
     CHARACTER = 277,
     RETURN = 278,
     IF = 279,
     ELSE = 280,
     WHILE = 281,
     DO = 282,
     FOR = 283,
     CHAR_KW = 284,
     INT_KW = 285,
     STRING_KW = 286,
     BOOL_KW = 287,
     FLOAT_KW = 288,
     VOID_KW = 289,
     NEW = 290,
     NULL_KW = 291,
     TRUE_KW = 292,
     FALSE_KW = 293,
     PUBLIC = 294,
     PROTECTED = 295,
     PRIVATE = 296,
     STATIC = 297,
     CLASS = 298,
     STRUCT = 299,
     ENUM = 300,
     USING = 301,
     NAMESPACE = 302,
     FOREACH = 303,
     IN_KW = 304,
     OBJECT = 305,
     OPERATOR = 306,
     VAR = 307,
     INTERFACE = 308,
     TILDE = 309,
     INTERNAL = 310,
     PROTECTED_INTERNAL = 311,
     UNARY_PLUS = 312,
     UNARY_MINUS = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "new_parser.y"

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



/* Line 214 of yacc.c  */
#line 249 "new_parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 261 "new_parser.tab.c"

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
#define YYLAST   1332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNRULES -- Number of states.  */
#define YYNSTATES  501

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,     2,     2,     2,     2,     2,
      70,    71,    62,    60,    76,    61,    67,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    74,
      58,    57,    59,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,    73,     2,     2,     2,     2,
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
      55,    56,    65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    18,
      21,    24,    27,    28,    30,    36,    38,    41,    43,    47,
      51,    53,    56,    57,    59,    61,    63,    65,    67,    69,
      73,    77,    79,    81,    83,    90,    99,   108,   110,   112,
     114,   116,   118,   121,   124,   127,   130,   133,   134,   136,
     143,   149,   152,   154,   156,   158,   162,   165,   168,   171,
     172,   174,   181,   188,   195,   197,   200,   201,   203,   205,
     209,   216,   218,   220,   222,   224,   226,   230,   234,   237,
     240,   245,   250,   260,   270,   281,   292,   303,   314,   316,
     320,   321,   323,   337,   351,   365,   379,   393,   407,   421,
     435,   449,   463,   475,   487,   499,   511,   523,   531,   539,
     541,   544,   547,   550,   552,   554,   556,   558,   560,   564,
     568,   570,   573,   574,   576,   582,   590,   600,   610,   620,
     626,   634,   642,   646,   651,   655,   657,   659,   661,   663,
     665,   667,   669,   674,   678,   685,   687,   691,   695,   699,
     703,   707,   711,   715,   719,   723,   727,   731,   735,   739,
     743,   747,   751,   755,   758,   761,   764,   767,   770,   772,
     774,   777,   783,   790,   795,   801,   802,   804,   806,   810,
     811,   813,   817,   818,   821,   823
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    -1,    86,    82,    -1,   101,    -1,    90,
      -1,    96,    -1,    93,    -1,    79,   101,    -1,    79,    90,
      -1,    79,    96,    -1,    79,    93,    -1,    -1,    79,    -1,
      47,    18,    72,    80,    73,    -1,    81,    -1,    82,    81,
      -1,    18,    -1,    83,    67,    18,    -1,    46,    83,    74,
      -1,    84,    -1,    85,    84,    -1,    -1,    85,    -1,    29,
      -1,    30,    -1,    32,    -1,    33,    -1,    31,    -1,    87,
      69,    68,    -1,    88,    69,    68,    -1,    87,    -1,    88,
      -1,   120,    -1,    39,    43,    18,    72,    92,    73,    -1,
      39,    43,    18,    75,    83,    72,    92,    73,    -1,    39,
      43,    18,    75,    50,    72,    92,    73,    -1,   106,    -1,
     103,    -1,   109,    -1,   110,    -1,   111,    -1,    91,   106,
      -1,    91,   103,    -1,    91,   109,    -1,    91,   110,    -1,
      91,   111,    -1,    -1,    91,    -1,    39,    44,    18,    72,
      95,    73,    -1,    44,    18,    72,    95,    73,    -1,   103,
      74,    -1,   106,    -1,   110,    -1,   111,    -1,    94,   103,
      74,    -1,    94,   106,    -1,    94,   110,    -1,    94,   111,
      -1,    -1,    94,    -1,    39,    53,    18,    72,    99,    73,
      -1,    89,    18,    70,   108,    71,    74,    -1,    34,    18,
      70,   108,    71,    74,    -1,    97,    -1,    98,    97,    -1,
      -1,    98,    -1,    18,    -1,   100,    76,    18,    -1,    39,
      45,    18,    72,   100,    73,    -1,    39,    -1,    40,    -1,
      41,    -1,    55,    -1,    56,    -1,   102,   104,    74,    -1,
     102,   105,    74,    -1,    89,    18,    -1,    52,    18,    -1,
      89,    18,    57,   121,    -1,    52,    18,    57,   121,    -1,
     102,    89,    18,    70,   108,    71,    72,   114,    73,    -1,
     102,    34,    18,    70,   108,    71,    72,   114,    73,    -1,
     102,    42,    34,    18,    70,   108,    71,    72,   114,    73,
      -1,    42,   102,    34,    18,    70,   108,    71,    72,   114,
      73,    -1,   102,    42,    89,    18,    70,   108,    71,    72,
     114,    73,    -1,    42,   102,    89,    18,    70,   108,    71,
      72,   114,    73,    -1,   104,    -1,   107,    76,   104,    -1,
      -1,   107,    -1,   102,    42,    89,    51,    60,    70,   104,
      76,   104,    71,    72,   114,    73,    -1,   102,    42,    89,
      51,    61,    70,   104,    76,   104,    71,    72,   114,    73,
      -1,   102,    42,    89,    51,    62,    70,   104,    76,   104,
      71,    72,   114,    73,    -1,   102,    42,    89,    51,    63,
      70,   104,    76,   104,    71,    72,   114,    73,    -1,   102,
      42,    89,    51,    58,    70,   104,    76,   104,    71,    72,
     114,    73,    -1,   102,    42,    89,    51,    59,    70,   104,
      76,   104,    71,    72,   114,    73,    -1,   102,    42,    89,
      51,     6,    70,   104,    76,   104,    71,    72,   114,    73,
      -1,   102,    42,    89,    51,     7,    70,   104,    76,   104,
      71,    72,   114,    73,    -1,   102,    42,    89,    51,     9,
      70,   104,    76,   104,    71,    72,   114,    73,    -1,   102,
      42,    89,    51,     8,    70,   104,    76,   104,    71,    72,
     114,    73,    -1,   102,    42,    89,    51,    64,    70,   104,
      71,    72,   114,    73,    -1,   102,    42,    89,    51,    17,
      70,   104,    71,    72,   114,    73,    -1,   102,    42,    89,
      51,    16,    70,   104,    71,    72,   114,    73,    -1,   102,
      42,    89,    51,    61,    70,   104,    71,    72,   114,    73,
      -1,   102,    42,    89,    51,    60,    70,   104,    71,    72,
     114,    73,    -1,   102,    18,    70,    71,    72,   114,    73,
      -1,    54,    18,    70,    71,    72,   114,    73,    -1,    74,
      -1,   121,    74,    -1,   104,    74,    -1,   105,    74,    -1,
     115,    -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,
      72,   114,    73,    -1,    23,   122,    74,    -1,   112,    -1,
     113,   112,    -1,    -1,   113,    -1,    26,    70,   121,    71,
     112,    -1,    27,   112,    26,    70,   121,    71,    74,    -1,
      28,    70,   104,    74,   122,    74,   122,    71,   112,    -1,
      28,    70,   105,    74,   122,    74,   122,    71,   112,    -1,
      28,    70,   122,    74,   122,    74,   122,    71,   112,    -1,
      24,    70,   121,    71,   112,    -1,    24,    70,   121,    71,
     112,    25,   112,    -1,    48,    70,   104,    49,   121,    71,
     112,    -1,    70,   121,    71,    -1,   120,    69,   121,    68,
      -1,   120,    69,    68,    -1,    19,    -1,    20,    -1,    21,
      -1,    22,    -1,    37,    -1,    38,    -1,    18,    -1,    18,
      70,   124,    71,    -1,   120,    67,    18,    -1,   120,    67,
      18,    70,   124,    71,    -1,   125,    -1,   121,    60,   121,
      -1,   121,    61,   121,    -1,   121,    62,   121,    -1,   121,
      63,   121,    -1,   121,    57,   121,    -1,   121,    12,   121,
      -1,   121,    13,   121,    -1,   121,    14,   121,    -1,   121,
      15,   121,    -1,   121,    58,   121,    -1,   121,    59,   121,
      -1,   121,     6,   121,    -1,   121,     7,   121,    -1,   121,
       9,   121,    -1,   121,     8,   121,    -1,   121,    11,   121,
      -1,   121,    10,   121,    -1,    64,   121,    -1,    16,   121,
      -1,    17,   121,    -1,    60,   121,    -1,    61,   121,    -1,
      36,    -1,   120,    -1,    35,    89,    -1,    35,    89,    72,
     124,    73,    -1,    35,    69,    68,    72,   124,    73,    -1,
      70,    87,    71,   121,    -1,    35,    87,    69,   121,    68,
      -1,    -1,   121,    -1,   121,    -1,   123,    76,   121,    -1,
      -1,   123,    -1,     3,   126,     4,    -1,    -1,   126,   127,
      -1,     5,    -1,    72,   121,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   204,   204,   206,   213,   214,   215,   216,   217,   218,
     219,   220,   223,   224,   227,   230,   231,   235,   236,   239,
     242,   243,   246,   247,   256,   257,   258,   259,   260,   263,
     264,   267,   268,   269,   279,   280,   281,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   296,   297,   306,
     307,   311,   312,   313,   314,   315,   316,   317,   318,   322,
     323,   330,   333,   334,   337,   338,   341,   342,   350,   351,
     354,   364,   365,   366,   367,   368,   376,   377,   379,   380,
     382,   383,   392,   393,   394,   395,   396,   397,   401,   402,
     404,   405,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   431,   435,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     456,   457,   459,   460,   463,   465,   468,   469,   470,   473,
     474,   477,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   534,   535,   538,   539,   542,
     543,   550,   553,   554,   557,   558
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
  "INCREMENT", "DECREMENT", "IDENTIFIER", "INTEGER", "FLOATING_POINT",
  "STRING", "CHARACTER", "RETURN", "IF", "ELSE", "WHILE", "DO", "FOR",
  "CHAR_KW", "INT_KW", "STRING_KW", "BOOL_KW", "FLOAT_KW", "VOID_KW",
  "NEW", "NULL_KW", "TRUE_KW", "FALSE_KW", "PUBLIC", "PROTECTED",
  "PRIVATE", "STATIC", "CLASS", "STRUCT", "ENUM", "USING", "NAMESPACE",
  "FOREACH", "IN_KW", "OBJECT", "OPERATOR", "VAR", "INTERFACE", "TILDE",
  "INTERNAL", "PROTECTED_INTERNAL", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'!'", "UNARY_PLUS", "UNARY_MINUS", "'.'", "']'", "'['",
  "'('", "')'", "'{'", "'}'", "';'", "':'", "','", "$accept", "program",
  "namespace_members", "namespace_members_optional", "namespace_decl",
  "namespace_decl_seq", "using_arg", "using_directive", "using_directives",
  "using_directives_optional", "standard_type", "standard_array_type",
  "type", "class_decl", "class_members", "class_members_optional",
  "struct_decl", "struct_members", "struct_members_optional",
  "interface_decl", "interface_member", "interface_members",
  "interface_members_optional", "enumerators", "enum_decl",
  "visibility_modifier", "field_decl", "var_decl", "var_decl_with_init",
  "method_decl", "method_arguments", "method_arguments_optional",
  "operator_overload", "constructor_decl", "destructor_decl", "stmt",
  "stmt_seq", "stmt_seq_optional", "while_stmt", "do_while_stmt",
  "for_stmt", "if_stmt", "foreach_stmt", "access_expr", "expr",
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
     305,   306,   307,   308,   309,   310,   311,    61,    60,    62,
      43,    45,    42,    47,    33,   312,   313,    46,    93,    91,
      40,    41,   123,   125,    59,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    81,    82,    82,    83,    83,    84,
      85,    85,    86,    86,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   115,   116,   117,   117,   117,   118,
     118,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   126,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     0,     1,     5,     1,     2,     1,     3,     3,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     6,     8,     8,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     0,     1,     6,
       5,     2,     1,     1,     1,     3,     2,     2,     2,     0,
       1,     6,     6,     6,     1,     2,     0,     1,     1,     3,
       6,     1,     1,     1,     1,     1,     3,     3,     2,     2,
       4,     4,     9,     9,    10,    10,    10,    10,     1,     3,
       0,     1,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    11,    11,    11,    11,    11,     7,     7,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     0,     1,     5,     7,     9,     9,     9,     5,
       7,     7,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     6,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     1,
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
       0,    59,    47,     0,    59,     0,    66,    71,    72,    73,
       0,     0,    74,    75,    60,     0,     0,     0,    52,    53,
      54,    48,     0,     0,    38,    37,    39,    40,    41,     0,
       0,     0,    68,     0,   182,   141,   135,   136,   137,   138,
      24,    25,    28,    26,    27,     0,   139,   140,     0,    31,
      32,     0,    64,    67,     0,    33,   145,     0,     0,     0,
      56,    57,    58,    50,   141,     0,     0,     0,     0,     0,
       0,    51,    43,    42,    44,    45,    46,    34,     0,    47,
      47,    49,    70,     0,     0,   179,     0,     0,     0,     0,
     168,     0,     0,     0,     0,   169,     0,     0,     0,     0,
      65,    61,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,    79,    78,    76,    77,     0,     0,     0,    69,
     181,   184,     0,   183,   177,   180,     0,    90,   164,   165,
       0,    31,   170,   166,   167,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,    29,    30,    90,   143,   134,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
      90,     0,    36,    35,     0,     0,   142,     0,     0,    88,
      91,     0,     0,     0,   179,     0,   157,   158,   160,   159,
     162,   161,   151,   152,   153,   154,   150,   155,   156,   146,
     147,   148,   149,     0,   179,   133,    90,    90,   122,   122,
       0,    90,    90,    81,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     178,    79,    78,     0,     0,   179,     0,     0,   173,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,   122,
     109,     0,     0,     0,   120,   123,     0,   113,   114,   115,
     116,   117,   169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    63,     0,   174,   171,    62,   144,     0,
       0,   176,     0,     0,     0,     0,   175,     0,     0,    78,
     111,   112,   121,   108,   110,   107,   122,     0,     0,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   122,   122,   119,     0,     0,     0,
       0,     0,     0,     0,   118,     0,   122,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
     175,   175,     0,    83,     0,     0,    82,     0,     0,     0,
       0,   122,   122,     0,     0,   122,     0,   122,     0,     0,
       0,   122,    85,    87,   129,   124,     0,     0,     0,     0,
       0,    84,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,   175,   175,     0,   122,   122,   122,   122,   104,   103,
     122,   122,   106,   122,   105,   122,   122,   122,   102,   130,
     125,     0,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     101,   100,    96,    97,    92,    93,    94,    95,   126,   127,
     128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    21,    22,    11,    12,     7,     3,     4,     5,
      89,    90,   291,    23,    61,    62,    24,    54,    55,    25,
      92,    93,    94,    73,    26,    63,    64,   292,   293,    65,
     220,   221,    66,    67,    68,   294,   295,   296,   297,   298,
     299,   300,   301,   135,   303,   332,   165,   166,    96,   124,
     163
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -326
static const yytype_int16 yypact[] =
{
     101,    10,    48,  -326,     4,    16,  -326,   -43,  -326,  -326,
      53,  -326,    16,    84,  -326,    50,  -326,  -326,   -14,   -24,
      98,   -14,    56,  -326,  -326,  -326,  -326,   120,   124,   132,
     137,    91,  -326,  -326,  -326,  -326,  -326,    42,    96,   104,
     105,   142,   142,     9,   142,   154,   359,  -326,  -326,  -326,
     221,   168,  -326,  -326,   142,   115,   723,   117,  -326,  -326,
    -326,   142,   116,   911,  -326,  -326,  -326,  -326,  -326,   121,
     -23,   119,  -326,   -12,  -326,   125,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,   176,  -326,  -326,   793,   130,
     135,   189,  -326,   359,   139,   -65,  -326,   958,   143,   151,
    -326,  -326,  -326,  -326,   146,   208,  1001,   210,   211,   156,
     157,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  1001,   142,
     142,  -326,  -326,   214,     1,   793,   169,   793,   793,   215,
    -326,   793,   793,   793,   516,   -65,  1055,   174,   182,   184,
    -326,  -326,   237,   620,   238,   239,   188,  -326,    75,   209,
     260,   264,   226,   -48,  -326,  -326,    -6,   213,   216,  -326,
    -326,  -326,   793,  -326,  1269,   212,   230,  1022,  -326,  -326,
     219,   223,   232,  -326,  -326,  -326,   231,   793,   793,   793,
     793,   793,   793,   793,   793,   793,   793,   793,   793,   793,
     793,   793,   793,   793,  -326,  -326,  -326,  1022,   235,  -326,
    1183,   241,   246,   245,   248,  1022,   251,   252,   793,   793,
    1022,  1257,  -326,  -326,   605,   793,  -326,   305,   306,  -326,
     249,   255,   256,   948,   793,   793,    19,    19,    19,    19,
       7,    46,  1269,  1269,  1269,  1269,  1269,    19,    19,    36,
      36,  -326,  -326,   261,   793,  -326,  1022,  1022,   848,   848,
     272,  1022,  1022,  1269,  1269,   278,   257,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   293,   294,  -326,
    1269,  -326,  -326,  1022,   274,   793,  1246,   295,  -326,   296,
     301,   302,   303,   793,   297,   312,   848,   313,   314,   848,
    -326,   358,   311,   320,  -326,   848,   322,  -326,  -326,  -326,
    -326,  -326,   -11,    27,   325,   327,   315,   329,   331,  1022,
    1022,  1022,  1022,  1022,  1022,  1022,  1022,  1022,  1022,  1022,
    1022,  1022,  -326,  -326,   328,  -326,  -326,  -326,  -326,   332,
     333,  1269,   338,   793,   793,   380,   277,  1022,   340,   361,
    -326,  -326,  -326,  -326,  -326,  -326,   848,   344,   350,   848,
     347,   349,   352,   360,   363,   364,   362,   367,    44,    52,
     368,   369,   366,  -326,   848,   848,  -326,  1070,  1087,   378,
     375,   376,   377,   403,  -326,   381,   848,   848,   382,  1022,
    1022,  1022,  1022,   385,   386,  1022,  1022,   387,  1022,   388,
    1022,  1022,  1022,   390,   391,   392,   848,   848,   793,   793,
     793,   793,   793,  -326,   393,   394,  -326,   397,   398,   399,
     401,   848,   848,   402,   404,   848,   423,   848,   424,   425,
     427,   848,  -326,  -326,   428,  -326,  1153,   426,   429,   430,
    1168,  -326,  -326,   433,   437,   438,   439,   440,   442,   444,
     445,   447,   449,   452,   454,   455,   456,   457,   848,   465,
     793,   793,   793,   848,   848,   848,   848,   848,  -326,  -326,
     848,   848,  -326,   848,  -326,   848,   848,   848,  -326,  -326,
    -326,   431,   441,   460,  -326,   467,   468,   469,   471,   477,
     482,   483,   484,   485,   486,   848,   848,   848,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -326,  -326,  -326,  -326,   459,  -326,   458,   470,  -326,  -326,
     -72,  -326,   400,   478,  -326,    37,   539,  -326,   517,   541,
     472,  -326,  -326,  -326,   542,   108,    99,   525,   -55,   100,
    -326,   -73,   503,   126,   197,  -263,  -326,  -246,  -326,  -326,
    -326,  -326,  -326,   -46,   299,  -325,  -326,  -198,  -326,  -326,
    -326
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      95,   110,   142,   304,   143,   160,   161,   -33,   110,   209,
      95,   372,   207,   177,   178,   179,   180,    95,   182,    27,
      28,    29,   210,   335,    13,    19,   277,     6,     6,    30,
      20,    14,   342,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   338,    13,   211,   280,    95,     8,   120,
       1,    95,   177,   178,   179,   180,   142,   171,   143,    69,
      95,   122,   176,    10,   123,   188,   189,   190,   191,   192,
     193,    15,    95,   162,   427,   428,   429,   324,    74,   190,
     191,   192,   193,    95,   187,   188,   189,   190,   191,   192,
     193,   127,   128,    75,    76,    77,    78,    79,   192,   193,
     375,   344,    17,   378,   188,   189,   190,   191,   192,   193,
     129,   130,    86,    87,    42,   387,    31,    43,   394,   395,
     388,    95,    18,   389,   243,   471,   472,   473,   390,    36,
     404,   405,   250,   424,   425,   131,   132,   255,    37,   133,
      57,    58,    38,    57,    58,   134,   204,     1,   -22,    56,
      39,    95,    56,    99,   100,    40,   157,   158,    97,    95,
     112,   113,    56,    41,    95,   437,   438,    59,    44,   441,
      59,   443,    72,   281,   282,   447,    45,    46,   306,   307,
     101,    47,    48,    49,    50,   469,    98,   115,   103,   117,
     474,   111,   121,   119,   126,   125,    51,    52,    53,   137,
      95,    95,   302,   302,   138,    95,    95,   139,   475,   476,
     477,   478,   141,   146,   479,   480,   148,   481,    74,   482,
     483,   484,   498,   499,   500,   147,   149,    95,   152,   153,
     154,   155,   159,    75,    76,    77,    78,    79,    60,   167,
     302,    60,   195,   302,    80,    81,    82,    83,    84,   302,
     196,   102,    86,    87,   197,   198,   201,   202,   116,   203,
      47,    48,    49,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    52,    53,   206,   205,
      74,   371,   207,   208,   170,    88,   212,   222,   215,   213,
     302,    95,   223,   127,   128,    75,    76,    77,    78,    79,
     302,   216,   225,   302,   224,   244,    80,    81,    82,    83,
      84,   246,   129,   130,    86,    87,   247,   248,   302,   302,
     249,   251,   252,   271,   272,   273,   274,   309,   275,   107,
     302,   302,   279,    95,    95,    95,    95,   131,   132,    95,
      95,   133,    95,   305,    95,    95,    95,   134,   323,   308,
     302,   302,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,    74,   320,   321,   302,   302,   333,   326,   302,
     327,   302,   328,   329,   330,   302,   339,    75,    76,    77,
      78,    79,   334,   336,   337,   340,   347,   136,    80,    81,
      82,    83,    84,    85,   341,   343,    86,    87,   345,   346,
     348,   363,   302,   349,   364,   365,   369,   302,   302,   302,
     302,   302,   366,   374,   302,   302,   376,   302,   209,   302,
     302,   302,   377,   379,   164,   380,   168,   169,   381,    88,
     173,   174,   175,   136,   383,   384,   382,   393,   385,   302,
     302,   302,   200,   386,   391,   392,    91,   164,   398,   399,
     400,   401,   402,   448,   403,   406,   108,   411,   412,   415,
     417,   214,   421,   108,   422,   423,   431,   432,   433,   434,
     435,    16,   436,   439,     9,   440,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,    91,   442,   444,   445,   145,   446,    32,
     450,    70,   485,   451,   452,   454,   151,   253,   254,   455,
     456,   457,   486,   458,   270,   459,   460,   461,   156,    74,
     462,   463,   276,   164,   278,   464,   465,   466,   467,   172,
     468,   487,   127,   128,    75,    76,    77,    78,    79,   470,
     488,   489,   490,   164,   491,    80,    81,    82,    83,    84,
     492,   129,   130,    86,    87,   493,   494,   495,   496,   497,
      33,    71,    34,    35,   114,   140,     0,   218,     0,     0,
       0,     0,     0,     0,   164,     0,   131,   132,     0,     0,
     133,   109,   331,     0,     0,     0,   134,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,   218,     0,     0,     0,     0,
     218,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   368,     0,   331,   127,   128,    75,    76,
      77,    78,    79,     0,     0,     0,   218,   218,     0,     0,
       0,   218,   218,     0,     0,   129,   130,    86,    87,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,     0,
       0,     0,     0,   218,     0,     0,     0,     0,   269,     0,
     131,   132,     0,     0,   133,     0,     0,     0,   199,     0,
     134,     0,   219,     0,     0,     0,     0,   426,   331,   331,
     331,   430,     0,     0,     0,     0,     0,     0,     0,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   219,     0,     0,     0,    74,     0,     0,     0,
     219,     0,     0,     0,     0,   219,     0,   218,     0,     0,
       0,   104,    76,    77,    78,    79,     0,     0,     0,   331,
     331,   331,    80,    81,    82,    83,    84,   105,     0,     0,
      86,    87,     0,     0,     0,   106,     0,     0,     0,     0,
       0,   219,   219,     0,     0,   107,   219,   219,     0,   218,
     218,   218,   218,     0,     0,   218,   218,     0,   218,     0,
     218,   218,   218,    88,     0,     0,    74,     0,   322,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
     128,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
      86,    87,     0,     0,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,     0,     0,     0,
       0,    74,     0,   131,   132,     0,     0,   133,     0,     0,
       0,   370,   373,   134,   127,   128,    75,    76,    77,    78,
      79,   283,   284,     0,   285,   286,   287,    80,    81,    82,
      83,    84,     0,   129,   130,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   288,     0,     0,     0,
     107,     0,     0,     0,   407,   408,   409,   410,   131,   132,
     413,   414,   133,   416,    74,   418,   419,   420,   134,     0,
     289,     0,   290,     0,     0,     0,     0,     0,     0,   104,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
      80,    81,    82,    83,    84,   105,     0,     0,    86,    87,
       0,    74,     0,   118,     0,     0,     0,     0,     0,     0,
       0,    74,     0,   107,   127,   128,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    88,     0,   129,   130,    86,    87,    80,    81,    82,
      83,    84,   144,     0,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,   131,   132,
       0,     0,   133,     0,     0,     0,   195,     0,   134,    75,
      76,    77,    78,    79,     0,    74,     0,     0,    88,     0,
      80,    81,    82,    83,    84,   150,     0,     0,    86,    87,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,    80,    81,    82,    83,    84,     0,     0,     0,    86,
      87,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    88,     0,     0,   217,     0,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,     0,     0,     0,     0,
       0,     0,    88,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,     0,
       0,     0,     0,     0,     0,     0,   194,   187,   188,   189,
     190,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,   396,     0,     0,   187,   188,   189,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,   397,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,     0,     0,     0,     0,     0,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,   449,   187,   188,   189,   190,   191,
     192,   193,     0,     0,     0,     0,     0,     0,     0,   453,
     187,   188,   189,   190,   191,   192,   193,     0,     0,     0,
       0,   245,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,     0,   256,   257,   258,   259,     0,     0,     0,
       0,     0,     0,   260,   261,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   187,   188,   189,   190,   191,   192,   193,
       0,     0,     0,     0,   325,   262,   263,   264,   265,   266,
     267,   268,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193
};

static const yytype_int16 yycheck[] =
{
      46,    56,    67,   249,    69,     4,     5,    18,    63,    57,
      56,   336,    18,     6,     7,     8,     9,    63,    11,    43,
      44,    45,    70,   286,    67,    39,   224,    18,    18,    53,
      44,    74,   295,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   289,    67,    51,   244,    93,     0,    72,
      46,    97,     6,     7,     8,     9,    67,   129,    69,    50,
     106,    73,   134,    47,    76,    58,    59,    60,    61,    62,
      63,    18,   118,    72,   399,   400,   401,   275,     3,    60,
      61,    62,    63,   129,    57,    58,    59,    60,    61,    62,
      63,    16,    17,    18,    19,    20,    21,    22,    62,    63,
     346,    74,    18,   349,    58,    59,    60,    61,    62,    63,
      35,    36,    37,    38,    72,    71,    18,    75,   364,   365,
      76,   167,    72,    71,   197,   450,   451,   452,    76,    73,
     376,   377,   205,   396,   397,    60,    61,   210,    18,    64,
      41,    41,    18,    44,    44,    70,    71,    46,    47,    41,
      18,   197,    44,    54,    54,    18,   119,   120,    50,   205,
      61,    61,    54,    72,   210,   411,   412,    41,    72,   415,
      44,   417,    18,   246,   247,   421,    72,    72,   251,   252,
      54,    39,    40,    41,    42,   448,    18,    61,    73,    73,
     453,    74,    73,    72,    18,    70,    54,    55,    56,    69,
     246,   247,   248,   249,    69,   251,   252,    18,   454,   455,
     456,   457,    73,    70,   460,   461,    70,   463,     3,   465,
     466,   467,   485,   486,   487,    74,    18,   273,    18,    18,
      74,    74,    18,    18,    19,    20,    21,    22,    41,    70,
     286,    44,    68,   289,    29,    30,    31,    32,    33,   295,
      68,    54,    37,    38,    70,    18,    18,    18,    61,    71,
      39,    40,    41,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,    55,    56,    18,    70,
       3,   336,    18,    57,    69,    70,    73,    68,    76,    73,
     336,   337,    69,    16,    17,    18,    19,    20,    21,    22,
     346,    71,    71,   349,    72,    70,    29,    30,    31,    32,
      33,    70,    35,    36,    37,    38,    70,    72,   364,   365,
      72,    70,    70,    18,    18,    76,    71,    70,    72,    52,
     376,   377,    71,   379,   380,   381,   382,    60,    61,   385,
     386,    64,   388,    71,   390,   391,   392,    70,    74,    71,
     396,   397,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,     3,    70,    70,   411,   412,    70,    73,   415,
      74,   417,    71,    71,    71,   421,    18,    18,    19,    20,
      21,    22,    70,    70,    70,    74,    71,    88,    29,    30,
      31,    32,    33,    34,    74,    73,    37,    38,    73,    72,
      71,    73,   448,    72,    72,    72,    26,   453,   454,   455,
     456,   457,    74,    73,   460,   461,    72,   463,    57,   465,
     466,   467,    72,    76,   125,    76,   127,   128,    76,    70,
     131,   132,   133,   134,    71,    71,    76,    71,    76,   485,
     486,   487,   143,    76,    76,    76,    46,   148,    70,    74,
      74,    74,    49,    25,    73,    73,    56,    72,    72,    72,
      72,   162,    72,    63,    73,    73,    73,    73,    71,    71,
      71,    12,    71,    71,     4,    71,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    93,    71,    71,    71,    97,    71,    21,
      74,    43,    71,    74,    74,    72,   106,   208,   209,    72,
      72,    72,    71,    73,   215,    73,    72,    72,   118,     3,
      73,    72,   223,   224,   225,    73,    72,    72,    72,   129,
      73,    71,    16,    17,    18,    19,    20,    21,    22,    74,
      73,    73,    73,   244,    73,    29,    30,    31,    32,    33,
      73,    35,    36,    37,    38,    73,    73,    73,    73,    73,
      21,    44,    21,    21,    61,    93,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,   275,    -1,    60,    61,    -1,    -1,
      64,    56,   283,    -1,    -1,    -1,    70,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
     210,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   333,   334,    -1,   336,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,   246,   247,    -1,    -1,
      -1,   251,   252,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,   273,    -1,    -1,    -1,    -1,    73,    -1,
      60,    61,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      70,    -1,   167,    -1,    -1,    -1,    -1,   398,   399,   400,
     401,   402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   197,    -1,    -1,    -1,     3,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,   210,    -1,   337,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,   450,
     451,   452,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    52,   251,   252,    -1,   379,
     380,   381,   382,    -1,    -1,   385,   386,    -1,   388,    -1,
     390,   391,   392,    70,    -1,    -1,     3,    -1,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    -1,    -1,    -1,
      -1,     3,    -1,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,   336,   337,    70,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,   379,   380,   381,   382,    60,    61,
     385,   386,    64,   388,     3,   390,   391,   392,    70,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    38,
      -1,     3,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    52,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    70,    -1,    35,    36,    37,    38,    29,    30,    31,
      32,    33,    34,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    60,    61,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    70,    18,
      19,    20,    21,    22,    -1,     3,    -1,    -1,    70,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    38,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,    37,
      38,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    70,    -1,    -1,    52,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    70,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    68,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    78,    84,    85,    86,    18,    83,     0,    84,
      47,    81,    82,    67,    74,    18,    81,    18,    72,    39,
      44,    79,    80,    90,    93,    96,   101,    43,    44,    45,
      53,    18,    90,    93,    96,   101,    73,    18,    18,    18,
      18,    72,    72,    75,    72,    72,    72,    39,    40,    41,
      42,    54,    55,    56,    94,    95,   102,   103,   106,   110,
     111,    91,    92,   102,   103,   106,   109,   110,   111,    50,
      83,    95,    18,   100,     3,    18,    19,    20,    21,    22,
      29,    30,    31,    32,    33,    34,    37,    38,    70,    87,
      88,    89,    97,    98,    99,   120,   125,   102,    18,   103,
     106,   110,   111,    73,    18,    34,    42,    52,    89,   104,
     105,    74,   103,   106,   109,   110,   111,    73,    42,    72,
      72,    73,    73,    76,   126,    70,    18,    16,    17,    35,
      36,    60,    61,    64,    70,   120,   121,    69,    69,    18,
      97,    73,    67,    69,    34,    89,    70,    74,    70,    18,
      34,    89,    18,    18,    74,    74,    89,    92,    92,    18,
       4,     5,    72,   127,   121,   123,   124,    70,   121,   121,
      69,    87,    89,   121,   121,   121,    87,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    57,    58,    59,
      60,    61,    62,    63,    71,    68,    68,    70,    18,    68,
     121,    18,    18,    71,    71,    70,    18,    18,    57,    57,
      70,    51,    73,    73,   121,    76,    71,    52,    89,   104,
     107,   108,    68,    69,    72,    71,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   108,    70,    68,    70,    70,    72,    72,
     108,    70,    70,   121,   121,   108,     6,     7,     8,     9,
      16,    17,    58,    59,    60,    61,    62,    63,    64,    73,
     121,    18,    18,    76,    71,    72,   121,   124,   121,    71,
     124,   108,   108,    23,    24,    26,    27,    28,    48,    72,
      74,    89,   104,   105,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   114,    71,   108,   108,    71,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,   104,    74,   124,    68,    73,    74,    71,    71,
      71,   121,   122,    70,    70,   112,    70,    70,   114,    18,
      74,    74,   112,    73,    74,    73,    72,    71,    71,    72,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,    73,    72,    72,    74,   121,   121,    26,
     104,   105,   122,   104,    73,   114,    72,    72,   114,    76,
      76,    76,    76,    71,    71,    76,    76,    71,    76,    71,
      76,    76,    76,    71,   114,   114,    71,    71,    70,    74,
      74,    74,    49,    73,   114,   114,    73,   104,   104,   104,
     104,    72,    72,   104,   104,    72,   104,    72,   104,   104,
     104,    72,    73,    73,   112,   112,   121,   122,   122,   122,
     121,    73,    73,    71,    71,    71,    71,   114,   114,    71,
      71,   114,    71,   114,    71,    71,    71,   114,    25,    71,
      74,    74,    74,    71,    72,    72,    72,    72,    73,    73,
      72,    72,    73,    72,    73,    72,    72,    72,    73,   112,
      74,   122,   122,   122,   112,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,    71,    71,    71,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,   112,   112,
     112
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
#line 206 "new_parser.y"
    { treeRoot = new Program((yyvsp[(1) - (2)]._usingDirectives), (yyvsp[(2) - (2)]._namespaceDeclSeq)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 213 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._enumDecl)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 214 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._classDecl)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 215 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceDecl)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 216 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._structDecl)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 217 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._enumDecl)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 218 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._classDecl)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 219 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceDecl)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 220 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._structDecl)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 223 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 224 "new_parser.y"
    { (yyval._namespaceMembers) = (yyvsp[(1) - (1)]._namespaceMembers); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 227 "new_parser.y"
    { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._namespaceMembers));  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 230 "new_parser.y"
    { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[(1) - (1)]._namespaceDecl)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 231 "new_parser.y"
    { (yyval._namespaceDeclSeq) -> Add((yyvsp[(2) - (2)]._namespaceDecl)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 235 "new_parser.y"
    { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 236 "new_parser.y"
    { (yyval._usingArg) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 239 "new_parser.y"
    { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[(2) - (3)]._usingArg)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 242 "new_parser.y"
    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[(1) - (1)]._usingDirective)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 243 "new_parser.y"
    { (yyval._usingDirectives) -> Add((yyvsp[(2) - (2)]._usingDirective)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 246 "new_parser.y"
    { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 247 "new_parser.y"
    { (yyval._usingDirectives) = (yyvsp[(1) - (1)]._usingDirectives); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 256 "new_parser.y"
    { (yyval._standardType) = StandardType::Char; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 257 "new_parser.y"
    { (yyval._standardType) = StandardType::Int; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 258 "new_parser.y"
    { (yyval._standardType) = StandardType::Bool; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 259 "new_parser.y"
    { (yyval._standardType) = StandardType::Float; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 260 "new_parser.y"
    { (yyval._standardType) = StandardType::String; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 263 "new_parser.y"
    { (yyval._standardArrayType) = new StandardArrayType{ (yyvsp[(1) - (3)]._standardType), 1 }; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 264 "new_parser.y"
    { (yyval._standardArrayType) -> Arity += 1; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 267 "new_parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._standardType)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 268 "new_parser.y"
    { (yyval._type) = new TypeNode(* (yyvsp[(1) - (1)]._standardArrayType)); delete (yyvsp[(1) - (1)]._standardArrayType); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 269 "new_parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 279 "new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (6)]._identifier), nullptr, (yyvsp[(5) - (6)]._classMembers)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 280 "new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), (yyvsp[(5) - (8)]._usingArg), (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 281 "new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), nullptr, (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 284 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 285 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 286 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 287 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 288 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._destructorDecl)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 289 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 290 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 291 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 292 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 293 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._destructorDecl)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 296 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 297 "new_parser.y"
    { (yyval._classMembers) = (yyvsp[(1) - (1)]._classMembers); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 306 "new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._structMembers)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 307 "new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._structMembers)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 311 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (2)]._fieldDecl)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 312 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 313 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 314 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._destructorDecl)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 315 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (3)]._fieldDecl)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 316 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 317 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 318 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._destructorDecl)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 322 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 323 "new_parser.y"
    { (yyval._structMembers) = (yyvsp[(1) - (1)]._structMembers); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 330 "new_parser.y"
    { (yyval._interfaceDecl) = new InterfaceDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._interfaceMembers)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 333 "new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode((yyvsp[(1) - (6)]._type), (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 334 "new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode(nullptr, (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 337 "new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); (yyval._interfaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceMember)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 338 "new_parser.y"
    { (yyval._interfaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceMember)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 341 "new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 342 "new_parser.y"
    { (yyval._interfaceMembers) = (yyvsp[(1) - (1)]._interfaceMembers); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 350 "new_parser.y"
    { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 351 "new_parser.y"
    { (yyval._enumerators) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 354 "new_parser.y"
    { Print("Found enum declaration with name:", (yyvsp[(3) - (6)]._identifier)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 364 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Public; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 365 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Protected; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 366 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Private; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 367 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Internal; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 368 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::ProtectedInternal; ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 376 "new_parser.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 377 "new_parser.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 379 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (2)]._type), (yyvsp[(2) - (2)]._identifier), nullptr); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 380 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (2)]._identifier), nullptr, true); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 382 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (4)]._type), (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 383 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr), true); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 392 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), (yyvsp[(2) - (9)]._type), (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 393 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), nullptr, (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 394 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 395 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(2) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 396 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (10)]._visibiltyModifier), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 397 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(2) - (10)]._visibiltyModifier), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 401 "new_parser.y"
    { (yyval._methodArguments) = new MethodArguments((yyvsp[(1) - (1)]._varDecl)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 402 "new_parser.y"
    { (yyval._methodArguments) -> Add((yyvsp[(3) - (3)]._varDecl)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 404 "new_parser.y"
    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 405 "new_parser.y"
    { (yyval._methodArguments) = (yyvsp[(1) - (1)]._methodArguments); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 407 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Plus,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 408 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Minus,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 409 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Multiply,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 410 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Divide,            (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 411 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Less,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 412 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Greater,           (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 413 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Equal,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 414 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::NotEqual,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 415 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::LessOrEqual,       (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 416 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::GreaterOrEqual,    (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 417 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Not,               (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 418 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Decrement,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 419 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Increment,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 420 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryMinus,        (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 421 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryPlus,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 431 "new_parser.y"
    { (yyval._constructorDecl) = new ConstructorDeclNode((yyvsp[(1) - (7)]._visibiltyModifier), (yyvsp[(2) - (7)]._identifier), MethodArguments::MakeEmpty(), (yyvsp[(6) - (7)]._stmtSeq)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 435 "new_parser.y"
    { (yyval._destructorDecl) = new DestructorDeclNode((yyvsp[(2) - (7)]._identifier), (yyvsp[(6) - (7)]._stmtSeq)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 443 "new_parser.y"
    { (yyval._stmt) = new StmtNode(); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 444 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._expr), /* isReturn= */ false); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 445 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 446 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 447 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._while)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 448 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._doWhile)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 449 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._for)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 450 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._if)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 451 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._foreach)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 452 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._stmtSeq)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 453 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._expr), /* isReturn= */ true); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 456 "new_parser.y"
    { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[(1) - (1)]._stmt)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 457 "new_parser.y"
    { (yyval._stmtSeq) -> Add((yyvsp[(2) - (2)]._stmt)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 459 "new_parser.y"
    { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 460 "new_parser.y"
    { (yyval._stmtSeq) = (yyvsp[(1) - (1)]._stmtSeq); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 463 "new_parser.y"
    { (yyval._while) = new WhileNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 465 "new_parser.y"
    { (yyval._doWhile) = new DoWhileNode((yyvsp[(5) - (7)]._expr), (yyvsp[(2) - (7)]._stmt)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 468 "new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 469 "new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 470 "new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._expr), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 473 "new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 474 "new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (7)]._expr), (yyvsp[(5) - (7)]._stmt), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 477 "new_parser.y"
    { (yyval._foreach) = new ForEachNode((yyvsp[(3) - (7)]._varDecl), (yyvsp[(5) - (7)]._expr), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 486 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromExpr((yyvsp[(2) - (3)]._expr)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 487 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[(1) - (4)]._accessExpr), (yyvsp[(3) - (4)]._expr)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 488 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[(1) - (3)]._accessExpr)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 489 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromInt((yyvsp[(1) - (1)]._integer)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 490 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromFloat((yyvsp[(1) - (1)]._floatingPoint)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 491 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromString((yyvsp[(1) - (1)]._string)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 492 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromChar((yyvsp[(1) - (1)]._character)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 493 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBool(true); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 494 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromBool(false); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 495 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromId((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 496 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromCall((yyvsp[(1) - (4)]._identifier), (yyvsp[(3) - (4)]._exprSeq)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 497 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[(1) - (3)]._accessExpr), (yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 498 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[(1) - (6)]._accessExpr), (yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 499 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromInterpolatedString((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 503 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 504 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 505 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 506 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 507 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 508 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 509 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 510 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 511 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 512 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 513 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 514 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 515 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 516 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 517 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 518 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 519 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 520 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 521 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 522 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 523 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 524 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 525 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNull(); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 526 "new_parser.y"
    { (yyval._expr) = ExprNode::FromAccessExpr((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 527 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (2)]._type)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 528 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._exprSeq)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 529 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 530 "new_parser.y"
    { (yyval._expr) = ExprNode::FromCast((yyvsp[(2) - (4)]._standardType), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 531 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._standardType), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 534 "new_parser.y"
    { (yyval._expr) = nullptr; ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 535 "new_parser.y"
    { (yyval._expr) = (yyvsp[(1) - (1)]._expr); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 538 "new_parser.y"
    { (yyval._exprSeq) = new ExprSeqNode((yyvsp[(1) - (1)]._expr)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 539 "new_parser.y"
    { (yyval._exprSeq) -> Add((yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 542 "new_parser.y"
    { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 543 "new_parser.y"
    { (yyval._exprSeq) = (yyvsp[(1) - (1)]._exprSeq); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 550 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromInterpolatedString((yyvsp[(2) - (3)]._exprSeq));;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 553 "new_parser.y"
    {(yyval._exprSeq) = ExprSeqNode::MakeEmpty();;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 554 "new_parser.y"
    {(yyval._exprSeq)->Add((yyvsp[(2) - (2)]._expr));;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 557 "new_parser.y"
    {(yyval._expr) = ExprNode::FromString((yyvsp[(1) - (1)]._string));;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 558 "new_parser.y"
    {(yyval._expr) = (yyvsp[(2) - (3)]._expr);;}
    break;



/* Line 1455 of yacc.c  */
#line 3337 "new_parser.tab.c"
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
#line 562 "new_parser.y"


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
