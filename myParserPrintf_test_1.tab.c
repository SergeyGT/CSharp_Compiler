/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myParserPrintf_test_1.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Определения enum
enum StandardType { ST_FLOAT, ST_DOUBLE, ST_DECIMAL, ST_BOOL, ST_INT };
enum VisibilityModifier { VM_PUBLIC, VM_PROTECTED, VM_PRIVATE, VM_INTERNAL, VM_PROTECTED_INTERNAL };

extern int yylex(void);
extern FILE* yyin;
extern int yylineno;

void yyerror(const char* s);

// Простые определения структур (заглушки)
typedef struct { int dummy; } AccessExpr;
typedef struct { int dummy; } ExprNode;
typedef struct { int dummy; } ExprSeqNode;
typedef struct { int dummy; } TypeNode;
typedef struct { int dummy; } VarDeclNode;
typedef struct { int dummy; } StmtSeqNode;
typedef struct { int dummy; } StmtNode;
typedef struct { int dummy; } FieldDeclNode;
typedef struct { int dummy; } MethodArguments;
typedef struct { int dummy; } MethodDeclNode;
typedef struct { int dummy; } ConstructorDeclNode;
typedef struct { int dummy; } DestructorDeclNode;
typedef struct { int dummy; } IdentifierList;
typedef struct { int dummy; } EnumDeclNode;
typedef struct { int dummy; } InterpolatedStringNode;
typedef struct { int dummy; } StructMembersNode;
typedef struct { int dummy; } StructDeclNode;
typedef struct { int dummy; } ClassNameNode;
typedef struct { int dummy; } MethodNameNode;
typedef struct { int dummy; } ClassDeclNode;
typedef struct { int dummy; } ClassMembersNode;


