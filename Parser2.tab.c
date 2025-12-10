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

#line 101 "Parser2.tab.c"

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

#include "Parser2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EQUAL = 3,                      /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 4,                  /* NOT_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 5,           /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 6,              /* LESS_OR_EQUAL  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_AND = 8,                        /* AND  */
  YYSYMBOL_PLUS_ASSIGN = 9,                /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 10,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 11,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVISION_ASSIGN = 12,           /* DIVISION_ASSIGN  */
  YYSYMBOL_INCREMENT = 13,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 14,                 /* DECREMENT  */
  YYSYMBOL_IDENTIFIER = 15,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 16,                   /* INTEGER  */
  YYSYMBOL_FLOATING_POINT = 17,            /* FLOATING_POINT  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_CHARACTER = 19,                 /* CHARACTER  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_CHAR_KW = 26,                   /* CHAR_KW  */
  YYSYMBOL_INT_KW = 27,                    /* INT_KW  */
  YYSYMBOL_STRING_KW = 28,                 /* STRING_KW  */
  YYSYMBOL_BOOL_KW = 29,                   /* BOOL_KW  */
  YYSYMBOL_FLOAT_KW = 30,                  /* FLOAT_KW  */
  YYSYMBOL_VOID_KW = 31,                   /* VOID_KW  */
  YYSYMBOL_NEW = 32,                       /* NEW  */
  YYSYMBOL_NULL_KW = 33,                   /* NULL_KW  */
  YYSYMBOL_TRUE_KW = 34,                   /* TRUE_KW  */
  YYSYMBOL_FALSE_KW = 35,                  /* FALSE_KW  */
  YYSYMBOL_PUBLIC = 36,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 37,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 38,                   /* PRIVATE  */
  YYSYMBOL_STATIC = 39,                    /* STATIC  */
  YYSYMBOL_CLASS = 40,                     /* CLASS  */
  YYSYMBOL_STRUCT = 41,                    /* STRUCT  */
  YYSYMBOL_ENUM = 42,                      /* ENUM  */
  YYSYMBOL_USING = 43,                     /* USING  */
  YYSYMBOL_NAMESPACE = 44,                 /* NAMESPACE  */
  YYSYMBOL_FOREACH = 45,                   /* FOREACH  */
  YYSYMBOL_IN_KW = 46,                     /* IN_KW  */
  YYSYMBOL_OBJECT = 47,                    /* OBJECT  */
  YYSYMBOL_OPERATOR = 48,                  /* OPERATOR  */
  YYSYMBOL_VAR = 49,                       /* VAR  */
  YYSYMBOL_INTERFACE = 50,                 /* INTERFACE  */
  YYSYMBOL_TILDE = 51,                     /* TILDE  */
  YYSYMBOL_INTERNAL = 52,                  /* INTERNAL  */
  YYSYMBOL_PROTECTED_INTERNAL = 53,        /* PROTECTED_INTERNAL  */
  YYSYMBOL_54_ = 54,                       /* '='  */
  YYSYMBOL_55_ = 55,                       /* '<'  */
  YYSYMBOL_56_ = 56,                       /* '>'  */
  YYSYMBOL_57_ = 57,                       /* '+'  */
  YYSYMBOL_58_ = 58,                       /* '-'  */
  YYSYMBOL_59_ = 59,                       /* '*'  */
  YYSYMBOL_60_ = 60,                       /* '/'  */
  YYSYMBOL_61_ = 61,                       /* '!'  */
  YYSYMBOL_UNARY_MINUS = 62,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 63,                /* UNARY_PLUS  */
  YYSYMBOL_64_ = 64,                       /* '.'  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '['  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* ';'  */
  YYSYMBOL_72_ = 72,                       /* ':'  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_program = 75,                   /* program  */
  YYSYMBOL_namespace_members = 76,         /* namespace_members  */
  YYSYMBOL_namespace_members_optional = 77, /* namespace_members_optional  */
  YYSYMBOL_namespace_decl = 78,            /* namespace_decl  */
  YYSYMBOL_namespace_decl_seq = 79,        /* namespace_decl_seq  */
  YYSYMBOL_using_arg = 80,                 /* using_arg  */
  YYSYMBOL_using_directive = 81,           /* using_directive  */
  YYSYMBOL_using_directives = 82,          /* using_directives  */
  YYSYMBOL_using_directives_optional = 83, /* using_directives_optional  */
  YYSYMBOL_standard_type = 84,             /* standard_type  */
  YYSYMBOL_standard_array_type = 85,       /* standard_array_type  */
  YYSYMBOL_type = 86,                      /* type  */
  YYSYMBOL_class_decl = 87,                /* class_decl  */
  YYSYMBOL_class_members = 88,             /* class_members  */
  YYSYMBOL_class_members_optional = 89,    /* class_members_optional  */
  YYSYMBOL_struct_decl = 90,               /* struct_decl  */
  YYSYMBOL_struct_members = 91,            /* struct_members  */
  YYSYMBOL_struct_members_optional = 92,   /* struct_members_optional  */
  YYSYMBOL_interface_decl = 93,            /* interface_decl  */
  YYSYMBOL_interface_member = 94,          /* interface_member  */
  YYSYMBOL_interface_members = 95,         /* interface_members  */
  YYSYMBOL_interface_members_optional = 96, /* interface_members_optional  */
  YYSYMBOL_enumerators = 97,               /* enumerators  */
  YYSYMBOL_enum_decl = 98,                 /* enum_decl  */
  YYSYMBOL_visibility_modifier = 99,       /* visibility_modifier  */
  YYSYMBOL_field_decl = 100,               /* field_decl  */
  YYSYMBOL_var_decl = 101,                 /* var_decl  */
  YYSYMBOL_var_decl_with_init = 102,       /* var_decl_with_init  */
  YYSYMBOL_method_decl = 103,              /* method_decl  */
  YYSYMBOL_method_arguments = 104,         /* method_arguments  */
  YYSYMBOL_method_arguments_optional = 105, /* method_arguments_optional  */
  YYSYMBOL_operator_overload = 106,        /* operator_overload  */
  YYSYMBOL_constructor_decl = 107,         /* constructor_decl  */
  YYSYMBOL_destructor_decl = 108,          /* destructor_decl  */
  YYSYMBOL_stmt = 109,                     /* stmt  */
  YYSYMBOL_stmt_seq = 110,                 /* stmt_seq  */
  YYSYMBOL_stmt_seq_optional = 111,        /* stmt_seq_optional  */
  YYSYMBOL_while_stmt = 112,               /* while_stmt  */
  YYSYMBOL_do_while_stmt = 113,            /* do_while_stmt  */
  YYSYMBOL_for_stmt = 114,                 /* for_stmt  */
  YYSYMBOL_if_stmt = 115,                  /* if_stmt  */
  YYSYMBOL_foreach_stmt = 116,             /* foreach_stmt  */
  YYSYMBOL_access_expr = 117,              /* access_expr  */
  YYSYMBOL_expr = 118,                     /* expr  */
  YYSYMBOL_expr_optional = 119,            /* expr_optional  */
  YYSYMBOL_expr_seq = 120,                 /* expr_seq  */
  YYSYMBOL_expr_seq_optional = 121         /* expr_seq_optional  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  497

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
       2,     2,     2,    61,     2,     2,     2,     2,     2,     2,
      67,    68,    59,    57,    73,    58,    64,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    71,
      55,    54,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    62,
      63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   198,   198,   200,   207,   208,   209,   210,   211,   212,
     213,   214,   217,   218,   221,   224,   225,   229,   230,   233,
     236,   237,   240,   241,   250,   251,   252,   253,   254,   257,
     258,   261,   262,   263,   273,   274,   275,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   290,   291,   300,
     301,   305,   306,   307,   308,   309,   310,   311,   312,   316,
     317,   324,   327,   328,   331,   332,   335,   336,   344,   345,
     348,   358,   359,   360,   361,   362,   370,   371,   373,   374,
     376,   377,   386,   387,   388,   389,   390,   391,   395,   396,
     398,   399,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   425,   426,   429,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   450,   451,   453,   454,   457,   459,   462,   463,   464,
     467,   468,   471,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   527,   528,   531,   532,   535,
     536
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
  "\"end of file\"", "error", "\"invalid token\"", "EQUAL", "NOT_EQUAL",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "OR", "AND", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT",
  "DECREMENT", "IDENTIFIER", "INTEGER", "FLOATING_POINT", "STRING",
  "CHARACTER", "RETURN", "IF", "ELSE", "WHILE", "DO", "FOR", "CHAR_KW",
  "INT_KW", "STRING_KW", "BOOL_KW", "FLOAT_KW", "VOID_KW", "NEW",
  "NULL_KW", "TRUE_KW", "FALSE_KW", "PUBLIC", "PROTECTED", "PRIVATE",
  "STATIC", "CLASS", "STRUCT", "ENUM", "USING", "NAMESPACE", "FOREACH",
  "IN_KW", "OBJECT", "OPERATOR", "VAR", "INTERFACE", "TILDE", "INTERNAL",
  "PROTECTED_INTERNAL", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'!'", "UNARY_MINUS", "UNARY_PLUS", "'.'", "']'", "'['", "'('", "')'",
  "'{'", "'}'", "';'", "':'", "','", "$accept", "program",
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
  "expr_optional", "expr_seq", "expr_seq_optional", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-325)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      63,    -1,    18,  -325,   -17,    11,  -325,   -52,  -325,  -325,
      51,  -325,    11,    54,  -325,    21,  -325,  -325,   -20,    70,
      78,   -20,    43,  -325,  -325,  -325,  -325,   100,   106,   118,
     130,    92,  -325,  -325,  -325,  -325,  -325,   -25,   102,   105,
     114,   272,   272,    -4,   272,   139,   365,  -325,  -325,  -325,
     219,   160,  -325,  -325,   272,   123,  1146,   113,  -325,  -325,
    -325,   272,   127,  1172,  -325,  -325,  -325,  -325,  -325,   133,
     -19,   138,  -325,   -22,   125,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,   185,  -325,  -325,  1125,   147,   148,
     202,  -325,   365,   149,     1,  1029,   165,   162,  -325,  -325,
    -325,  -325,   168,   221,  1199,   229,   230,   177,   178,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  1199,   272,   272,  -325,
    -325,   235,  1125,   184,  1125,  1125,   212,  -325,  1125,  1125,
    1125,  1059,     1,   131,   188,   189,   213,  -325,  -325,   266,
     287,   267,   268,   220,  -325,   948,   222,   275,   276,   238,
     -26,  -325,  -325,    -8,   226,   227,  -325,   944,   234,   231,
    1225,  -325,  -325,   247,   249,   248,  -325,  -325,  -325,   250,
    1125,  1125,  1125,  1125,  1125,  1125,  1125,  1125,  1125,  1125,
    1125,  1125,  1125,  1125,  1125,  1125,  1125,  -325,  -325,  -325,
    1225,   261,  -325,   810,   270,   282,   264,   301,   265,   324,
    -325,    -9,   -10,  1225,   283,   284,  1125,  1125,  1225,    91,
    -325,  -325,  1125,  -325,   280,   289,   274,  1089,  1125,  1125,
     166,   166,   166,   166,    19,   122,   944,   944,   944,   944,
     944,   166,   166,   104,   104,  -325,  -325,   290,  1125,  -325,
    1225,  1225,   875,  -325,   875,  -325,   286,  1225,   291,  1225,
    1225,   944,   944,   292,   297,   299,   302,   303,   305,   306,
     307,   308,   309,   310,   311,   312,   319,   944,   316,  1125,
     822,   318,  -325,   326,   321,   322,   333,  1125,   335,   341,
     875,   342,   345,   875,  -325,   353,   343,   347,  -325,   875,
     349,  -325,  -325,  -325,  -325,  -325,    27,   351,   875,  -325,
     355,   357,   362,   364,  1225,  1225,  1225,  1225,  1225,  1225,
    1225,  1225,  1225,  1225,  1225,  1225,  1225,  -325,   361,  -325,
    -325,  -325,  -325,   371,   372,   944,   363,  1125,  1125,   419,
    1004,  1225,   374,   392,  -325,  -325,  -325,  -325,  -325,  -325,
     377,   875,   379,   381,   875,   378,   380,   382,   384,   386,
     390,   388,   389,    -5,    85,   391,   394,   395,  -325,   875,
     875,  -325,   522,   657,   385,   415,   416,   418,   413,  -325,
    -325,   396,   875,   875,   421,  1225,  1225,  1225,  1225,   423,
     424,  1225,  1225,   425,  1225,   426,  1225,  1225,  1225,   427,
     428,   429,   875,   875,  1125,  1125,  1125,  1125,  1125,  -325,
     430,   431,  -325,   397,   434,   438,   439,   875,   875,   443,
     444,   875,   445,   875,   446,   450,   452,   875,  -325,  -325,
     499,  -325,   728,   451,   453,   464,   744,  -325,  -325,   454,
     468,   470,   473,   474,   475,   477,   479,   481,   483,   484,
     486,   487,   488,   489,   875,   472,  1125,  1125,  1125,   875,
     875,   875,   875,   875,  -325,  -325,   875,   875,  -325,   875,
    -325,   875,   875,   875,  -325,  -325,  -325,   490,   492,   493,
    -325,   494,   495,   496,   498,   500,   501,   502,   503,   504,
     514,   875,   875,   875,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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
       0,     0,    68,     0,   142,   136,   137,   138,   139,    24,
      25,    28,    26,    27,     0,   140,   141,     0,    31,    32,
       0,    64,    67,     0,    33,     0,     0,     0,    56,    57,
      58,    50,   142,     0,     0,     0,     0,     0,     0,    51,
      43,    42,    44,    45,    46,    34,     0,    47,    47,    49,
      70,     0,   179,     0,     0,     0,     0,   168,     0,     0,
       0,     0,   169,     0,     0,     0,     0,    65,    61,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,    79,
      78,    76,    77,     0,     0,     0,    69,   177,   180,     0,
      90,   164,   165,     0,    31,   170,   166,   167,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,    29,    30,
      90,   144,   135,     0,     0,     0,     0,     0,     0,     0,
      88,     0,   169,    90,     0,     0,     0,     0,    90,     0,
      36,    35,     0,   143,    91,     0,     0,     0,   179,     0,
     157,   158,   160,   159,   162,   161,   151,   152,   153,   154,
     150,   155,   156,   146,   147,   148,   149,     0,   179,   134,
      90,    90,   123,    79,   123,    78,     0,     0,     0,    90,
      90,    81,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,   179,
       0,     0,   173,     0,     0,     0,     0,   175,     0,     0,
       0,     0,     0,   123,   110,     0,     0,     0,   121,   124,
       0,   114,   115,   116,   117,   118,     0,     0,   123,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,   174,
     171,    62,   145,     0,     0,   176,     0,     0,     0,     0,
     175,     0,     0,    78,   112,   113,   122,   109,   111,   107,
       0,   123,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   123,
     123,   120,     0,     0,     0,     0,     0,     0,     0,   119,
     108,     0,   123,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,   175,   175,     0,    83,
       0,     0,    82,     0,     0,     0,     0,   123,   123,     0,
       0,   123,     0,   123,     0,     0,     0,   123,    85,    87,
     130,   125,     0,     0,     0,     0,     0,    84,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,   175,   175,     0,
     123,   123,   123,   123,   104,   103,   123,   123,   106,   123,
     105,   123,   123,   123,   102,   131,   126,     0,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   101,   100,    96,    97,
      92,    93,    94,    95,   127,   128,   129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,  -325,   550,  -325,   520,   565,  -325,  -325,
      29,  -325,   393,   564,  -325,    12,   566,  -325,   542,   567,
     497,  -325,  -325,  -325,   570,   115,    47,   300,   -55,    48,
     447,  -188,   532,   232,   233,  -276,  -325,  -241,  -325,  -325,
    -325,  -325,  -325,   -46,   298,  -324,  -325,  -209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    21,    22,    11,    12,     7,     3,     4,     5,
      88,    89,   285,    23,    61,    62,    24,    54,    55,    25,
      91,    92,    93,    73,    26,    63,    64,   286,   287,    65,
     214,   215,    66,    67,    68,   288,   289,   290,   291,   292,
     293,   294,   295,   132,   296,   326,   158,   159
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,   108,   237,   297,   329,   -33,   367,   205,   108,   271,
      94,     6,    13,   336,     6,   248,    19,    94,     8,    14,
     253,    20,   170,   171,   172,   173,     1,   175,   207,   274,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     209,   208,   332,    69,    42,    13,    94,    43,   120,    94,
     118,   121,   275,   276,   139,    10,   140,   340,    94,   246,
     318,   301,   302,   383,   247,   139,    15,   140,   384,    17,
      94,   423,   424,   425,   181,   182,   183,   184,   185,   186,
      94,   180,   181,   182,   183,   184,   185,   186,    57,    58,
      18,    57,    58,    31,   254,   255,   256,   257,   338,   202,
     371,    97,    98,   374,   258,   259,     1,   -22,   110,   111,
      27,    28,    29,    36,    94,    37,   420,   421,   390,   391,
      30,    38,   467,   468,   469,   170,   171,   172,   173,   154,
     155,   400,   401,    39,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,    94,    40,   260,   261,   262,   263,
     264,   265,   266,   385,    72,   164,    56,    94,   386,    56,
     169,    41,    94,   185,   186,    95,   433,   434,   465,    56,
     437,    44,   439,   470,    45,    96,   443,   181,   182,   183,
     184,   185,   186,    46,   109,   180,   181,   182,   183,   184,
     185,   186,   122,   101,    94,    94,   202,   115,   202,   187,
     123,    94,   117,    94,    94,   494,   495,   496,   119,   471,
     472,   473,   474,   134,   135,   475,   476,   136,   477,   138,
     478,   479,   480,   183,   184,   185,   186,    74,    75,    76,
      77,    78,   143,   144,   202,   145,   146,   202,    79,    80,
      81,    82,    83,   202,   149,   150,    85,    86,   151,   152,
     156,   160,   202,   188,   189,    47,    48,    49,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    52,    53,    59,    60,   366,    59,    60,   163,    87,
     190,   191,   194,   195,   202,    94,    99,   100,   196,   203,
     204,   205,   206,   113,   114,   202,   210,   211,   202,   213,
     124,   125,    74,    75,    76,    77,    78,   212,    47,    48,
      49,    50,   216,   202,   202,   217,   243,   218,   219,   126,
     127,    85,    86,    51,    52,    53,   202,   202,   238,    94,
      94,    94,    94,   242,   244,    94,    94,   240,    94,   245,
      94,    94,    94,   269,   128,   129,   202,   202,   130,   241,
     249,   250,   192,   247,   131,   298,   107,   268,   273,   300,
     303,   202,   202,   107,   304,   202,   305,   202,   333,   306,
     307,   202,   308,   309,   310,   311,   312,   313,   314,   315,
      74,    75,    76,    77,    78,   133,   316,   317,   320,   322,
     323,    79,    80,    81,    82,    83,    84,   321,   202,    85,
      86,   324,   327,   202,   202,   202,   202,   202,   328,   330,
     202,   202,   331,   202,   334,   202,   202,   202,   335,   337,
     157,   339,   161,   162,   341,   342,   166,   167,   168,   133,
     343,   358,    87,   344,   361,   202,   202,   202,   193,    90,
     359,   360,   364,   157,   369,   200,   207,   370,   372,   106,
     373,   375,   394,   376,   379,   377,   106,   378,   380,   398,
     200,   381,   382,   389,   387,   429,   399,   388,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    90,   395,   396,   142,   397,
     200,   402,   407,   408,   411,   413,   417,   148,   418,   419,
     427,   428,   430,   200,   251,   252,   431,   432,   200,   153,
     267,   435,   436,   438,   440,   270,   157,   272,   441,   165,
     442,   444,   446,   450,   447,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   448,   157,   451,   199,   452,
     200,   200,   453,   466,   454,   455,   456,   299,   457,   200,
     200,   458,   459,   199,   460,   461,   462,   463,   481,   464,
     482,   483,    16,    70,   484,   485,   486,   157,   487,     9,
     488,   489,   490,   491,   492,   325,   180,   181,   182,   183,
     184,   185,   186,   199,   493,    32,    71,    33,    34,   137,
     392,    35,   201,   112,     0,     0,   199,     0,     0,     0,
       0,   199,     0,     0,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,     0,     0,     0,
       0,     0,     0,     0,     0,   362,   363,     0,   325,     0,
     365,   368,     0,   199,   199,     0,     0,     0,     0,     0,
     199,     0,   199,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,     0,     0,     0,   403,   404,   405,   406,     0,
       0,   409,   410,     0,   412,     0,   414,   415,   416,     0,
       0,     0,   422,   325,   325,   325,   426,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
       0,   180,   181,   182,   183,   184,   185,   186,     0,     0,
       0,     0,     0,     0,   199,   393,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     0,     0,     0,   325,   325,   325,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,   199,
     199,   199,     0,     0,   199,   199,     0,   199,     0,   199,
     199,   199,   180,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,   445,     0,   180,   181,
     182,   183,   184,   185,   186,     0,     0,     0,     0,     0,
       0,     0,   449,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,     0,     0,     0,   239,   180,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,   319,   124,   125,
      74,    75,    76,    77,    78,   277,   278,     0,   279,   280,
     281,    79,    80,    81,    82,    83,     0,   126,   127,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     282,     0,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,   128,   129,     0,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   283,     0,   284,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,     0,
       0,   124,   125,    74,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,     0,
     126,   127,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   180,   181,
     182,   183,   184,   185,   186,   128,   129,     0,     0,   130,
       0,     0,     0,     0,     0,   131,   198,   124,   125,    74,
      75,    76,    77,    78,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,     0,   126,   127,    85,    86,
       0,     0,     0,     0,    74,    75,    76,    77,    78,     0,
       0,     0,     0,   105,     0,    79,    80,    81,    82,    83,
     141,   128,   129,    85,    86,   130,     0,     0,     0,     0,
       0,   131,   124,   125,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
       0,   126,   127,    85,    86,     0,    87,     0,     0,     0,
       0,     0,   124,   125,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
     130,   126,   127,    85,    86,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
      74,    75,    76,    77,    78,     0,   128,   129,     0,     0,
     130,     0,     0,     0,   188,     0,   131,   126,   127,    85,
      86,   102,    75,    76,    77,    78,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,   103,     0,     0,
      85,    86,   128,   129,     0,   104,   130,   102,    75,    76,
      77,    78,   131,     0,     0,   105,     0,     0,    79,    80,
      81,    82,    83,   103,     0,     0,    85,    86,     0,     0,
       0,   116,     0,    87,    74,    75,    76,    77,    78,     0,
       0,   105,     0,     0,     0,    79,    80,    81,    82,    83,
     147,     0,     0,    85,    86,     0,     0,     0,     0,    87,
      74,    75,    76,    77,    78,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,     0,     0,     0,    85,
      86,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87
};

static const yytype_int16 yycheck[] =
{
      46,    56,   190,   244,   280,    15,   330,    15,    63,   218,
      56,    15,    64,   289,    15,   203,    36,    63,     0,    71,
     208,    41,     3,     4,     5,     6,    43,     8,    54,   238,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      48,    67,   283,    47,    69,    64,    92,    72,    70,    95,
      69,    73,   240,   241,    64,    44,    66,   298,   104,    68,
     269,   249,   250,    68,    73,    64,    15,    66,    73,    15,
     116,   395,   396,   397,    55,    56,    57,    58,    59,    60,
     126,    54,    55,    56,    57,    58,    59,    60,    41,    41,
      69,    44,    44,    15,     3,     4,     5,     6,    71,   145,
     341,    54,    54,   344,    13,    14,    43,    44,    61,    61,
      40,    41,    42,    70,   160,    15,   392,   393,   359,   360,
      50,    15,   446,   447,   448,     3,     4,     5,     6,   117,
     118,   372,   373,    15,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   190,    15,    55,    56,    57,    58,
      59,    60,    61,    68,    15,   126,    41,   203,    73,    44,
     131,    69,   208,    59,    60,    50,   407,   408,   444,    54,
     411,    69,   413,   449,    69,    15,   417,    55,    56,    57,
      58,    59,    60,    69,    71,    54,    55,    56,    57,    58,
      59,    60,    67,    70,   240,   241,   242,    70,   244,    68,
      15,   247,    69,   249,   250,   481,   482,   483,    70,   450,
     451,   452,   453,    66,    66,   456,   457,    15,   459,    70,
     461,   462,   463,    57,    58,    59,    60,    15,    16,    17,
      18,    19,    67,    71,   280,    67,    15,   283,    26,    27,
      28,    29,    30,   289,    15,    15,    34,    35,    71,    71,
      15,    67,   298,    65,    65,    36,    37,    38,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,    52,    53,    41,    41,   330,    44,    44,    66,    67,
      67,    15,    15,    15,   330,   331,    54,    54,    68,    67,
      15,    15,    54,    61,    61,   341,    70,    70,   344,    68,
      13,    14,    15,    16,    17,    18,    19,    73,    36,    37,
      38,    39,    65,   359,   360,    66,    15,    69,    68,    32,
      33,    34,    35,    51,    52,    53,   372,   373,    67,   375,
     376,   377,   378,    69,    69,   381,   382,    67,   384,    15,
     386,   387,   388,    69,    57,    58,   392,   393,    61,    67,
      67,    67,    65,    73,    67,    69,    56,    68,    68,    68,
      68,   407,   408,    63,    67,   411,    67,   413,    15,    67,
      67,   417,    67,    67,    67,    67,    67,    67,    67,    67,
      15,    16,    17,    18,    19,    87,    67,    71,    70,    68,
      68,    26,    27,    28,    29,    30,    31,    71,   444,    34,
      35,    68,    67,   449,   450,   451,   452,   453,    67,    67,
     456,   457,    67,   459,    71,   461,   462,   463,    71,    70,
     122,    70,   124,   125,    69,    68,   128,   129,   130,   131,
      68,    70,    67,    69,    71,   481,   482,   483,   140,    46,
      69,    69,    23,   145,    70,   145,    54,    70,    69,    56,
      69,    73,    67,    73,    68,    73,    63,    73,    68,    46,
     160,    73,    73,    68,    73,    68,    70,    73,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    92,    71,    71,    95,    71,
     190,    70,    69,    69,    69,    69,    69,   104,    70,    70,
      70,    70,    68,   203,   206,   207,    68,    68,   208,   116,
     212,    68,    68,    68,    68,   217,   218,   219,    68,   126,
      68,    22,    71,    69,    71,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    71,   238,    69,   145,    69,
     240,   241,    69,    71,    70,    70,    69,   247,    69,   249,
     250,    70,    69,   160,    70,    69,    69,    69,    68,    70,
      68,    68,    12,    43,    70,    70,    70,   269,    70,     4,
      70,    70,    70,    70,    70,   277,    54,    55,    56,    57,
      58,    59,    60,   190,    70,    21,    44,    21,    21,    92,
      68,    21,   145,    61,    -1,    -1,   203,    -1,    -1,    -1,
      -1,   208,    -1,    -1,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,   330,    -1,
     330,   331,    -1,   240,   241,    -1,    -1,    -1,    -1,    -1,
     247,    -1,   249,   250,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,   375,   376,   377,   378,    -1,
      -1,   381,   382,    -1,   384,    -1,   386,   387,   388,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
      -1,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,   331,    68,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,   446,   447,   448,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,   376,
     377,   378,    -1,    -1,   381,   382,    -1,   384,    -1,   386,
     387,   388,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    65,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    71,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    54,    55,
      56,    57,    58,    59,    60,    57,    58,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    49,    -1,    26,    27,    28,    29,    30,
      31,    57,    58,    34,    35,    61,    -1,    -1,    -1,    -1,
      -1,    67,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      61,    32,    33,    34,    35,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    67,    32,    33,    34,
      35,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    57,    58,    -1,    39,    61,    15,    16,    17,
      18,    19,    67,    -1,    -1,    49,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      -1,    39,    -1,    67,    15,    16,    17,    18,    19,    -1,
      -1,    49,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    67,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    43,    75,    81,    82,    83,    15,    80,     0,    81,
      44,    78,    79,    64,    71,    15,    78,    15,    69,    36,
      41,    76,    77,    87,    90,    93,    98,    40,    41,    42,
      50,    15,    87,    90,    93,    98,    70,    15,    15,    15,
      15,    69,    69,    72,    69,    69,    69,    36,    37,    38,
      39,    51,    52,    53,    91,    92,    99,   100,   103,   107,
     108,    88,    89,    99,   100,   103,   106,   107,   108,    47,
      80,    92,    15,    97,    15,    16,    17,    18,    19,    26,
      27,    28,    29,    30,    31,    34,    35,    67,    84,    85,
      86,    94,    95,    96,   117,    99,    15,   100,   103,   107,
     108,    70,    15,    31,    39,    49,    86,   101,   102,    71,
     100,   103,   106,   107,   108,    70,    39,    69,    69,    70,
      70,    73,    67,    15,    13,    14,    32,    33,    57,    58,
      61,    67,   117,   118,    66,    66,    15,    94,    70,    64,
      66,    31,    86,    67,    71,    67,    15,    31,    86,    15,
      15,    71,    71,    86,    89,    89,    15,   118,   120,   121,
      67,   118,   118,    66,    84,    86,   118,   118,   118,    84,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      54,    55,    56,    57,    58,    59,    60,    68,    65,    65,
      67,    15,    65,   118,    15,    15,    68,    49,    68,    86,
     101,   104,   117,    67,    15,    15,    54,    54,    67,    48,
      70,    70,    73,    68,   104,   105,    65,    66,    69,    68,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   105,    67,    65,
      67,    67,    69,    15,    69,    15,    68,    73,   105,    67,
      67,   118,   118,   105,     3,     4,     5,     6,    13,    14,
      55,    56,    57,    58,    59,    60,    61,   118,    68,    69,
     118,   121,   118,    68,   121,   105,   105,    20,    21,    23,
      24,    25,    45,    69,    71,    86,   101,   102,   109,   110,
     111,   112,   113,   114,   115,   116,   118,   111,    69,   101,
      68,   105,   105,    68,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    71,   121,    65,
      70,    71,    68,    68,    68,   118,   119,    67,    67,   109,
      67,    67,   111,    15,    71,    71,   109,    70,    71,    70,
     111,    69,    68,    68,    69,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,    70,    69,
      69,    71,   118,   118,    23,   101,   102,   119,   101,    70,
      70,   111,    69,    69,   111,    73,    73,    73,    73,    68,
      68,    73,    73,    68,    73,    68,    73,    73,    73,    68,
     111,   111,    68,    68,    67,    71,    71,    71,    46,    70,
     111,   111,    70,   101,   101,   101,   101,    69,    69,   101,
     101,    69,   101,    69,   101,   101,   101,    69,    70,    70,
     109,   109,   118,   119,   119,   119,   118,    70,    70,    68,
      68,    68,    68,   111,   111,    68,    68,   111,    68,   111,
      68,    68,    68,   111,    22,    68,    71,    71,    71,    68,
      69,    69,    69,    69,    70,    70,    69,    69,    70,    69,
      70,    69,    69,    69,    70,   109,    71,   119,   119,   119,
     109,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,    68,    68,    68,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,   109,   109,   109
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      82,    82,    83,    83,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   112,   113,   114,   114,   114,
     115,   115,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   120,   121,
     121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
      13,    13,    11,    11,    11,    11,    11,     7,     8,     7,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     1,     2,     0,     1,     5,     7,     9,     9,     9,
       5,     7,     7,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     1,
       2,     5,     6,     4,     5,     0,     1,     1,     3,     0,
       1
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
  case 3: /* program: using_directives_optional namespace_decl_seq  */
