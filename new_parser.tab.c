
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
    struct TypeNode* _type;
    struct TypeNode* _type_name;
    
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
	
	struct StructMembersNode* structMembers;



/* Line 214 of yacc.c  */
#line 251 "new_parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 263 "new_parser.tab.c"

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
#define YYLAST   975

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  190
/* YYNRULES -- Number of states.  */
#define YYNSTATES  518

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
      71,    73,    75,    77,    79,    81,    85,    87,    91,    93,
      97,   104,   113,   122,   124,   126,   128,   130,   132,   135,
     138,   141,   144,   147,   148,   150,   157,   163,   165,   167,
     169,   171,   174,   177,   180,   183,   184,   186,   193,   200,
     207,   209,   212,   213,   215,   217,   221,   228,   230,   232,
     234,   236,   238,   242,   246,   249,   252,   257,   262,   272,
     282,   293,   304,   315,   326,   328,   332,   333,   335,   349,
     363,   377,   391,   405,   419,   433,   447,   461,   475,   487,
     499,   511,   523,   535,   543,   552,   560,   562,   565,   568,
     571,   573,   575,   577,   579,   581,   585,   589,   591,   594,
     595,   597,   603,   611,   621,   631,   641,   647,   655,   663,
     667,   671,   675,   679,   683,   687,   691,   695,   699,   703,
     707,   711,   715,   719,   723,   727,   731,   734,   737,   740,
     743,   746,   748,   750,   752,   754,   756,   758,   760,   764,
     769,   773,   775,   780,   787,   793,   799,   805,   812,   817,
     823,   824,   826,   828,   832,   833,   835,   839,   840,   843,
     845
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    -1,    86,    82,    -1,   102,    -1,    91,
      -1,    97,    -1,    94,    -1,    79,   102,    -1,    79,    91,
      -1,    79,    97,    -1,    79,    94,    -1,    -1,    79,    -1,
      47,    18,    72,    80,    73,    -1,    81,    -1,    82,    81,
      -1,    18,    -1,    83,    67,    18,    -1,    46,    83,    74,
      -1,    84,    -1,    85,    84,    -1,    -1,    85,    -1,    29,
      -1,    30,    -1,    32,    -1,    33,    -1,    31,    -1,    29,
      -1,    30,    -1,    32,    -1,    33,    -1,    31,    -1,    18,
      -1,    88,    67,    18,    -1,    88,    -1,    88,    69,    68,
      -1,    89,    -1,    90,    69,    68,    -1,    39,    43,    18,
      72,    93,    73,    -1,    39,    43,    18,    75,    83,    72,
      93,    73,    -1,    39,    43,    18,    75,    50,    72,    93,
      73,    -1,   107,    -1,   104,    -1,   110,    -1,   111,    -1,
     112,    -1,    92,   107,    -1,    92,   104,    -1,    92,   110,
      -1,    92,   111,    -1,    92,   112,    -1,    -1,    92,    -1,
      39,    44,    18,    72,    96,    73,    -1,    44,    18,    72,
      96,    73,    -1,   104,    -1,   107,    -1,   111,    -1,   112,
      -1,    95,   104,    -1,    95,   107,    -1,    95,   111,    -1,
      95,   112,    -1,    -1,    95,    -1,    39,    53,    18,    72,
     100,    73,    -1,    88,    18,    70,   109,    71,    74,    -1,
      34,    18,    70,   109,    71,    74,    -1,    98,    -1,    99,
      98,    -1,    -1,    99,    -1,    18,    -1,   101,    76,    18,
      -1,    39,    45,    18,    72,   101,    73,    -1,    39,    -1,
      40,    -1,    41,    -1,    55,    -1,    56,    -1,   103,   105,
      74,    -1,   103,   106,    74,    -1,    90,    18,    -1,    52,
      18,    -1,    90,    18,    57,   121,    -1,    52,    18,    57,
     121,    -1,   103,    90,    18,    70,   109,    71,    72,   115,
      73,    -1,   103,    34,    18,    70,   109,    71,    72,   115,
      73,    -1,   103,    42,    34,    18,    70,   109,    71,    72,
     115,    73,    -1,    42,   103,    34,    18,    70,   109,    71,
      72,   115,    73,    -1,   103,    42,    90,    18,    70,   109,
      71,    72,   115,    73,    -1,    42,   103,    90,    18,    70,
     109,    71,    72,   115,    73,    -1,   105,    -1,   108,    76,
     105,    -1,    -1,   108,    -1,   103,    42,    90,    51,    60,
      70,   105,    76,   105,    71,    72,   115,    73,    -1,   103,
      42,    90,    51,    61,    70,   105,    76,   105,    71,    72,
     115,    73,    -1,   103,    42,    90,    51,    62,    70,   105,
      76,   105,    71,    72,   115,    73,    -1,   103,    42,    90,
      51,    63,    70,   105,    76,   105,    71,    72,   115,    73,
      -1,   103,    42,    90,    51,    58,    70,   105,    76,   105,
      71,    72,   115,    73,    -1,   103,    42,    90,    51,    59,
      70,   105,    76,   105,    71,    72,   115,    73,    -1,   103,
      42,    90,    51,     6,    70,   105,    76,   105,    71,    72,
     115,    73,    -1,   103,    42,    90,    51,     7,    70,   105,
      76,   105,    71,    72,   115,    73,    -1,   103,    42,    90,
      51,     9,    70,   105,    76,   105,    71,    72,   115,    73,
      -1,   103,    42,    90,    51,     8,    70,   105,    76,   105,
      71,    72,   115,    73,    -1,   103,    42,    90,    51,    64,
      70,   105,    71,    72,   115,    73,    -1,   103,    42,    90,
      51,    17,    70,   105,    71,    72,   115,    73,    -1,   103,
      42,    90,    51,    16,    70,   105,    71,    72,   115,    73,
      -1,   103,    42,    90,    51,    61,    70,   105,    71,    72,
     115,    73,    -1,   103,    42,    90,    51,    60,    70,   105,
      71,    72,   115,    73,    -1,   103,    18,    70,    71,    72,
     115,    73,    -1,   103,    18,    70,   108,    71,    72,   115,
      73,    -1,    54,    18,    70,    71,    72,   115,    73,    -1,
      74,    -1,   121,    74,    -1,   105,    74,    -1,   106,    74,
      -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,   120,
      -1,    72,   115,    73,    -1,    23,   122,    74,    -1,   113,
      -1,   114,   113,    -1,    -1,   114,    -1,    26,    70,   121,
      71,   113,    -1,    27,   113,    26,    70,   121,    71,    74,
      -1,    28,    70,   105,    74,   122,    74,   122,    71,   113,
      -1,    28,    70,   106,    74,   122,    74,   122,    71,   113,
      -1,    28,    70,   122,    74,   122,    74,   122,    71,   113,
      -1,    24,    70,   121,    71,   113,    -1,    24,    70,   121,
      71,   113,    25,   113,    -1,    48,    70,   105,    49,   121,
      71,   113,    -1,   121,    60,   121,    -1,   121,    61,   121,
      -1,   121,    62,   121,    -1,   121,    63,   121,    -1,   121,
      57,   121,    -1,   121,    12,   121,    -1,   121,    13,   121,
      -1,   121,    14,   121,    -1,   121,    15,   121,    -1,   121,
      58,   121,    -1,   121,    59,   121,    -1,   121,     6,   121,
      -1,   121,     7,   121,    -1,   121,     9,   121,    -1,   121,
       8,   121,    -1,   121,    11,   121,    -1,   121,    10,   121,
      -1,    64,   121,    -1,    16,   121,    -1,    17,   121,    -1,
      60,   121,    -1,    61,   121,    -1,    36,    -1,    19,    -1,
      21,    -1,    22,    -1,    37,    -1,    38,    -1,   125,    -1,
      70,   121,    71,    -1,   121,    69,   121,    68,    -1,   121,
      67,    18,    -1,    18,    -1,    18,    70,   124,    71,    -1,
     121,    67,    18,    70,   124,    71,    -1,    35,    90,    70,
     124,    71,    -1,    35,    90,    69,   121,    68,    -1,    35,
      90,    72,   124,    73,    -1,    35,    69,    68,    72,   124,
      73,    -1,    70,    87,    71,   121,    -1,    35,    87,    69,
     121,    68,    -1,    -1,   121,    -1,   121,    -1,   123,    76,
     121,    -1,    -1,   123,    -1,     3,   126,     4,    -1,    -1,
     126,   127,    -1,     5,    -1,    72,   121,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   202,   202,   204,   210,   211,   212,   213,   214,   215,
     216,   217,   220,   221,   224,   227,   228,   231,   232,   235,
     238,   239,   242,   243,   250,   251,   252,   253,   254,   257,
     258,   259,   260,   261,   262,   263,   266,   267,   270,   271,
     277,   278,   279,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   294,   295,   302,   303,   306,   307,   308,
     309,   310,   311,   312,   313,   317,   318,   324,   327,   328,
     331,   332,   335,   336,   342,   343,   346,   352,   353,   354,
     355,   356,   362,   363,   366,   367,   370,   371,   377,   378,
     379,   380,   381,   382,   385,   386,   389,   390,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   416,   417,   420,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   439,   440,   443,
     444,   447,   450,   453,   454,   455,   458,   459,   462,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     511,   512,   515,   516,   519,   520,   526,   529,   530,   533,
     534
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
  "using_directives_optional", "standard_type_only", "type_name",
  "simple_type_name", "type", "class_decl", "class_members",
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
      88,    88,    88,    88,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   103,   103,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   117,   118,   118,   118,   119,   119,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     0,     1,     5,     1,     2,     1,     3,     3,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       6,     8,     8,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     0,     1,     6,     5,     1,     1,     1,
       1,     2,     2,     2,     2,     0,     1,     6,     6,     6,
       1,     2,     0,     1,     1,     3,     6,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     4,     4,     9,     9,
      10,    10,    10,    10,     1,     3,     0,     1,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    11,    11,
      11,    11,    11,     7,     8,     7,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     2,     0,
       1,     5,     7,     9,     9,     9,     5,     7,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     1,     4,     6,     5,     5,     5,     6,     4,     5,
       0,     1,     1,     3,     0,     1,     3,     0,     2,     1,
       3
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
       0,    65,    53,     0,    65,     0,    72,    77,    78,    79,
       0,     0,    80,    81,    66,     0,     0,    57,    58,    59,
      60,    54,     0,     0,    44,    43,    45,    46,    47,     0,
       0,     0,    74,     0,    34,    29,    30,    33,    31,    32,
       0,     0,    70,    73,     0,     0,     0,    61,    62,    63,
      64,    56,    34,     0,     0,     0,    36,    38,     0,     0,
       0,    49,    48,    50,    51,    52,    40,     0,    53,    53,
      55,    76,     0,     0,     0,     0,    71,    67,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    84,     0,    82,
      83,     0,     0,     0,    75,    96,    96,    35,     0,     0,
       0,     0,     0,     0,    94,     0,    96,     0,     0,     0,
      37,     0,    96,    39,     0,    42,    41,    97,     0,     0,
      96,    96,   129,    85,   129,    84,     0,     0,     0,    96,
      96,   187,     0,     0,   171,   162,   163,   164,     0,   161,
     165,   166,     0,     0,     0,     0,    87,   167,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,   180,     0,
       0,     0,     0,     0,   129,   116,     0,     0,     0,   127,
     130,     0,   120,   121,   122,   123,   124,     0,     0,   129,
      95,     0,     0,     0,     0,   157,   158,   184,    29,    30,
      33,    31,    32,     0,     0,     0,   159,   160,   156,    24,
      25,    28,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      68,     0,     0,   181,     0,     0,     0,     0,   180,     0,
       0,    84,   118,   119,   128,   115,   117,   113,     0,   129,
       0,     0,   186,   189,     0,   188,   182,   185,     0,     0,
       0,     0,   184,   184,     0,   168,   150,   151,   153,   152,
     155,   154,   144,   145,   146,   147,   143,   148,   149,   139,
     140,   141,   142,   170,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     129,   126,     0,     0,     0,     0,     0,     0,     0,   125,
     114,     0,   129,   129,     0,     0,   172,   184,     0,     0,
       0,     0,   178,   184,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   180,   180,   180,     0,
      89,     0,     0,   190,   183,     0,   179,   175,   174,   176,
       0,    88,     0,     0,     0,     0,   129,   129,     0,     0,
     129,     0,   129,     0,     0,     0,   129,    91,    93,   136,
     131,     0,     0,     0,     0,     0,    90,    92,   177,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,   180,   180,
       0,   129,   129,   129,   129,   110,   109,   129,   129,   112,
     129,   111,   129,   129,   129,   108,   137,   132,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   107,   106,   102,
     103,    98,    99,   100,   101,   133,   134,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    21,    22,    11,    12,     7,     3,     4,     5,
     244,    96,    97,   216,    23,    61,    62,    24,    54,    55,
      25,    82,    83,    84,    73,    26,    63,    64,   217,   218,
      65,   157,   158,    66,    67,    68,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   294,   317,   318,   187,   234,
     315
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -312
static const yytype_int16 yypact[] =
{
     -23,    -4,     5,  -312,    16,    31,  -312,   -66,  -312,  -312,
      73,  -312,    31,    83,  -312,    36,  -312,  -312,    -7,    92,
      98,    -7,    48,  -312,  -312,  -312,  -312,   108,   146,   153,
     154,    53,  -312,  -312,  -312,  -312,  -312,   120,   111,   121,
     124,    88,    88,    50,    88,   200,   344,  -312,  -312,  -312,
     340,   215,  -312,  -312,    88,   162,   155,  -312,  -312,  -312,
    -312,    88,   163,   283,  -312,  -312,  -312,  -312,  -312,   165,
      30,   166,  -312,   139,  -312,  -312,  -312,  -312,  -312,  -312,
     220,    18,  -312,   344,   167,   425,   171,  -312,  -312,  -312,
    -312,  -312,   172,   227,   624,   228,   134,  -312,    -2,   186,
     187,  -312,  -312,  -312,  -312,  -312,  -312,   624,    88,    88,
    -312,  -312,   244,   194,   198,   253,  -312,  -312,   255,    13,
     203,    17,   205,   284,    25,   246,   240,   -42,   241,  -312,
    -312,    12,   238,   245,  -312,   247,   247,  -312,   249,   256,
     251,   310,   257,    46,  -312,    27,   247,   264,   268,   542,
    -312,   542,   247,  -312,   911,  -312,  -312,   269,   273,   280,
     247,   247,   130,  -312,   130,  -312,   281,   247,   285,   247,
     247,  -312,   542,   542,   297,  -312,  -312,  -312,   -12,  -312,
    -312,  -312,   542,   542,   542,   480,   823,  -312,   823,   300,
     312,   313,   314,   328,   329,   330,   332,   334,   335,   336,
     337,   338,   353,   352,   354,   339,   356,     7,   542,   359,
     360,   130,   374,   375,   130,  -312,    55,   373,   376,  -312,
     130,   378,  -312,  -312,  -312,  -312,  -312,   379,   387,   130,
    -312,   282,   381,   390,    -1,   150,   150,   542,   380,   393,
     394,   402,   404,   409,   412,    40,   150,   150,   150,  -312,
    -312,  -312,  -312,  -312,   415,   607,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   471,   542,   419,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,  -312,
    -312,   432,   433,   823,   429,   542,   542,   482,    23,   247,
     441,   449,  -312,  -312,  -312,  -312,  -312,  -312,   447,   130,
     450,   455,  -312,  -312,   542,  -312,   823,   443,   457,   459,
     542,   530,   542,   542,   542,  -312,   689,   689,   689,   689,
     835,   899,   823,   823,   823,   823,   823,   689,   689,   107,
     107,   150,   150,   451,   733,   130,   461,   462,   463,   466,
     472,   483,   477,   479,    63,    79,   481,   486,   485,   130,
     130,  -312,   622,   637,   499,   496,   498,   500,   524,  -312,
    -312,   502,   130,   130,   407,   542,  -312,   542,   797,   810,
     505,   509,  -312,   542,  -312,   510,   247,   247,   247,   247,
     512,   513,   247,   247,   514,   247,   516,   247,   247,   247,
     517,   519,   520,   130,   130,   542,   542,   542,   542,   542,
    -312,   526,   528,  -312,   823,   534,  -312,  -312,  -312,  -312,
     537,  -312,   538,   539,   540,   552,   130,   130,   553,   554,
     130,   555,   130,   556,   567,   568,   130,  -312,  -312,   572,
    -312,   703,   566,   585,   586,   718,  -312,  -312,  -312,  -312,
     569,   589,   590,   591,   598,   599,   601,   603,   604,   614,
     615,   618,   620,   629,   630,   130,   613,   542,   542,   542,
     130,   130,   130,   130,   130,  -312,  -312,   130,   130,  -312,
     130,  -312,   130,   130,   130,  -312,  -312,  -312,   631,   634,
     636,  -312,   646,   647,   648,   649,   650,   661,   662,   663,
     664,   665,   130,   130,   130,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -312,  -312,   741,  -312,   711,   751,  -312,  -312,
     574,   -13,  -312,   -56,   736,  -312,   105,   746,  -312,   724,
     748,   688,  -312,  -312,  -312,   752,    45,   266,   -29,   -54,
     311,   667,   435,   721,   431,   446,  -198,  -312,    52,  -312,
    -312,  -312,  -312,  -312,    26,  -288,  -312,  -311,  -312,  -312,
    -312
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int16 yytable[] =
{
      98,    13,   100,   312,   313,     8,    74,    98,    14,   100,
     367,   380,   381,   297,     6,   151,   127,   238,   239,   240,
     241,   242,   304,     1,   -22,   -34,   171,    99,   152,   119,
     148,   139,    19,    81,    99,    74,   114,    20,   124,   172,
     173,   207,   175,   148,   176,   177,    75,    76,    77,    78,
      79,   131,    75,    76,    77,    78,    79,   243,   178,   179,
     180,   181,     1,   154,   165,   143,   415,   128,     6,   141,
      81,   314,   420,   301,   -34,    95,   -34,   237,    10,   143,
     143,   128,   128,   182,   183,   115,    56,   184,   142,    56,
     143,    15,   144,   185,   128,    85,   143,    13,   166,    56,
      69,    17,   109,   167,   143,   143,   144,   144,    18,   321,
     322,   143,   323,   143,   143,   128,    31,   144,   442,   443,
     444,    36,   245,   144,   128,    41,    37,    47,    48,    49,
      50,   144,   144,   171,   394,    27,    28,    29,   230,   395,
     144,   144,    51,    52,    53,    30,   172,   173,   207,   175,
     396,   176,   177,   208,   209,   397,   210,   211,   212,    75,
      76,    77,    78,    79,    38,   178,   179,   180,   181,   271,
     272,    39,    40,    92,   273,   186,   274,   188,   213,   488,
     489,   490,    95,    44,    75,    76,    77,    78,    79,    93,
     182,   183,    42,    45,   184,    43,    46,    94,   235,   236,
     185,   115,   214,   126,   215,   439,   440,    95,   246,   247,
     248,   255,   111,   132,   133,   112,   228,   273,    72,   274,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,    86,   293,    91,   106,   108,   113,   110,
     117,   120,   121,   143,   366,   122,   125,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     129,   130,   134,   316,   135,    74,   300,   486,   136,   365,
     368,   137,   491,   138,   140,   146,    75,    76,    77,    78,
      79,   308,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   141,
     344,    92,   147,   149,   515,   516,   517,    57,   150,   153,
      57,   155,    75,    76,    77,    78,    79,    93,   156,   160,
      87,   362,   363,   162,   293,   107,   161,   101,   163,   164,
     143,   143,   143,   143,   169,    95,   143,   143,   170,   143,
     374,   143,   143,   143,   203,   167,   378,   379,   316,   316,
     382,   204,    58,   229,   309,    58,   231,   422,   423,   424,
     425,   371,    74,   428,   429,    88,   431,   237,   433,   434,
     435,   275,   102,    75,    76,    77,    78,    79,    80,    47,
      48,    49,   276,   277,   278,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,    52,    53,   385,   279,   280,
     281,   414,   282,   316,   283,   284,   285,   286,   287,   316,
     291,   401,   402,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   288,   411,   412,   289,   292,   290,   295,
     296,   441,   293,   293,   293,   445,   266,   267,   268,   269,
     270,   271,   272,    74,   298,   299,   273,   302,   274,   -24,
     303,   305,   310,   306,    75,    76,    77,    78,    79,   118,
     307,   311,   -25,   -28,   266,   267,   268,   269,   270,   271,
     272,   -26,    59,   -27,   273,    59,   274,   319,   454,   455,
     413,   320,   458,   171,   460,    89,   324,    60,   464,   343,
      60,   345,   104,   293,   293,   293,   172,   173,   174,   175,
      90,   176,   177,   361,   359,   360,   151,   105,   364,   249,
     250,   251,   252,   253,   369,   178,   179,   180,   181,   375,
     370,   383,   372,   492,   493,   494,   495,   373,   376,   496,
     497,   377,   498,   171,   499,   500,   501,   386,   387,   388,
     182,   183,   389,   390,   184,   171,   172,   173,   174,   175,
     185,   176,   177,   392,   391,   393,   400,   398,   172,   173,
     174,   175,   399,   176,   177,   178,   179,   180,   181,   405,
     406,   159,   407,   409,   408,   410,   418,   178,   179,   180,
     181,   168,   419,   421,   426,   427,   430,   189,   432,   436,
     182,   183,   437,   438,   184,   205,   206,   465,   153,   446,
     185,   447,   182,   183,   232,   233,   184,   448,   449,   450,
     451,   452,   185,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   453,   456,   457,   459,   461,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   462,   463,
     467,   471,    74,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,    75,    76,    77,    78,    79,   123,   468,
     469,   472,   473,   474,   266,   267,   268,   269,   270,   271,
     272,   475,   476,   477,   273,   478,   274,   479,   325,   266,
     267,   268,   269,   270,   271,   272,   480,   487,   481,   273,
     482,   274,   483,   403,   266,   267,   268,   269,   270,   271,
     272,   484,   502,   485,   273,   503,   274,   504,   404,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   505,
     506,   507,   508,   509,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   510,   511,   512,   513,   514,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   269,
     270,   271,   272,    16,    70,     9,   273,    32,   274,   254,
     266,   267,   268,   269,   270,   271,   272,    33,    71,    34,
     273,   116,   274,    35,   466,   266,   267,   268,   269,   270,
     271,   272,   103,     0,     0,   273,     0,   274,   145,   470,
     266,   267,   268,   269,   270,   271,   272,     0,     0,     0,
     273,   384,   274,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,     0,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,     0,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
       0,   256,   257,   258,   259,     0,   261,     0,     0,     0,
       0,     0,     0,     0,   266,   267,   268,   269,   270,   271,
     272,     0,     0,     0,   273,   416,   274,   266,   267,   268,
     269,   270,   271,   272,     0,     0,     0,   273,   417,   274,
     266,   267,   268,   269,   270,   271,   272,     0,     0,     0,
     273,     0,   274,   267,   268,   269,   270,   271,   272,     0,
       0,     0,   273,     0,   274,   256,   257,   258,   259,     0,
       0,     0,     0,     0,     0,     0,     0,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,   194,   195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   268,   269,
     270,   271,   272,     0,     0,     0,   273,     0,   274,   196,
     197,   198,   199,   200,   201,   202
};

static const yytype_int16 yycheck[] =
{
      56,    67,    56,     4,     5,     0,    18,    63,    74,    63,
     298,   322,   323,   211,    18,    57,    18,    29,    30,    31,
      32,    33,   220,    46,    47,    18,     3,    56,    70,    85,
      18,    18,    39,    46,    63,    18,    18,    44,    94,    16,
      17,    18,    19,    18,    21,    22,    29,    30,    31,    32,
      33,   107,    29,    30,    31,    32,    33,    69,    35,    36,
      37,    38,    46,    51,    18,   121,   377,    69,    18,    52,
      83,    72,   383,    18,    67,    52,    69,    70,    47,   135,
     136,    69,    69,    60,    61,    67,    41,    64,    71,    44,
     146,    18,   121,    70,    69,    50,   152,    67,    71,    54,
      50,    18,    72,    76,   160,   161,   135,   136,    72,    69,
      70,   167,    72,   169,   170,    69,    18,   146,   406,   407,
     408,    73,   178,   152,    69,    72,    18,    39,    40,    41,
      42,   160,   161,     3,    71,    43,    44,    45,   167,    76,
     169,   170,    54,    55,    56,    53,    16,    17,    18,    19,
      71,    21,    22,    23,    24,    76,    26,    27,    28,    29,
      30,    31,    32,    33,    18,    35,    36,    37,    38,    62,
      63,    18,    18,    18,    67,   149,    69,   151,    48,   467,
     468,   469,    52,    72,    29,    30,    31,    32,    33,    34,
      60,    61,    72,    72,    64,    75,    72,    42,   172,   173,
      70,    67,    72,    69,    74,   403,   404,    52,   182,   183,
     184,   185,    73,   108,   109,    76,   164,    67,    18,    69,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,    18,   208,    73,    73,    72,    18,    73,
      73,    70,    70,   299,   298,    18,    18,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
      74,    74,    18,   237,    70,    18,   214,   465,    70,   298,
     299,    18,   470,    18,    71,    70,    29,    30,    31,    32,
      33,   229,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    52,
     274,    18,    18,    57,   502,   503,   504,    41,    68,    68,
      44,    73,    29,    30,    31,    32,    33,    34,    73,    70,
      54,   295,   296,    72,   298,    42,    70,    61,    18,    72,
     386,   387,   388,   389,    70,    52,   392,   393,    70,   395,
     314,   397,   398,   399,    71,    76,   320,   321,   322,   323,
     324,    71,    41,    72,    72,    44,    71,   386,   387,   388,
     389,   309,    18,   392,   393,    54,   395,    70,   397,   398,
     399,    71,    61,    29,    30,    31,    32,    33,    34,    39,
      40,    41,    70,    70,    70,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    55,    56,   345,    70,    70,
      70,   375,    70,   377,    70,    70,    70,    70,    70,   383,
      71,   359,   360,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    70,   372,   373,    74,    71,    74,    70,
      70,   405,   406,   407,   408,   409,    57,    58,    59,    60,
      61,    62,    63,    18,    70,    70,    67,    74,    69,    69,
      74,    73,    71,    74,    29,    30,    31,    32,    33,    34,
      73,    71,    69,    69,    57,    58,    59,    60,    61,    62,
      63,    69,    41,    69,    67,    44,    69,    68,   426,   427,
      73,    69,   430,     3,   432,    54,    71,    41,   436,    18,
      44,    72,    61,   467,   468,   469,    16,    17,    18,    19,
      54,    21,    22,    74,    72,    72,    57,    61,    26,    29,
      30,    31,    32,    33,    73,    35,    36,    37,    38,    76,
      73,    70,    72,   471,   472,   473,   474,    72,    71,   477,
     478,    72,   480,     3,   482,   483,   484,    76,    76,    76,
      60,    61,    76,    71,    64,     3,    16,    17,    18,    19,
      70,    21,    22,    76,    71,    76,    71,    76,    16,    17,
      18,    19,    76,    21,    22,    35,    36,    37,    38,    70,
      74,   136,    74,    49,    74,    73,    71,    35,    36,    37,
      38,   146,    73,    73,    72,    72,    72,   152,    72,    72,
      60,    61,    73,    73,    64,   160,   161,    25,    68,    73,
      70,    73,    60,    61,   169,   170,    64,    73,    71,    71,
      71,    71,    70,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    71,    71,    71,    71,    71,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    71,    71,
      74,    72,    18,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    29,    30,    31,    32,    33,    34,    74,
      74,    72,    72,    72,    57,    58,    59,    60,    61,    62,
      63,    73,    73,    72,    67,    72,    69,    73,    71,    57,
      58,    59,    60,    61,    62,    63,    72,    74,    73,    67,
      72,    69,    72,    71,    57,    58,    59,    60,    61,    62,
      63,    72,    71,    73,    67,    71,    69,    71,    71,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    73,
      73,    73,    73,    73,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    73,    73,    73,    73,    73,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    60,
      61,    62,    63,    12,    43,     4,    67,    21,    69,   185,
      57,    58,    59,    60,    61,    62,    63,    21,    44,    21,
      67,    83,    69,    21,    71,    57,    58,    59,    60,    61,
      62,    63,    61,    -1,    -1,    67,    -1,    69,   121,    71,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    67,    68,    69,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    -1,    69,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    -1,    69,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    -1,    69,    58,
      59,    60,    61,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    78,    84,    85,    86,    18,    83,     0,    84,
      47,    81,    82,    67,    74,    18,    81,    18,    72,    39,
      44,    79,    80,    91,    94,    97,   102,    43,    44,    45,
      53,    18,    91,    94,    97,   102,    73,    18,    18,    18,
      18,    72,    72,    75,    72,    72,    72,    39,    40,    41,
      42,    54,    55,    56,    95,    96,   103,   104,   107,   111,
     112,    92,    93,   103,   104,   107,   110,   111,   112,    50,
      83,    96,    18,   101,    18,    29,    30,    31,    32,    33,
      34,    88,    98,    99,   100,   103,    18,   104,   107,   111,
     112,    73,    18,    34,    42,    52,    88,    89,    90,   105,
     106,   104,   107,   110,   111,   112,    73,    42,    72,    72,
      73,    73,    76,    18,    18,    67,    98,    73,    34,    90,
      70,    70,    18,    34,    90,    18,    69,    18,    69,    74,
      74,    90,    93,    93,    18,    70,    70,    18,    18,    18,
      71,    52,    71,    90,   105,   108,    70,    18,    18,    57,
      68,    57,    70,    68,    51,    73,    73,   108,   109,   109,
      70,    70,    72,    18,    72,    18,    71,    76,   109,    70,
      70,     3,    16,    17,    18,    19,    21,    22,    35,    36,
      37,    38,    60,    61,    64,    70,   121,   125,   121,   109,
       6,     7,     8,     9,    16,    17,    58,    59,    60,    61,
      62,    63,    64,    71,    71,   109,   109,    18,    23,    24,
      26,    27,    28,    48,    72,    74,    90,   105,   106,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   115,    72,
     105,    71,   109,   109,   126,   121,   121,    70,    29,    30,
      31,    32,    33,    69,    87,    90,   121,   121,   121,    29,
      30,    31,    32,    33,    87,   121,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    57,    58,    59,    60,
      61,    62,    63,    67,    69,    71,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    74,
      74,    71,    71,   121,   122,    70,    70,   113,    70,    70,
     115,    18,    74,    74,   113,    73,    74,    73,   115,    72,
      71,    71,     4,     5,    72,   127,   121,   123,   124,    68,
      69,    69,    70,    72,    71,    71,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,    18,   121,    72,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,    72,
      72,    74,   121,   121,    26,   105,   106,   122,   105,    73,
      73,   115,    72,    72,   121,    76,    71,    72,   121,   121,
     124,   124,   121,    70,    68,   115,    76,    76,    76,    76,
      71,    71,    76,    76,    71,    76,    71,    76,    76,    76,
      71,   115,   115,    71,    71,    70,    74,    74,    74,    49,
      73,   115,   115,    73,   121,   124,    68,    68,    71,    73,
     124,    73,   105,   105,   105,   105,    72,    72,   105,   105,
      72,   105,    72,   105,   105,   105,    72,    73,    73,   113,
     113,   121,   122,   122,   122,   121,    73,    73,    73,    71,
      71,    71,    71,    71,   115,   115,    71,    71,   115,    71,
     115,    71,    71,    71,   115,    25,    71,    74,    74,    74,
      71,    72,    72,    72,    72,    73,    73,    72,    72,    73,
      72,    73,    72,    72,    72,    73,   113,    74,   122,   122,
     122,   113,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,    71,    71,    71,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,   113,   113,   113
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
#line 204 "new_parser.y"
    { treeRoot = new Program((yyvsp[(1) - (2)]._usingDirectives), (yyvsp[(2) - (2)]._namespaceDeclSeq)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 210 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._enumDecl)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 211 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._classDecl)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 212 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceDecl)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 213 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._structDecl)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 214 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._enumDecl)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 215 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._classDecl)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 216 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceDecl)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 217 "new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._structDecl)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 220 "new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 221 "new_parser.y"
    { (yyval._namespaceMembers) = (yyvsp[(1) - (1)]._namespaceMembers); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 224 "new_parser.y"
    { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._namespaceMembers));  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 227 "new_parser.y"
    { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[(1) - (1)]._namespaceDecl)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 228 "new_parser.y"
    { (yyval._namespaceDeclSeq) -> Add((yyvsp[(2) - (2)]._namespaceDecl)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 231 "new_parser.y"
    { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 232 "new_parser.y"
    { (yyval._usingArg) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 235 "new_parser.y"
    { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[(2) - (3)]._usingArg)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 238 "new_parser.y"
    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[(1) - (1)]._usingDirective)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 239 "new_parser.y"
    { (yyval._usingDirectives) -> Add((yyvsp[(2) - (2)]._usingDirective)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 242 "new_parser.y"
    { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 243 "new_parser.y"
    { (yyval._usingDirectives) = (yyvsp[(1) - (1)]._usingDirectives); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 250 "new_parser.y"
    { (yyval._standardType) = StandardType::Char; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 251 "new_parser.y"
    { (yyval._standardType) = StandardType::Int; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 252 "new_parser.y"
    { (yyval._standardType) = StandardType::Bool; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 253 "new_parser.y"
    { (yyval._standardType) = StandardType::Float; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 254 "new_parser.y"
    { (yyval._standardType) = StandardType::String; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 257 "new_parser.y"
    { (yyval._type_name) = new TypeNode(StandardType::Char); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 258 "new_parser.y"
    { (yyval._type_name) = new TypeNode(StandardType::Int); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 259 "new_parser.y"
    { (yyval._type_name) = new TypeNode(StandardType::Bool); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 260 "new_parser.y"
    { (yyval._type_name) = new TypeNode(StandardType::Float); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 261 "new_parser.y"
    { (yyval._type_name) = new TypeNode(StandardType::String); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 262 "new_parser.y"
    { (yyval._type_name) = new TypeNode(AccessExpr::FromId((yyvsp[(1) - (1)]._identifier))); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 263 "new_parser.y"
    { (yyval._type_name) = new TypeNode(AccessExpr::FromDot((yyvsp[(1) - (3)]._type_name)->GetAccessExpr(), (yyvsp[(3) - (3)]._identifier))); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 267 "new_parser.y"
    { (yyval._type_name) = new TypeNode((yyvsp[(1) - (3)]._type_name), 1); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 271 "new_parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (3)]._type), (yyvsp[(1) - (3)]._type)->GetArrayArity() + 1); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 277 "new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (6)]._identifier), nullptr, (yyvsp[(5) - (6)]._classMembers)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 278 "new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), (yyvsp[(5) - (8)]._usingArg), (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 279 "new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), nullptr, (yyvsp[(7) - (8)]._classMembers)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 282 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 283 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 284 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 285 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 286 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[(1) - (1)]._destructorDecl)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 287 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 288 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 289 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 290 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 291 "new_parser.y"
    { (yyval._classMembers) -> Add((yyvsp[(2) - (2)]._destructorDecl)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 294 "new_parser.y"
    { (yyval._classMembers) = new ClassMembersNode(); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 295 "new_parser.y"
    { (yyval._classMembers) = (yyvsp[(1) - (1)]._classMembers); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 302 "new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._structMembers)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 303 "new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._structMembers)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 306 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 307 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 308 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 309 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[(1) - (1)]._destructorDecl)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 310 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 311 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 312 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 313 "new_parser.y"
    { (yyval._structMembers)->Add((yyvsp[(2) - (2)]._destructorDecl)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 317 "new_parser.y"
    { (yyval._structMembers) = new StructMembersNode(); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 318 "new_parser.y"
    { (yyval._structMembers) = (yyvsp[(1) - (1)]._structMembers); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 324 "new_parser.y"
    { (yyval._interfaceDecl) = new InterfaceDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._interfaceMembers)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 327 "new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode((yyvsp[(1) - (6)]._type_name), (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 328 "new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode(nullptr, (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 331 "new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); (yyval._interfaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceMember)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 332 "new_parser.y"
    { (yyval._interfaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceMember)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 335 "new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 336 "new_parser.y"
    { (yyval._interfaceMembers) = (yyvsp[(1) - (1)]._interfaceMembers); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 342 "new_parser.y"
    { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 343 "new_parser.y"
    { (yyval._enumerators) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 346 "new_parser.y"
    { Print("Found enum declaration with name:", (yyvsp[(3) - (6)]._identifier)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 352 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Public; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 353 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Protected; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 354 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Private; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 355 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::Internal; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 356 "new_parser.y"
    { (yyval._visibiltyModifier) = VisibilityModifier::ProtectedInternal; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 362 "new_parser.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 363 "new_parser.y"
    { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[(1) - (3)]._visibiltyModifier), (yyvsp[(2) - (3)]._varDecl)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 366 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (2)]._type), (yyvsp[(2) - (2)]._identifier), nullptr); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 367 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (2)]._identifier), nullptr, true); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 370 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (4)]._type), (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 371 "new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr), true); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 377 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), (yyvsp[(2) - (9)]._type), (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 378 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (9)]._visibiltyModifier), nullptr, (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 379 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 380 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(2) - (10)]._visibiltyModifier), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 381 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (10)]._visibiltyModifier), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 382 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(2) - (10)]._visibiltyModifier), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 385 "new_parser.y"
    { (yyval._methodArguments) = new MethodArguments((yyvsp[(1) - (1)]._varDecl)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 386 "new_parser.y"
    { (yyval._methodArguments) -> Add((yyvsp[(3) - (3)]._varDecl)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 389 "new_parser.y"
    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 390 "new_parser.y"
    { (yyval._methodArguments) = (yyvsp[(1) - (1)]._methodArguments); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 395 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Plus, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 396 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Minus, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 397 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Multiply, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 398 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Divide, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 399 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Less, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 400 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Greater, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 401 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::Equal, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 402 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::NotEqual, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 403 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::LessOrEqual, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 404 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (13)]._visibiltyModifier), (yyvsp[(3) - (13)]._type), OperatorType::GreaterOrEqual, (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 405 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Not, (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 406 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Decrement, (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 407 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::Increment, (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 408 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryMinus, (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 409 "new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[(1) - (11)]._visibiltyModifier), (yyvsp[(3) - (11)]._type), OperatorType::UnaryPlus, (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 416 "new_parser.y"
    { (yyval._constructorDecl) = new ConstructorDeclNode((yyvsp[(1) - (7)]._visibiltyModifier), (yyvsp[(2) - (7)]._identifier), MethodArguments::MakeEmpty(), (yyvsp[(6) - (7)]._stmtSeq)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 417 "new_parser.y"
    { (yyval._constructorDecl) = new ConstructorDeclNode((yyvsp[(1) - (8)]._visibiltyModifier), (yyvsp[(2) - (8)]._identifier), (yyvsp[(4) - (8)]._methodArguments), (yyvsp[(7) - (8)]._stmtSeq)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 420 "new_parser.y"
    { (yyval._destructorDecl) = new DestructorDeclNode((yyvsp[(2) - (7)]._identifier), (yyvsp[(6) - (7)]._stmtSeq)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 426 "new_parser.y"
    { (yyval._stmt) = new StmtNode(); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 427 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._expr), /* isReturn= */ false); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 428 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 429 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 430 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._while)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 431 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._doWhile)); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 432 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._for)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 433 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._if)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 434 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._foreach)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 435 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._stmtSeq)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 436 "new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._expr), /* isReturn= */ true); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 439 "new_parser.y"
    { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[(1) - (1)]._stmt)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 440 "new_parser.y"
    { (yyval._stmtSeq) -> Add((yyvsp[(2) - (2)]._stmt)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 443 "new_parser.y"
    { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 444 "new_parser.y"
    { (yyval._stmtSeq) = (yyvsp[(1) - (1)]._stmtSeq); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 447 "new_parser.y"
    { (yyval._while) = new WhileNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 450 "new_parser.y"
    { (yyval._doWhile) = new DoWhileNode((yyvsp[(5) - (7)]._expr), (yyvsp[(2) - (7)]._stmt)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 453 "new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 454 "new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 455 "new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._expr), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 458 "new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 459 "new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (7)]._expr), (yyvsp[(5) - (7)]._stmt), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 462 "new_parser.y"
    { (yyval._foreach) = new ForEachNode((yyvsp[(3) - (7)]._varDecl), (yyvsp[(5) - (7)]._expr), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 468 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 469 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 470 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 471 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 472 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 473 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 474 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 475 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 476 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 477 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 478 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 479 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 480 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 481 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 482 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 483 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 484 "new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 485 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 486 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 487 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 488 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 489 "new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 490 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNull(); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 491 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromInt((yyvsp[(1) - (1)]._integer)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 492 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromString((yyvsp[(1) - (1)]._string)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 493 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromChar((yyvsp[(1) - (1)]._character)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 494 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromBool(true); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 495 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromBool(false); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 496 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromInterpolatedString((yyvsp[(1) - (1)]._accessExpr)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 497 "new_parser.y"
    { (yyval._expr) = (yyvsp[(2) - (3)]._expr); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 498 "new_parser.y"
    { (yyval._expr) = ExprNode::FromIndexAccess((yyvsp[(1) - (4)]._expr), (yyvsp[(3) - (4)]._expr)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 499 "new_parser.y"
    { (yyval._expr) = ExprNode::FromMemberAccess((yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 500 "new_parser.y"
    { (yyval._expr) = AccessExpr::FromId((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 501 "new_parser.y"
    { (yyval._expr) = ExprNode::FromMethodCall((yyvsp[(1) - (4)]._identifier), (yyvsp[(3) - (4)]._exprSeq)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 502 "new_parser.y"
    { (yyval._expr) = ExprNode::FromMemberMethodCall((yyvsp[(1) - (6)]._expr), (yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 503 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 504 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 505 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._exprSeq)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 506 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 507 "new_parser.y"
    { (yyval._expr) = ExprNode::FromCast((yyvsp[(2) - (4)]._standardType), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 508 "new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._standardType), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 511 "new_parser.y"
    { (yyval._expr) = nullptr; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 512 "new_parser.y"
    { (yyval._expr) = (yyvsp[(1) - (1)]._expr); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 515 "new_parser.y"
    { (yyval._exprSeq) = new ExprSeqNode((yyvsp[(1) - (1)]._expr)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 516 "new_parser.y"
    { (yyval._exprSeq) -> Add((yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 519 "new_parser.y"
    { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 520 "new_parser.y"
    { (yyval._exprSeq) = (yyvsp[(1) - (1)]._exprSeq); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 526 "new_parser.y"
    { (yyval._accessExpr) = AccessExpr::FromInterpolatedString((yyvsp[(2) - (3)]._exprSeq));;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 529 "new_parser.y"
    {(yyval._exprSeq) = ExprSeqNode::MakeEmpty();;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 530 "new_parser.y"
    {(yyval._exprSeq)->Add((yyvsp[(2) - (2)]._expr));;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 533 "new_parser.y"
    {(yyval._expr) = ExprNode::FromString((yyvsp[(1) - (1)]._string));;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 534 "new_parser.y"
    {(yyval._expr) = (yyvsp[(2) - (3)]._expr);;}
    break;



/* Line 1455 of yacc.c  */
#line 3297 "new_parser.tab.c"
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
#line 537 "new_parser.y"


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