#line 111 "myParserPrintf_test_1.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "myParserPrintf_test_1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_FLOATING_POINT = 5,             /* FLOATING_POINT  */
  YYSYMBOL_FLOAT_LITERAL = 6,              /* FLOAT_LITERAL  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_CHARACTER = 8,                  /* CHARACTER  */
  YYSYMBOL_DECIMAL_LITERAL = 9,            /* DECIMAL_LITERAL  */
  YYSYMBOL_BOOL_KW = 10,                   /* BOOL_KW  */
  YYSYMBOL_FLOAT_KW = 11,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 12,                 /* DOUBLE_KW  */
  YYSYMBOL_DECIMAL_KW = 13,                /* DECIMAL_KW  */
  YYSYMBOL_INT_KW = 14,                    /* INT_KW  */
  YYSYMBOL_CLASS_KW = 15,                  /* CLASS_KW  */
  YYSYMBOL_NULL_KW = 16,                   /* NULL_KW  */
  YYSYMBOL_TRUE_KW = 17,                   /* TRUE_KW  */
  YYSYMBOL_FALSE_KW = 18,                  /* FALSE_KW  */
  YYSYMBOL_PUBLIC = 19,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 20,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 21,                   /* PRIVATE  */
  YYSYMBOL_INTERNAL = 22,                  /* INTERNAL  */
  YYSYMBOL_PROTECTED_INTERNAL = 23,        /* PROTECTED_INTERNAL  */
  YYSYMBOL_STATIC = 24,                    /* STATIC  */
  YYSYMBOL_STRUCT = 25,                    /* STRUCT  */
  YYSYMBOL_ENUM = 26,                      /* ENUM  */
  YYSYMBOL_TILDE = 27,                     /* TILDE  */
  YYSYMBOL_INTERPOLATED_STRING_START = 28, /* INTERPOLATED_STRING_START  */
  YYSYMBOL_INTERPOLATED_STRING_END = 29,   /* INTERPOLATED_STRING_END  */
  YYSYMBOL_INTERPOLATED_STRING_TEXT = 30,  /* INTERPOLATED_STRING_TEXT  */
  YYSYMBOL_INTERPOLATED_STRING_EXPR = 31,  /* INTERPOLATED_STRING_EXPR  */
  YYSYMBOL_PLUS_ASSIGN = 32,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 33,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 34,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVISION_ASSIGN = 35,           /* DIVISION_ASSIGN  */
  YYSYMBOL_INCREMENT = 36,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 37,                 /* DECREMENT  */
  YYSYMBOL_LESS = 38,                      /* LESS  */
  YYSYMBOL_GREATER = 39,                   /* GREATER  */
  YYSYMBOL_EQUAL = 40,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 41,                 /* NOT_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 42,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 43,             /* LESS_OR_EQUAL  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_AND = 45,                       /* AND  */
  YYSYMBOL_BITWISE_OR = 46,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 47,               /* BITWISE_AND  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* '<'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_51_ = 51,                       /* '+'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_55_ = 55,                       /* '%'  */
  YYSYMBOL_56_ = 56,                       /* '!'  */
  YYSYMBOL_UNARY_MINUS = 57,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 58,                /* UNARY_PLUS  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_60_ = 60,                       /* ']'  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* '{'  */
  YYSYMBOL_66_ = 66,                       /* '}'  */
  YYSYMBOL_67_ = 67,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_program = 69,                   /* program  */
  YYSYMBOL_program_element = 70,           /* program_element  */
  YYSYMBOL_standard_type = 71,             /* standard_type  */
  YYSYMBOL_type = 72,                      /* type  */
  YYSYMBOL_access_expr = 73,               /* access_expr  */
  YYSYMBOL_expr_seq = 74,                  /* expr_seq  */
  YYSYMBOL_expr_seq_optional = 75,         /* expr_seq_optional  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_visibility_modifier = 77,       /* visibility_modifier  */
  YYSYMBOL_class_members = 78,             /* class_members  */
  YYSYMBOL_class_members_optional = 79,    /* class_members_optional  */
  YYSYMBOL_class_decl = 80,                /* class_decl  */
  YYSYMBOL_struct_members = 81,            /* struct_members  */
  YYSYMBOL_struct_members_optional = 82,   /* struct_members_optional  */
  YYSYMBOL_struct_decl = 83,               /* struct_decl  */
  YYSYMBOL_field_decl_optional_static = 84, /* field_decl_optional_static  */
  YYSYMBOL_field_decl = 85,                /* field_decl  */
  YYSYMBOL_method_arguments = 86,          /* method_arguments  */
  YYSYMBOL_method_arguments_optional = 87, /* method_arguments_optional  */
  YYSYMBOL_method_decl = 88,               /* method_decl  */
  YYSYMBOL_class_name = 89,                /* class_name  */
  YYSYMBOL_method_name = 90,               /* method_name  */
  YYSYMBOL_var_decl = 91,                  /* var_decl  */
  YYSYMBOL_constructor_decl = 92,          /* constructor_decl  */
  YYSYMBOL_static_constructor_decl = 93,   /* static_constructor_decl  */
  YYSYMBOL_destructor_decl = 94,           /* destructor_decl  */
  YYSYMBOL_stmt = 95,                      /* stmt  */
  YYSYMBOL_stmt_seq = 96,                  /* stmt_seq  */
  YYSYMBOL_stmt_seq_optional = 97,         /* stmt_seq_optional  */
  YYSYMBOL_enumerators = 98,               /* enumerators  */
  YYSYMBOL_enum_decl = 99,                 /* enum_decl  */
  YYSYMBOL_interpolated_string = 100,      /* interpolated_string  */
  YYSYMBOL_interpolated_string_content = 101 /* interpolated_string_content  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    55,     2,     2,
      62,    63,    53,    51,    64,    52,    59,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    67,
      49,    48,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
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
      45,    46,    47,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   138,   138,   139,   142,   143,   144,   145,   146,   147,
     148,   149,   156,   157,   158,   159,   160,   163,   164,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   185,   186,   189,   190,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   225,   226,   227,   228,   229,   236,   237,   238,   239,
     240,   241,   242,   243,   246,   247,   250,   257,   258,   259,
     260,   261,   262,   265,   266,   269,   276,   277,   280,   287,
     288,   291,   292,   295,   298,   301,   304,   311,   314,   317,
     324,   325,   326,   329,   330,   333,   334,   341,   342,   345,
     352,   355,   356,   357
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "INTEGER", "FLOATING_POINT", "FLOAT_LITERAL", "STRING", "CHARACTER",
  "DECIMAL_LITERAL", "BOOL_KW", "FLOAT_KW", "DOUBLE_KW", "DECIMAL_KW",
  "INT_KW", "CLASS_KW", "NULL_KW", "TRUE_KW", "FALSE_KW", "PUBLIC",
  "PROTECTED", "PRIVATE", "INTERNAL", "PROTECTED_INTERNAL", "STATIC",
  "STRUCT", "ENUM", "TILDE", "INTERPOLATED_STRING_START",
  "INTERPOLATED_STRING_END", "INTERPOLATED_STRING_TEXT",
  "INTERPOLATED_STRING_EXPR", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT", "DECREMENT", "LESS",
  "GREATER", "EQUAL", "NOT_EQUAL", "GREATER_OR_EQUAL", "LESS_OR_EQUAL",
  "OR", "AND", "BITWISE_OR", "BITWISE_AND", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "UNARY_MINUS", "UNARY_PLUS", "'.'",
  "']'", "'['", "'('", "')'", "','", "'{'", "'}'", "';'", "$accept",
  "program", "program_element", "standard_type", "type", "access_expr",
  "expr_seq", "expr_seq_optional", "expr", "visibility_modifier",
  "class_members", "class_members_optional", "class_decl",
  "struct_members", "struct_members_optional", "struct_decl",
  "field_decl_optional_static", "field_decl", "method_arguments",
  "method_arguments_optional", "method_decl", "class_name", "method_name",
  "var_decl", "constructor_decl", "static_constructor_decl",
  "destructor_decl", "stmt", "stmt_seq", "stmt_seq_optional",
  "enumerators", "enum_decl", "interpolated_string",
  "interpolated_string_content", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,     6,    -6,   218,   218,   218,   218,
     218,   218,   177,  -124,    82,  -124,   -38,   243,   237,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
     -34,    -6,   218,     7,  -124,  -124,  -124,  -124,  -124,   271,
    -124,   177,   -28,  -124,  -124,    36,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,  -124,  -124,  -124,  -124,
    -124,  -124,     6,   114,     6,     6,  -124,    61,     3,    -1,
       4,  -124,   297,  -124,  -124,  -124,  -124,     9,   321,   321,
     321,   321,   205,   205,   205,   205,   337,   337,   337,   337,
     321,   205,   205,   -23,   -23,  -124,  -124,  -124,    14,    66,
    -124,     5,    15,    16,    17,    21,   114,  -124,    25,  -124,
     218,   188,  -124,  -124,   374,    89,   114,    29,    31,  -124,
     177,    32,    43,   321,   165,   188,    41,  -124,  -124,  -124,
    -124,     6,   165,   374,    42,  -124,  -124,  -124,  -124,   -52,
      48,   114,    47,    49,   218,  -124,  -124,  -124,  -124,  -124,
    -124,    51,  -124,  -124,  -124,  -124,   113,  -124,    55,  -124,
     177,  -124,   321,    58,  -124,   177,    56,    64,    69,  -124,
     177,  -124,    71,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    27,    20,    21,    22,    23,    26,    24,    25,    61,
      62,    63,    64,    65,     0,   111,     0,     0,     0,     0,
       0,     0,   105,   100,     0,     2,    60,     0,     0,    11,
       5,    88,    10,     7,     8,     9,     4,     6,    30,    94,
       0,   111,     0,     0,    56,    57,    58,    59,    55,     0,
     103,   106,     0,     1,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,    15,    12,    13,
      14,    16,     0,     0,     0,     0,    17,     0,    18,     0,
       0,   112,   111,   110,    19,   104,   102,    28,    41,    42,
      43,    44,    47,    48,    50,    49,    52,    51,    54,    53,
      40,    45,    46,    35,    36,    37,    38,    39,     0,     0,
      18,     0,     0,     0,    95,     0,    91,    86,     0,   113,
      33,    74,    96,    87,    83,     0,    91,    92,     0,    89,
     105,    34,     0,    31,     0,    75,     0,    66,    67,    68,
      69,     0,     0,    84,     0,    77,    78,    79,   107,     0,
       0,     0,     0,     0,     0,    29,    70,    71,    72,    73,
      76,     0,    80,    81,    82,    85,     0,   109,     0,    90,
     105,    99,    32,     0,   108,   105,     0,     0,     0,    97,
     105,    93,     0,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -124,  -124,   106,  -124,   -21,  -124,  -124,  -124,   -16,  -118,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -116,  -124,    -4,
     -56,    -8,  -124,   -66,  -123,    -7,  -112,    10,  -124,  -117,
    -124,  -124,  -124,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    24,    25,    86,   119,    26,   141,   142,    27,    28,
     145,   146,    29,   153,   154,    30,    31,    32,   137,   138,
      33,   120,   125,    89,    34,   157,    35,    50,    51,    52,
     159,    37,    38,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    45,    46,    47,    48,    49,    40,    87,   149,    39,
      36,    91,   176,   144,   177,   147,   152,   121,   155,   150,
      88,    55,   168,   163,    41,    42,    92,   144,    90,   166,
      73,    74,    75,   169,    36,   152,    93,   172,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     139,    95,   129,   186,   124,   126,   127,   128,   188,   132,
     139,   130,   133,   192,   118,   148,   122,   123,   156,   131,
     134,   135,    53,   136,   -96,     1,     2,     3,     4,   167,
     140,     5,   158,   161,   162,   179,   164,   173,     6,     7,
       8,     9,    10,    11,    12,    13,   165,   170,   175,    14,
      15,   178,   180,   183,   143,   181,   184,    39,    16,    17,
     185,   187,   189,    87,    77,    78,    79,    80,    81,   190,
      54,    87,   160,    18,    19,   191,    88,   193,    20,     1,
       2,     3,     4,   171,    21,     5,   174,    22,   182,    23,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,    14,    15,     0,     0,     0,    39,     0,
       0,     0,    16,    17,     0,    77,    78,    79,    80,    81,
       1,     2,     3,     4,     0,     0,     5,    18,    19,    83,
       0,     0,    20,     6,     7,     8,     0,     0,    21,     0,
       0,    22,     0,    23,     0,    15,     0,     9,    10,    11,
      12,    13,     0,    16,    17,    14,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     0,     0,     5,    18,    19,
       0,     0,     0,    20,     6,     7,     8,     0,     0,    21,
      39,     0,    22,     0,    23,     0,    15,    77,    78,    79,
      80,    81,    82,     0,    16,    17,    71,    72,    73,    74,
      75,    83,    84,    85,     0,     0,     0,     0,     0,    18,
      19,     0,     0,     0,    20,    56,    57,    58,    59,     0,
      21,     0,     0,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,    56,    57,    58,    59,     0,     0,     0,
      76,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    41,    42,    56,
      57,    58,    59,     0,    94,     0,     0,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    56,    57,    58,    59,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    60,    61,    62,
      63,     0,     0,     0,     0,     0,    69,    70,    71,    72,
      73,    74,    75,     9,    10,    11,    12,    13,   151
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    20,    21,    14,    28,   131,     3,
       0,    41,    64,   131,    66,   131,   134,    83,   134,   131,
      28,    59,   145,   140,    30,    31,    42,   145,    62,   145,
      53,    54,    55,   145,    24,   153,    29,   153,    66,     3,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     126,    51,    92,   180,     3,    62,    67,    63,   185,     3,
     136,    62,    67,   190,    82,   131,    84,    85,   134,    65,
      65,    65,     0,    62,    67,     3,     4,     5,     6,   145,
      65,     9,     3,    64,    63,   161,    64,   153,    16,    17,
      18,    19,    20,    21,    22,    23,    63,    66,    66,    27,
      28,    63,    65,    62,   130,    66,     3,     3,    36,    37,
      65,    63,    66,   144,    10,    11,    12,    13,    14,    65,
      24,   152,   136,    51,    52,    66,   144,    66,    56,     3,
       4,     5,     6,   151,    62,     9,   153,    65,   164,    67,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    36,    37,    -1,    10,    11,    12,    13,    14,
       3,     4,     5,     6,    -1,    -1,     9,    51,    52,    24,
      -1,    -1,    56,    16,    17,    18,    -1,    -1,    62,    -1,
      -1,    65,    -1,    67,    -1,    28,    -1,    19,    20,    21,
      22,    23,    -1,    36,    37,    27,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    51,    52,
      -1,    -1,    -1,    56,    16,    17,    18,    -1,    -1,    62,
       3,    -1,    65,    -1,    67,    -1,    28,    10,    11,    12,
      13,    14,    15,    -1,    36,    37,    51,    52,    53,    54,
      55,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    56,    32,    33,    34,    35,    -1,
      62,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      67,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    30,    31,    32,
      33,    34,    35,    -1,    63,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    19,    20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    16,    17,    18,    19,
      20,    21,    22,    23,    27,    28,    36,    37,    51,    52,
      56,    62,    65,    67,    69,    70,    73,    76,    77,    80,
      83,    84,    85,    88,    92,    94,    95,    99,   100,     3,
      89,    30,    31,   101,    76,    76,    76,    76,    76,    76,
      95,    96,    97,     0,    70,    59,    32,    33,    34,    35,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    67,    10,    11,    12,
      13,    14,    15,    24,    25,    26,    71,    72,    89,    91,
      62,   101,    76,    29,    63,    95,    66,     3,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    89,    72,
      89,    91,    89,    89,     3,    90,    62,    67,    63,   101,
      62,    65,     3,    67,    65,    65,    62,    86,    87,    91,
      65,    74,    75,    76,    77,    78,    79,    85,    88,    92,
      94,    24,    77,    81,    82,    85,    88,    93,     3,    98,
      87,    64,    63,    97,    64,    63,    85,    88,    92,    94,
      66,    89,    85,    88,    93,    66,    64,    66,    63,    91,
      65,    66,    76,    62,     3,    65,    97,    63,    97,    66,
      65,    66,    97,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    81,    81,    81,
      81,    81,    81,    82,    82,    83,    84,    84,    85,    86,
      86,    87,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    99,
     100,   101,   101,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     6,
       1,     1,     3,     0,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     0,     1,     6,     1,     1,     1,
       2,     2,     2,     0,     1,     6,     3,     4,     1,     1,
       3,     0,     1,     9,     1,     1,     2,     8,     7,     7,
       1,     2,     3,     1,     2,     0,     1,     1,     3,     6,
       3,     0,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* program_element: stmt  */