#line 200 "Parser2.y"
                                                       { treeRoot = new Program((yyvsp[-1]._usingDirectives), (yyvsp[0]._namespaceDeclSeq)); }
#line 1691 "Parser2.tab.c"
    break;

  case 4: /* namespace_members: enum_decl  */
#line 207 "Parser2.y"
                                                { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[0]._enumDecl)); }
#line 1697 "Parser2.tab.c"
    break;

  case 5: /* namespace_members: class_decl  */
#line 208 "Parser2.y"
                                                { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[0]._classDecl)); }
#line 1703 "Parser2.tab.c"
    break;

  case 6: /* namespace_members: interface_decl  */
#line 209 "Parser2.y"
                                                { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[0]._interfaceDecl)); }
#line 1709 "Parser2.tab.c"
    break;

  case 7: /* namespace_members: struct_decl  */
#line 210 "Parser2.y"
                                                { (yyval._namespaceMembers) = new NamespaceMembersNode(); (yyval._namespaceMembers) -> Add((yyvsp[0]._structDecl)); }
#line 1715 "Parser2.tab.c"
    break;

  case 8: /* namespace_members: namespace_members enum_decl  */
#line 211 "Parser2.y"
                                                { (yyval._namespaceMembers) -> Add((yyvsp[0]._enumDecl)); }
