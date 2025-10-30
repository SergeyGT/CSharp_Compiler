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
#line 1 "myParserPrintf.y"

#include <stdio.h>
#include <stdlib.h>

// Определения enum
enum StandardType { ST_FLOAT, ST_DOUBLE, ST_DECIMAL, ST_BOOL };
enum VisibilityModifier { VM_PUBLIC, VM_PROTECTED, VM_PRIVATE, VM_INTERNAL, VM_PROTECTED_INTERNAL };


extern int yylex(void);
extern FILE* yyin;

void yyerror(const char* s) {
	 fprintf(stderr, "Syntax Error: %s\n", s);
}

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


#line 110 "myParserPrintf.tab.c"

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

#include "myParserPrintf.tab.h"
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
  YYSYMBOL_NULL_KW = 14,                   /* NULL_KW  */
  YYSYMBOL_TRUE_KW = 15,                   /* TRUE_KW  */
  YYSYMBOL_FALSE_KW = 16,                  /* FALSE_KW  */
  YYSYMBOL_PUBLIC = 17,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 18,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 19,                   /* PRIVATE  */
  YYSYMBOL_INTERNAL = 20,                  /* INTERNAL  */
  YYSYMBOL_PROTECTED_INTERNAL = 21,        /* PROTECTED_INTERNAL  */
  YYSYMBOL_STATIC = 22,                    /* STATIC  */
  YYSYMBOL_STRUCT = 23,                    /* STRUCT  */
  YYSYMBOL_ENUM = 24,                      /* ENUM  */
  YYSYMBOL_TILDE = 25,                     /* TILDE  */
  YYSYMBOL_INTERPOLATED_STRING_START = 26, /* INTERPOLATED_STRING_START  */
  YYSYMBOL_INTERPOLATED_STRING_END = 27,   /* INTERPOLATED_STRING_END  */
  YYSYMBOL_INTERPOLATED_STRING_TEXT = 28,  /* INTERPOLATED_STRING_TEXT  */
  YYSYMBOL_INTERPOLATED_STRING_EXPR = 29,  /* INTERPOLATED_STRING_EXPR  */
  YYSYMBOL_INT_TYPE = 30,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 31,                /* FLOAT_TYPE  */
  YYSYMBOL_DOUBLE_TYPE = 32,               /* DOUBLE_TYPE  */
  YYSYMBOL_BOOL_TYPE = 33,                 /* BOOL_TYPE  */
  YYSYMBOL_CHAR_TYPE = 34,                 /* CHAR_TYPE  */
  YYSYMBOL_STRING_TYPE = 35,               /* STRING_TYPE  */
  YYSYMBOL_VOID = 36,                      /* VOID  */
  YYSYMBOL_CLASS = 37,                     /* CLASS  */
  YYSYMBOL_NEW = 38,                       /* NEW  */
  YYSYMBOL_THIS = 39,                      /* THIS  */
  YYSYMBOL_NAMESPACE = 40,                 /* NAMESPACE  */
  YYSYMBOL_IF = 41,                        /* IF  */
  YYSYMBOL_ELSE = 42,                      /* ELSE  */
  YYSYMBOL_WHILE = 43,                     /* WHILE  */
  YYSYMBOL_FOR = 44,                       /* FOR  */
  YYSYMBOL_RETURN = 45,                    /* RETURN  */
  YYSYMBOL_BREAK = 46,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 47,                  /* CONTINUE  */
  YYSYMBOL_CHAR_LITERAL = 48,              /* CHAR_LITERAL  */
  YYSYMBOL_BOOL_LITERAL_TRUE = 49,         /* BOOL_LITERAL_TRUE  */
  YYSYMBOL_BOOL_LITERAL_FALSE = 50,        /* BOOL_LITERAL_FALSE  */
  YYSYMBOL_INTEGER_LITERAL = 51,           /* INTEGER_LITERAL  */
  YYSYMBOL_DOUBLE_LITERAL = 52,            /* DOUBLE_LITERAL  */
  YYSYMBOL_LESS_EQUAL = 53,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 54,             /* GREATER_EQUAL  */
  YYSYMBOL_PLUS_ASSIGN = 55,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 56,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 57,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVISION_ASSIGN = 58,           /* DIVISION_ASSIGN  */
  YYSYMBOL_INCREMENT = 59,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 60,                 /* DECREMENT  */
  YYSYMBOL_LESS = 61,                      /* LESS  */
  YYSYMBOL_GREATER = 62,                   /* GREATER  */
  YYSYMBOL_EQUAL = 63,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 64,                 /* NOT_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 65,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 66,             /* LESS_OR_EQUAL  */
  YYSYMBOL_OR = 67,                        /* OR  */
  YYSYMBOL_AND = 68,                       /* AND  */
  YYSYMBOL_BITWISE_OR = 69,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 70,               /* BITWISE_AND  */
  YYSYMBOL_71_ = 71,                       /* '='  */
  YYSYMBOL_72_ = 72,                       /* '<'  */
  YYSYMBOL_73_ = 73,                       /* '>'  */
  YYSYMBOL_74_ = 74,                       /* '+'  */
  YYSYMBOL_75_ = 75,                       /* '-'  */
  YYSYMBOL_76_ = 76,                       /* '*'  */
  YYSYMBOL_77_ = 77,                       /* '/'  */
  YYSYMBOL_78_ = 78,                       /* '!'  */
  YYSYMBOL_UNARY_MINUS = 79,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 80,                /* UNARY_PLUS  */
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_82_ = 82,                       /* ']'  */
  YYSYMBOL_83_ = 83,                       /* '['  */
  YYSYMBOL_84_ = 84,                       /* '('  */
  YYSYMBOL_85_ = 85,                       /* ')'  */
  YYSYMBOL_86_ = 86,                       /* ','  */
  YYSYMBOL_87_ = 87,                       /* '{'  */
  YYSYMBOL_88_ = 88,                       /* '}'  */
  YYSYMBOL_89_ = 89,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_program = 91,                   /* program  */
  YYSYMBOL_program_element = 92,           /* program_element  */
  YYSYMBOL_standard_type = 93,             /* standard_type  */
  YYSYMBOL_access_expr = 94,               /* access_expr  */
  YYSYMBOL_expr_seq = 95,                  /* expr_seq  */
  YYSYMBOL_expr_seq_optional = 96,         /* expr_seq_optional  */
  YYSYMBOL_expr = 97,                      /* expr  */
  YYSYMBOL_visibility_modifier = 98,       /* visibility_modifier  */
  YYSYMBOL_constructor_decl = 99,          /* constructor_decl  */
  YYSYMBOL_static_constructor_decl = 100,  /* static_constructor_decl  */
  YYSYMBOL_destructor_decl = 101,          /* destructor_decl  */
  YYSYMBOL_class_name = 102,               /* class_name  */
  YYSYMBOL_method_arguments = 103,         /* method_arguments  */
  YYSYMBOL_method_arguments_optional = 104, /* method_arguments_optional  */
  YYSYMBOL_method_decl = 105,              /* method_decl  */
  YYSYMBOL_method_name = 106,              /* method_name  */
  YYSYMBOL_var_decl = 107,                 /* var_decl  */
  YYSYMBOL_type = 108,                     /* type  */
  YYSYMBOL_stmt = 109,                     /* stmt  */
  YYSYMBOL_stmt_seq = 110,                 /* stmt_seq  */
  YYSYMBOL_stmt_seq_optional = 111,        /* stmt_seq_optional  */
  YYSYMBOL_enumerators = 112,              /* enumerators  */
  YYSYMBOL_enum_decl = 113,                /* enum_decl  */
  YYSYMBOL_interpolated_string = 114,      /* interpolated_string  */
  YYSYMBOL_interpolated_string_content = 115, /* interpolated_string_content  */
  YYSYMBOL_struct_members = 116,           /* struct_members  */
  YYSYMBOL_field_decl = 117,               /* field_decl  */
  YYSYMBOL_struct_members_optional = 118,  /* struct_members_optional  */
  YYSYMBOL_struct_decl = 119               /* struct_decl  */
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
#define YYLAST   411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
       2,     2,     2,    78,     2,     2,     2,     2,     2,     2,
      84,    85,    76,    74,    86,    75,    81,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    89,
      72,    71,    73,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    83,     2,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,    88,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    79,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   144,   144,   145,   148,   149,   150,   151,   152,   153,
     154,   161,   162,   163,   164,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   180,   181,   184,   185,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   220,   221,   222,   223,
     224,   231,   234,   237,   240,   247,   248,   251,   252,   255,
     258,   261,   264,   265,   272,   273,   274,   277,   278,   281,
     282,   289,   290,   293,   300,   303,   304,   305,   312,   313,
     314,   315,   316,   317,   320,   323,   324,   327
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
  "NULL_KW", "TRUE_KW", "FALSE_KW", "PUBLIC", "PROTECTED", "PRIVATE",
  "INTERNAL", "PROTECTED_INTERNAL", "STATIC", "STRUCT", "ENUM", "TILDE",
  "INTERPOLATED_STRING_START", "INTERPOLATED_STRING_END",
  "INTERPOLATED_STRING_TEXT", "INTERPOLATED_STRING_EXPR", "INT_TYPE",
  "FLOAT_TYPE", "DOUBLE_TYPE", "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE",
  "VOID", "CLASS", "NEW", "THIS", "NAMESPACE", "IF", "ELSE", "WHILE",
  "FOR", "RETURN", "BREAK", "CONTINUE", "CHAR_LITERAL",
  "BOOL_LITERAL_TRUE", "BOOL_LITERAL_FALSE", "INTEGER_LITERAL",
  "DOUBLE_LITERAL", "LESS_EQUAL", "GREATER_EQUAL", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT",
  "DECREMENT", "LESS", "GREATER", "EQUAL", "NOT_EQUAL", "GREATER_OR_EQUAL",
  "LESS_OR_EQUAL", "OR", "AND", "BITWISE_OR", "BITWISE_AND", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'!'", "UNARY_MINUS", "UNARY_PLUS",
  "'.'", "']'", "'['", "'('", "')'", "','", "'{'", "'}'", "';'", "$accept",
  "program", "program_element", "standard_type", "access_expr", "expr_seq",
  "expr_seq_optional", "expr", "visibility_modifier", "constructor_decl",
  "static_constructor_decl", "destructor_decl", "class_name",
  "method_arguments", "method_arguments_optional", "method_decl",
  "method_name", "var_decl", "type", "stmt", "stmt_seq",
  "stmt_seq_optional", "enumerators", "enum_decl", "interpolated_string",
  "interpolated_string_content", "struct_members", "field_decl",
  "struct_members_optional", "struct_decl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     146,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,    -7,
    -108,  -108,  -108,  -108,    17,     9,   186,   186,   186,   186,
     186,   186,    99,  -108,    59,  -108,   -69,   284,   262,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,    17,    17,  -108,
     -57,     9,   186,     5,  -108,  -108,  -108,  -108,  -108,   311,
    -108,    99,   -53,  -108,  -108,    36,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,  -108,   -14,  -108,  -108,  -108,
    -108,  -108,   -69,   -13,   -17,    78,    -5,    -4,     1,  -108,
     252,  -108,  -108,  -108,  -108,     3,   334,   334,   334,   334,
     -52,   -52,   -52,   -52,   175,   175,   175,   175,   334,   -52,
     -52,   -10,   -10,  -108,  -108,   280,  -108,     0,     6,   109,
      88,     7,  -108,   186,    11,    13,  -108,    89,   280,  -108,
      17,   280,  -108,  -108,   109,  -108,     8,  -108,   -55,    99,
      14,    16,   334,   280,    25,  -108,    31,    33,  -108,  -108,
    -108,  -108,   117,  -108,    34,   186,  -108,  -108,    99,    37,
      38,  -108,  -108,   334,    44,    99,    48,  -108,    50,    99,
    -108,    52,  -108
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    16,    17,    18,    19,    54,    20,    21,    56,
      57,    58,    59,    60,     0,    85,     0,     0,     0,     0,
       0,     0,    79,    74,     0,     2,    55,     0,     0,     8,
       9,     7,     4,     6,    25,    10,     5,     0,     0,    64,
       0,    85,     0,     0,    50,    51,    52,    53,    49,     0,
      77,    80,     0,     1,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    22,    14,    11,    12,
      13,    72,    73,     0,     0,     0,     0,     0,     0,    86,
      85,    84,    15,    78,    76,    23,    35,    36,    37,    38,
      41,    42,    44,    43,    46,    45,    48,    47,    34,    39,
      40,    30,    31,    32,    33,    67,    94,    70,     0,    95,
       0,     0,    87,    28,    68,     0,    65,     0,    67,    56,
       0,     0,    90,    89,    96,    88,     0,    81,     0,    79,
      29,     0,    26,     0,     0,    71,     0,     0,    93,    92,
      91,    97,     0,    83,     0,     0,    24,    66,    79,     0,
       0,    82,    63,    27,     0,    79,     0,    61,     0,    79,
      69,     0,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -108,  -108,   112,  -108,   -22,  -108,  -108,   -16,  -106,  -108,
      19,  -108,   -19,  -108,    26,  -105,  -108,  -107,   -21,    10,
    -108,   -70,  -108,  -108,  -108,   -30,  -108,  -104,  -108,  -108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    24,    25,    81,    26,   140,   141,    27,    28,    29,
     132,    30,    40,   124,   125,    31,   118,    84,   127,    50,
      51,    52,   138,    33,    34,    43,   134,    35,   136,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    45,    46,    47,    48,    49,    82,    85,   126,    83,
      32,    89,    55,   131,   133,   135,    37,    38,    86,    87,
      39,   126,    71,    72,    73,    74,    90,    88,   131,   149,
     150,   152,    91,   153,    32,    94,   157,    41,    42,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    53,
     122,    93,     1,     2,     3,     4,    73,    74,     5,   154,
     -64,   115,   116,     6,     7,     8,     9,    10,    11,    12,
      13,   117,   119,   120,    14,    15,   121,   123,   164,   -71,
     128,   137,   145,    82,   139,   168,   151,   143,   144,   171,
     155,   156,     1,     2,     3,     4,    82,   142,     5,    82,
      85,   147,   158,     6,     7,     8,   159,   160,    16,    17,
     161,    82,   162,   166,   165,    15,   129,    10,    11,    12,
      13,   130,   167,    18,    19,   169,    54,    20,   170,   163,
     172,     0,     0,    21,     0,     0,    22,     0,    23,     1,
       2,     3,     4,   148,   146,     5,     0,     0,    16,    17,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,    14,    15,    18,    19,     0,     0,    20,     0,     0,
       0,     0,     0,    21,     0,     0,    22,     0,    23,     1,
       2,     3,     4,     0,     0,     5,     0,     0,     0,     0,
       6,     7,     8,     0,     0,    16,    17,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
      18,    19,     0,     0,    20,     0,     0,     0,     0,     0,
      21,     0,     0,    22,     0,    23,     0,     0,    60,    61,
      62,    63,     0,     0,     0,    16,    17,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
      18,    19,     0,     0,    20,    76,     2,     3,     4,     0,
      21,     5,    77,    78,    79,    80,     0,     7,     8,     0,
      41,    42,     0,     1,     2,     3,     4,     0,    15,     5,
      77,    78,    79,    80,     0,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    56,    57,    58,
      59,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,     0,     0,     0,    21,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     0,     0,    21,     0,    56,    57,    58,    59,
       0,     0,     0,    75,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    56,
      57,    58,    59,     0,     0,     0,    92,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    20,    21,    28,    28,   115,    28,
       0,    41,    81,   119,   119,   119,    23,    24,    37,    38,
       3,   128,    74,    75,    76,    77,    42,    84,   134,   134,
     134,    86,    27,    88,    24,    88,   143,    28,    29,     3,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     0,
      90,    51,     3,     4,     5,     6,    76,    77,     9,   139,
      84,    84,    89,    14,    15,    16,    17,    18,    19,    20,
      21,     3,    87,    87,    25,    26,    85,    84,   158,    89,
      84,     3,     3,   115,    87,   165,    88,    86,    85,   169,
      86,    85,     3,     4,     5,     6,   128,   123,     9,   131,
     131,   130,    87,    14,    15,    16,    85,    84,    59,    60,
       3,   143,    88,    85,    87,    26,    17,    18,    19,    20,
      21,    22,    88,    74,    75,    87,    24,    78,    88,   155,
      88,    -1,    -1,    84,    -1,    -1,    87,    -1,    89,     3,
       4,     5,     6,   134,   128,     9,    -1,    -1,    59,    60,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    26,    74,    75,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    89,     3,
       4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    -1,    89,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    59,    60,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    78,     3,     4,     5,     6,    -1,
      84,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      28,    29,    -1,     3,     4,     5,     6,    -1,    26,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    84,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    84,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    89,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    55,
      56,    57,    58,    -1,    -1,    -1,    85,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    14,    15,    16,    17,
      18,    19,    20,    21,    25,    26,    59,    60,    74,    75,
      78,    84,    87,    89,    91,    92,    94,    97,    98,    99,
     101,   105,   109,   113,   114,   117,   119,    23,    24,     3,
     102,    28,    29,   115,    97,    97,    97,    97,    97,    97,
     109,   110,   111,     0,    92,    81,    55,    56,    57,    58,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    89,     3,    10,    11,    12,
      13,    93,    94,   102,   107,   108,   102,   102,    84,   115,
      97,    27,    85,   109,    88,     3,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    84,    89,     3,   106,    87,
      87,    85,   115,    84,   103,   104,   107,   108,    84,    17,
      22,    98,   100,   105,   116,   117,   118,     3,   112,    87,
      95,    96,    97,    86,    85,     3,   104,   102,   100,   105,
     117,    88,    86,    88,   111,    86,    85,   107,    87,    85,
      84,     3,    88,    97,   111,    87,    85,    88,   111,    87,
      88,   111,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    99,   100,   101,   102,   103,   103,   104,   104,   105,
     106,   107,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   117,   118,   118,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     6,     1,     1,     3,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     8,     7,     7,     1,     1,     3,     0,     1,     9,
       1,     2,     1,     1,     1,     2,     3,     1,     2,     0,
       1,     1,     3,     6,     3,     0,     2,     3,     1,     1,
       1,     2,     2,     2,     3,     0,     1,     6
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
#line 148 "myParserPrintf.y"
                                                        { printf("program_element -> stmt\n"); }