#line 142 "myParserPrintf_test_1.y"
                                               { printf("program_element -> stmt\n"); }
#line 1385 "myParserPrintf_test_1.tab.c"
    break;

  case 5: /* program_element: struct_decl  */
#line 143 "myParserPrintf_test_1.y"
                                               { printf("program_element -> struct_decl\n"); }
#line 1391 "myParserPrintf_test_1.tab.c"
    break;

  case 6: /* program_element: enum_decl  */
#line 144 "myParserPrintf_test_1.y"
                                               { printf("program_element -> enum_decl\n"); }
#line 1397 "myParserPrintf_test_1.tab.c"
    break;

  case 7: /* program_element: method_decl  */
#line 145 "myParserPrintf_test_1.y"
                                               { printf("program_element -> method_decl\n"); }
#line 1403 "myParserPrintf_test_1.tab.c"
    break;

  case 8: /* program_element: constructor_decl  */
#line 146 "myParserPrintf_test_1.y"
                                               { printf("program_element -> constructor_decl\n"); }
#line 1409 "myParserPrintf_test_1.tab.c"
    break;

  case 9: /* program_element: destructor_decl  */
#line 147 "myParserPrintf_test_1.y"
                                               { printf("program_element -> destructor_decl\n"); }
#line 1415 "myParserPrintf_test_1.tab.c"
    break;

  case 10: /* program_element: field_decl  */