#line 1721 "Parser2.tab.c"
    break;

  case 9: /* namespace_members: namespace_members class_decl  */
#line 212 "Parser2.y"
                                                { (yyval._namespaceMembers) -> Add((yyvsp[0]._classDecl)); }
#line 1727 "Parser2.tab.c"
    break;

  case 10: /* namespace_members: namespace_members interface_decl  */
#line 213 "Parser2.y"
                                                    { (yyval._namespaceMembers) -> Add((yyvsp[0]._interfaceDecl)); }
#line 1733 "Parser2.tab.c"
    break;

  case 11: /* namespace_members: namespace_members struct_decl  */
#line 214 "Parser2.y"
                                                { (yyval._namespaceMembers) -> Add((yyvsp[0]._structDecl)); }
#line 1739 "Parser2.tab.c"
    break;

  case 12: /* namespace_members_optional: %empty  */
#line 217 "Parser2.y"
                                                    { (yyval._namespaceMembers) = new NamespaceMembersNode(); }
#line 1745 "Parser2.tab.c"
    break;

  case 13: /* namespace_members_optional: namespace_members  */
#line 218 "Parser2.y"
                                                    { (yyval._namespaceMembers) = (yyvsp[0]._namespaceMembers); }
#line 1751 "Parser2.tab.c"
    break;

  case 14: /* namespace_decl: NAMESPACE IDENTIFIER '{' namespace_members_optional '}'  */