#line 1396 "myParserPrintf.tab.c"
    break;

  case 5: /* program_element: struct_decl  */
#line 149 "myParserPrintf.y"
                                                            { printf("program_element -> struct_decl\n"); }
#line 1402 "myParserPrintf.tab.c"
    break;

  case 6: /* program_element: enum_decl  */
#line 150 "myParserPrintf.y"
                                                { printf("program_element -> enum_decl\n"); }
#line 1408 "myParserPrintf.tab.c"
    break;

  case 7: /* program_element: method_decl  */
#line 151 "myParserPrintf.y"
                                                { printf("program_element -> method_decl\n"); }
#line 1414 "myParserPrintf.tab.c"
    break;

  case 8: /* program_element: constructor_decl  */
#line 152 "myParserPrintf.y"
                                                { printf("program_element -> constructor_decl\n"); }
#line 1420 "myParserPrintf.tab.c"
    break;

  case 9: /* program_element: destructor_decl  */
#line 153 "myParserPrintf.y"
                                                { printf("program_element -> destructor_decl\n"); }
#line 1426 "myParserPrintf.tab.c"
    break;

  case 10: /* program_element: field_decl  */
#line 154 "myParserPrintf.y"
                                                { printf("program_element -> field_decl\n"); }
#line 1432 "myParserPrintf.tab.c"
    break;

  case 11: /* standard_type: FLOAT_KW  */
