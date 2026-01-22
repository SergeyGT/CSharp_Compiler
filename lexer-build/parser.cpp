
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
#include <cstring>

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

void yyerror(const char *s);

template <char Separator = ' ', typename... Args>
void Print(Args&&... args) {
    ((std::cout << args << Separator), ...);
    std::cout << std::endl;
}

extern int yylineno;
int yylex();
int yyparse();
extern FILE* yyin;
struct Program* treeRoot = nullptr;


/* Line 189 of yacc.c  */
#line 113 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"

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
#line 40 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"

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
#line 257 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 269 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"

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
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNRULES -- Number of states.  */
#define YYNSTATES  499

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
     138,   145,   154,   156,   158,   160,   162,   164,   167,   170,
     173,   176,   179,   180,   182,   189,   195,   197,   199,   201,
     204,   207,   210,   211,   213,   220,   227,   234,   236,   239,
     240,   242,   244,   248,   255,   257,   259,   261,   263,   265,
     269,   273,   276,   279,   284,   289,   299,   309,   320,   331,
     342,   353,   355,   359,   360,   362,   376,   390,   404,   418,
     432,   446,   460,   474,   488,   502,   514,   526,   538,   550,
     562,   570,   579,   587,   589,   592,   595,   598,   600,   602,
     604,   606,   608,   612,   616,   618,   621,   622,   624,   630,
     638,   648,   658,   668,   674,   682,   690,   694,   698,   702,
     706,   710,   714,   718,   722,   726,   730,   734,   738,   742,
     746,   750,   754,   758,   761,   764,   767,   770,   773,   775,
     778,   784,   791,   796,   802,   803,   805,   807,   811,   812,
     814,   818,   819,   822,   824
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
      18,    71,    92,    72,    -1,    38,    42,    18,    74,    18,
      71,    92,    72,    -1,   106,    -1,   103,    -1,   109,    -1,
     110,    -1,   111,    -1,    91,   106,    -1,    91,   103,    -1,
      91,   109,    -1,    91,   110,    -1,    91,   111,    -1,    -1,
      91,    -1,    38,    43,    18,    71,    95,    72,    -1,    43,
      18,    71,    95,    72,    -1,   103,    -1,   106,    -1,   110,
      -1,    94,   103,    -1,    94,   106,    -1,    94,   110,    -1,
      -1,    94,    -1,    38,    52,    18,    71,    99,    72,    -1,
      89,    18,    69,   108,    70,    73,    -1,    33,    18,    69,
     108,    70,    73,    -1,    97,    -1,    98,    97,    -1,    -1,
      98,    -1,    18,    -1,   100,    75,    18,    -1,    38,    44,
      18,    71,   100,    72,    -1,    38,    -1,    39,    -1,    40,
      -1,    54,    -1,    55,    -1,   102,   104,    73,    -1,   102,
     105,    73,    -1,    89,    18,    -1,    51,    18,    -1,    89,
      18,    56,   120,    -1,    51,    18,    56,   120,    -1,   102,
      89,    18,    69,   108,    70,    71,   114,    72,    -1,   102,
      33,    18,    69,   108,    70,    71,   114,    72,    -1,   102,
      41,    33,    18,    69,   108,    70,    71,   114,    72,    -1,
      41,   102,    33,    18,    69,   108,    70,    71,   114,    72,
      -1,   102,    41,    89,    18,    69,   108,    70,    71,   114,
      72,    -1,    41,   102,    89,    18,    69,   108,    70,    71,
     114,    72,    -1,   104,    -1,   107,    75,   104,    -1,    -1,
     107,    -1,   102,    41,    89,    50,    59,    69,   104,    75,
     104,    70,    71,   114,    72,    -1,   102,    41,    89,    50,
      60,    69,   104,    75,   104,    70,    71,   114,    72,    -1,
     102,    41,    89,    50,    61,    69,   104,    75,   104,    70,
      71,   114,    72,    -1,   102,    41,    89,    50,    62,    69,
     104,    75,   104,    70,    71,   114,    72,    -1,   102,    41,
      89,    50,    57,    69,   104,    75,   104,    70,    71,   114,
      72,    -1,   102,    41,    89,    50,    58,    69,   104,    75,
     104,    70,    71,   114,    72,    -1,   102,    41,    89,    50,
       6,    69,   104,    75,   104,    70,    71,   114,    72,    -1,
     102,    41,    89,    50,     7,    69,   104,    75,   104,    70,
      71,   114,    72,    -1,   102,    41,    89,    50,     9,    69,
     104,    75,   104,    70,    71,   114,    72,    -1,   102,    41,
      89,    50,     8,    69,   104,    75,   104,    70,    71,   114,
      72,    -1,   102,    41,    89,    50,    63,    69,   104,    70,
      71,   114,    72,    -1,   102,    41,    89,    50,    17,    69,
     104,    70,    71,   114,    72,    -1,   102,    41,    89,    50,
      16,    69,   104,    70,    71,   114,    72,    -1,   102,    41,
      89,    50,    60,    69,   104,    70,    71,   114,    72,    -1,
     102,    41,    89,    50,    59,    69,   104,    70,    71,   114,
      72,    -1,   102,    18,    69,    70,    71,   114,    72,    -1,
     102,    18,    69,   107,    70,    71,   114,    72,    -1,    53,
      18,    69,    70,    71,   114,    72,    -1,    73,    -1,   120,
      73,    -1,   104,    73,    -1,   105,    73,    -1,   115,    -1,
     116,    -1,   117,    -1,   118,    -1,   119,    -1,    71,   114,
      72,    -1,    22,   121,    73,    -1,   112,    -1,   113,   112,
      -1,    -1,   113,    -1,    25,    69,   120,    70,   112,    -1,
      26,   112,    25,    69,   120,    70,    73,    -1,    27,    69,
     104,    73,   121,    73,   121,    70,   112,    -1,    27,    69,
     105,    73,   121,    73,   121,    70,   112,    -1,    27,    69,
     121,    73,   121,    73,   121,    70,   112,    -1,    23,    69,
     120,    70,   112,    -1,    23,    69,   120,    70,   112,    24,
     112,    -1,    47,    69,   104,    48,   120,    70,   112,    -1,
     120,    59,   120,    -1,   120,    60,   120,    -1,   120,    61,
     120,    -1,   120,    62,   120,    -1,   120,    56,   120,    -1,
     120,    12,   120,    -1,   120,    13,   120,    -1,   120,    14,
     120,    -1,   120,    15,   120,    -1,   120,    57,   120,    -1,
     120,    58,   120,    -1,   120,     6,   120,    -1,   120,     7,
     120,    -1,   120,     9,   120,    -1,   120,     8,   120,    -1,
     120,    11,   120,    -1,   120,    10,   120,    -1,    63,   120,
      -1,    16,   120,    -1,    17,   120,    -1,    59,   120,    -1,
      60,   120,    -1,    88,    -1,    34,    89,    -1,    34,    89,
      71,   123,    72,    -1,    34,    68,    67,    71,   123,    72,
      -1,    69,    86,    70,   120,    -1,    34,    86,    68,   120,
      67,    -1,    -1,   120,    -1,   120,    -1,   122,    75,   120,
      -1,    -1,   122,    -1,     3,   125,     4,    -1,    -1,   125,
     126,    -1,     5,    -1,    71,   120,    72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   208,   208,   210,   216,   217,   218,   219,   220,   221,
     222,   223,   226,   227,   230,   233,   234,   237,   238,   241,
     244,   245,   248,   249,   256,   257,   258,   259,   260,   263,
     264,   267,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   290,   291,   292,
     299,   300,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   317,   318,   326,   327,   330,   331,   332,   333,
     334,   335,   339,   340,   346,   349,   350,   353,   354,   357,
     358,   365,   366,   369,   376,   377,   378,   379,   380,   386,
     389,   393,   394,   396,   397,   404,   405,   406,   407,   408,
     409,   412,   413,   415,   416,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     441,   444,   449,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   471,   472,   474,   475,   478,   480,
     483,   484,   485,   488,   489,   492,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   529,   530,   533,   534,   537,   538,
     545,   548,   549,   552,   553
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
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   115,   116,
     117,   117,   117,   118,   118,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   125,   125,   126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     0,     1,     5,     1,     2,     1,     3,     3,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     4,     6,     4,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     8,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     0,     1,     6,     5,     1,     1,     1,     2,
       2,     2,     0,     1,     6,     6,     6,     1,     2,     0,
       1,     1,     3,     6,     1,     1,     1,     1,     1,     3,
       3,     2,     2,     4,     4,     9,     9,    10,    10,    10,
      10,     1,     3,     0,     1,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    11,    11,    11,    11,    11,
       7,     8,     7,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     0,     1,     5,     7,
       9,     9,     9,     5,     7,     7,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     2,
       5,     6,     4,     5,     0,     1,     1,     3,     0,     1,
       3,     0,     2,     1,     3
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
       0,    72,    62,     0,    72,     0,    79,    84,    85,    86,
       0,    87,    88,    73,     0,     0,    66,    67,    68,     0,
      63,     0,     0,    53,    52,    54,    55,    56,     0,     0,
      81,     0,   181,    31,    41,    42,    43,    24,    25,    28,
      26,    27,     0,    40,    44,    45,     0,    47,    48,    49,
       0,    77,    80,     0,    46,     0,    69,    70,    71,    65,
      31,     0,     0,     0,     0,     0,     0,     0,    58,    57,
      59,    60,    61,    50,     0,    62,    64,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,    78,    74,     0,     0,
       0,     0,     0,     0,    92,    91,    89,    90,     0,     0,
       0,    82,   180,   183,     0,   182,    38,   176,     0,   103,
     164,   165,     0,    47,   169,   166,   167,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    29,    30,    32,
      33,     0,   103,     0,     0,     0,    38,   168,     0,   101,
       0,   103,     0,     0,     0,     0,   103,     0,     0,    51,
       0,    36,     0,   104,     0,     0,     0,   178,     0,   157,
     158,   160,   159,   162,   161,   151,   152,   153,   154,   150,
     155,   156,   146,   147,   148,   149,     0,    34,     0,   103,
     103,    92,   136,    91,     0,     0,     0,   103,   103,    94,
      93,     0,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   177,     0,   178,
       0,   179,     0,   172,    37,     0,     0,     0,     0,   174,
       0,     0,     0,     0,     0,   136,   123,     0,     0,     0,
     134,   137,     0,   127,   128,   129,   130,   131,     0,   136,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,   173,   170,    35,    75,     0,     0,   175,     0,     0,
       0,     0,   174,     0,     0,    91,   125,   126,   135,   120,
     124,     0,   136,     0,     0,   136,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   136,   136,   133,     0,     0,     0,     0,     0,     0,
       0,   132,   121,     0,   136,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,   174,   174,
       0,    96,     0,     0,    95,     0,     0,     0,     0,   136,
     136,     0,     0,   136,     0,   136,     0,     0,     0,   136,
      98,   100,   143,   138,     0,     0,     0,     0,     0,    97,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,   174,
     174,     0,   136,   136,   136,   136,   117,   116,   136,   136,
     119,   136,   118,   136,   136,   136,   115,   144,   139,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   112,   114,   113,
     109,   110,   105,   106,   107,   108,   140,   141,   142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    21,    22,    11,    12,     7,     3,     4,     5,
      87,    88,   129,   287,    23,    60,    61,    24,    53,    54,
      25,    91,    92,    93,    71,    26,    55,    56,   288,   289,
      57,   213,   214,    65,    58,    67,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   328,   158,   272,    94,   119,
     155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -329