#line 221 "Parser2.y"
                                                                        { (yyval._namespaceDecl) = new NamespaceDeclNode((yyvsp[-3]._identifier), (yyvsp[-1]._namespaceMembers));  }
#line 1757 "Parser2.tab.c"
    break;

  case 15: /* namespace_decl_seq: namespace_decl  */
#line 224 "Parser2.y"
                                                        { (yyval._namespaceDeclSeq) = new NamespaceDeclSeq((yyvsp[0]._namespaceDecl)); }
#line 1763 "Parser2.tab.c"
    break;

  case 16: /* namespace_decl_seq: namespace_decl_seq namespace_decl  */
#line 225 "Parser2.y"
                                                        { (yyval._namespaceDeclSeq) -> Add((yyvsp[0]._namespaceDecl)); }
#line 1769 "Parser2.tab.c"
    break;

  case 17: /* using_arg: IDENTIFIER  */
#line 229 "Parser2.y"
                                        { (yyval._usingArg) = new IdentifierList(); (yyval._usingArg) -> Add((yyvsp[0]._identifier)); }
#line 1775 "Parser2.tab.c"
    break;

  case 18: /* using_arg: using_arg '.' IDENTIFIER  */
#line 230 "Parser2.y"
                                        { (yyval._usingArg) -> Add((yyvsp[0]._identifier)); }
#line 1781 "Parser2.tab.c"
    break;

  case 19: /* using_directive: USING using_arg ';'  */
#line 233 "Parser2.y"
                                        { (yyval._usingDirective) = new UsingDirectiveNode((yyvsp[-1]._usingArg)); }
#line 1787 "Parser2.tab.c"
    break;

  case 20: /* using_directives: using_directive  */
#line 236 "Parser2.y"
                                                    { (yyval._usingDirectives) = new UsingDirectives((yyvsp[0]._usingDirective)); }
#line 1793 "Parser2.tab.c"
    break;

  case 21: /* using_directives: using_directives using_directive  */