#line 161 "myParserPrintf.y"
                            { printf("standard_type -> FLOAT_KW\n"); }
#line 1438 "myParserPrintf.tab.c"
    break;

  case 12: /* standard_type: DOUBLE_KW  */
#line 162 "myParserPrintf.y"
                                        { printf("standard_type -> DOUBLE_KW\n"); }
#line 1444 "myParserPrintf.tab.c"
    break;

  case 13: /* standard_type: DECIMAL_KW  */
#line 163 "myParserPrintf.y"
                                        { printf("standard_type -> DECIMAL_KW\n"); }
#line 1450 "myParserPrintf.tab.c"
    break;

  case 14: /* standard_type: BOOL_KW  */
#line 164 "myParserPrintf.y"
                                        { printf("standard_type -> BOOL_KW\n"); }
#line 1456 "myParserPrintf.tab.c"
    break;

  case 15: /* access_expr: '(' expr ')'  */
#line 167 "myParserPrintf.y"
                                                                 { printf("access_expr -> ( expr )\n"); }
#line 1462 "myParserPrintf.tab.c"
    break;

  case 16: /* access_expr: INTEGER  */
#line 168 "myParserPrintf.y"
                                                                 { printf("access_expr -> INTEGER\n"); }
#line 1468 "myParserPrintf.tab.c"
    break;

  case 17: /* access_expr: FLOATING_POINT  */