#line 148 "myParserPrintf_test_1.y"
                                               { printf("program_element -> field_decl\n"); }
#line 1421 "myParserPrintf_test_1.tab.c"
    break;

  case 11: /* program_element: class_decl  */
#line 149 "myParserPrintf_test_1.y"
                                               { printf("program_element -> class_decl\n"); }
#line 1427 "myParserPrintf_test_1.tab.c"
    break;

  case 12: /* standard_type: FLOAT_KW  */
#line 156 "myParserPrintf_test_1.y"
                            { printf("standard_type -> FLOAT_KW\n"); }
#line 1433 "myParserPrintf_test_1.tab.c"
    break;

  case 13: /* standard_type: DOUBLE_KW  */
#line 157 "myParserPrintf_test_1.y"
                            { printf("standard_type -> DOUBLE_KW\n"); }
#line 1439 "myParserPrintf_test_1.tab.c"
    break;

  case 14: /* standard_type: DECIMAL_KW  */
#line 158 "myParserPrintf_test_1.y"
                            { printf("standard_type -> DECIMAL_KW\n"); }
#line 1445 "myParserPrintf_test_1.tab.c"
    break;

  case 15: /* standard_type: BOOL_KW  */
#line 159 "myParserPrintf_test_1.y"
                            { printf("standard_type -> BOOL_KW\n"); }
#line 1451 "myParserPrintf_test_1.tab.c"
    break;

  case 16: /* standard_type: INT_KW  */
#line 160 "myParserPrintf_test_1.y"
                            { printf("standard_type -> INT_KW\n"); }
#line 1457 "myParserPrintf_test_1.tab.c"
    break;

  case 17: /* type: standard_type  */
#line 163 "myParserPrintf_test_1.y"
                        { printf("type -> standard_type\n"); }
#line 1463 "myParserPrintf_test_1.tab.c"
    break;

  case 18: /* type: class_name  */
#line 164 "myParserPrintf_test_1.y"
                        { printf("type -> class_name\n"); }
#line 1469 "myParserPrintf_test_1.tab.c"
    break;

  case 19: /* access_expr: '(' expr ')'  */