#line 237 "Parser2.y"
                                                    { (yyval._usingDirectives) -> Add((yyvsp[0]._usingDirective)); }
#line 1799 "Parser2.tab.c"
    break;

  case 22: /* using_directives_optional: %empty  */
#line 240 "Parser2.y"
                                            { (yyval._usingDirectives) = UsingDirectives::MakeEmpty();  }
#line 1805 "Parser2.tab.c"
    break;

  case 23: /* using_directives_optional: using_directives  */
#line 241 "Parser2.y"
                                            { (yyval._usingDirectives) = (yyvsp[0]._usingDirectives); }
#line 1811 "Parser2.tab.c"
    break;

  case 24: /* standard_type: CHAR_KW  */
#line 250 "Parser2.y"
                            { (yyval._standardType) = StandardType::Char; }
#line 1817 "Parser2.tab.c"
    break;

  case 25: /* standard_type: INT_KW  */
#line 251 "Parser2.y"
                            { (yyval._standardType) = StandardType::Int; }
#line 1823 "Parser2.tab.c"
    break;

  case 26: /* standard_type: BOOL_KW  */
#line 252 "Parser2.y"
                            { (yyval._standardType) = StandardType::Bool; }
#line 1829 "Parser2.tab.c"
    break;

  case 27: /* standard_type: FLOAT_KW  */
#line 253 "Parser2.y"
                            { (yyval._standardType) = StandardType::Float; }
#line 1835 "Parser2.tab.c"
    break;

  case 28: /* standard_type: STRING_KW  */
#line 254 "Parser2.y"
                            { (yyval._standardType) = StandardType::String; }
#line 1841 "Parser2.tab.c"
    break;

  case 29: /* standard_array_type: standard_type '[' ']'  */
#line 257 "Parser2.y"
                                                    { (yyval._standardArrayType) = new StandardArrayType{ (yyvsp[-2]._standardType), 1 }; }
#line 1847 "Parser2.tab.c"
    break;

  case 30: /* standard_array_type: standard_array_type '[' ']'  */
#line 258 "Parser2.y"
                                                    { (yyval._standardArrayType) -> Arity += 1; }
#line 1853 "Parser2.tab.c"
    break;

  case 31: /* type: standard_type  */
#line 261 "Parser2.y"
                            { (yyval._type) = new TypeNode((yyvsp[0]._standardType)); }
#line 1859 "Parser2.tab.c"
    break;

  case 32: /* type: standard_array_type  */
#line 262 "Parser2.y"
                            { (yyval._type) = new TypeNode(* (yyvsp[0]._standardArrayType)); delete (yyvsp[0]._standardArrayType); }
#line 1865 "Parser2.tab.c"
    break;

  case 33: /* type: access_expr  */
#line 263 "Parser2.y"
                            { (yyval._type) = new TypeNode((yyvsp[0]._accessExpr)); }
#line 1871 "Parser2.tab.c"
    break;

  case 34: /* class_decl: PUBLIC CLASS IDENTIFIER '{' class_members_optional '}'  */
#line 273 "Parser2.y"
                                                                                    { (yyval._classDecl) = new ClassDeclNode((yyvsp[-3]._identifier), nullptr, (yyvsp[-1]._classMembers)); }
#line 1877 "Parser2.tab.c"
    break;

  case 35: /* class_decl: PUBLIC CLASS IDENTIFIER ':' using_arg '{' class_members_optional '}'  */
#line 274 "Parser2.y"
                                                                                    { (yyval._classDecl) = new ClassDeclNode((yyvsp[-5]._identifier), (yyvsp[-3]._usingArg), (yyvsp[-1]._classMembers)); }
#line 1883 "Parser2.tab.c"
    break;

  case 36: /* class_decl: PUBLIC CLASS IDENTIFIER ':' OBJECT '{' class_members_optional '}'  */
#line 275 "Parser2.y"
                                                                                    { (yyval._classDecl) = new ClassDeclNode((yyvsp[-5]._identifier), nullptr, (yyvsp[-1]._classMembers)); }
#line 1889 "Parser2.tab.c"
    break;

  case 37: /* class_members: method_decl  */
#line 278 "Parser2.y"
                                                    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[0]._methodDecl)); }
#line 1895 "Parser2.tab.c"
    break;

  case 38: /* class_members: field_decl  */
#line 279 "Parser2.y"
                                                    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[0]._fieldDecl)); }
#line 1901 "Parser2.tab.c"
    break;

  case 39: /* class_members: operator_overload  */
#line 280 "Parser2.y"
                                                    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[0]._methodDecl)); }
#line 1907 "Parser2.tab.c"
    break;

  case 40: /* class_members: constructor_decl  */
#line 281 "Parser2.y"
                                                    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[0]._constructorDecl)); }
#line 1913 "Parser2.tab.c"
    break;

  case 41: /* class_members: destructor_decl  */
#line 282 "Parser2.y"
                                                    { (yyval._classMembers) = new ClassMembersNode(); (yyval._classMembers) -> Add((yyvsp[0]._destructorDecl)); }
#line 1919 "Parser2.tab.c"
    break;

  case 42: /* class_members: class_members method_decl  */
#line 283 "Parser2.y"
                                                    { (yyval._classMembers) -> Add((yyvsp[0]._methodDecl)); }
#line 1925 "Parser2.tab.c"
    break;

  case 43: /* class_members: class_members field_decl  */
#line 284 "Parser2.y"
                                                    { (yyval._classMembers) -> Add((yyvsp[0]._fieldDecl)); }
#line 1931 "Parser2.tab.c"
    break;

  case 44: /* class_members: class_members operator_overload  */
#line 285 "Parser2.y"
                                                    { (yyval._classMembers) -> Add((yyvsp[0]._methodDecl)); }
#line 1937 "Parser2.tab.c"
    break;

  case 45: /* class_members: class_members constructor_decl  */
#line 286 "Parser2.y"
                                                    { (yyval._classMembers) -> Add((yyvsp[0]._constructorDecl)); }
#line 1943 "Parser2.tab.c"
    break;

  case 46: /* class_members: class_members destructor_decl  */
#line 287 "Parser2.y"
                                                    { (yyval._classMembers) -> Add((yyvsp[0]._destructorDecl)); }
#line 1949 "Parser2.tab.c"
    break;

  case 47: /* class_members_optional: %empty  */
#line 290 "Parser2.y"
                                            { (yyval._classMembers) = new ClassMembersNode(); }
#line 1955 "Parser2.tab.c"
    break;

  case 48: /* class_members_optional: class_members  */
#line 291 "Parser2.y"
                                            { (yyval._classMembers) = (yyvsp[0]._classMembers); }
#line 1961 "Parser2.tab.c"
    break;

  case 49: /* struct_decl: PUBLIC STRUCT IDENTIFIER '{' struct_members_optional '}'  */
#line 300 "Parser2.y"
                                                             { (yyval._structDecl) = new StructDeclNode((yyvsp[-3]._identifier), (yyvsp[-1]._structMembers)); }
#line 1967 "Parser2.tab.c"
    break;

  case 50: /* struct_decl: STRUCT IDENTIFIER '{' struct_members_optional '}'  */
#line 301 "Parser2.y"
                                                        { (yyval._structDecl) = new StructDeclNode((yyvsp[-3]._identifier), (yyvsp[-1]._structMembers)); }
#line 1973 "Parser2.tab.c"
    break;

  case 51: /* struct_members: field_decl ';'  */
#line 305 "Parser2.y"
                                                                { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[-1]._fieldDecl)); }
#line 1979 "Parser2.tab.c"
    break;

  case 52: /* struct_members: method_decl  */
#line 306 "Parser2.y"
                                                                { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[0]._methodDecl)); }
#line 1985 "Parser2.tab.c"
    break;

  case 53: /* struct_members: constructor_decl  */
#line 307 "Parser2.y"
                                                                { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[0]._constructorDecl)); }
#line 1991 "Parser2.tab.c"
    break;

  case 54: /* struct_members: destructor_decl  */
#line 308 "Parser2.y"
                                                                { (yyval._structMembers) = new StructMembersNode(); (yyval._structMembers)->Add((yyvsp[0]._destructorDecl)); }
#line 1997 "Parser2.tab.c"
    break;

  case 55: /* struct_members: struct_members field_decl ';'  */
#line 309 "Parser2.y"
                                                                { (yyval._structMembers)->Add((yyvsp[-1]._fieldDecl)); }
#line 2003 "Parser2.tab.c"
    break;

  case 56: /* struct_members: struct_members method_decl  */
#line 310 "Parser2.y"
                                                                { (yyval._structMembers)->Add((yyvsp[0]._methodDecl)); }
#line 2009 "Parser2.tab.c"
    break;

  case 57: /* struct_members: struct_members constructor_decl  */
#line 311 "Parser2.y"
                                                                { (yyval._structMembers)->Add((yyvsp[0]._constructorDecl)); }
#line 2015 "Parser2.tab.c"
    break;

  case 58: /* struct_members: struct_members destructor_decl  */
#line 312 "Parser2.y"
                                                                { (yyval._structMembers)->Add((yyvsp[0]._destructorDecl)); }
#line 2021 "Parser2.tab.c"
    break;

  case 59: /* struct_members_optional: %empty  */
#line 316 "Parser2.y"
                { (yyval._structMembers) = new StructMembersNode(); }