#line 169 "myParserPrintf.y"
                                                                 { printf("access_expr -> FLOATING_POINT\n"); }
#line 1474 "myParserPrintf.tab.c"
    break;

  case 18: /* access_expr: FLOAT_LITERAL  */
#line 170 "myParserPrintf.y"
                                                                 { printf("access_expr -> FLOAT_LITERAL\n"); }
#line 1480 "myParserPrintf.tab.c"
    break;

  case 19: /* access_expr: DECIMAL_LITERAL  */
#line 171 "myParserPrintf.y"
                                                                 { printf("access_expr -> DECIMAL_LITERAL\n"); }
#line 1486 "myParserPrintf.tab.c"
    break;

  case 20: /* access_expr: TRUE_KW  */
#line 172 "myParserPrintf.y"
                                                                 { printf("access_expr -> TRUE_KW\n"); }
#line 1492 "myParserPrintf.tab.c"
    break;

  case 21: /* access_expr: FALSE_KW  */
#line 173 "myParserPrintf.y"
                                                                 { printf("access_expr -> FALSE_KW\n"); }
#line 1498 "myParserPrintf.tab.c"
    break;

  case 22: /* access_expr: IDENTIFIER  */
#line 174 "myParserPrintf.y"
                                                                 { printf("access_expr -> IDENTIFIER\n"); }