#line 171 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> ( expr )\n"); }
#line 1475 "myParserPrintf_test_1.tab.c"
    break;

  case 20: /* access_expr: INTEGER  */
#line 172 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> INTEGER\n"); }
#line 1481 "myParserPrintf_test_1.tab.c"
    break;

  case 21: /* access_expr: FLOATING_POINT  */
#line 173 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> FLOATING_POINT\n"); }
#line 1487 "myParserPrintf_test_1.tab.c"
    break;

  case 22: /* access_expr: FLOAT_LITERAL  */
#line 174 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> FLOAT_LITERAL\n"); }
#line 1493 "myParserPrintf_test_1.tab.c"
    break;

  case 23: /* access_expr: DECIMAL_LITERAL  */
#line 175 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> DECIMAL_LITERAL\n"); }
#line 1499 "myParserPrintf_test_1.tab.c"
    break;

  case 24: /* access_expr: TRUE_KW  */
#line 176 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> TRUE_KW\n"); }
#line 1505 "myParserPrintf_test_1.tab.c"
    break;

  case 25: /* access_expr: FALSE_KW  */
#line 177 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> FALSE_KW\n"); }
#line 1511 "myParserPrintf_test_1.tab.c"
    break;

  case 26: /* access_expr: NULL_KW  */
#line 178 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> NULL_KW\n"); }
#line 1517 "myParserPrintf_test_1.tab.c"
    break;

  case 27: /* access_expr: IDENTIFIER  */
#line 179 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> IDENTIFIER\n"); }
#line 1523 "myParserPrintf_test_1.tab.c"
    break;

  case 28: /* access_expr: access_expr '.' IDENTIFIER  */
#line 180 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> access_expr . IDENTIFIER\n"); }
#line 1529 "myParserPrintf_test_1.tab.c"
    break;

  case 29: /* access_expr: access_expr '.' IDENTIFIER '(' expr_seq_optional ')'  */
#line 181 "myParserPrintf_test_1.y"
                                                                  { printf("access_expr -> access_expr . IDENTIFIER ( expr_seq_optional )\n"); }
#line 1535 "myParserPrintf_test_1.tab.c"
    break;

  case 30: /* access_expr: interpolated_string  */
#line 182 "myParserPrintf_test_1.y"
                                                                 { printf("access_expr -> interpolated_string\n"); }
#line 1541 "myParserPrintf_test_1.tab.c"
    break;

  case 31: /* expr_seq: expr  */
#line 185 "myParserPrintf_test_1.y"
                                    { printf("expr_seq -> expr\n"); }
#line 1547 "myParserPrintf_test_1.tab.c"
    break;

  case 32: /* expr_seq: expr_seq ',' expr  */
#line 186 "myParserPrintf_test_1.y"
                                    { printf("expr_seq -> expr_seq , expr\n"); }
#line 1553 "myParserPrintf_test_1.tab.c"
    break;

  case 33: /* expr_seq_optional: %empty  */
#line 189 "myParserPrintf_test_1.y"
                                    { printf("expr_seq_optional -> empty\n"); }
#line 1559 "myParserPrintf_test_1.tab.c"
    break;

  case 34: /* expr_seq_optional: expr_seq  */
#line 190 "myParserPrintf_test_1.y"
                                    { printf("expr_seq_optional -> expr_seq\n"); }
#line 1565 "myParserPrintf_test_1.tab.c"
    break;

  case 35: /* expr: expr '+' expr  */
#line 193 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr + expr\n"); }
#line 1571 "myParserPrintf_test_1.tab.c"
    break;

  case 36: /* expr: expr '-' expr  */
#line 194 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr - expr\n"); }
#line 1577 "myParserPrintf_test_1.tab.c"
    break;

  case 37: /* expr: expr '*' expr  */
#line 195 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr * expr\n"); }
#line 1583 "myParserPrintf_test_1.tab.c"
    break;

  case 38: /* expr: expr '/' expr  */
#line 196 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr / expr\n"); }
#line 1589 "myParserPrintf_test_1.tab.c"
    break;

  case 39: /* expr: expr '%' expr  */
#line 197 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr %% expr\n"); }
#line 1595 "myParserPrintf_test_1.tab.c"
    break;

  case 40: /* expr: expr '=' expr  */
#line 198 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr = expr\n"); }
#line 1601 "myParserPrintf_test_1.tab.c"
    break;

  case 41: /* expr: expr PLUS_ASSIGN expr  */
#line 199 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr PLUS_ASSIGN expr\n"); }
#line 1607 "myParserPrintf_test_1.tab.c"
    break;

  case 42: /* expr: expr MINUS_ASSIGN expr  */
#line 200 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr MINUS_ASSIGN expr\n"); }
#line 1613 "myParserPrintf_test_1.tab.c"
    break;

  case 43: /* expr: expr MULTIPLY_ASSIGN expr  */
#line 201 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr MULTIPLY_ASSIGN expr\n"); }
#line 1619 "myParserPrintf_test_1.tab.c"
    break;

  case 44: /* expr: expr DIVISION_ASSIGN expr  */
#line 202 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr DIVISION_ASSIGN expr\n"); }
#line 1625 "myParserPrintf_test_1.tab.c"
    break;

  case 45: /* expr: expr '<' expr  */
#line 203 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr < expr\n"); }
#line 1631 "myParserPrintf_test_1.tab.c"
    break;

  case 46: /* expr: expr '>' expr  */
#line 204 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr > expr\n"); }
#line 1637 "myParserPrintf_test_1.tab.c"
    break;

  case 47: /* expr: expr EQUAL expr  */