#line 2027 "Parser2.tab.c"
    break;

  case 60: /* struct_members_optional: struct_members  */
#line 317 "Parser2.y"
                     { (yyval._structMembers) = (yyvsp[0]._structMembers); }
#line 2033 "Parser2.tab.c"
    break;

  case 61: /* interface_decl: PUBLIC INTERFACE IDENTIFIER '{' interface_members_optional '}'  */
#line 324 "Parser2.y"
                                                                                               { (yyval._interfaceDecl) = new InterfaceDeclNode((yyvsp[-3]._identifier), (yyvsp[-1]._interfaceMembers)); }
#line 2039 "Parser2.tab.c"
    break;

  case 62: /* interface_member: type IDENTIFIER '(' method_arguments_optional ')' ';'  */
#line 327 "Parser2.y"
                                                                                          { (yyval._interfaceMember) = new InterfaceMemberNode((yyvsp[-5]._type), (yyvsp[-4]._identifier), (yyvsp[-2]._methodArguments)); }
#line 2045 "Parser2.tab.c"
    break;

  case 63: /* interface_member: VOID_KW IDENTIFIER '(' method_arguments_optional ')' ';'  */
#line 328 "Parser2.y"
                                                                                             { (yyval._interfaceMember) = new InterfaceMemberNode(nullptr, (yyvsp[-4]._identifier), (yyvsp[-2]._methodArguments)); }
#line 2051 "Parser2.tab.c"
    break;

  case 64: /* interface_members: interface_member  */
#line 331 "Parser2.y"
                                                              { (yyval._interfaceMembers) = new InterfaceMembersNode(); (yyval._interfaceMembers) -> Add((yyvsp[0]._interfaceMember)); }
#line 2057 "Parser2.tab.c"
    break;

  case 65: /* interface_members: interface_members interface_member  */
#line 332 "Parser2.y"
                                                              { (yyval._interfaceMembers) -> Add((yyvsp[0]._interfaceMember)); }
#line 2063 "Parser2.tab.c"
    break;

  case 66: /* interface_members_optional: %empty  */
#line 335 "Parser2.y"
                                                      { (yyval._interfaceMembers) = new InterfaceMembersNode(); }
#line 2069 "Parser2.tab.c"
    break;

  case 67: /* interface_members_optional: interface_members  */
#line 336 "Parser2.y"
                                                      { (yyval._interfaceMembers) = (yyvsp[0]._interfaceMembers); }
#line 2075 "Parser2.tab.c"
    break;

  case 68: /* enumerators: IDENTIFIER  */
#line 344 "Parser2.y"
                                            { (yyval._enumerators) = new IdentifierList(); (yyval._enumerators) -> Add((yyvsp[0]._identifier)); }
#line 2081 "Parser2.tab.c"
    break;

  case 69: /* enumerators: enumerators ',' IDENTIFIER  */
#line 345 "Parser2.y"
                                            { (yyval._enumerators) -> Add((yyvsp[0]._identifier)); }
#line 2087 "Parser2.tab.c"
    break;

  case 70: /* enum_decl: PUBLIC ENUM IDENTIFIER '{' enumerators '}'  */
#line 348 "Parser2.y"
                                                      { Print("Found enum declaration with name:", (yyvsp[-3]._identifier)); }
#line 2093 "Parser2.tab.c"
    break;

  case 71: /* visibility_modifier: PUBLIC  */
#line 358 "Parser2.y"
                                    { (yyval._visibiltyModifier) = VisibilityModifier::Public; }
#line 2099 "Parser2.tab.c"
    break;

  case 72: /* visibility_modifier: PROTECTED  */
#line 359 "Parser2.y"
                                    { (yyval._visibiltyModifier) = VisibilityModifier::Protected; }
#line 2105 "Parser2.tab.c"
    break;

  case 73: /* visibility_modifier: PRIVATE  */
#line 360 "Parser2.y"
                                    { (yyval._visibiltyModifier) = VisibilityModifier::Private; }
#line 2111 "Parser2.tab.c"
    break;

  case 74: /* visibility_modifier: INTERNAL  */
#line 361 "Parser2.y"
                                             { (yyval._visibiltyModifier) = VisibilityModifier::Internal; }
#line 2117 "Parser2.tab.c"
    break;

  case 75: /* visibility_modifier: PROTECTED_INTERNAL  */
#line 362 "Parser2.y"
                                             { (yyval._visibiltyModifier) = VisibilityModifier::ProtectedInternal; }
#line 2123 "Parser2.tab.c"
    break;

  case 76: /* field_decl: visibility_modifier var_decl ';'  */
#line 370 "Parser2.y"
                                                          { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[-2]._visibiltyModifier), (yyvsp[-1]._varDecl)); }
#line 2129 "Parser2.tab.c"
    break;

  case 77: /* field_decl: visibility_modifier var_decl_with_init ';'  */
#line 371 "Parser2.y"
                                                          { (yyval._fieldDecl) = new FieldDeclNode((yyvsp[-2]._visibiltyModifier), (yyvsp[-1]._varDecl)); }
#line 2135 "Parser2.tab.c"
    break;

  case 78: /* var_decl: type IDENTIFIER  */
#line 373 "Parser2.y"
                                                    { (yyval._varDecl) = new VarDeclNode((yyvsp[-1]._type), (yyvsp[0]._identifier), nullptr); }
#line 2141 "Parser2.tab.c"
    break;

  case 79: /* var_decl: VAR IDENTIFIER  */
#line 374 "Parser2.y"
                                                    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[0]._identifier), nullptr, true); }
#line 2147 "Parser2.tab.c"
    break;

  case 80: /* var_decl_with_init: type IDENTIFIER '=' expr  */
#line 376 "Parser2.y"
                                                    { (yyval._varDecl) = new VarDeclNode((yyvsp[-3]._type), (yyvsp[-2]._identifier), (yyvsp[0]._expr)); }
#line 2153 "Parser2.tab.c"
    break;

  case 81: /* var_decl_with_init: VAR IDENTIFIER '=' expr  */
#line 377 "Parser2.y"
                                                    { (yyval._varDecl) = new VarDeclNode(nullptr, (yyvsp[-2]._identifier), (yyvsp[0]._expr), true); }
#line 2159 "Parser2.tab.c"
    break;

  case 82: /* method_decl: visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 386 "Parser2.y"
                                                                                                                            { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-8]._visibiltyModifier), (yyvsp[-7]._type), (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq)); }
#line 2165 "Parser2.tab.c"
    break;

  case 83: /* method_decl: visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 387 "Parser2.y"
                                                                                                                            { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-8]._visibiltyModifier), nullptr, (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq)); }
#line 2171 "Parser2.tab.c"
    break;

  case 84: /* method_decl: visibility_modifier STATIC VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 388 "Parser2.y"
                                                                                                                            { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-9]._visibiltyModifier), nullptr, (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq), /* isStatic = */ true); }
#line 2177 "Parser2.tab.c"
    break;

  case 85: /* method_decl: STATIC visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 389 "Parser2.y"
                                                                                                                            { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-8]._visibiltyModifier), nullptr, (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq), /* isStatic = */ true); }
#line 2183 "Parser2.tab.c"
    break;

  case 86: /* method_decl: visibility_modifier STATIC type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 390 "Parser2.y"
                                                                                                                                    { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-9]._visibiltyModifier), (yyvsp[-7]._type), (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq), /* isStatic = */ true); }
#line 2189 "Parser2.tab.c"
    break;

  case 87: /* method_decl: STATIC visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 391 "Parser2.y"
                                                                                                                            { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-8]._visibiltyModifier), (yyvsp[-7]._type), (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq), /* isStatic = */ true); }
#line 2195 "Parser2.tab.c"
    break;

  case 88: /* method_arguments: var_decl  */
#line 395 "Parser2.y"
                                                    { (yyval._methodArguments) = new MethodArguments((yyvsp[0]._varDecl)); }
#line 2201 "Parser2.tab.c"
    break;

  case 89: /* method_arguments: method_arguments ',' var_decl  */
#line 396 "Parser2.y"
                                                    { (yyval._methodArguments) -> Add((yyvsp[0]._varDecl)); }
#line 2207 "Parser2.tab.c"
    break;

  case 90: /* method_arguments_optional: %empty  */
#line 398 "Parser2.y"
                                                    { (yyval._methodArguments) = MethodArguments::MakeEmpty(); }
#line 2213 "Parser2.tab.c"
    break;

  case 91: /* method_arguments_optional: method_arguments  */
#line 399 "Parser2.y"
                                                    { (yyval._methodArguments) = (yyvsp[0]._methodArguments); }