#line 1504 "myParserPrintf.tab.c"
    break;

  case 23: /* access_expr: access_expr '.' IDENTIFIER  */
#line 175 "myParserPrintf.y"
                                                                 { printf("access_expr -> access_expr . IDENTIFIER\n"); }
#line 1510 "myParserPrintf.tab.c"
    break;

  case 24: /* access_expr: access_expr '.' IDENTIFIER '(' expr_seq_optional ')'  */
#line 176 "myParserPrintf.y"
                                                                 { printf("access_expr -> access_expr . IDENTIFIER ( expr_seq_optional )\n"); }
#line 1516 "myParserPrintf.tab.c"
    break;

  case 25: /* access_expr: interpolated_string  */
#line 177 "myParserPrintf.y"
                                                                 { printf("access_expr -> interpolated_string\n"); }
#line 1522 "myParserPrintf.tab.c"
    break;

  case 26: /* expr_seq: expr  */
#line 180 "myParserPrintf.y"
                                    { printf("expr_seq -> expr\n"); }
#line 1528 "myParserPrintf.tab.c"
    break;

  case 27: /* expr_seq: expr_seq ',' expr  */
#line 181 "myParserPrintf.y"
                                    { printf("expr_seq -> expr_seq , expr\n"); }
#line 1534 "myParserPrintf.tab.c"
    break;

  case 28: /* expr_seq_optional: %empty  */
#line 184 "myParserPrintf.y"
                                             { printf("expr_seq_optional -> empty\n"); }
#line 1540 "myParserPrintf.tab.c"
    break;

  case 29: /* expr_seq_optional: expr_seq  */
#line 185 "myParserPrintf.y"
                                                             { printf("expr_seq_optional -> expr_seq\n"); }
#line 1546 "myParserPrintf.tab.c"
    break;

  case 30: /* expr: expr '+' expr  */
#line 188 "myParserPrintf.y"
                                          { printf("expr + expr\n"); }
#line 1552 "myParserPrintf.tab.c"
    break;

  case 31: /* expr: expr '-' expr  */
#line 189 "myParserPrintf.y"
                                          { printf("expr - expr\n"); }
#line 1558 "myParserPrintf.tab.c"
    break;

  case 32: /* expr: expr '*' expr  */
#line 190 "myParserPrintf.y"
                                          { printf("expr * expr\n"); }
#line 1564 "myParserPrintf.tab.c"
    break;

  case 33: /* expr: expr '/' expr  */
#line 191 "myParserPrintf.y"
                                          { printf("expr / expr\n"); }