#line 205 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr EQUAL expr\n"); }
#line 1643 "myParserPrintf_test_1.tab.c"
    break;

  case 48: /* expr: expr NOT_EQUAL expr  */
#line 206 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr NOT_EQUAL expr\n"); }
#line 1649 "myParserPrintf_test_1.tab.c"
    break;

  case 49: /* expr: expr LESS_OR_EQUAL expr  */
#line 207 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr LESS_OR_EQUAL expr\n"); }
#line 1655 "myParserPrintf_test_1.tab.c"
    break;

  case 50: /* expr: expr GREATER_OR_EQUAL expr  */
#line 208 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr GREATER_OR_EQUAL expr\n"); }
#line 1661 "myParserPrintf_test_1.tab.c"
    break;

  case 51: /* expr: expr AND expr  */
#line 209 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr AND expr\n"); }
#line 1667 "myParserPrintf_test_1.tab.c"
    break;

  case 52: /* expr: expr OR expr  */
#line 210 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr OR expr\n"); }
#line 1673 "myParserPrintf_test_1.tab.c"
    break;

  case 53: /* expr: expr BITWISE_AND expr  */
#line 211 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr BITWISE_AND expr\n"); }
#line 1679 "myParserPrintf_test_1.tab.c"
    break;

  case 54: /* expr: expr BITWISE_OR expr  */
#line 212 "myParserPrintf_test_1.y"
                                          { printf("expr -> expr BITWISE_OR expr\n"); }
#line 1685 "myParserPrintf_test_1.tab.c"
    break;

  case 55: /* expr: '!' expr  */
#line 213 "myParserPrintf_test_1.y"
                                          { printf("expr -> ! expr\n"); }
#line 1691 "myParserPrintf_test_1.tab.c"
    break;

  case 56: /* expr: INCREMENT expr  */
#line 214 "myParserPrintf_test_1.y"
                                          { printf("expr -> INCREMENT expr\n"); }
#line 1697 "myParserPrintf_test_1.tab.c"
    break;

  case 57: /* expr: DECREMENT expr  */
#line 215 "myParserPrintf_test_1.y"
                                          { printf("expr -> DECREMENT expr\n"); }
#line 1703 "myParserPrintf_test_1.tab.c"
    break;

  case 58: /* expr: '+' expr  */
#line 216 "myParserPrintf_test_1.y"
                                          { printf("expr -> + expr UNARY_PLUS\n"); }
#line 1709 "myParserPrintf_test_1.tab.c"
    break;

  case 59: /* expr: '-' expr  */
#line 217 "myParserPrintf_test_1.y"
                                          { printf("expr -> - expr UNARY_MINUS\n"); }
#line 1715 "myParserPrintf_test_1.tab.c"
    break;

  case 60: /* expr: access_expr  */
#line 218 "myParserPrintf_test_1.y"
                                          { printf("expr -> access_expr\n"); }
#line 1721 "myParserPrintf_test_1.tab.c"
    break;

  case 61: /* visibility_modifier: PUBLIC  */
#line 225 "myParserPrintf_test_1.y"
                                          { printf("visibility_modifier -> PUBLIC\n"); }
#line 1727 "myParserPrintf_test_1.tab.c"
    break;

  case 62: /* visibility_modifier: PROTECTED  */
#line 226 "myParserPrintf_test_1.y"
                                          { printf("visibility_modifier -> PROTECTED\n"); }
#line 1733 "myParserPrintf_test_1.tab.c"
    break;

  case 63: /* visibility_modifier: PRIVATE  */
#line 227 "myParserPrintf_test_1.y"
                                          { printf("visibility_modifier -> PRIVATE\n"); }
#line 1739 "myParserPrintf_test_1.tab.c"
    break;

  case 64: /* visibility_modifier: INTERNAL  */
#line 228 "myParserPrintf_test_1.y"
                                          { printf("visibility_modifier -> INTERNAL\n"); }
#line 1745 "myParserPrintf_test_1.tab.c"
    break;

  case 65: /* visibility_modifier: PROTECTED_INTERNAL  */
#line 229 "myParserPrintf_test_1.y"
                                          { printf("visibility_modifier -> PROTECTED_INTERNAL\n"); }
#line 1751 "myParserPrintf_test_1.tab.c"
    break;

  case 66: /* class_members: field_decl  */
#line 236 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> field_decl\n"); }
#line 1757 "myParserPrintf_test_1.tab.c"
    break;

  case 67: /* class_members: method_decl  */
#line 237 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> method_decl\n"); }
#line 1763 "myParserPrintf_test_1.tab.c"
    break;

  case 68: /* class_members: constructor_decl  */
#line 238 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> constructor_decl\n"); }
#line 1769 "myParserPrintf_test_1.tab.c"
    break;

  case 69: /* class_members: destructor_decl  */
#line 239 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> destructor_decl\n"); }
#line 1775 "myParserPrintf_test_1.tab.c"
    break;

  case 70: /* class_members: class_members field_decl  */
#line 240 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> class_members field_decl\n"); }
#line 1781 "myParserPrintf_test_1.tab.c"
    break;

  case 71: /* class_members: class_members method_decl  */
#line 241 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> class_members method_decl\n"); }
#line 1787 "myParserPrintf_test_1.tab.c"
    break;

  case 72: /* class_members: class_members constructor_decl  */
#line 242 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> class_members constructor_decl\n"); }
#line 1793 "myParserPrintf_test_1.tab.c"
    break;

  case 73: /* class_members: class_members destructor_decl  */
#line 243 "myParserPrintf_test_1.y"
                                                       { printf("class_members -> class_members destructor_decl\n"); }