#line 2219 "Parser2.tab.c"
    break;

  case 92: /* operator_overload: visibility_modifier STATIC type OPERATOR '+' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 401 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Plus,              (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2225 "Parser2.tab.c"
    break;

  case 93: /* operator_overload: visibility_modifier STATIC type OPERATOR '-' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 402 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Minus,             (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2231 "Parser2.tab.c"
    break;

  case 94: /* operator_overload: visibility_modifier STATIC type OPERATOR '*' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 403 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Multiply,          (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2237 "Parser2.tab.c"
    break;

  case 95: /* operator_overload: visibility_modifier STATIC type OPERATOR '/' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 404 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Divide,            (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2243 "Parser2.tab.c"
    break;

  case 96: /* operator_overload: visibility_modifier STATIC type OPERATOR '<' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 405 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Less,              (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2249 "Parser2.tab.c"
    break;

  case 97: /* operator_overload: visibility_modifier STATIC type OPERATOR '>' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 406 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Greater,           (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2255 "Parser2.tab.c"
    break;

  case 98: /* operator_overload: visibility_modifier STATIC type OPERATOR EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 407 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::Equal,             (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2261 "Parser2.tab.c"
    break;

  case 99: /* operator_overload: visibility_modifier STATIC type OPERATOR NOT_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 408 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::NotEqual,          (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2267 "Parser2.tab.c"
    break;

  case 100: /* operator_overload: visibility_modifier STATIC type OPERATOR LESS_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 409 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::LessOrEqual,       (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2273 "Parser2.tab.c"
    break;

  case 101: /* operator_overload: visibility_modifier STATIC type OPERATOR GREATER_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 410 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-12]._visibiltyModifier), (yyvsp[-10]._type), OperatorType::GreaterOrEqual,    (yyvsp[-6]._varDecl), (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq)); }
#line 2279 "Parser2.tab.c"
    break;

  case 102: /* operator_overload: visibility_modifier STATIC type OPERATOR '!' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 411 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-10]._visibiltyModifier), (yyvsp[-8]._type), OperatorType::Not,               (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq));     }
#line 2285 "Parser2.tab.c"
    break;

  case 103: /* operator_overload: visibility_modifier STATIC type OPERATOR DECREMENT '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 412 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-10]._visibiltyModifier), (yyvsp[-8]._type), OperatorType::Decrement,         (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq));     }
#line 2291 "Parser2.tab.c"
    break;

  case 104: /* operator_overload: visibility_modifier STATIC type OPERATOR INCREMENT '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 413 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-10]._visibiltyModifier), (yyvsp[-8]._type), OperatorType::Increment,         (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq));     }
#line 2297 "Parser2.tab.c"
    break;

  case 105: /* operator_overload: visibility_modifier STATIC type OPERATOR '-' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 414 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-10]._visibiltyModifier), (yyvsp[-8]._type), OperatorType::UnaryMinus,        (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq));     }
#line 2303 "Parser2.tab.c"
    break;

  case 106: /* operator_overload: visibility_modifier STATIC type OPERATOR '+' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 415 "Parser2.y"
                                                                                                                                         { (yyval._methodDecl) = new MethodDeclNode((yyvsp[-10]._visibiltyModifier), (yyvsp[-8]._type), OperatorType::UnaryPlus,         (yyvsp[-4]._varDecl), (yyvsp[-1]._stmtSeq));     }
#line 2309 "Parser2.tab.c"
    break;

  case 107: /* constructor_decl: visibility_modifier IDENTIFIER '(' ')' '{' stmt_seq_optional '}'  */
#line 425 "Parser2.y"
                                                                                       { (yyval._constructorDecl) = new ConstructorDeclNode((yyvsp[-6]._visibiltyModifier), (yyvsp[-5]._identifier), MethodArguments::MakeEmpty(), (yyvsp[-1]._stmtSeq)); }
#line 2315 "Parser2.tab.c"
    break;

  case 108: /* constructor_decl: visibility_modifier IDENTIFIER '(' method_arguments ')' '{' stmt_seq_optional '}'  */
#line 426 "Parser2.y"
                                                                                         { (yyval._constructorDecl) = new ConstructorDeclNode((yyvsp[-7]._visibiltyModifier), (yyvsp[-6]._identifier), (yyvsp[-4]._methodArguments), (yyvsp[-1]._stmtSeq)); }
#line 2321 "Parser2.tab.c"
    break;

  case 109: /* destructor_decl: TILDE IDENTIFIER '(' ')' '{' stmt_seq_optional '}'  */
#line 429 "Parser2.y"
                                                                                     { (yyval._destructorDecl) = new DestructorDeclNode((yyvsp[-5]._identifier), (yyvsp[-1]._stmtSeq)); }
#line 2327 "Parser2.tab.c"
    break;

  case 110: /* stmt: ';'  */
#line 437 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode(); }
#line 2333 "Parser2.tab.c"
    break;

  case 111: /* stmt: expr ';'  */
#line 438 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[-1]._expr), /* isReturn= */ false); }
#line 2339 "Parser2.tab.c"
    break;

  case 112: /* stmt: var_decl ';'  */
#line 439 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[-1]._varDecl)); }
#line 2345 "Parser2.tab.c"
    break;

  case 113: /* stmt: var_decl_with_init ';'  */
#line 440 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[-1]._varDecl)); }
#line 2351 "Parser2.tab.c"
    break;

  case 114: /* stmt: while_stmt  */
#line 441 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[0]._while)); }
#line 2357 "Parser2.tab.c"
    break;

  case 115: /* stmt: do_while_stmt  */
#line 442 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[0]._doWhile)); }
#line 2363 "Parser2.tab.c"
    break;

  case 116: /* stmt: for_stmt  */
#line 443 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[0]._for)); }
#line 2369 "Parser2.tab.c"
    break;

  case 117: /* stmt: if_stmt  */
#line 444 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[0]._if)); }
#line 2375 "Parser2.tab.c"
    break;

  case 118: /* stmt: foreach_stmt  */
#line 445 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[0]._foreach)); }
#line 2381 "Parser2.tab.c"
    break;

  case 119: /* stmt: '{' stmt_seq_optional '}'  */
#line 446 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[-1]._stmtSeq)); }
#line 2387 "Parser2.tab.c"
    break;

  case 120: /* stmt: RETURN expr_optional ';'  */
#line 447 "Parser2.y"
                                    { (yyval._stmt) = new StmtNode((yyvsp[-1]._expr), /* isReturn= */ true); }
#line 2393 "Parser2.tab.c"
    break;

  case 121: /* stmt_seq: stmt  */
#line 450 "Parser2.y"
                            { (yyval._stmtSeq) = new StmtSeqNode((yyvsp[0]._stmt)); }
#line 2399 "Parser2.tab.c"
    break;

  case 122: /* stmt_seq: stmt_seq stmt  */
#line 451 "Parser2.y"
                            { (yyval._stmtSeq) -> Add((yyvsp[0]._stmt)); }
#line 2405 "Parser2.tab.c"
    break;

  case 123: /* stmt_seq_optional: %empty  */
#line 453 "Parser2.y"
                            { (yyval._stmtSeq) = StmtSeqNode::MakeEmpty(); }
#line 2411 "Parser2.tab.c"
    break;

  case 124: /* stmt_seq_optional: stmt_seq  */
#line 454 "Parser2.y"
                            { (yyval._stmtSeq) = (yyvsp[0]._stmtSeq); }
#line 2417 "Parser2.tab.c"
    break;

  case 125: /* while_stmt: WHILE '(' expr ')' stmt  */
#line 457 "Parser2.y"
                                                    { (yyval._while) = new WhileNode((yyvsp[-2]._expr), (yyvsp[0]._stmt)); }
#line 2423 "Parser2.tab.c"
    break;

  case 126: /* do_while_stmt: DO stmt WHILE '(' expr ')' ';'  */
#line 459 "Parser2.y"
                                                    { (yyval._doWhile) = new DoWhileNode((yyvsp[-2]._expr), (yyvsp[-5]._stmt)); }
#line 2429 "Parser2.tab.c"
    break;

  case 127: /* for_stmt: FOR '(' var_decl ';' expr_optional ';' expr_optional ')' stmt  */
#line 462 "Parser2.y"
                                                                                            { (yyval._for) = new ForNode((yyvsp[-6]._varDecl), (yyvsp[-4]._expr), (yyvsp[-2]._expr), (yyvsp[0]._stmt)); }
#line 2435 "Parser2.tab.c"
    break;

  case 128: /* for_stmt: FOR '(' var_decl_with_init ';' expr_optional ';' expr_optional ')' stmt  */
#line 463 "Parser2.y"
                                                                                            { (yyval._for) = new ForNode((yyvsp[-6]._varDecl), (yyvsp[-4]._expr), (yyvsp[-2]._expr), (yyvsp[0]._stmt)); }
#line 2441 "Parser2.tab.c"
    break;

  case 129: /* for_stmt: FOR '(' expr_optional ';' expr_optional ';' expr_optional ')' stmt  */
#line 464 "Parser2.y"
                                                                                            { (yyval._for) = new ForNode((yyvsp[-6]._expr), (yyvsp[-4]._expr), (yyvsp[-2]._expr), (yyvsp[0]._stmt)); }
#line 2447 "Parser2.tab.c"
    break;

  case 130: /* if_stmt: IF '(' expr ')' stmt  */
#line 467 "Parser2.y"
                                            { (yyval._if) = new IfNode((yyvsp[-2]._expr), (yyvsp[0]._stmt)); }
#line 2453 "Parser2.tab.c"
    break;

  case 131: /* if_stmt: IF '(' expr ')' stmt ELSE stmt  */
#line 468 "Parser2.y"
                                            { (yyval._if) = new IfNode((yyvsp[-4]._expr), (yyvsp[-2]._stmt), (yyvsp[0]._stmt)); }