#line 1570 "myParserPrintf.tab.c"
    break;

  case 34: /* expr: expr '=' expr  */
#line 192 "myParserPrintf.y"
                                          { printf("expr = expr\n"); }
#line 1576 "myParserPrintf.tab.c"
    break;

  case 35: /* expr: expr PLUS_ASSIGN expr  */
#line 193 "myParserPrintf.y"
                                          { printf("expr PLUS_ASSIGN expr\n"); }
#line 1582 "myParserPrintf.tab.c"
    break;

  case 36: /* expr: expr MINUS_ASSIGN expr  */
#line 194 "myParserPrintf.y"
                                          { printf("expr MINUS_ASSIGN expr\n"); }
#line 1588 "myParserPrintf.tab.c"
    break;

  case 37: /* expr: expr MULTIPLY_ASSIGN expr  */
#line 195 "myParserPrintf.y"
                                          { printf("expr MULTIPLY_ASSIGN expr\n"); }
#line 1594 "myParserPrintf.tab.c"
    break;

  case 38: /* expr: expr DIVISION_ASSIGN expr  */
#line 196 "myParserPrintf.y"
                                          { printf("expr DIVISION_ASSIGN expr\n"); }
#line 1600 "myParserPrintf.tab.c"
    break;

  case 39: /* expr: expr '<' expr  */
#line 197 "myParserPrintf.y"
                                          { printf("expr < expr\n"); }
#line 1606 "myParserPrintf.tab.c"
    break;

  case 40: /* expr: expr '>' expr  */
#line 198 "myParserPrintf.y"
                                          { printf("expr > expr\n"); }
#line 1612 "myParserPrintf.tab.c"
    break;

  case 41: /* expr: expr EQUAL expr  */
#line 199 "myParserPrintf.y"
                                          { printf("expr EQUAL expr\n"); }
#line 1618 "myParserPrintf.tab.c"
    break;

  case 42: /* expr: expr NOT_EQUAL expr  */
#line 200 "myParserPrintf.y"
                                          { printf("expr NOT_EQUAL expr\n"); }
#line 1624 "myParserPrintf.tab.c"
    break;

  case 43: /* expr: expr LESS_OR_EQUAL expr  */
#line 201 "myParserPrintf.y"
                                          { printf("expr LESS_OR_EQUAL expr\n"); }
#line 1630 "myParserPrintf.tab.c"
    break;

  case 44: /* expr: expr GREATER_OR_EQUAL expr  */
#line 202 "myParserPrintf.y"
                                          { printf("expr GREATER_OR_EQUAL expr\n"); }
#line 1636 "myParserPrintf.tab.c"
    break;

  case 45: /* expr: expr AND expr  */
#line 203 "myParserPrintf.y"
                                          { printf("expr AND expr\n"); }
#line 1642 "myParserPrintf.tab.c"
    break;

  case 46: /* expr: expr OR expr  */
#line 204 "myParserPrintf.y"
                                          { printf("expr OR expr\n"); }
#line 1648 "myParserPrintf.tab.c"
    break;

  case 47: /* expr: expr BITWISE_AND expr  */
#line 205 "myParserPrintf.y"
                                          { printf("expr BITWISE_AND expr\n"); }
#line 1654 "myParserPrintf.tab.c"
    break;

  case 48: /* expr: expr BITWISE_OR expr  */
#line 206 "myParserPrintf.y"
                                          { printf("expr BITWISE_OR expr\n"); }
#line 1660 "myParserPrintf.tab.c"
    break;

  case 49: /* expr: '!' expr  */
#line 207 "myParserPrintf.y"
                                          { printf(" ! expr\n"); }
#line 1666 "myParserPrintf.tab.c"
    break;

  case 50: /* expr: INCREMENT expr  */
#line 208 "myParserPrintf.y"
                                          { printf("INCREMENT expr\n"); }
#line 1672 "myParserPrintf.tab.c"
    break;

  case 51: /* expr: DECREMENT expr  */
#line 209 "myParserPrintf.y"
                                          { printf("DECREMENT expr\n"); }
#line 1678 "myParserPrintf.tab.c"
    break;

  case 52: /* expr: '+' expr  */
#line 210 "myParserPrintf.y"
                                          { printf("+ expr UNARY_PLUS\n"); }
#line 1684 "myParserPrintf.tab.c"
    break;

  case 53: /* expr: '-' expr  */
#line 211 "myParserPrintf.y"
                                          { printf("- expr UNARY_MINUS\n"); }
#line 1690 "myParserPrintf.tab.c"
    break;

  case 54: /* expr: NULL_KW  */
#line 212 "myParserPrintf.y"
                                          { printf("NULL_KW\n"); }
#line 1696 "myParserPrintf.tab.c"
    break;

  case 55: /* expr: access_expr  */
#line 213 "myParserPrintf.y"
                                          { printf("access_expr\n"); }
#line 1702 "myParserPrintf.tab.c"
    break;

  case 56: /* visibility_modifier: PUBLIC  */
#line 220 "myParserPrintf.y"
                                          { printf("visibility_modifier -> PUBLIC\n"); }