static const yytype_int16 yypact[] =
{
       2,    11,    35,  -329,    18,    30,  -329,   -53,  -329,  -329,
      78,  -329,    30,    81,  -329,    53,  -329,  -329,    -7,    22,
     100,    -7,    56,  -329,  -329,  -329,  -329,   118,   126,   127,
     131,    90,  -329,  -329,  -329,  -329,  -329,   -33,    91,    92,
      96,    93,     4,   151,    93,   154,   947,  -329,  -329,  -329,
      72,  -329,  -329,    93,   107,   855,  -329,  -329,  -329,   162,
       4,   111,   890,  -329,  -329,  -329,  -329,  -329,   113,   114,
    -329,    17,  -329,   119,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,   169,  -329,  -329,  -329,   991,   121,   129,    69,
     172,  -329,   947,   123,  -329,  1002,  -329,  -329,  -329,  -329,
     142,   180,  1037,   182,   194,   148,   149,   146,  -329,  -329,
    -329,  -329,  -329,  -329,  1037,     4,  -329,  -329,   205,    13,
     214,   155,   991,   991,   356,   991,   991,   991,   809,    69,
    1069,   158,   159,   209,   926,   160,  -329,  -329,   210,   219,
     122,   171,   220,   223,   186,   -37,  -329,  -329,   173,   -13,
     174,  -329,  -329,  -329,   991,  -329,  -329,  1270,    -8,   479,
    -329,  -329,   177,   179,   181,  -329,  -329,  -329,   184,   991,
     991,   991,   991,   991,   991,   991,   991,   991,   991,   991,
     991,   991,   991,   991,   991,   991,  -329,  -329,  -329,   187,
    -329,  1196,   479,   188,   189,   237,   204,     9,   241,  -329,
      12,   479,   207,   211,   991,   991,   479,   208,    44,  -329,
     841,  -329,   991,   206,   212,   217,   937,   991,   991,   116,
     116,   116,   116,   535,   592,  1270,  1270,  1270,  1270,  1270,
     116,   116,    47,    47,  -329,  -329,   544,  -329,   215,   479,
     479,  -329,   715,  -329,   218,   479,   221,   479,   479,  1270,
    1270,   222,   715,   224,   225,   226,   228,   229,   231,   242,
     243,   244,   245,   248,   249,   250,  -329,  1270,   247,   991,
    1258,   246,   251,  -329,  -329,    16,   252,   254,   256,   991,
     253,   258,   715,   261,   266,   715,  -329,   272,   263,   268,
    -329,   715,   267,  -329,  -329,  -329,  -329,  -329,   295,   715,
    -329,   274,   277,   280,   275,   286,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,  -329,
     288,  -329,  -329,  -329,  -329,   290,   294,  1270,   293,   991,
     991,   345,   773,   479,   299,   316,  -329,  -329,  -329,  -329,
    -329,   306,   715,   308,   309,   715,  -329,   315,   319,   320,
     322,   311,   313,   336,   339,    20,    23,   346,   347,   350,
    -329,   715,   715,  -329,  1084,  1101,   354,   353,   355,   358,
     384,  -329,  -329,   357,   715,   715,   361,   479,   479,   479,
     479,   363,   364,   479,   479,   369,   479,   370,   479,   479,
     479,   371,   372,   390,   715,   715,   991,   991,   991,   991,
     991,  -329,   391,   392,  -329,   395,   396,   398,   399,   715,
     715,   400,   401,   715,   402,   715,   404,   405,   407,   715,
    -329,  -329,   454,  -329,  1166,   406,   411,   412,  1181,  -329,
    -329,   416,   418,   419,   420,   424,   429,   431,   432,   434,
     433,   441,   446,   447,   449,   450,   715,   451,   991,   991,
     991,   715,   715,   715,   715,   715,  -329,  -329,   715,   715,
    -329,   715,  -329,   715,   715,   715,  -329,  -329,  -329,   453,
     455,   456,  -329,   457,   459,   460,   462,   463,   464,   465,
     466,   467,   477,   715,   715,   715,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,  -329,  -329,   515,  -329,  -329,   546,  -329,  -329,
      -5,  -329,   -46,   381,   530,  -329,   437,   532,  -329,   510,
     536,   476,  -329,  -329,  -329,   537,   -36,   -32,   327,   -54,
     -30,   430,  -167,   496,   -27,   499,  -280,  -329,  -245,  -329,
    -329,  -329,  -329,  -329,   276,  -328,  -214,   300,  -329,  -329,
    -329
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -50
static const yytype_int16 yytable[] =
{
      89,   106,   331,   271,   369,   203,    62,   305,   106,    89,
      63,   338,    64,    13,    95,    66,    89,   152,   153,   205,
      14,    96,   275,    97,    62,   238,    98,   -49,   108,     6,
     109,    19,   206,   111,   246,     8,    20,   208,    42,   251,
     334,    43,    47,    48,    49,    50,    89,     1,   -22,    89,
     253,   254,   255,   256,   341,   271,    89,    59,    51,    52,
     257,   258,   211,     1,    27,    28,    29,   212,    89,   425,
     426,   427,   277,   278,    30,   133,    10,   134,    89,    62,
     302,   303,   244,    63,   154,    64,   323,   245,    66,   117,
     385,   212,   118,   387,   197,   386,    15,   373,   388,    17,
     376,   259,   260,   261,   262,   263,   264,   265,   184,   185,
      47,    48,    49,    89,   422,   423,   392,   393,    31,   163,
     469,   470,   471,   168,    18,    72,    51,    52,    36,   402,
     403,    47,    48,    49,    50,   133,    37,   134,   122,   123,
      73,    74,    75,    76,    38,    39,    89,    51,    52,    40,
      77,    78,    79,    80,    81,    89,   124,    83,    84,    85,
      89,    41,    44,    45,   435,   436,   467,    46,   439,    68,
     441,   472,    70,   195,   445,   182,   183,   184,   185,    99,
     107,   125,   126,   113,   115,   127,   116,   121,   120,   131,
     135,   128,   196,    89,    89,   137,   197,   132,   141,    89,
     144,    89,    89,   496,   497,   498,   197,   473,   474,   475,
     476,   140,   145,   477,   478,   148,   479,    72,   480,   481,
     482,   146,   147,   151,   159,   187,   188,   189,   193,   192,
     122,   123,    73,    74,    75,    76,   197,   194,   202,   197,
     201,   203,   204,   207,   215,   197,   209,   216,   124,    83,
      84,    85,   217,   197,   218,   241,   236,   239,   240,   243,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,   125,   126,   242,   247,   127,   368,   252,
     248,   245,   268,   128,   156,   276,   197,    89,   269,   299,
     335,   301,   304,   306,   307,   308,   197,   309,   310,   197,
     311,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   312,   313,   314,   315,   197,   197,   316,   317,   318,
     319,   212,   329,   322,   325,   324,   326,   330,   197,   197,
     332,    89,    89,    89,    89,   333,   336,    89,    89,   339,
      89,   337,    89,    89,    89,   342,   345,   343,   197,   197,
     344,   179,   180,   181,   182,   183,   184,   185,   346,    72,
     360,   361,   130,   197,   197,   362,   363,   197,   340,   197,
     366,   371,   205,   197,    73,    74,    75,    76,   372,   374,
     375,   381,   105,   382,    77,    78,    79,    80,    81,   105,
     377,    83,    84,    85,   378,   379,   157,   380,   160,   161,
     197,   165,   166,   167,   130,   197,   197,   197,   197,   197,
     191,   383,   197,   197,   384,   197,   157,   197,   197,   197,
     391,   389,   390,   396,   162,    86,   397,    90,   398,   401,
     210,   399,   400,   404,   409,   410,   104,   197,   197,   197,
     413,   415,   419,   104,   420,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   421,   429,   430,   431,   432,   199,   433,   434,
     437,   438,   440,    90,   442,   443,   139,   444,   446,   448,
     249,   250,    72,   143,   449,   450,   199,   452,   267,   453,
     454,   455,   270,   157,   273,   149,   456,    73,    74,    75,
      76,   457,   458,   459,   461,   164,   460,    77,    78,    79,
      80,    81,   157,   462,    83,    84,    85,   463,   464,   199,
     465,   198,   466,   483,   468,   484,   485,    16,   199,   486,
     195,   487,   488,   199,   489,   490,   491,   492,   493,   494,
     198,   169,   170,   171,   172,   157,   174,    72,    86,   495,
       9,    32,   150,    33,    69,   327,   110,    34,    35,   112,
     122,   123,    73,    74,    75,    76,   199,   199,   136,   320,
     200,     0,   300,   198,   199,   199,     0,     0,   124,    83,
      84,    85,   198,     0,     0,     0,     0,   198,     0,     0,
       0,     0,   180,   181,   182,   183,   184,   185,   169,   170,
     171,   172,     0,   125,   126,   364,   365,   127,   327,     0,
       0,     0,     0,   128,   274,     0,     0,     0,     0,     0,
     198,   198,     0,     0,     0,     0,   198,     0,   198,   198,
       0,     0,     0,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,     0,     0,     0,   180,
     181,   182,   183,   184,   185,     0,     0,     0,     0,   367,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   424,   327,   327,   327,   428,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
       0,     0,     0,     0,   405,   406,   407,   408,     0,     0,
     411,   412,     0,   414,   198,   416,   417,   418,    72,     0,
       0,     0,     0,     0,   327,   327,   327,     0,     0,     0,
       0,   122,   123,    73,    74,    75,    76,   279,   280,     0,
     281,   282,   283,    77,    78,    79,    80,    81,     0,   124,
      83,    84,    85,     0,     0,     0,     0,     0,   198,   198,
     198,   198,   284,     0,   198,   198,   103,   198,     0,   198,
     198,   198,     0,     0,   125,   126,    72,     0,   127,     0,
       0,     0,     0,     0,   128,     0,   285,     0,   286,   122,
     123,    73,    74,    75,    76,     0,     0,     0,     0,     0,
       0,    77,    78,    79,    80,    81,     0,   124,    83,    84,
      85,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   122,   123,    73,    74,    75,
      76,     0,   125,   126,     0,     0,   127,    77,    78,    79,
      80,    81,   128,   124,    83,    84,    85,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
       0,     0,   127,   100,    74,    75,    76,     0,   128,     0,
       0,     0,     0,    77,    78,    79,    80,    81,   101,     0,
      83,    84,    85,    72,     0,     0,   102,   179,   180,   181,
     182,   183,   184,   185,     0,     0,   103,     0,   100,    74,
      75,    76,     0,   266,     0,     0,     0,     0,    77,    78,
      79,    80,    81,   101,    86,    83,    84,    85,     0,    72,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
      72,   103,   122,   123,    73,    74,    75,    76,     0,     0,
      72,     0,     0,   122,   123,    73,    74,    75,    76,    86,
     124,    83,    84,    85,     0,    73,    74,    75,    76,     0,
       0,   124,    83,    84,    85,    77,    78,    79,    80,    81,
      82,     0,    83,    84,    85,   125,   126,     0,     0,   127,
       0,     0,     0,   190,    72,   128,   125,   126,     0,     0,
     127,     0,     0,     0,   187,    72,   128,   122,   123,    73,
      74,    75,    76,     0,     0,     0,    86,     0,     0,     0,
      73,    74,    75,    76,     0,   124,    83,    84,    85,     0,
      77,    78,    79,    80,    81,   138,     0,    83,    84,    85,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,     0,     0,   127,    73,    74,    75,    76,     0,
     128,     0,     0,     0,     0,    77,    78,    79,    80,    81,
     142,    86,    83,    84,    85,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,     0,     0,     0,     0,     0,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,     0,     0,     0,     0,    86,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   180,   181,   182,   183,
     184,   185,     0,     0,     0,     0,     0,     0,     0,   186,
     179,   180,   181,   182,   183,   184,   185,     0,     0,     0,
       0,     0,     0,     0,   394,     0,     0,   179,   180,   181,
     182,   183,   184,   185,     0,     0,     0,     0,     0,     0,
       0,   395,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,     0,     0,     0,     0,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,     0,     0,     0,
       0,     0,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,   180,   181,   182,   183,   184,   185,     0,
       0,     0,     0,     0,     0,     0,   447,   179,   180,   181,
     182,   183,   184,   185,     0,     0,     0,     0,     0,     0,
       0,   451,   179,   180,   181,   182,   183,   184,   185,     0,
       0,     0,     0,   237,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,     0,     0,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   180,   181,   182,   183,   184,
     185,     0,     0,     0,     0,   321,   179,   180,   181,   182,
     183,   184,   185
};

static const yytype_int16 yycheck[] =
{
      46,    55,   282,   217,   332,    18,    42,   252,    62,    55,
      42,   291,    42,    66,    50,    42,    62,     4,     5,    56,
      73,    53,   236,    53,    60,   192,    53,    18,    60,    18,
      60,    38,    69,    60,   201,     0,    43,    50,    71,   206,
     285,    74,    38,    39,    40,    41,    92,    45,    46,    95,
       6,     7,     8,     9,   299,   269,   102,    53,    54,    55,
      16,    17,    70,    45,    42,    43,    44,    75,   114,   397,
     398,   399,   239,   240,    52,    66,    46,    68,   124,   115,
     247,   248,    70,   115,    71,   115,    70,    75,   115,    72,
      70,    75,    75,    70,   140,    75,    18,   342,    75,    18,
     345,    57,    58,    59,    60,    61,    62,    63,    61,    62,
      38,    39,    40,   159,   394,   395,   361,   362,    18,   124,
     448,   449,   450,   128,    71,     3,    54,    55,    72,   374,
     375,    38,    39,    40,    41,    66,    18,    68,    16,    17,
      18,    19,    20,    21,    18,    18,   192,    54,    55,    18,
      28,    29,    30,    31,    32,   201,    34,    35,    36,    37,
     206,    71,    71,    71,   409,   410,   446,    71,   413,    18,
     415,   451,    18,    51,   419,    59,    60,    61,    62,    72,
      18,    59,    60,    72,    71,    63,    72,    18,    69,    68,
      18,    69,    70,   239,   240,    72,   242,    68,    18,   245,
      18,   247,   248,   483,   484,   485,   252,   452,   453,   454,
     455,    69,    18,   458,   459,    69,   461,     3,   463,   464,
     465,    73,    73,    18,    69,    67,    67,    18,    18,    69,
      16,    17,    18,    19,    20,    21,   282,    18,    18,   285,
      69,    18,    56,    70,    67,   291,    72,    68,    34,    35,
      36,    37,    71,   299,    70,    18,    69,    69,    69,    18,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,    59,    60,    71,    69,    63,   332,    71,
      69,    75,    70,    69,    70,    70,   332,   333,    71,    71,
      18,    70,    70,    69,    69,    69,   342,    69,    69,   345,
      69,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    69,    69,    69,    69,   361,   362,    69,    69,    69,
      73,    75,    69,    72,    70,    73,    70,    69,   374,   375,
      69,   377,   378,   379,   380,    69,    73,   383,   384,    72,
     386,    73,   388,   389,   390,    71,    71,    70,   394,   395,
      70,    56,    57,    58,    59,    60,    61,    62,    72,     3,
      72,    71,    86,   409,   410,    71,    73,   413,    73,   415,
      25,    72,    56,   419,    18,    19,    20,    21,    72,    71,
      71,    70,    55,    70,    28,    29,    30,    31,    32,    62,
      75,    35,    36,    37,    75,    75,   120,    75,   122,   123,
     446,   125,   126,   127,   128,   451,   452,   453,   454,   455,
     134,    75,   458,   459,    75,   461,   140,   463,   464,   465,
      70,    75,    75,    69,    68,    69,    73,    46,    73,    72,
     154,    73,    48,    72,    71,    71,    55,   483,   484,   485,
      71,    71,    71,    62,    72,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    72,    72,    72,    70,    70,   140,    70,    70,
      70,    70,    70,    92,    70,    70,    95,    70,    24,    73,
     204,   205,     3,   102,    73,    73,   159,    71,   212,    71,
      71,    71,   216,   217,   218,   114,    72,    18,    19,    20,
      21,    72,    71,    71,    71,   124,    72,    28,    29,    30,
      31,    32,   236,    72,    35,    36,    37,    71,    71,   192,
      71,   140,    72,    70,    73,    70,    70,    12,   201,    72,
      51,    72,    72,   206,    72,    72,    72,    72,    72,    72,
     159,     6,     7,     8,     9,   269,    11,     3,    69,    72,
       4,    21,   115,    21,    44,   279,    60,    21,    21,    60,
      16,    17,    18,    19,    20,    21,   239,   240,    92,   269,
     140,    -1,   245,   192,   247,   248,    -1,    -1,    34,    35,
      36,    37,   201,    -1,    -1,    -1,    -1,   206,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,     6,     7,
       8,     9,    -1,    59,    60,   329,   330,    63,   332,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
     239,   240,    -1,    -1,    -1,    -1,   245,    -1,   247,   248,
      -1,    -1,    -1,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,   332,
     333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   396,   397,   398,   399,   400,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      -1,    -1,    -1,    -1,   377,   378,   379,   380,    -1,    -1,
     383,   384,    -1,   386,   333,   388,   389,   390,     3,    -1,
      -1,    -1,    -1,    -1,   448,   449,   450,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,   377,   378,
     379,   380,    47,    -1,   383,   384,    51,   386,    -1,   388,
     389,   390,    -1,    -1,    59,    60,     3,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    16,    17,    18,    19,    20,
      21,    -1,    59,    60,    -1,    -1,    63,    28,    29,    30,
      31,    32,    69,    34,    35,    36,    37,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    63,    18,    19,    20,    21,    -1,    69,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,     3,    -1,    -1,    41,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    51,    -1,    18,    19,
      20,    21,    -1,    72,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    69,    35,    36,    37,    -1,     3,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    51,    16,    17,    18,    19,    20,    21,    -1,    -1,
       3,    -1,    -1,    16,    17,    18,    19,    20,    21,    69,
      34,    35,    36,    37,    -1,    18,    19,    20,    21,    -1,
      -1,    34,    35,    36,    37,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    59,    60,    -1,    -1,    63,
      -1,    -1,    -1,    67,     3,    69,    59,    60,    -1,    -1,
      63,    -1,    -1,    -1,    67,     3,    69,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    34,    35,    36,    37,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    63,    18,    19,    20,    21,    -1,
      69,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    69,    35,    36,    37,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    69,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    67,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    67,    56,    57,    58,    59,
      60,    61,    62
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
      91,    92,   102,   103,   106,   109,   110,   111,    18,    95,
      18,   100,     3,    18,    19,    20,    21,    28,    29,    30,
      31,    32,    33,    35,    36,    37,    69,    86,    87,    88,
      89,    97,    98,    99,   124,   102,   103,   106,   110,    72,
      18,    33,    41,    51,    89,   104,   105,    18,   103,   106,
     109,   110,   111,    72,    41,    71,    72,    72,    75,   125,
      69,    18,    16,    17,    34,    59,    60,    63,    69,    88,
     120,    68,    68,    66,    68,    18,    97,    72,    33,    89,
      69,    18,    33,    89,    18,    18,    73,    73,    69,    89,
      92,    18,     4,     5,    71,   126,    70,   120,   122,    69,
     120,   120,    68,    86,    89,   120,   120,   120,    86,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    56,
      57,    58,    59,    60,    61,    62,    70,    67,    67,    18,
      67,   120,    69,    18,    18,    51,    70,    88,    89,   104,
     107,    69,    18,    18,    56,    56,    69,    70,    50,    72,
     120,    70,    75,   107,   108,    67,    68,    71,    70,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,    69,    67,   108,    69,
      69,    18,    71,    18,    70,    75,   108,    69,    69,   120,
     120,   108,    71,     6,     7,     8,     9,    16,    17,    57,
      58,    59,    60,    61,    62,    63,    72,   120,    70,    71,
     120,   122,   123,   120,    70,   122,    70,   108,   108,    22,
      23,    25,    26,    27,    47,    71,    73,    89,   104,   105,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    71,
     104,    70,   108,   108,    70,   114,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    73,
     123,    67,    72,    70,    73,    70,    70,   120,   121,    69,
      69,   112,    69,    69,   114,    18,    73,    73,   112,    72,
      73,   114,    71,    70,    70,    71,    72,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
      72,    71,    71,    73,   120,   120,    25,   104,   105,   121,
     104,    72,    72,   114,    71,    71,   114,    75,    75,    75,
      75,    70,    70,    75,    75,    70,    75,    70,    75,    75,
      75,    70,   114,   114,    70,    70,    69,    73,    73,    73,
      48,    72,   114,   114,    72,   104,   104,   104,   104,    71,
      71,   104,   104,    71,   104,    71,   104,   104,   104,    71,
      72,    72,   112,   112,   120,   121,   121,   121,   120,    72,
      72,    70,    70,    70,    70,   114,   114,    70,    70,   114,
      70,   114,    70,    70,    70,   114,    24,    70,    73,    73,
      73,    70,    71,    71,    71,    71,    72,    72,    71,    71,
      72,    71,    72,    71,    71,    71,    72,   112,    73,   121,
     121,   121,   112,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,    70,    70,    70,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,   112,   112,   112
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
#line 210 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { treeRoot = new Program((yyvsp[(1) - (2)]._usingDirectives), (yyvsp[(2) - (2)]._namespaceDeclSeq)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 216 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._enumDecl)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 217 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._classDecl)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 218 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceDecl)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 219 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[(1) - (1)]._structDecl)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 220 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._enumDecl)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 221 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._classDecl)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 222 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceDecl)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 223 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) -> Add((yyvsp[(2) - (2)]._structDecl)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 226 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = new NamespaceMembersNode(); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 227 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceMembers) = (yyvsp[(1) - (1)]._namespaceMembers); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 230 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._namespaceMembers));  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 233 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[(1) - (1)]._namespaceDecl)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 234 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._namespaceDeclSeq) -> Add((yyvsp[(2) - (2)]._namespaceDecl)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 237 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 238 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingArg) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 241 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[(2) - (3)]._usingArg)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 244 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[(1) - (1)]._usingDirective)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 245 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) -> Add((yyvsp[(2) - (2)]._usingDirective)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 248 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 249 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._usingDirectives) = (yyvsp[(1) - (1)]._usingDirectives); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 256 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Char); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 257 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Int); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 258 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Bool); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 259 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::Float); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 260 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._standardType) = static_cast<int>(StandardType::String); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 263 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {     (yyval._standardArrayType) = new StandardArrayType{ static_cast<StandardType>((yyvsp[(1) - (3)]._standardType)), 1  };     (yyval._standardArrayType)->Arity = 1; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 264 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {     (yyvsp[(1) - (3)]._standardArrayType)->Arity += 1;     (yyval._standardArrayType) = (yyvsp[(1) - (3)]._standardArrayType); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 267 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {  if (strcmp((yyvsp[(1) - (1)]._identifier), "base") == 0) {
            (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBase();
        } else {
            (yyval._qualifiedOrExpr) = Qualified_or_expr::FromId((yyvsp[(1) - (1)]._identifier));
        } ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 272 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromDot((yyvsp[(1) - (3)]._qualifiedOrExpr), (yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 273 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBrackets((yyvsp[(1) - (3)]._qualifiedOrExpr)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 274 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBrackets((yyvsp[(1) - (4)]._qualifiedOrExpr), (yyvsp[(3) - (4)]._expr)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 275 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromDot((yyvsp[(1) - (6)]._qualifiedOrExpr), (yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 276 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromCall((yyvsp[(1) - (4)]._identifier), (yyvsp[(3) - (4)]._exprSeq)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 277 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromDot((yyvsp[(1) - (5)]._qualifiedOrExpr), (yyvsp[(3) - (5)]._identifier)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 278 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromCall((yyvsp[(1) - (3)]._identifier)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 279 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromExpr((yyvsp[(2) - (3)]._expr));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 280 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {  (yyval._qualifiedOrExpr) = Qualified_or_expr::FromNull();;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 281 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromInt((yyvsp[(1) - (1)]._integer)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 282 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromString((yyvsp[(1) - (1)]._string)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 283 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromChar((yyvsp[(1) - (1)]._character)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 284 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBool(true); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 285 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromBool(false); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 286 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = (yyvsp[(1) - (1)]._qualifiedOrExpr); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 290 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._type) = new TypeNode(static_cast<StandardType>((yyvsp[(1) - (1)]._standardType))); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 291 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._type) = new TypeNode(*(yyvsp[(1) - (1)]._standardArrayType)); delete (yyvsp[(1) - (1)]._standardArrayType); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 292 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._type) = new TypeNode((yyvsp[(1) - (1)]._qualifiedOrExpr)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 299 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (6)]._identifier), nullptr, (yyvsp[(5) - (6)]._typeMembers)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 300 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._classDecl) = new ClassDeclNode((yyvsp[(3) - (8)]._identifier), (yyvsp[(5) - (8)]._identifier), (yyvsp[(7) - (8)]._typeMembers)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 305 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddMethod((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 306 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddField((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 307 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddMethod((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 308 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddConstructor((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 309 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers) -> AddDestructor((yyvsp[(1) - (1)]._destructorDecl)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 310 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddMethod((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 311 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddField((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 312 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddMethod((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 313 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddConstructor((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 314 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) -> AddDestructor((yyvsp[(2) - (2)]._destructorDecl)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 317 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 318 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = (yyvsp[(1) - (1)]._typeMembers); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 326 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._typeMembers)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 327 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._structDecl) = new StructDeclNode((yyvsp[(2) - (5)]._identifier), (yyvsp[(4) - (5)]._typeMembers)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 330 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers)->AddField((yyvsp[(1) - (1)]._fieldDecl)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 331 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers)->AddMethod((yyvsp[(1) - (1)]._methodDecl)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 332 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); (yyval._typeMembers)->AddConstructor((yyvsp[(1) - (1)]._constructorDecl)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 333 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers)->AddField((yyvsp[(2) - (2)]._fieldDecl)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 334 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers)->AddMethod((yyvsp[(2) - (2)]._methodDecl)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 335 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers)->AddConstructor((yyvsp[(2) - (2)]._constructorDecl)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 339 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = new TypeMembersNode(); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 340 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._typeMembers) = (yyvsp[(1) - (1)]._typeMembers); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 346 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceDecl) = new InterfaceDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._interfaceMembers)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 349 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode((yyvsp[(1) - (6)]._type), (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 350 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMember) = new InterfaceMemberNode(nullptr, (yyvsp[(2) - (6)]._identifier), (yyvsp[(4) - (6)]._methodArguments)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 353 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); (yyval._interfaceMembers) -> Add((yyvsp[(1) - (1)]._interfaceMember)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 354 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) -> Add((yyvsp[(2) - (2)]._interfaceMember)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 357 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) = new InterfaceMembersNode(); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 358 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._interfaceMembers) = (yyvsp[(1) - (1)]._interfaceMembers); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 365 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[(1) - (1)]._identifier)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 366 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._enumerators) -> Add((yyvsp[(3) - (3)]._identifier)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 369 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { Print("Found enum declaration with name:", (yyvsp[(3) - (6)]._identifier)); (yyval._enumDecl) = new EnumDeclNode((yyvsp[(3) - (6)]._identifier), (yyvsp[(5) - (6)]._enumerators)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 376 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Public); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 377 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Protected); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 378 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Private); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 379 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::Internal); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 380 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._visibiltyModifier) = static_cast<int>(VisibilityModifier::ProtectedInternal); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 386 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {
    (yyval._fieldDecl) = new FieldDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (3)]._visibiltyModifier)), (yyvsp[(2) - (3)]._varDecl));
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 389 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {
    (yyval._fieldDecl) = new FieldDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (3)]._visibiltyModifier)), (yyvsp[(2) - (3)]._varDecl));
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 393 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (2)]._type), (yyvsp[(2) - (2)]._identifier), nullptr); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 394 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (2)]._identifier), nullptr, true); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 396 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode((yyvsp[(1) - (4)]._type), (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 397 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[(2) - (4)]._identifier), (yyvsp[(4) - (4)]._expr), true); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 404 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (9)]._visibiltyModifier)), (yyvsp[(2) - (9)]._type), (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 405 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (9)]._visibiltyModifier)), nullptr, (yyvsp[(3) - (9)]._identifier), (yyvsp[(5) - (9)]._methodArguments), (yyvsp[(8) - (9)]._stmtSeq)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 406 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (10)]._visibiltyModifier)), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 407 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(2) - (10)]._visibiltyModifier)), nullptr, (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 408 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (10)]._visibiltyModifier)), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 409 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(2) - (10)]._visibiltyModifier)), (yyvsp[(3) - (10)]._type), (yyvsp[(4) - (10)]._identifier), (yyvsp[(6) - (10)]._methodArguments), (yyvsp[(9) - (10)]._stmtSeq), /* isStatic = */ true); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 412 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) = new MethodArguments((yyvsp[(1) - (1)]._varDecl)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 413 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) -> Add((yyvsp[(3) - (3)]._varDecl)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 415 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 416 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodArguments) = (yyvsp[(1) - (1)]._methodArguments); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 419 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Plus,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 420 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Minus,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 421 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Multiply,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 422 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Divide,            (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 423 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Less,              (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 424 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Greater,           (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 425 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::Equal,             (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 426 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::NotEqual,          (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 427 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::LessOrEqual,       (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 428 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (13)]._visibiltyModifier)), (yyvsp[(3) - (13)]._type), OperatorType::GreaterOrEqual,    (yyvsp[(7) - (13)]._varDecl), (yyvsp[(9) - (13)]._varDecl), (yyvsp[(12) - (13)]._stmtSeq)); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 429 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::Not,               (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 430 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::Decrement,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 431 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::Increment,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 432 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::UnaryMinus,        (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 433 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._methodDecl) = new MethodDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (11)]._visibiltyModifier)), (yyvsp[(3) - (11)]._type), OperatorType::UnaryPlus,         (yyvsp[(7) - (11)]._varDecl), (yyvsp[(10) - (11)]._stmtSeq));     ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 441 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { 
        (yyval._constructorDecl) = new ConstructorDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (7)]._visibiltyModifier)), (yyvsp[(2) - (7)]._identifier), MethodArguments::MakeEmpty(), (yyvsp[(6) - (7)]._stmtSeq));
    ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 444 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {
        (yyval._constructorDecl) = new ConstructorDeclNode(static_cast<VisibilityModifier>((yyvsp[(1) - (8)]._visibiltyModifier)), (yyvsp[(2) - (8)]._identifier), (yyvsp[(4) - (8)]._methodArguments), (yyvsp[(7) - (8)]._stmtSeq));
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 449 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { 
    (yyval._destructorDecl) = new DestructorDeclNode((yyvsp[(2) - (7)]._identifier), (yyvsp[(6) - (7)]._stmtSeq)); 
;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 458 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode(); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 459 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._expr), /* isReturn= */ false); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 460 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 461 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (2)]._varDecl)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 462 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._while)); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 463 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._doWhile)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 464 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._for)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 465 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._if)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 466 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(1) - (1)]._foreach)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 467 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._stmtSeq)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 468 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmt) = new StmtNode((yyvsp[(2) - (3)]._expr), /* isReturn= */ true); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 471 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[(1) - (1)]._stmt)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 472 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) -> Add((yyvsp[(2) - (2)]._stmt)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 474 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 475 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._stmtSeq) = (yyvsp[(1) - (1)]._stmtSeq); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 478 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._while) = new WhileNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 480 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._doWhile) = new DoWhileNode((yyvsp[(5) - (7)]._expr), (yyvsp[(2) - (7)]._stmt)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 483 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 484 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._varDecl), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 485 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._for) = new ForNode((yyvsp[(3) - (9)]._expr), (yyvsp[(5) - (9)]._expr), (yyvsp[(7) - (9)]._expr), (yyvsp[(9) - (9)]._stmt)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 488 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (5)]._expr), (yyvsp[(5) - (5)]._stmt)); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 489 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._if) = new IfNode((yyvsp[(3) - (7)]._expr), (yyvsp[(5) - (7)]._stmt), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 492 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._foreach) = new ForEachNode((yyvsp[(3) - (7)]._varDecl), (yyvsp[(5) - (7)]._expr), (yyvsp[(7) - (7)]._stmt)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 499 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 500 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 501 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 502 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 503 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 504 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 505 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 506 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 507 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 508 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 509 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 510 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 511 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 512 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 513 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 514 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 515 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[(1) - (3)]._expr), (yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 516 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 517 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 518 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 519 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 520 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[(2) - (2)]._expr)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 521 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromQualified_or_expr((yyvsp[(1) - (1)]._qualifiedOrExpr)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 522 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (2)]._type)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 523 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew((yyvsp[(2) - (5)]._type), (yyvsp[(4) - (5)]._exprSeq)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 524 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[(5) - (6)]._exprSeq)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 525 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromCast(static_cast<StandardType>((yyvsp[(2) - (4)]._standardType)), (yyvsp[(4) - (4)]._expr));;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 526 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = ExprNode::FromNew(static_cast<StandardType>((yyvsp[(2) - (5)]._standardType)), (yyvsp[(4) - (5)]._expr)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 529 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = nullptr; ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 530 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._expr) = (yyvsp[(1) - (1)]._expr); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 533 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) = new ExprSeqNode((yyvsp[(1) - (1)]._expr)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 534 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) -> Add((yyvsp[(3) - (3)]._expr)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 537 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 538 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._exprSeq) = (yyvsp[(1) - (1)]._exprSeq); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 545 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    { (yyval._qualifiedOrExpr) = Qualified_or_expr::FromString("interpolated"); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 548 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._exprSeq) = ExprSeqNode::MakeEmpty();;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 549 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._exprSeq)->Add((yyvsp[(2) - (2)]._expr));;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 552 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._expr) = ExprNode::FromString((yyvsp[(1) - (1)]._string));;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 553 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"
    {(yyval._expr) = (yyvsp[(2) - (3)]._expr);;}
    break;



/* Line 1455 of yacc.c  */
#line 3349 "C:/Compile_CSharp/CSharp_Compiler/lexer-build/parser.cpp"
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
#line 556 "C:/Compile_CSharp/CSharp_Compiler/new_parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