#line 1799 "myParserPrintf_test_1.tab.c"
    break;

  case 74: /* class_members_optional: %empty  */
#line 246 "myParserPrintf_test_1.y"
                                          { printf("class_members_optional -> empty\n"); }
#line 1805 "myParserPrintf_test_1.tab.c"
    break;

  case 75: /* class_members_optional: class_members  */
#line 247 "myParserPrintf_test_1.y"
                                           { printf("class_members_optional -> class_members\n"); }
#line 1811 "myParserPrintf_test_1.tab.c"
    break;

  case 76: /* class_decl: visibility_modifier CLASS_KW class_name '{' class_members_optional '}'  */
#line 250 "myParserPrintf_test_1.y"
                                                                                   { printf("class_decl -> visibility_modifier CLASS_KW class_name\n"); }
#line 1817 "myParserPrintf_test_1.tab.c"
    break;

  case 77: /* struct_members: field_decl  */
#line 257 "myParserPrintf_test_1.y"
                                                        { printf("struct_members -> field_decl\n"); }
#line 1823 "myParserPrintf_test_1.tab.c"
    break;

  case 78: /* struct_members: method_decl  */
#line 258 "myParserPrintf_test_1.y"
                                                         { printf("struct_members -> method_decl\n"); }
#line 1829 "myParserPrintf_test_1.tab.c"
    break;

  case 79: /* struct_members: static_constructor_decl  */
#line 259 "myParserPrintf_test_1.y"
                                                         { printf("struct_members -> static_constructor_decl\n"); }
#line 1835 "myParserPrintf_test_1.tab.c"
    break;

  case 80: /* struct_members: struct_members field_decl  */
#line 260 "myParserPrintf_test_1.y"
                                                         { printf("struct_members -> struct_members field_decl\n"); }
#line 1841 "myParserPrintf_test_1.tab.c"
    break;

  case 81: /* struct_members: struct_members method_decl  */
#line 261 "myParserPrintf_test_1.y"
                                                         { printf("struct_members -> struct_members method_decl\n"); }
#line 1847 "myParserPrintf_test_1.tab.c"
    break;

  case 82: /* struct_members: struct_members static_constructor_decl  */
#line 262 "myParserPrintf_test_1.y"
                                                         { printf("struct_members -> struct_members static_constructor_decl\n"); }
#line 1853 "myParserPrintf_test_1.tab.c"
    break;

  case 83: /* struct_members_optional: %empty  */
#line 265 "myParserPrintf_test_1.y"
                                          { printf("struct_members_optional -> empty\n"); }
#line 1859 "myParserPrintf_test_1.tab.c"
    break;

  case 84: /* struct_members_optional: struct_members  */
#line 266 "myParserPrintf_test_1.y"
                                           { printf("struct_members_optional -> struct_members\n"); }
#line 1865 "myParserPrintf_test_1.tab.c"
    break;

  case 85: /* struct_decl: visibility_modifier STRUCT class_name '{' struct_members_optional '}'  */
#line 269 "myParserPrintf_test_1.y"
                                                                                   { printf("struct_decl -> visibility_modifier STRUCT class_name\n"); }
#line 1871 "myParserPrintf_test_1.tab.c"
    break;

  case 86: /* field_decl_optional_static: visibility_modifier var_decl ';'  */
#line 276 "myParserPrintf_test_1.y"
                                                             { printf("field_decl_optional_static -> visibility_modifier var_decl ;\n"); }
#line 1877 "myParserPrintf_test_1.tab.c"
    break;

  case 87: /* field_decl_optional_static: visibility_modifier STATIC var_decl ';'  */
#line 277 "myParserPrintf_test_1.y"
                                                                    { printf("field_decl_optional_static -> visibility_modifier STATIC var_decl ;\n"); }
#line 1883 "myParserPrintf_test_1.tab.c"
    break;

  case 88: /* field_decl: field_decl_optional_static  */
#line 280 "myParserPrintf_test_1.y"
                                       { printf("field_decl -> field_decl_optional_static\n"); }
#line 1889 "myParserPrintf_test_1.tab.c"
    break;

  case 89: /* method_arguments: var_decl  */
#line 287 "myParserPrintf_test_1.y"
                                               { printf("method_arguments -> var_decl\n"); }
#line 1895 "myParserPrintf_test_1.tab.c"
    break;

  case 90: /* method_arguments: method_arguments ',' var_decl  */
#line 288 "myParserPrintf_test_1.y"
                                                { printf("method_arguments -> method_arguments , var_decl\n"); }
#line 1901 "myParserPrintf_test_1.tab.c"
    break;

  case 91: /* method_arguments_optional: %empty  */
#line 291 "myParserPrintf_test_1.y"
                                              { printf("method_arguments_optional -> empty\n"); }
#line 1907 "myParserPrintf_test_1.tab.c"
    break;

  case 92: /* method_arguments_optional: method_arguments  */
#line 292 "myParserPrintf_test_1.y"
                                               { printf("method_arguments_optional -> method_arguments\n"); }
#line 1913 "myParserPrintf_test_1.tab.c"
    break;

  case 93: /* method_decl: visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 295 "myParserPrintf_test_1.y"
                                                                                                              { printf("method_decl -> visibility_modifier type method_name\n"); }
#line 1919 "myParserPrintf_test_1.tab.c"
    break;

  case 94: /* class_name: IDENTIFIER  */
#line 298 "myParserPrintf_test_1.y"
                       { printf("class_name -> IDENTIFIER\n"); }
#line 1925 "myParserPrintf_test_1.tab.c"
    break;

  case 95: /* method_name: IDENTIFIER  */