#line 1708 "myParserPrintf.tab.c"
    break;

  case 57: /* visibility_modifier: PROTECTED  */
#line 221 "myParserPrintf.y"
                                                          { printf("visibility_modifier -> PROTECTED\n"); }
#line 1714 "myParserPrintf.tab.c"
    break;

  case 58: /* visibility_modifier: PRIVATE  */
#line 222 "myParserPrintf.y"
                                                          { printf("visibility_modifier -> PRIVATE\n"); }
#line 1720 "myParserPrintf.tab.c"
    break;

  case 59: /* visibility_modifier: INTERNAL  */
#line 223 "myParserPrintf.y"
                                                          { printf("visibility_modifier -> INTERNAL\n"); }
#line 1726 "myParserPrintf.tab.c"
    break;

  case 60: /* visibility_modifier: PROTECTED_INTERNAL  */
#line 224 "myParserPrintf.y"
                                                          { printf("visibility_modifier -> PROTECTED_INTERNAL\n"); }
#line 1732 "myParserPrintf.tab.c"
    break;

  case 61: /* constructor_decl: visibility_modifier class_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 231 "myParserPrintf.y"
                                                                                                                { printf("constructor_decl -> visibility_modifier class_name\n"); }
#line 1738 "myParserPrintf.tab.c"
    break;

  case 62: /* static_constructor_decl: STATIC class_name '(' ')' '{' stmt_seq_optional '}'  */
#line 234 "myParserPrintf.y"
                                                                                { printf("static_constructor_decl -> STATIC class_name\n"); }
#line 1744 "myParserPrintf.tab.c"
    break;

  case 63: /* destructor_decl: TILDE class_name '(' ')' '{' stmt_seq_optional '}'  */
#line 237 "myParserPrintf.y"
                                                                                        { printf("destructor_decl -> TILDE class_name\n"); }
#line 1750 "myParserPrintf.tab.c"
    break;

  case 64: /* class_name: IDENTIFIER  */
#line 240 "myParserPrintf.y"
                           { printf("class_name -> IDENTIFIER\n"); }
#line 1756 "myParserPrintf.tab.c"
    break;

  case 65: /* method_arguments: var_decl  */
#line 247 "myParserPrintf.y"
                                                          { printf("method_arguments -> var_decl\n"); }
#line 1762 "myParserPrintf.tab.c"
    break;

  case 66: /* method_arguments: method_arguments ',' var_decl  */
#line 248 "myParserPrintf.y"
                                                                  { printf("method_arguments -> method_arguments , var_decl\n"); }
#line 1768 "myParserPrintf.tab.c"
    break;

  case 67: /* method_arguments_optional: %empty  */
#line 251 "myParserPrintf.y"
                                                             { printf("method_arguments_optional -> empty\n"); }
#line 1774 "myParserPrintf.tab.c"
    break;

  case 68: /* method_arguments_optional: method_arguments  */
#line 252 "myParserPrintf.y"
                                                                                     { printf("method_arguments_optional -> method_arguments\n"); }
#line 1780 "myParserPrintf.tab.c"
    break;

  case 69: /* method_decl: visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 255 "myParserPrintf.y"
                                                                                                                { printf("method_decl -> visibility_modifier type method_name\n"); }
#line 1786 "myParserPrintf.tab.c"
    break;

  case 70: /* method_name: IDENTIFIER  */
#line 258 "myParserPrintf.y"
                           { printf("method_name -> IDENTIFIER\n"); }
#line 1792 "myParserPrintf.tab.c"
    break;

  case 71: /* var_decl: type IDENTIFIER  */
#line 261 "myParserPrintf.y"
                              { printf("var_decl -> type IDENTIFIER\n"); }
#line 1798 "myParserPrintf.tab.c"
    break;

  case 72: /* type: standard_type  */
#line 264 "myParserPrintf.y"
                        { printf("type -> standard_type\n"); }
#line 1804 "myParserPrintf.tab.c"
    break;

  case 73: /* type: access_expr  */
#line 265 "myParserPrintf.y"
                        { printf("type -> access_expr\n"); }
#line 1810 "myParserPrintf.tab.c"
    break;

  case 74: /* stmt: ';'  */
#line 272 "myParserPrintf.y"
                                    { printf("stmt -> ;\n"); }
#line 1816 "myParserPrintf.tab.c"
    break;

  case 75: /* stmt: expr ';'  */
#line 273 "myParserPrintf.y"
                                    { printf("stmt -> expr ;\n"); }
#line 1822 "myParserPrintf.tab.c"
    break;

  case 76: /* stmt: '{' stmt_seq_optional '}'  */
#line 274 "myParserPrintf.y"
                                    { printf("stmt -> { stmt_seq_optional }\n"); }
#line 1828 "myParserPrintf.tab.c"
    break;

  case 77: /* stmt_seq: stmt  */
#line 277 "myParserPrintf.y"
                            { printf("stmt_seq -> stmt\n"); }
#line 1834 "myParserPrintf.tab.c"
    break;

  case 78: /* stmt_seq: stmt_seq stmt  */