#line 2459 "Parser2.tab.c"
    break;

  case 132: /* foreach_stmt: FOREACH '(' var_decl IN_KW expr ')' stmt  */
#line 471 "Parser2.y"
                                                            { (yyval._foreach) = new ForEachNode((yyvsp[-4]._varDecl), (yyvsp[-2]._expr), (yyvsp[0]._stmt)); }
#line 2465 "Parser2.tab.c"
    break;

  case 133: /* access_expr: '(' expr ')'  */
#line 480 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromExpr((yyvsp[-1]._expr)); }
#line 2471 "Parser2.tab.c"
    break;

  case 134: /* access_expr: access_expr '[' expr ']'  */
#line 481 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[-3]._accessExpr), (yyvsp[-1]._expr)); }
#line 2477 "Parser2.tab.c"
    break;

  case 135: /* access_expr: access_expr '[' ']'  */
#line 482 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromBrackets((yyvsp[-2]._accessExpr)); }
#line 2483 "Parser2.tab.c"
    break;

  case 136: /* access_expr: INTEGER  */
#line 483 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromInt((yyvsp[0]._integer)); }
#line 2489 "Parser2.tab.c"
    break;

  case 137: /* access_expr: FLOATING_POINT  */
#line 484 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromFloat((yyvsp[0]._floatingPoint)); }
#line 2495 "Parser2.tab.c"
    break;

  case 138: /* access_expr: STRING  */
#line 485 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromString((yyvsp[0]._string)); }
#line 2501 "Parser2.tab.c"
    break;

  case 139: /* access_expr: CHARACTER  */
#line 486 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromChar((yyvsp[0]._character)); }
#line 2507 "Parser2.tab.c"
    break;

  case 140: /* access_expr: TRUE_KW  */
#line 487 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromBool(true); }
#line 2513 "Parser2.tab.c"
    break;

  case 141: /* access_expr: FALSE_KW  */
#line 488 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromBool(false); }
#line 2519 "Parser2.tab.c"
    break;

  case 142: /* access_expr: IDENTIFIER  */
#line 489 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromId((yyvsp[0]._identifier)); }
#line 2525 "Parser2.tab.c"
    break;

  case 143: /* access_expr: IDENTIFIER '(' expr_seq_optional ')'  */
#line 490 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromCall((yyvsp[-3]._identifier), (yyvsp[-1]._exprSeq)); }
#line 2531 "Parser2.tab.c"
    break;

  case 144: /* access_expr: access_expr '.' IDENTIFIER  */
#line 491 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[-2]._accessExpr), (yyvsp[0]._identifier)); }
#line 2537 "Parser2.tab.c"
    break;

  case 145: /* access_expr: access_expr '.' IDENTIFIER '(' expr_seq_optional ')'  */
#line 492 "Parser2.y"
                                                                            { (yyval._accessExpr) = AccessExpr::FromDot((yyvsp[-5]._accessExpr), (yyvsp[-3]._identifier), (yyvsp[-1]._exprSeq)); }
#line 2543 "Parser2.tab.c"
    break;

  case 146: /* expr: expr '+' expr  */
#line 496 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinPlus, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2549 "Parser2.tab.c"
    break;

  case 147: /* expr: expr '-' expr  */
#line 497 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::BinMinus, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2555 "Parser2.tab.c"
    break;

  case 148: /* expr: expr '*' expr  */
#line 498 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2561 "Parser2.tab.c"
    break;

  case 149: /* expr: expr '/' expr  */
#line 499 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Divide, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2567 "Parser2.tab.c"
    break;

  case 150: /* expr: expr '=' expr  */
#line 500 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Assign, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2573 "Parser2.tab.c"
    break;

  case 151: /* expr: expr PLUS_ASSIGN expr  */
#line 501 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Plus_assign, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2579 "Parser2.tab.c"
    break;

  case 152: /* expr: expr MINUS_ASSIGN expr  */
#line 502 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Minus_assign, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2585 "Parser2.tab.c"
    break;

  case 153: /* expr: expr MULTIPLY_ASSIGN expr  */
#line 503 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Multiply_assign, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2591 "Parser2.tab.c"
    break;

  case 154: /* expr: expr DIVISION_ASSIGN expr  */
#line 504 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Division_assign, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2597 "Parser2.tab.c"
    break;

  case 155: /* expr: expr '<' expr  */
#line 505 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Less, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2603 "Parser2.tab.c"
    break;

  case 156: /* expr: expr '>' expr  */
#line 506 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Greater, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2609 "Parser2.tab.c"
    break;

  case 157: /* expr: expr EQUAL expr  */
#line 507 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Equal, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2615 "Parser2.tab.c"
    break;

  case 158: /* expr: expr NOT_EQUAL expr  */
#line 508 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::NotEqual, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2621 "Parser2.tab.c"
    break;

  case 159: /* expr: expr LESS_OR_EQUAL expr  */
#line 509 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::LessOrEqual, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2627 "Parser2.tab.c"
    break;

  case 160: /* expr: expr GREATER_OR_EQUAL expr  */
#line 510 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::GreaterOrEqual, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2633 "Parser2.tab.c"
    break;

  case 161: /* expr: expr AND expr  */
#line 511 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::And, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2639 "Parser2.tab.c"
    break;

  case 162: /* expr: expr OR expr  */
#line 512 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromBinaryExpression(ExprNode::TypeT::Or, (yyvsp[-2]._expr), (yyvsp[0]._expr)); }
#line 2645 "Parser2.tab.c"
    break;

  case 163: /* expr: '!' expr  */
#line 513 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Not, (yyvsp[0]._expr)); }
#line 2651 "Parser2.tab.c"
    break;

  case 164: /* expr: INCREMENT expr  */
#line 514 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Increment, (yyvsp[0]._expr)); }
#line 2657 "Parser2.tab.c"
    break;

  case 165: /* expr: DECREMENT expr  */
#line 515 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::Decrement, (yyvsp[0]._expr)); }
#line 2663 "Parser2.tab.c"
    break;

  case 166: /* expr: '+' expr  */
#line 516 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryPlus, (yyvsp[0]._expr)); }
#line 2669 "Parser2.tab.c"
    break;

  case 167: /* expr: '-' expr  */
#line 517 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromUnaryExpression(ExprNode::TypeT::UnaryMinus, (yyvsp[0]._expr)); }
#line 2675 "Parser2.tab.c"
    break;

  case 168: /* expr: NULL_KW  */
#line 518 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromNull(); }
#line 2681 "Parser2.tab.c"
    break;

  case 169: /* expr: access_expr  */
#line 519 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromAccessExpr((yyvsp[0]._accessExpr)); }
#line 2687 "Parser2.tab.c"
    break;

  case 170: /* expr: NEW type  */
#line 520 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromNew((yyvsp[0]._type)); }
#line 2693 "Parser2.tab.c"
    break;

  case 171: /* expr: NEW type '{' expr_seq_optional '}'  */
#line 521 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromNew((yyvsp[-3]._type), (yyvsp[-1]._exprSeq)); }
#line 2699 "Parser2.tab.c"
    break;

  case 172: /* expr: NEW '[' ']' '{' expr_seq_optional '}'  */
#line 522 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromNew(nullptr, (yyvsp[-1]._exprSeq)); }
#line 2705 "Parser2.tab.c"
    break;

  case 173: /* expr: '(' standard_type ')' expr  */
#line 523 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromCast((yyvsp[-2]._standardType), (yyvsp[0]._expr)); }
#line 2711 "Parser2.tab.c"
    break;

  case 174: /* expr: NEW standard_type '[' expr ']'  */
#line 524 "Parser2.y"
                                                { (yyval._expr) = ExprNode::FromNew((yyvsp[-3]._standardType), (yyvsp[-1]._expr)); }
#line 2717 "Parser2.tab.c"
    break;

  case 175: /* expr_optional: %empty  */
#line 527 "Parser2.y"
                                { (yyval._expr) = nullptr; }
#line 2723 "Parser2.tab.c"
    break;

  case 176: /* expr_optional: expr  */
#line 528 "Parser2.y"
                                { (yyval._expr) = (yyvsp[0]._expr); }
#line 2729 "Parser2.tab.c"
    break;

  case 177: /* expr_seq: expr  */
#line 531 "Parser2.y"
                                { (yyval._exprSeq) = new ExprSeqNode((yyvsp[0]._expr)); }
#line 2735 "Parser2.tab.c"
    break;

  case 178: /* expr_seq: expr_seq ',' expr  */
#line 532 "Parser2.y"
                                { (yyval._exprSeq) -> Add((yyvsp[0]._expr)); }
#line 2741 "Parser2.tab.c"
    break;

  case 179: /* expr_seq_optional: %empty  */
#line 535 "Parser2.y"
                                { (yyval._exprSeq) = ExprSeqNode::MakeEmpty(); }
#line 2747 "Parser2.tab.c"
    break;

  case 180: /* expr_seq_optional: expr_seq  */
#line 536 "Parser2.y"
                                { (yyval._exprSeq) = (yyvsp[0]._exprSeq); }
#line 2753 "Parser2.tab.c"
    break;


#line 2757 "Parser2.tab.c"

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

#line 542 "Parser2.y"


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