#line 301 "myParserPrintf_test_1.y"
                        { printf("method_name -> IDENTIFIER\n"); }
#line 1931 "myParserPrintf_test_1.tab.c"
    break;

  case 96: /* var_decl: type IDENTIFIER  */
#line 304 "myParserPrintf_test_1.y"
                              { printf("var_decl -> type IDENTIFIER\n"); }
#line 1937 "myParserPrintf_test_1.tab.c"
    break;

  case 97: /* constructor_decl: visibility_modifier class_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 311 "myParserPrintf_test_1.y"
                                                                                                             { printf("constructor_decl -> visibility_modifier class_name\n"); }
#line 1943 "myParserPrintf_test_1.tab.c"
    break;

  case 98: /* static_constructor_decl: STATIC class_name '(' ')' '{' stmt_seq_optional '}'  */
#line 314 "myParserPrintf_test_1.y"
                                                                             { printf("static_constructor_decl -> STATIC class_name\n"); }
#line 1949 "myParserPrintf_test_1.tab.c"
    break;

  case 99: /* destructor_decl: TILDE class_name '(' ')' '{' stmt_seq_optional '}'  */
#line 317 "myParserPrintf_test_1.y"
                                                                    { printf("destructor_decl -> TILDE class_name\n"); }
#line 1955 "myParserPrintf_test_1.tab.c"
    break;

  case 100: /* stmt: ';'  */
#line 324 "myParserPrintf_test_1.y"
                                    { printf("stmt -> ;\n"); }
#line 1961 "myParserPrintf_test_1.tab.c"
    break;

  case 101: /* stmt: expr ';'  */
#line 325 "myParserPrintf_test_1.y"
                                    { printf("stmt -> expr ;\n"); }
#line 1967 "myParserPrintf_test_1.tab.c"
    break;

  case 102: /* stmt: '{' stmt_seq_optional '}'  */
#line 326 "myParserPrintf_test_1.y"
                                    { printf("stmt -> { stmt_seq_optional }\n"); }
#line 1973 "myParserPrintf_test_1.tab.c"
    break;

  case 103: /* stmt_seq: stmt  */
#line 329 "myParserPrintf_test_1.y"
                            { printf("stmt_seq -> stmt\n"); }
#line 1979 "myParserPrintf_test_1.tab.c"
    break;

  case 104: /* stmt_seq: stmt_seq stmt  */
#line 330 "myParserPrintf_test_1.y"
                            { printf("stmt_seq -> stmt_seq stmt\n"); }
#line 1985 "myParserPrintf_test_1.tab.c"
    break;

  case 105: /* stmt_seq_optional: %empty  */
#line 333 "myParserPrintf_test_1.y"
                                     { printf("stmt_seq_optional -> empty\n"); }
#line 1991 "myParserPrintf_test_1.tab.c"
    break;

  case 106: /* stmt_seq_optional: stmt_seq  */
#line 334 "myParserPrintf_test_1.y"
                                     { printf("stmt_seq_optional -> stmt_seq\n"); }
#line 1997 "myParserPrintf_test_1.tab.c"
    break;

  case 107: /* enumerators: IDENTIFIER  */
#line 341 "myParserPrintf_test_1.y"
                                            { printf("enumerators -> IDENTIFIER\n"); }
#line 2003 "myParserPrintf_test_1.tab.c"
    break;

  case 108: /* enumerators: enumerators ',' IDENTIFIER  */
#line 342 "myParserPrintf_test_1.y"
                                            { printf("enumerators -> enumerators , IDENTIFIER\n"); }
#line 2009 "myParserPrintf_test_1.tab.c"
    break;

  case 109: /* enum_decl: visibility_modifier ENUM class_name '{' enumerators '}'  */
#line 345 "myParserPrintf_test_1.y"
                                                                   { printf("enum_decl -> visibility_modifier ENUM class_name\n"); }
#line 2015 "myParserPrintf_test_1.tab.c"
    break;

  case 110: /* interpolated_string: INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END  */
#line 352 "myParserPrintf_test_1.y"
                                                                                                   { printf("interpolated_string -> INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END\n"); }
#line 2021 "myParserPrintf_test_1.tab.c"
    break;

  case 111: /* interpolated_string_content: %empty  */
#line 355 "myParserPrintf_test_1.y"
                                                                   { printf("interpolated_string_content -> empty\n"); }
#line 2027 "myParserPrintf_test_1.tab.c"
    break;

  case 112: /* interpolated_string_content: INTERPOLATED_STRING_TEXT interpolated_string_content  */
#line 356 "myParserPrintf_test_1.y"
                                                                                 { printf("interpolated_string_content -> INTERPOLATED_STRING_TEXT interpolated_string_content\n"); }
#line 2033 "myParserPrintf_test_1.tab.c"
    break;

  case 113: /* interpolated_string_content: INTERPOLATED_STRING_EXPR expr interpolated_string_content  */
#line 357 "myParserPrintf_test_1.y"
                                                                                      { printf("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr interpolated_string_content\n"); }
#line 2039 "myParserPrintf_test_1.tab.c"
    break;


#line 2043 "myParserPrintf_test_1.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 360 "myParserPrintf_test_1.y"


int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Cannot open file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Enter C# code (Ctrl+D to end):\n");
        fflush(stdout); // Ensure prompt is displayed
    }

    int result = yyparse();
    
    if (result == 0) {
        printf("=== Parsing completed successfully! ===\n");
    } else {
        printf("=== Parsing failed with errors ===\n");
    }

    if (yyin != stdin && yyin != NULL) {
        fclose(yyin);
    }
    
    return result;
}