#line 278 "myParserPrintf.y"
                            { printf("stmt_seq -> stmt_seq stmt\n"); }
#line 1840 "myParserPrintf.tab.c"
    break;

  case 79: /* stmt_seq_optional: %empty  */
#line 281 "myParserPrintf.y"
                                     { printf("stmt_seq_optional -> empty\n"); }
#line 1846 "myParserPrintf.tab.c"
    break;

  case 80: /* stmt_seq_optional: stmt_seq  */
#line 282 "myParserPrintf.y"
                                     { printf("stmt_seq_optional -> stmt_seq\n"); }
#line 1852 "myParserPrintf.tab.c"
    break;

  case 81: /* enumerators: IDENTIFIER  */
#line 289 "myParserPrintf.y"
                                            { printf("enumerators -> IDENTIFIER\n"); }
#line 1858 "myParserPrintf.tab.c"
    break;

  case 82: /* enumerators: enumerators ',' IDENTIFIER  */
#line 290 "myParserPrintf.y"
                                            { printf("enumerators -> enumerators , IDENTIFIER\n"); }
#line 1864 "myParserPrintf.tab.c"
    break;

  case 83: /* enum_decl: PUBLIC ENUM class_name '{' enumerators '}'  */
#line 293 "myParserPrintf.y"
                                                        { printf("enum_decl -> PUBLIC ENUM class_name\n"); }
#line 1870 "myParserPrintf.tab.c"
    break;

  case 84: /* interpolated_string: INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END  */
#line 300 "myParserPrintf.y"
                                                                                                        { printf("interpolated_string -> INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END\n"); }
#line 1876 "myParserPrintf.tab.c"
    break;

  case 85: /* interpolated_string_content: %empty  */
#line 303 "myParserPrintf.y"
                                                                                                                                        { printf("interpolated_string_content -> empty\n"); }
#line 1882 "myParserPrintf.tab.c"
    break;

  case 86: /* interpolated_string_content: INTERPOLATED_STRING_TEXT interpolated_string_content  */
#line 304 "myParserPrintf.y"
                                                                                                                        { printf("interpolated_string_content -> INTERPOLATED_STRING_TEXT interpolated_string_content\n"); }
#line 1888 "myParserPrintf.tab.c"
    break;

  case 87: /* interpolated_string_content: INTERPOLATED_STRING_EXPR expr interpolated_string_content  */
#line 305 "myParserPrintf.y"
                                                                                                                        { printf("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr interpolated_string_content\n"); }
#line 1894 "myParserPrintf.tab.c"
    break;

  case 88: /* struct_members: field_decl  */
#line 312 "myParserPrintf.y"
                                                        { printf("struct_members -> field_decl\n"); }
#line 1900 "myParserPrintf.tab.c"
    break;

  case 89: /* struct_members: method_decl  */
#line 313 "myParserPrintf.y"
                                                                    { printf("struct_members -> method_decl\n"); }
#line 1906 "myParserPrintf.tab.c"
    break;

  case 90: /* struct_members: static_constructor_decl  */
#line 314 "myParserPrintf.y"
                                                                { printf("struct_members -> static_constructor_decl\n"); }
#line 1912 "myParserPrintf.tab.c"
    break;

  case 91: /* struct_members: struct_members field_decl  */
#line 315 "myParserPrintf.y"
                                                                { printf("struct_members -> struct_members field_decl\n"); }
#line 1918 "myParserPrintf.tab.c"
    break;

  case 92: /* struct_members: struct_members method_decl  */
#line 316 "myParserPrintf.y"
                                                        { printf("struct_members -> struct_members method_decl\n"); }
#line 1924 "myParserPrintf.tab.c"
    break;

  case 93: /* struct_members: struct_members static_constructor_decl  */
#line 317 "myParserPrintf.y"
                                                        { printf("struct_members -> struct_members static_constructor_decl\n"); }
#line 1930 "myParserPrintf.tab.c"
    break;

  case 94: /* field_decl: visibility_modifier var_decl ';'  */
#line 320 "myParserPrintf.y"
                                             { printf("field_decl -> visibility_modifier var_decl ;\n"); }
#line 1936 "myParserPrintf.tab.c"
    break;

  case 95: /* struct_members_optional: %empty  */
#line 323 "myParserPrintf.y"
                                               { printf("struct_members_optional -> empty\n"); }
#line 1942 "myParserPrintf.tab.c"
    break;

  case 96: /* struct_members_optional: struct_members  */
#line 324 "myParserPrintf.y"
                                                                   { printf("struct_members_optional -> struct_members\n"); }
#line 1948 "myParserPrintf.tab.c"
    break;

  case 97: /* struct_decl: PUBLIC STRUCT class_name '{' struct_members_optional '}'  */
#line 327 "myParserPrintf.y"
                                                                        { printf("struct_decl -> PUBLIC STRUCT class_name\n"); }
#line 1954 "myParserPrintf.tab.c"
    break;


#line 1958 "myParserPrintf.tab.c"

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

#line 330 "myParserPrintf.y"


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
