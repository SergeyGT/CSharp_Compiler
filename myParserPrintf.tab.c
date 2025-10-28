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

#line 102 "myParserPrintf.tab.c"

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
  YYSYMBOL_LESS = 3,                       /* LESS  */
  YYSYMBOL_GREATER = 4,                    /* GREATER  */
  YYSYMBOL_EQUAL = 5,                      /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 6,                  /* NOT_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 7,           /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 8,              /* LESS_OR_EQUAL  */
  YYSYMBOL_OR = 9,                         /* OR  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_BITWISE_OR = 11,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 12,               /* BITWISE_AND  */
  YYSYMBOL_PLUS_ASSIGN = 13,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 14,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 15,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVISION_ASSIGN = 16,           /* DIVISION_ASSIGN  */
  YYSYMBOL_INCREMENT = 17,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 18,                 /* DECREMENT  */
  YYSYMBOL_IDENTIFIER = 19,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 20,                   /* INTEGER  */
  YYSYMBOL_FLOATING_POINT = 21,            /* FLOATING_POINT  */
  YYSYMBOL_FLOAT_LITERAL = 22,             /* FLOAT_LITERAL  */
  YYSYMBOL_STRING = 23,                    /* STRING  */
  YYSYMBOL_CHARACTER = 24,                 /* CHARACTER  */
  YYSYMBOL_DECIMAL_LITERAL = 25,           /* DECIMAL_LITERAL  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_CHAR_KW = 32,                   /* CHAR_KW  */
  YYSYMBOL_INT_KW = 33,                    /* INT_KW  */
  YYSYMBOL_STRING_KW = 34,                 /* STRING_KW  */
  YYSYMBOL_BOOL_KW = 35,                   /* BOOL_KW  */
  YYSYMBOL_FLOAT_KW = 36,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 37,                 /* DOUBLE_KW  */
  YYSYMBOL_DECIMAL_KW = 38,                /* DECIMAL_KW  */
  YYSYMBOL_VOID_KW = 39,                   /* VOID_KW  */
  YYSYMBOL_NEW = 40,                       /* NEW  */
  YYSYMBOL_NULL_KW = 41,                   /* NULL_KW  */
  YYSYMBOL_TRUE_KW = 42,                   /* TRUE_KW  */
  YYSYMBOL_FALSE_KW = 43,                  /* FALSE_KW  */
  YYSYMBOL_PUBLIC = 44,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 45,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 46,                   /* PRIVATE  */
  YYSYMBOL_INTERNAL = 47,                  /* INTERNAL  */
  YYSYMBOL_PROTECTED_INTERNAL = 48,        /* PROTECTED_INTERNAL  */
  YYSYMBOL_STATIC = 49,                    /* STATIC  */
  YYSYMBOL_CLASS = 50,                     /* CLASS  */
  YYSYMBOL_STRUCT = 51,                    /* STRUCT  */
  YYSYMBOL_ENUM = 52,                      /* ENUM  */
  YYSYMBOL_USING = 53,                     /* USING  */
  YYSYMBOL_NAMESPACE = 54,                 /* NAMESPACE  */
  YYSYMBOL_FOREACH = 55,                   /* FOREACH  */
  YYSYMBOL_IN_KW = 56,                     /* IN_KW  */
  YYSYMBOL_OBJECT = 57,                    /* OBJECT  */
  YYSYMBOL_OPERATOR = 58,                  /* OPERATOR  */
  YYSYMBOL_VAR = 59,                       /* VAR  */
  YYSYMBOL_TILDE = 60,                     /* TILDE  */
  YYSYMBOL_INTERPOLATED_STRING_START = 61, /* INTERPOLATED_STRING_START  */
  YYSYMBOL_INTERPOLATED_STRING_END = 62,   /* INTERPOLATED_STRING_END  */
  YYSYMBOL_INTERPOLATED_STRING_TEXT = 63,  /* INTERPOLATED_STRING_TEXT  */
  YYSYMBOL_INTERPOLATED_STRING_EXPR = 64,  /* INTERPOLATED_STRING_EXPR  */
  YYSYMBOL_65_ = 65,                       /* '='  */
  YYSYMBOL_66_ = 66,                       /* '<'  */
  YYSYMBOL_67_ = 67,                       /* '>'  */
  YYSYMBOL_68_ = 68,                       /* '+'  */
  YYSYMBOL_69_ = 69,                       /* '-'  */
  YYSYMBOL_70_ = 70,                       /* '*'  */
  YYSYMBOL_71_ = 71,                       /* '/'  */
  YYSYMBOL_72_ = 72,                       /* '!'  */
  YYSYMBOL_UNARY_MINUS = 73,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 74,                /* UNARY_PLUS  */
  YYSYMBOL_75_ = 75,                       /* '.'  */
  YYSYMBOL_76_ = 76,                       /* ']'  */
  YYSYMBOL_77_ = 77,                       /* '['  */
  YYSYMBOL_78_ = 78,                       /* '('  */
  YYSYMBOL_79_ = 79,                       /* ')'  */
  YYSYMBOL_LOWER_THAN_ELSE = 80,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_81_ = 81,                       /* '{'  */
  YYSYMBOL_82_ = 82,                       /* '}'  */
  YYSYMBOL_83_ = 83,                       /* ','  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_85_ = 85,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_program = 87,                   /* program  */
  YYSYMBOL_access_expr = 88,               /* access_expr  */
  YYSYMBOL_expr = 89,                      /* expr  */
  YYSYMBOL_expr_optional = 90,             /* expr_optional  */
  YYSYMBOL_expr_seq = 91,                  /* expr_seq  */
  YYSYMBOL_expr_seq_optional = 92,         /* expr_seq_optional  */
  YYSYMBOL_stmt = 93,                      /* stmt  */
  YYSYMBOL_stmt_seq = 94,                  /* stmt_seq  */
  YYSYMBOL_stmt_seq_optional = 95,         /* stmt_seq_optional  */
  YYSYMBOL_while_stmt = 96,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 97,             /* do_while_stmt  */
  YYSYMBOL_for_stmt = 98,                  /* for_stmt  */
  YYSYMBOL_if_stmt = 99,                   /* if_stmt  */
  YYSYMBOL_foreach_stmt = 100,             /* foreach_stmt  */
  YYSYMBOL_standard_type = 101,            /* standard_type  */
  YYSYMBOL_standard_array_type = 102,      /* standard_array_type  */
  YYSYMBOL_type = 103,                     /* type  */
  YYSYMBOL_var_decl = 104,                 /* var_decl  */
  YYSYMBOL_var_decl_with_init = 105,       /* var_decl_with_init  */
  YYSYMBOL_method_arguments = 106,         /* method_arguments  */
  YYSYMBOL_method_arguments_optional = 107, /* method_arguments_optional  */
  YYSYMBOL_visibility_modifier = 108,      /* visibility_modifier  */
  YYSYMBOL_operator_overload = 109,        /* operator_overload  */
  YYSYMBOL_constructor_decl = 110,         /* constructor_decl  */
  YYSYMBOL_method_decl = 111,              /* method_decl  */
  YYSYMBOL_static_constructor_decl = 112,  /* static_constructor_decl  */
  YYSYMBOL_destructor_decl = 113,          /* destructor_decl  */
  YYSYMBOL_field_decl = 114,               /* field_decl  */
  YYSYMBOL_class_members = 115,            /* class_members  */
  YYSYMBOL_class_members_optional = 116,   /* class_members_optional  */
  YYSYMBOL_struct_members = 117,           /* struct_members  */
  YYSYMBOL_struct_members_optional = 118,  /* struct_members_optional  */
  YYSYMBOL_struct_decl = 119,              /* struct_decl  */
  YYSYMBOL_enumerators = 120,              /* enumerators  */
  YYSYMBOL_enum_decl = 121,                /* enum_decl  */
  YYSYMBOL_class_decl = 122,               /* class_decl  */
  YYSYMBOL_namespace_members = 123,        /* namespace_members  */
  YYSYMBOL_namespace_members_optional = 124, /* namespace_members_optional  */
  YYSYMBOL_namespace_decl = 125,           /* namespace_decl  */
  YYSYMBOL_namespace_decl_seq = 126,       /* namespace_decl_seq  */
  YYSYMBOL_using_arg = 127,                /* using_arg  */
  YYSYMBOL_using_directive = 128,          /* using_directive  */
  YYSYMBOL_using_directives = 129,         /* using_directives  */
  YYSYMBOL_using_directives_optional = 130, /* using_directives_optional  */
  YYSYMBOL_interpolated_string = 131,      /* interpolated_string  */
  YYSYMBOL_interpolated_string_content = 132 /* interpolated_string_content  */
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
#define YYLAST   1482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  505

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


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
       2,     2,     2,    72,     2,     2,     2,     2,     2,     2,
      78,    79,    70,    68,    83,    69,    75,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    84,
      66,    65,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
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
      73,    74,    80
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   209,   209,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     271,   272,   275,   276,   279,   280,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   300,   301,   304,
     305,   308,   311,   314,   315,   316,   319,   320,   323,   330,
     331,   332,   333,   334,   335,   336,   339,   340,   343,   344,
     345,   358,   359,   362,   363,   370,   371,   373,   374,   381,
     382,   383,   384,   385,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   438,   441,   442,   443,   444,   445,   446,   455,   459,
     467,   468,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   489,   490,   498,   499,   501,   502,
     503,   505,   508,   509,   513,   521,   522,   525,   533,   534,
     535,   542,   543,   544,   545,   546,   547,   550,   551,   554,
     558,   559,   562,   563,   566,   569,   570,   573,   574,   581,
     592,   593,   594
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
  "\"end of file\"", "error", "\"invalid token\"", "LESS", "GREATER",
  "EQUAL", "NOT_EQUAL", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "OR", "AND",
  "BITWISE_OR", "BITWISE_AND", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT", "DECREMENT",
  "IDENTIFIER", "INTEGER", "FLOATING_POINT", "FLOAT_LITERAL", "STRING",
  "CHARACTER", "DECIMAL_LITERAL", "RETURN", "IF", "ELSE", "WHILE", "DO",
  "FOR", "CHAR_KW", "INT_KW", "STRING_KW", "BOOL_KW", "FLOAT_KW",
  "DOUBLE_KW", "DECIMAL_KW", "VOID_KW", "NEW", "NULL_KW", "TRUE_KW",
  "FALSE_KW", "PUBLIC", "PROTECTED", "PRIVATE", "INTERNAL",
  "PROTECTED_INTERNAL", "STATIC", "CLASS", "STRUCT", "ENUM", "USING",
  "NAMESPACE", "FOREACH", "IN_KW", "OBJECT", "OPERATOR", "VAR", "TILDE",
  "INTERPOLATED_STRING_START", "INTERPOLATED_STRING_END",
  "INTERPOLATED_STRING_TEXT", "INTERPOLATED_STRING_EXPR", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'!'", "UNARY_MINUS", "UNARY_PLUS",
  "'.'", "']'", "'['", "'('", "')'", "LOWER_THAN_ELSE", "'{'", "'}'",
  "','", "';'", "':'", "$accept", "program", "access_expr", "expr",
  "expr_optional", "expr_seq", "expr_seq_optional", "stmt", "stmt_seq",
  "stmt_seq_optional", "while_stmt", "do_while_stmt", "for_stmt",
  "if_stmt", "foreach_stmt", "standard_type", "standard_array_type",
  "type", "var_decl", "var_decl_with_init", "method_arguments",
  "method_arguments_optional", "visibility_modifier", "operator_overload",
  "constructor_decl", "method_decl", "static_constructor_decl",
  "destructor_decl", "field_decl", "class_members",
  "class_members_optional", "struct_members", "struct_members_optional",
  "struct_decl", "enumerators", "enum_decl", "class_decl",
  "namespace_members", "namespace_members_optional", "namespace_decl",
  "namespace_decl_seq", "using_arg", "using_directive", "using_directives",
  "using_directives_optional", "interpolated_string",
  "interpolated_string_content", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    36,    63,  -318,   -15,    24,  -318,   -67,  -318,  -318,
     107,  -318,    24,   116,  -318,    43,  -318,  -318,   102,    61,
    -318,  -318,  -318,   102,    74,   150,   160,   167,  -318,  -318,
    -318,  -318,    85,   114,   124,   153,    53,   163,   199,  -318,
    -318,  -318,  -318,  -318,    96,   200,  1252,  -318,  -318,  -318,
    -318,  -318,  -318,   153,   139,   141,    92,  1283,  -318,  -318,
    -318,   163,   142,  -318,    95,   147,  1314,   148,   154,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   212,  -318,  -318,  1344,   214,   127,  1192,   -40,
     157,   158,   217,   156,   159,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,   153,   153,   166,  1344,  -318,  -318,  -318,
    -318,  -318,   218,   162,   219,   226,   182,   961,   184,   244,
      15,   201,   127,  1192,   202,  1192,  1192,  1374,  -318,  1192,
    1192,  1192,  1085,   -40,    37,   246,  1118,   191,   192,   -24,
    -318,  -318,   187,   188,  1192,   252,  -318,   194,   198,   203,
     196,   259,     2,   948,   197,   204,   260,  -318,   205,   210,
    1404,   206,   213,    -2,  1192,  -318,    84,  -318,  -318,  -318,
     216,   221,   209,  -318,  -318,  -318,   215,  1192,  1192,  1192,
    1192,  1192,  1192,  1192,  1192,  1192,  1192,  1192,  1192,  1192,
    1192,  1192,  1192,  1192,  1192,  1192,  -318,   222,  -318,   796,
    -318,  -318,  1192,  1404,  -318,  -318,   868,  1404,  1404,   868,
    -318,  1192,  -318,  -318,  1404,   220,   223,  1404,  1404,   225,
     227,   228,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   241,   242,   251,   948,  -318,   249,  1180,  1192,  1192,
     146,   146,   146,   146,    51,    51,    51,    51,   948,   948,
     948,   948,   948,   146,   146,   123,   123,  -318,  -318,  1192,
    -318,   948,   254,  1192,   257,   261,   868,   262,   263,   868,
    -318,    17,  -318,   868,   264,  -318,  -318,  -318,  -318,  -318,
     276,   265,   266,   268,   269,   270,   948,  -318,   868,   272,
     275,   277,  1404,  1404,  1404,  1404,  1404,  1404,  1404,  1404,
    1404,  1404,  1404,  1404,  1404,  1404,  1404,  1192,   808,   273,
    -318,   278,   281,   948,   267,  1192,  1192,   315,  1023,  1404,
     283,  -318,  -318,  -318,   239,  -318,  -318,   282,   286,  -318,
     287,   868,   305,   307,   285,   308,   309,   310,   311,   312,
     279,   280,   313,   314,    97,   105,   316,   319,   324,   322,
    -318,  -318,  -318,   868,  -318,   512,   691,   335,   306,   332,
     338,   243,  -318,   868,   868,  -318,   341,   868,   868,  1404,
    1404,  1404,  1404,  1404,  1404,   344,   347,  1404,  1404,   348,
    1404,   353,  1404,  1404,  1404,   354,  -318,   356,   868,   868,
    1192,  1192,  1192,  1192,  1192,   357,   358,  -318,   362,   364,
     375,   376,   379,   381,   385,   388,   868,   868,   389,   390,
     868,   391,   868,   392,   394,   395,   868,  -318,   317,  -318,
     706,   352,   393,   413,   781,  -318,  -318,  -318,  -318,   417,
     418,   419,   420,   421,   423,   424,   425,   427,   429,   431,
     430,   432,   435,   448,   449,   450,   868,   451,  1192,  1192,
    1192,   868,   868,   868,   868,   868,   868,   868,  -318,  -318,
     868,   868,  -318,   868,  -318,   868,   868,   868,  -318,  -318,
    -318,   396,   397,   426,  -318,   452,   454,   455,   461,   462,
     465,   466,   467,   468,   469,   470,   471,   868,   868,   868,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     177,     0,     0,   175,   178,     0,   172,     0,     1,   176,
       0,   170,     2,     0,   174,     0,   171,   173,   167,     0,
     163,   161,   162,   168,     0,     0,     0,     0,   166,   164,
     165,   169,     0,     0,     0,   144,     0,   152,     0,    99,
     100,   101,   102,   103,     0,     0,     0,   134,   135,   132,
     136,   137,   133,   145,     0,     0,     0,     0,   147,   148,
     146,   153,     0,   155,     0,     0,     0,     0,    14,     6,
       7,     8,    10,    11,     9,    79,    80,    85,    81,    82,
      83,    84,     0,    12,    13,     0,     0,   180,     0,    90,
      88,    89,     0,     0,     0,    18,   140,   141,   138,   142,
     143,   139,   158,   144,   144,    14,     0,   150,   151,   149,
     154,   157,     0,     0,     0,     0,     0,    54,     0,     0,
       0,    92,   180,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,    91,
     130,   131,     0,     0,    54,     0,   156,     0,     0,     0,
       0,     0,    44,    52,    55,     0,     0,    95,    98,     0,
      97,     0,     0,     0,     0,   181,   180,   179,    39,    40,
       0,    88,    45,    41,    42,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,    16,     5,     0,
      86,    87,     0,    97,   160,   159,    69,    97,    97,    69,
      92,     0,    15,    91,     0,     0,     0,    97,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,   182,     0,     0,    54,     0,
      30,    31,    33,    32,    35,    34,    37,    36,    24,    25,
      26,    27,    23,    28,    29,    19,    20,    21,    22,    54,
       4,    93,     0,    50,     0,     0,     0,     0,     0,    69,
      56,     0,    67,    70,     0,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    53,    96,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
      48,     0,     0,    51,     0,     0,     0,     0,    50,     0,
       0,    57,    68,   128,    91,    58,    59,     0,     0,   129,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    46,    17,    69,    66,     0,     0,     0,     0,     0,
       0,     0,    65,    69,    69,   121,     0,    69,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,    50,    50,    50,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    69,     0,     0,
      69,     0,    69,     0,     0,     0,    69,   122,    76,    71,
       0,     0,     0,     0,     0,   127,   126,   125,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    50,
      50,     0,    69,    69,    69,    69,    69,    69,   116,   115,
      69,    69,   118,    69,   117,    69,    69,    69,   114,    77,
      72,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   113,   112,   120,   119,   108,   109,   104,   105,
     106,   107,    75,    73,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,   -46,   301,  -317,  -318,  -198,  -259,  -318,   178,
    -318,  -318,  -318,  -318,  -318,     7,  -318,    79,   355,   -44,
    -318,   -80,   -25,   480,   501,   121,   122,   502,   128,  -318,
     100,  -318,  -318,   533,  -318,   534,   536,  -318,  -318,   549,
    -318,   529,   562,  -318,  -318,  -318,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   133,   271,   314,   154,   155,   272,   273,   274,
     275,   276,   277,   278,   279,    90,    91,   280,   281,   282,
     158,   159,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    61,    62,    20,    64,    21,    22,    23,    24,    11,
      12,     7,     3,     4,     5,    95,   124
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   358,    94,   219,   220,   221,   222,   317,    13,   223,
     224,    89,    57,    94,   322,   225,   226,    14,   165,    66,
      89,   -90,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   162,   135,    57,   136,     1,    89,
     309,   202,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   203,     6,   177,   178,   179,   180,
      89,   311,   235,     8,   227,   228,   229,   230,   231,   232,
     233,   152,     6,   163,   421,   422,   423,   135,    10,   136,
     216,    89,   189,   190,   191,   192,   193,   194,   195,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   321,   189,   190,   191,   192,   193,   194,   195,   349,
      55,    25,    26,    27,    89,    65,   196,   190,   191,   192,
     193,   194,   195,   262,    18,    92,    15,   283,   284,   418,
     419,   471,   472,   473,   171,    17,    92,   290,   291,   176,
      39,    40,    41,    42,    43,   115,    19,   122,   123,   189,
     190,   191,   192,   193,   194,   195,    31,    89,    58,    59,
     152,    89,    89,   152,   120,    60,    35,    13,    89,    32,
      36,    89,    89,   104,    98,    99,   379,   111,   112,    33,
     380,   101,   107,   108,   381,   145,    34,   469,   382,   109,
     122,   123,   474,   194,   195,    37,   156,    39,    40,    41,
      42,    43,    44,   142,   143,    38,   172,    39,    40,    41,
      42,    43,    44,    45,   192,   193,   194,   195,    63,    67,
     152,   102,   103,   152,   110,   113,   116,   152,   502,   503,
     504,   118,   117,   121,   137,   138,   139,   146,   148,   156,
     140,   147,   152,   141,   144,   149,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,   150,   160,   161,   167,   197,   164,   200,   201,   204,
     205,   162,   152,    89,   360,   206,   207,   209,   210,   213,
     211,   208,   156,   212,   217,   152,   156,   156,   214,   215,
     238,   218,   236,   156,   239,   324,   156,   156,   237,   394,
     259,   288,   289,   292,   202,   293,   294,   152,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   152,   152,   304,
     305,   152,   152,    89,    89,    89,    89,    89,    89,   306,
     307,    89,    89,   312,    89,   315,    89,    89,    89,   316,
     318,   319,   152,   152,   357,   446,   323,   327,   328,   325,
     326,   354,   329,   331,   332,   351,   333,   352,   375,   376,
     152,   152,   353,   363,   152,   362,   152,   364,   369,   365,
     152,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   367,   285,   368,   134,
     391,   370,   371,   372,   373,   374,   377,   378,   156,   383,
     152,    93,   384,   385,   386,   152,   152,   152,   152,   152,
     152,   152,    93,   390,   152,   152,   392,   152,   153,   152,
     152,   152,   393,   397,   166,   406,   168,   169,   407,   410,
     173,   174,   175,   134,   412,   416,   448,   199,   417,   425,
     426,   152,   152,   152,   427,   153,   428,   320,   156,   156,
     156,   156,   156,   156,   429,   430,   156,   156,   431,   156,
     432,   156,   156,   156,   433,   234,   330,   434,   437,   438,
     440,   442,   157,   443,   444,   487,   488,   449,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   450,   452,   453,
     454,   455,   456,   261,   457,   489,   458,   459,   460,   366,
     461,   463,   286,   462,   464,   157,   465,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   466,
     467,   387,   468,    96,   490,   470,   491,   492,   308,   153,
     310,   395,   396,   493,   494,   398,   399,   495,   496,   497,
     498,   499,   500,   501,    97,   100,    28,    29,   157,    30,
     153,    16,   157,   157,   313,    56,     9,     0,     0,   287,
       0,     0,   157,   157,     0,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   435,   436,     0,     0,   439,     0,
     441,   388,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,   355,   356,     0,   313,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     475,   476,   477,   478,   479,   480,     0,     0,   481,   482,
       0,   483,     0,   484,   485,   486,     0,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   359,   361,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   420,   313,   313,   313,   424,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,     0,     0,
       0,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,     0,   400,   401,   402,   403,   404,   405,
       0,     0,   408,   409,     0,   411,     0,   413,   414,   415,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   313,
     313,   313,     0,     0,     0,     0,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,     0,
     389,   189,   190,   191,   192,   193,   194,   195,     0,     0,
       0,     0,     0,     0,     0,   447,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,     0,     0,
       0,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,   191,   192,
     193,   194,   195,     0,     0,     0,     0,     0,     0,     0,
     451,   189,   190,   191,   192,   193,   194,   195,     0,     0,
       0,     0,   260,   189,   190,   191,   192,   193,   194,   195,
       0,     0,     0,     0,   350,   125,   126,   105,    69,    70,
      71,    72,    73,    74,   263,   264,     0,   265,   266,   267,
      75,    76,    77,    78,    79,    80,    81,     0,   127,   128,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   268,     0,     0,     0,    86,     0,    87,
       0,     0,     0,     0,     0,     0,   129,   130,     0,     0,
     131,     0,     0,     0,     0,     0,   132,     0,     0,   269,
       0,     0,   270,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
     105,    69,    70,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,   127,   128,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     151,     0,    87,     0,     0,     0,     0,     0,     0,   129,
     130,     0,     0,   131,     0,     0,     0,     0,     0,   132,
     125,   126,   105,    69,    70,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,   127,   128,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,    87,     0,     0,     0,     0,     0,
       0,   129,   130,     0,     0,   131,     0,     0,     0,     0,
       0,   132,   125,   126,   105,    69,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,   127,   128,    83,    84,     0,
       0,     0,     0,     0,     0,   125,   126,   105,    69,    70,
      71,    72,    73,    74,     0,     0,    87,     0,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,   127,   128,
      83,    84,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,   129,   130,     0,     0,
     131,     0,     0,     0,   198,     0,   132,   125,   126,   105,
      69,    70,    71,    72,    73,    74,     0,     0,     0,   125,
     126,   105,    69,    70,    71,    72,    73,    74,     0,     0,
     127,   128,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   128,    83,    84,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,   129,   130,
       0,     0,   131,    87,     0,     0,   200,     0,   132,     0,
     129,   130,     0,     0,   131,     0,     0,     0,     0,     0,
     132,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,    83,    84,     0,     0,     0,     0,
       0,    85,   105,    69,    70,    71,    72,    73,    74,     0,
       0,    86,     0,    87,     0,    75,    76,    77,    78,    79,
      80,    81,    82,     0,     0,    83,    84,     0,     0,     0,
      88,     0,   106,   105,    69,    70,    71,    72,    73,    74,
       0,     0,    86,     0,    87,     0,    75,    76,    77,    78,
      79,    80,    81,   114,     0,     0,    83,    84,     0,     0,
       0,    88,     0,   105,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,    87,    75,    76,    77,    78,
      79,    80,    81,   119,     0,     0,    83,    84,     0,     0,
       0,     0,    88,   105,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,    87,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,    83,    84,     0,     0,
       0,     0,    88,   105,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,    87,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,    83,    84,     0,     0,
       0,   170,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88
};

static const yytype_int16 yycheck[] =
{
      46,   318,    46,     5,     6,     7,     8,   266,    75,    11,
      12,    57,    37,    57,   273,    17,    18,    84,   122,    44,
      66,    19,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    19,    75,    61,    77,    53,    85,
     238,    65,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    78,    19,     5,     6,     7,     8,
     106,   259,   166,     0,    66,    67,    68,    69,    70,    71,
      72,   117,    19,    58,   391,   392,   393,    75,    54,    77,
     160,   127,    65,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    84,    65,    66,    67,    68,    69,    70,    71,   307,
      57,    50,    51,    52,   160,    19,    79,    66,    67,    68,
      69,    70,    71,   203,    81,    46,    19,   207,   208,   388,
     389,   448,   449,   450,   127,    19,    57,   217,   218,   132,
      44,    45,    46,    47,    48,    66,    44,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    82,   203,    37,    37,
     206,   207,   208,   209,    85,    37,    81,    75,   214,    19,
      85,   217,   218,    81,    53,    53,    79,    82,    83,    19,
      83,    53,    61,    61,    79,   106,    19,   446,    83,    61,
      63,    64,   451,    70,    71,    81,   117,    44,    45,    46,
      47,    48,    49,   103,   104,    81,   127,    44,    45,    46,
      47,    48,    49,    60,    68,    69,    70,    71,    19,    19,
     266,    82,    81,   269,    82,    78,    78,   273,   487,   488,
     489,    19,    78,    19,    77,    77,    19,    19,    19,   160,
      84,    79,   288,    84,    78,    19,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,    79,    78,    19,    62,    19,    65,    76,    76,    82,
      82,    19,   318,   319,   318,    81,    78,    81,    19,    19,
      83,    78,   203,    79,    78,   331,   207,   208,    83,    79,
      81,    78,    76,   214,    79,    19,   217,   218,    77,    56,
      78,    81,    79,    78,    65,    78,    78,   353,    78,    78,
      78,    78,    78,    78,    78,    78,    78,   363,   364,    78,
      78,   367,   368,   369,   370,   371,   372,   373,   374,    78,
      81,   377,   378,    79,   380,    78,   382,   383,   384,    78,
      78,    78,   388,   389,    29,    28,    82,    79,    79,    84,
      84,    84,    82,    81,    79,    82,    79,    79,    79,    79,
     406,   407,    81,    81,   410,    82,   412,    81,    83,    82,
     416,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,    81,   209,    81,    88,
      84,    83,    83,    83,    83,    83,    83,    83,   319,    83,
     446,    46,    83,    79,    82,   451,   452,   453,   454,   455,
     456,   457,    57,    78,   460,   461,    84,   463,   117,   465,
     466,   467,    84,    82,   123,    81,   125,   126,    81,    81,
     129,   130,   131,   132,    81,    81,    84,   136,    82,    82,
      82,   487,   488,   489,    82,   144,    82,   269,   369,   370,
     371,   372,   373,   374,    79,    79,   377,   378,    79,   380,
      79,   382,   383,   384,    79,   164,   288,    79,    79,    79,
      79,    79,   117,    79,    79,    79,    79,    84,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,    84,    81,    81,
      81,    81,    81,   202,    81,    79,    82,    82,    81,   331,
      81,    81,   211,    82,    82,   160,    81,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    81,
      81,   353,    82,    53,    82,    84,    82,    82,   237,   238,
     239,   363,   364,    82,    82,   367,   368,    82,    82,    82,
      82,    82,    82,    82,    53,    53,    23,    23,   203,    23,
     259,    12,   207,   208,   263,    36,     4,    -1,    -1,   214,
      -1,    -1,   217,   218,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,   406,   407,    -1,    -1,   410,    -1,
     412,    79,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   315,   316,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     452,   453,   454,   455,   456,   457,    -1,    -1,   460,   461,
      -1,   463,    -1,   465,   466,   467,    -1,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,   319,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   390,   391,   392,   393,   394,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,   369,   370,   371,   372,   373,   374,
      -1,    -1,   377,   378,    -1,   380,    -1,   382,   383,   384,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
     449,   450,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    76,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    76,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,
      -1,    -1,    84,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    78,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    72,    40,    41,
      42,    43,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    78,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      -1,    -1,    72,    61,    -1,    -1,    76,    -1,    78,    -1,
      68,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    59,    -1,    61,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    -1,    -1,
      78,    -1,    49,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    59,    -1,    61,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    -1,    -1,
      -1,    78,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    61,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    78,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    61,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    78,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    61,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    87,   128,   129,   130,    19,   127,     0,   128,
      54,   125,   126,    75,    84,    19,   125,    19,    81,    44,
     119,   121,   122,   123,   124,    50,    51,    52,   119,   121,
     122,    82,    19,    19,    19,    81,    85,    81,    81,    44,
      45,    46,    47,    48,    49,    60,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    57,   127,   108,   111,   112,
     114,   117,   118,    19,   120,    19,   108,    19,    19,    20,
      21,    22,    23,    24,    25,    32,    33,    34,    35,    36,
      37,    38,    39,    42,    43,    49,    59,    61,    78,    88,
     101,   102,   103,   104,   105,   131,   109,   110,   111,   112,
     113,   114,    82,    81,    81,    19,    49,   111,   112,   114,
      82,    82,    83,    78,    39,   103,    78,    78,    19,    39,
     103,    19,    63,    64,   132,    17,    18,    40,    41,    68,
      69,    72,    78,    88,    89,    75,    77,    77,    77,    19,
      84,    84,   116,   116,    78,   103,    19,    79,    19,    19,
      79,    59,    88,    89,    91,    92,   103,   104,   106,   107,
      78,    19,    19,    58,    65,   132,    89,    62,    89,    89,
      77,   101,   103,    89,    89,    89,   101,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    65,
      66,    67,    68,    69,    70,    71,    79,    19,    76,    89,
      76,    76,    65,    78,    82,    82,    81,    78,    78,    81,
      19,    83,    79,    19,    83,    79,   107,    78,    78,     5,
       6,     7,     8,    11,    12,    17,    18,    66,    67,    68,
      69,    70,    71,    72,    89,   132,    76,    77,    81,    79,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    78,
      76,    89,   107,    26,    27,    29,    30,    31,    55,    81,
      84,    89,    93,    94,    95,    96,    97,    98,    99,   100,
     103,   104,   105,   107,   107,    95,    89,   104,    81,    79,
     107,   107,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    81,    89,    92,
      89,    92,    79,    89,    90,    78,    78,    93,    78,    78,
      95,    84,    93,    82,    19,    84,    84,    79,    79,    82,
      95,    81,    79,    79,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,    92,
      76,    82,    79,    81,    84,    89,    89,    29,    90,   104,
     105,   104,    82,    81,    81,    82,    95,    81,    81,    83,
      83,    83,    83,    83,    83,    79,    79,    83,    83,    79,
      83,    79,    83,    83,    83,    79,    82,    95,    79,    79,
      78,    84,    84,    84,    56,    95,    95,    82,    95,    95,
     104,   104,   104,   104,   104,   104,    81,    81,   104,   104,
      81,   104,    81,   104,   104,   104,    81,    82,    93,    93,
      89,    90,    90,    90,    89,    82,    82,    82,    82,    79,
      79,    79,    79,    79,    79,    95,    95,    79,    79,    95,
      79,    95,    79,    79,    79,    95,    28,    79,    84,    84,
      84,    79,    81,    81,    81,    81,    81,    81,    82,    82,
      81,    81,    82,    81,    82,    81,    81,    81,    82,    93,
      84,    90,    90,    90,    93,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    79,    79,    79,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    93,    93,    93
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    97,    98,    98,    98,    99,    99,   100,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   111,   111,   111,   111,   111,   111,   112,   113,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   120,   120,   121,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   124,   124,   125,
     126,   126,   127,   127,   128,   129,   129,   130,   130,   131,
     132,   132,   132
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     6,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     1,     1,     2,     5,     6,     4,     5,
       0,     1,     1,     3,     0,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     1,     2,     0,
       1,     5,     7,     9,     9,     9,     5,     7,     7,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     2,     2,     4,     4,     1,     3,     0,     1,     1,
       1,     1,     1,     1,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    11,    11,    11,    11,    11,    13,
      13,     8,     9,     9,    10,    10,    10,    10,     7,     7,
       3,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     0,     1,     1,     1,     1,     2,
       2,     2,     0,     1,     6,     1,     3,     6,     6,     8,
       8,     1,     1,     1,     2,     2,     2,     0,     1,     5,
       1,     2,     1,     3,     3,     1,     2,     0,     1,     3,
       0,     2,     3
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
  case 2: /* program: using_directives_optional namespace_decl_seq  */
#line 209 "myParserPrintf.y"
                                                      { treeRoot = new Program((yyvsp[-1]._usingDirectives), (yyvsp[0]._namespaceDeclSeq)); }
#line 1749 "myParserPrintf.tab.c"
    break;

  case 3: /* access_expr: '(' expr ')'  */
#line 216 "myParserPrintf.y"
                                                                            { Print("access_expr -> ( expr )"); }
#line 1755 "myParserPrintf.tab.c"
    break;

  case 4: /* access_expr: access_expr '[' expr ']'  */
#line 217 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr [ expr ]"); }
#line 1761 "myParserPrintf.tab.c"
    break;

  case 5: /* access_expr: access_expr '[' ']'  */
#line 218 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr [ ]"); }
#line 1767 "myParserPrintf.tab.c"
    break;

  case 6: /* access_expr: INTEGER  */
#line 219 "myParserPrintf.y"
                                                                            { Print("access_expr -> INTEGER", (yyvsp[0]._integer)); }
#line 1773 "myParserPrintf.tab.c"
    break;

  case 7: /* access_expr: FLOATING_POINT  */
#line 220 "myParserPrintf.y"
                                                                            { Print("access_expr -> FLOATING_POINT", (yyvsp[0]._floatingPoint)); }
#line 1779 "myParserPrintf.tab.c"
    break;

  case 8: /* access_expr: FLOAT_LITERAL  */
#line 221 "myParserPrintf.y"
                                                                            { Print("access_expr -> FLOAT_LITERAL", (yyvsp[0]._floatValue)); }
#line 1785 "myParserPrintf.tab.c"
    break;

  case 9: /* access_expr: DECIMAL_LITERAL  */
#line 222 "myParserPrintf.y"
                                                                                                                                        { Print("access_expr -> DECIMAL_LITERAL", (yyvsp[0]._floatingPoint)); }
#line 1791 "myParserPrintf.tab.c"
    break;

  case 10: /* access_expr: STRING  */
#line 223 "myParserPrintf.y"
                                                                            { Print("access_expr -> FLOATING_STRING", (yyvsp[0]._string)); }
#line 1797 "myParserPrintf.tab.c"
    break;

  case 11: /* access_expr: CHARACTER  */
#line 224 "myParserPrintf.y"
                                                                            { Print("access_expr -> CHARACTER", "'" + (yyvsp[0]._character) + "'"); }
#line 1803 "myParserPrintf.tab.c"
    break;

  case 12: /* access_expr: TRUE_KW  */
#line 225 "myParserPrintf.y"
                                                                            { Print("access_expr -> TRUE_KW"); }
#line 1809 "myParserPrintf.tab.c"
    break;

  case 13: /* access_expr: FALSE_KW  */
#line 226 "myParserPrintf.y"
                                                                            { Print("access_expr -> FALSE_KW"); }
#line 1815 "myParserPrintf.tab.c"
    break;

  case 14: /* access_expr: IDENTIFIER  */
#line 227 "myParserPrintf.y"
                                                                            { Print("access_expr -> IDENTIFIER", (yyvsp[0]._identifier)); }
#line 1821 "myParserPrintf.tab.c"
    break;

  case 15: /* access_expr: IDENTIFIER '(' expr_seq_optional ')'  */
#line 228 "myParserPrintf.y"
                                                                            { Print("access_expr -> IDENTIFIER ( expr_seq_optional )", (yyvsp[-3]._identifier)); }
#line 1827 "myParserPrintf.tab.c"
    break;

  case 16: /* access_expr: access_expr '.' IDENTIFIER  */
#line 229 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr . IDENTIFIER"); }
#line 1833 "myParserPrintf.tab.c"
    break;

  case 17: /* access_expr: access_expr '.' IDENTIFIER '(' expr_seq_optional ')'  */
#line 230 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr . IDENTIFIER ( expr_seq_optional )"); }
#line 1839 "myParserPrintf.tab.c"
    break;

  case 18: /* access_expr: interpolated_string  */
#line 231 "myParserPrintf.y"
                                                                            { Print("access_expr -> interpolated_string"); }
#line 1845 "myParserPrintf.tab.c"
    break;

  case 19: /* expr: expr '+' expr  */
#line 238 "myParserPrintf.y"
                                                { Print("expr + expr"); }
#line 1851 "myParserPrintf.tab.c"
    break;

  case 20: /* expr: expr '-' expr  */
#line 239 "myParserPrintf.y"
                                                { Print("expr - expr"); }
#line 1857 "myParserPrintf.tab.c"
    break;

  case 21: /* expr: expr '*' expr  */
#line 240 "myParserPrintf.y"
                                                { Print("expr * expr"); }
#line 1863 "myParserPrintf.tab.c"
    break;

  case 22: /* expr: expr '/' expr  */
#line 241 "myParserPrintf.y"
                                                { Print("expr / expr"); }
#line 1869 "myParserPrintf.tab.c"
    break;

  case 23: /* expr: expr '=' expr  */
#line 242 "myParserPrintf.y"
                                                { Print("expr = expr"); }
#line 1875 "myParserPrintf.tab.c"
    break;

  case 24: /* expr: expr PLUS_ASSIGN expr  */
#line 243 "myParserPrintf.y"
                                                { Print("expr PLUS_ASSIGN expr"); }
#line 1881 "myParserPrintf.tab.c"
    break;

  case 25: /* expr: expr MINUS_ASSIGN expr  */
#line 244 "myParserPrintf.y"
                                                { Print("expr MINUS_ASSIGN expr"); }
#line 1887 "myParserPrintf.tab.c"
    break;

  case 26: /* expr: expr MULTIPLY_ASSIGN expr  */
#line 245 "myParserPrintf.y"
                                                { Print("expr MULTIPLY_ASSIGN expr"); }
#line 1893 "myParserPrintf.tab.c"
    break;

  case 27: /* expr: expr DIVISION_ASSIGN expr  */
#line 246 "myParserPrintf.y"
                                                { Print("expr DIVISION_ASSIGN expr"); }
#line 1899 "myParserPrintf.tab.c"
    break;

  case 28: /* expr: expr '<' expr  */
#line 247 "myParserPrintf.y"
                                                { Print("expr < expr"); }
#line 1905 "myParserPrintf.tab.c"
    break;

  case 29: /* expr: expr '>' expr  */
#line 248 "myParserPrintf.y"
                                                { Print("expr > expr"); }
#line 1911 "myParserPrintf.tab.c"
    break;

  case 30: /* expr: expr EQUAL expr  */
#line 249 "myParserPrintf.y"
                                                { Print("expr EQUAL expr"); }
#line 1917 "myParserPrintf.tab.c"
    break;

  case 31: /* expr: expr NOT_EQUAL expr  */
#line 250 "myParserPrintf.y"
                                                { Print("expr NOT_EQUAL expr"); }
#line 1923 "myParserPrintf.tab.c"
    break;

  case 32: /* expr: expr LESS_OR_EQUAL expr  */
#line 251 "myParserPrintf.y"
                                                { Print("expr LESS_OR_EQUAL expr"); }
#line 1929 "myParserPrintf.tab.c"
    break;

  case 33: /* expr: expr GREATER_OR_EQUAL expr  */
#line 252 "myParserPrintf.y"
                                                { Print("expr GREATER_OR_EQUAL expr"); }
#line 1935 "myParserPrintf.tab.c"
    break;

  case 34: /* expr: expr AND expr  */
#line 253 "myParserPrintf.y"
                                                { Print("expr AND expr"); }
#line 1941 "myParserPrintf.tab.c"
    break;

  case 35: /* expr: expr OR expr  */
#line 254 "myParserPrintf.y"
                                                { Print("expr OR expr"); }
#line 1947 "myParserPrintf.tab.c"
    break;

  case 36: /* expr: expr BITWISE_AND expr  */
#line 255 "myParserPrintf.y"
                                                { Print("expr BITWISE_AND expr"); }
#line 1953 "myParserPrintf.tab.c"
    break;

  case 37: /* expr: expr BITWISE_OR expr  */
#line 256 "myParserPrintf.y"
                                                { Print("expr BITWISE_OR expr"); }
#line 1959 "myParserPrintf.tab.c"
    break;

  case 38: /* expr: '!' expr  */
#line 257 "myParserPrintf.y"
                                                { Print(" ! expr"); }
#line 1965 "myParserPrintf.tab.c"
    break;

  case 39: /* expr: INCREMENT expr  */
#line 258 "myParserPrintf.y"
                                                { Print("INCREMENT expr"); }
#line 1971 "myParserPrintf.tab.c"
    break;

  case 40: /* expr: DECREMENT expr  */
#line 259 "myParserPrintf.y"
                                                { Print("DECREMENT expr"); }
#line 1977 "myParserPrintf.tab.c"
    break;

  case 41: /* expr: '+' expr  */
#line 260 "myParserPrintf.y"
                                                { Print("+ expr UNARY_PLUS"); }
#line 1983 "myParserPrintf.tab.c"
    break;

  case 42: /* expr: '-' expr  */
#line 261 "myParserPrintf.y"
                                                { Print("- expr UNARY_MINUS"); }
#line 1989 "myParserPrintf.tab.c"
    break;

  case 43: /* expr: NULL_KW  */
#line 262 "myParserPrintf.y"
                                                { Print("NULL_KW"); }
#line 1995 "myParserPrintf.tab.c"
    break;

  case 44: /* expr: access_expr  */
#line 263 "myParserPrintf.y"
                                                { Print("access_expr"); }
#line 2001 "myParserPrintf.tab.c"
    break;

  case 45: /* expr: NEW type  */
#line 264 "myParserPrintf.y"
                                                { Print("NEW type"); }
#line 2007 "myParserPrintf.tab.c"
    break;

  case 46: /* expr: NEW type '{' expr_seq_optional '}'  */
#line 265 "myParserPrintf.y"
                                                { Print("NEW type { expr_seq_optional }"); }
#line 2013 "myParserPrintf.tab.c"
    break;

  case 47: /* expr: NEW '[' ']' '{' expr_seq_optional '}'  */
#line 266 "myParserPrintf.y"
                                                { Print("NEW [] { expr_seq_optional }"); }
#line 2019 "myParserPrintf.tab.c"
    break;

  case 48: /* expr: '(' standard_type ')' expr  */
#line 267 "myParserPrintf.y"
                                                { Print("( standard_type )"); }
#line 2025 "myParserPrintf.tab.c"
    break;

  case 49: /* expr: NEW standard_type '[' expr ']'  */
#line 268 "myParserPrintf.y"
                                                { Print("NEW standard_type [ expr ]"); }
#line 2031 "myParserPrintf.tab.c"
    break;

  case 50: /* expr_optional: %empty  */
#line 271 "myParserPrintf.y"
                                { Print(" expr_optional -> empty "); }
#line 2037 "myParserPrintf.tab.c"
    break;

  case 51: /* expr_optional: expr  */
#line 272 "myParserPrintf.y"
                                { Print(" expr_optional -> expr "); }
#line 2043 "myParserPrintf.tab.c"
    break;

  case 52: /* expr_seq: expr  */
#line 275 "myParserPrintf.y"
                                { Print(" expr_seq -> expr "); }
#line 2049 "myParserPrintf.tab.c"
    break;

  case 53: /* expr_seq: expr_seq ',' expr  */
#line 276 "myParserPrintf.y"
                                { Print(" expr_seq -> expr_seq , expr "); }
#line 2055 "myParserPrintf.tab.c"
    break;

  case 54: /* expr_seq_optional: %empty  */
#line 279 "myParserPrintf.y"
                                { Print("expr_seq_optional -> empty"); }
#line 2061 "myParserPrintf.tab.c"
    break;

  case 55: /* expr_seq_optional: expr_seq  */
#line 280 "myParserPrintf.y"
                                { Print("expr_seq_optional -> expr_seq"); }
#line 2067 "myParserPrintf.tab.c"
    break;

  case 56: /* stmt: ';'  */
#line 287 "myParserPrintf.y"
                                    { Print("stmt -> ;"); }
#line 2073 "myParserPrintf.tab.c"
    break;

  case 57: /* stmt: expr ';'  */
#line 288 "myParserPrintf.y"
                                    { Print("stmt -> expr ;"); }
#line 2079 "myParserPrintf.tab.c"
    break;

  case 58: /* stmt: var_decl ';'  */
#line 289 "myParserPrintf.y"
                                    { Print("stmt -> var_decl ;"); }
#line 2085 "myParserPrintf.tab.c"
    break;

  case 59: /* stmt: var_decl_with_init ';'  */
#line 290 "myParserPrintf.y"
                                    { Print("stmt -> var_decl_with_init ;"); }
#line 2091 "myParserPrintf.tab.c"
    break;

  case 60: /* stmt: while_stmt  */
#line 291 "myParserPrintf.y"
                                    { Print("stmt -> while_stmt ;"); }
#line 2097 "myParserPrintf.tab.c"
    break;

  case 61: /* stmt: do_while_stmt  */
#line 292 "myParserPrintf.y"
                                    { Print("stmt -> do_while_stmt ;"); }
#line 2103 "myParserPrintf.tab.c"
    break;

  case 62: /* stmt: for_stmt  */
#line 293 "myParserPrintf.y"
                                    { Print("stmt -> for_stmt ;"); }
#line 2109 "myParserPrintf.tab.c"
    break;

  case 63: /* stmt: if_stmt  */
#line 294 "myParserPrintf.y"
                                    { Print("stmt -> if_stmt ;"); }
#line 2115 "myParserPrintf.tab.c"
    break;

  case 64: /* stmt: foreach_stmt  */
#line 295 "myParserPrintf.y"
                                    { Print("stmt -> foreach_stmt ;"); }
#line 2121 "myParserPrintf.tab.c"
    break;

  case 65: /* stmt: '{' stmt_seq_optional '}'  */
#line 296 "myParserPrintf.y"
                                    { Print("stmt -> { stmt_seq_optional } ;"); }
#line 2127 "myParserPrintf.tab.c"
    break;

  case 66: /* stmt: RETURN expr_optional ';'  */
#line 297 "myParserPrintf.y"
                                    { Print("stmt -> RETURN expr_optional ;"); }
#line 2133 "myParserPrintf.tab.c"
    break;

  case 67: /* stmt_seq: stmt  */
#line 300 "myParserPrintf.y"
                            { Print("stmt_seq -> stmt"); }
#line 2139 "myParserPrintf.tab.c"
    break;

  case 68: /* stmt_seq: stmt_seq stmt  */
#line 301 "myParserPrintf.y"
                            { Print("stmt_seq -> stmt_seq stmt"); }
#line 2145 "myParserPrintf.tab.c"
    break;

  case 69: /* stmt_seq_optional: %empty  */
#line 304 "myParserPrintf.y"
                            { Print("stmt_seq_optional -> empty"); }
#line 2151 "myParserPrintf.tab.c"
    break;

  case 70: /* stmt_seq_optional: stmt_seq  */
#line 305 "myParserPrintf.y"
                             { Print("stmt_seq_optional -> stmt_seq"); }
#line 2157 "myParserPrintf.tab.c"
    break;

  case 71: /* while_stmt: WHILE '(' expr ')' stmt  */
#line 308 "myParserPrintf.y"
                                                    { Print("while_stmt -> WHILE ( expr ) stmt"); }
#line 2163 "myParserPrintf.tab.c"
    break;

  case 72: /* do_while_stmt: DO stmt WHILE '(' expr ')' ';'  */
#line 311 "myParserPrintf.y"
                                                    { Print("do_while_stmt -> DO stmt WHILE ( expr ) ;"); }
#line 2169 "myParserPrintf.tab.c"
    break;

  case 73: /* for_stmt: FOR '(' var_decl ';' expr_optional ';' expr_optional ')' stmt  */
#line 314 "myParserPrintf.y"
                                                                                            { Print("for_stmt -> FOR ( var_decl ; expr_optional ; expr_optional ) stmt"); }
#line 2175 "myParserPrintf.tab.c"
    break;

  case 74: /* for_stmt: FOR '(' var_decl_with_init ';' expr_optional ';' expr_optional ')' stmt  */
#line 315 "myParserPrintf.y"
                                                                                            { Print("for_stmt -> FOR ( var_decl_with_init ; expr_optional ; expr_optional ) stmt"); }
#line 2181 "myParserPrintf.tab.c"
    break;

  case 75: /* for_stmt: FOR '(' expr_optional ';' expr_optional ';' expr_optional ')' stmt  */
#line 316 "myParserPrintf.y"
                                                                                            { Print("for_stmt -> FOR ( expr_optional ; expr_optional ; expr_optional ) stmt"); }
#line 2187 "myParserPrintf.tab.c"
    break;

  case 76: /* if_stmt: IF '(' expr ')' stmt  */
#line 319 "myParserPrintf.y"
                                                                 { Print("if_stmt -> IF ( expr ) stmt"); }
#line 2193 "myParserPrintf.tab.c"
    break;

  case 77: /* if_stmt: IF '(' expr ')' stmt ELSE stmt  */
#line 320 "myParserPrintf.y"
                                            { Print("if_stmt -> IF ( expr ) stmt ELSE stmt"); }
#line 2199 "myParserPrintf.tab.c"
    break;

  case 78: /* foreach_stmt: FOREACH '(' var_decl IN_KW expr ')' stmt  */
#line 323 "myParserPrintf.y"
                                                            { Print("foreach_stmt -> FOREACH ( var_decl IN_KW expr ) stmt"); }
#line 2205 "myParserPrintf.tab.c"
    break;

  case 79: /* standard_type: CHAR_KW  */
#line 330 "myParserPrintf.y"
                            { Print("standard_type -> CHAR_KW"); }
#line 2211 "myParserPrintf.tab.c"
    break;

  case 80: /* standard_type: INT_KW  */
#line 331 "myParserPrintf.y"
                            { Print("standard_type -> INT_KW"); }
#line 2217 "myParserPrintf.tab.c"
    break;

  case 81: /* standard_type: BOOL_KW  */
#line 332 "myParserPrintf.y"
                            { Print("standard_type -> BOOL_KW"); }
#line 2223 "myParserPrintf.tab.c"
    break;

  case 82: /* standard_type: FLOAT_KW  */
#line 333 "myParserPrintf.y"
                            { Print("standard_type -> FLOAT_KW"); }
#line 2229 "myParserPrintf.tab.c"
    break;

  case 83: /* standard_type: DOUBLE_KW  */
#line 334 "myParserPrintf.y"
                            { Print("standard_type -> DOUBLE_KW"); }
#line 2235 "myParserPrintf.tab.c"
    break;

  case 84: /* standard_type: DECIMAL_KW  */
#line 335 "myParserPrintf.y"
                            { Print("standard_type -> DECIMAL_KW"); }
#line 2241 "myParserPrintf.tab.c"
    break;

  case 85: /* standard_type: STRING_KW  */
#line 336 "myParserPrintf.y"
                            { Print("standard_type -> STRING_KW"); }
#line 2247 "myParserPrintf.tab.c"
    break;

  case 86: /* standard_array_type: standard_type '[' ']'  */
#line 339 "myParserPrintf.y"
                                                    { Print("standard_type [ ]"); }
#line 2253 "myParserPrintf.tab.c"
    break;

  case 87: /* standard_array_type: standard_array_type '[' ']'  */
#line 340 "myParserPrintf.y"
                                                    { Print("standard_array_type [ ]"); }
#line 2259 "myParserPrintf.tab.c"
    break;

  case 88: /* type: standard_type  */
#line 343 "myParserPrintf.y"
                            { Print("type -> standard_type"); }
#line 2265 "myParserPrintf.tab.c"
    break;

  case 89: /* type: standard_array_type  */
#line 344 "myParserPrintf.y"
                            { Print("type -> standard_array_type"); }
#line 2271 "myParserPrintf.tab.c"
    break;

  case 90: /* type: access_expr  */
#line 345 "myParserPrintf.y"
                            { Print("type -> access_expr"); }
#line 2277 "myParserPrintf.tab.c"
    break;

  case 91: /* var_decl: type IDENTIFIER  */
#line 358 "myParserPrintf.y"
                                                    { Print("var_decl -> type IDENTIFIER"); }
#line 2283 "myParserPrintf.tab.c"
    break;

  case 92: /* var_decl: VAR IDENTIFIER  */
#line 359 "myParserPrintf.y"
                                                    { Print("var_decl -> VAR IDENTIFIER"); }
#line 2289 "myParserPrintf.tab.c"
    break;

  case 93: /* var_decl_with_init: type IDENTIFIER '=' expr  */
#line 362 "myParserPrintf.y"
                                                    { Print("var_decl_with_init -> type IDENTIFIER = expr"); }
#line 2295 "myParserPrintf.tab.c"
    break;

  case 94: /* var_decl_with_init: VAR IDENTIFIER '=' expr  */
#line 363 "myParserPrintf.y"
                                                    { Print("var_decl_with_init -> VAR IDENTIFIER = expr"); }
#line 2301 "myParserPrintf.tab.c"
    break;

  case 95: /* method_arguments: var_decl  */
#line 370 "myParserPrintf.y"
                                                    { Print("method_arguments -> var_decl"); }
#line 2307 "myParserPrintf.tab.c"
    break;

  case 96: /* method_arguments: method_arguments ',' var_decl  */
#line 371 "myParserPrintf.y"
                                                    { Print("method_arguments -> method_arguments , var_decl"); }
#line 2313 "myParserPrintf.tab.c"
    break;

  case 97: /* method_arguments_optional: %empty  */
#line 373 "myParserPrintf.y"
                                                    { Print("method_arguments_optional -> empty"); }
#line 2319 "myParserPrintf.tab.c"
    break;

  case 98: /* method_arguments_optional: method_arguments  */
#line 374 "myParserPrintf.y"
                                                    { Print("method_arguments_optional -> method_arguments"); }
#line 2325 "myParserPrintf.tab.c"
    break;

  case 99: /* visibility_modifier: PUBLIC  */
#line 381 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PUBLIC"); }
#line 2331 "myParserPrintf.tab.c"
    break;

  case 100: /* visibility_modifier: PROTECTED  */
#line 382 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PROTECTED"); }
#line 2337 "myParserPrintf.tab.c"
    break;

  case 101: /* visibility_modifier: PRIVATE  */
#line 383 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PRIVATE"); }
#line 2343 "myParserPrintf.tab.c"
    break;

  case 102: /* visibility_modifier: INTERNAL  */
#line 384 "myParserPrintf.y"
                                            { Print("visibility_modifier -> INTERNAL"); }
#line 2349 "myParserPrintf.tab.c"
    break;

  case 103: /* visibility_modifier: PROTECTED_INTERNAL  */
#line 385 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PROTECTED_INTERNAL"); }
#line 2355 "myParserPrintf.tab.c"
    break;

  case 104: /* operator_overload: visibility_modifier STATIC type OPERATOR '+' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 392 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR + ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2361 "myParserPrintf.tab.c"
    break;

  case 105: /* operator_overload: visibility_modifier STATIC type OPERATOR '-' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 393 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR - ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2367 "myParserPrintf.tab.c"
    break;

  case 106: /* operator_overload: visibility_modifier STATIC type OPERATOR '*' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 394 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR * ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2373 "myParserPrintf.tab.c"
    break;

  case 107: /* operator_overload: visibility_modifier STATIC type OPERATOR '/' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 395 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR / ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2379 "myParserPrintf.tab.c"
    break;

  case 108: /* operator_overload: visibility_modifier STATIC type OPERATOR '<' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 396 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR < ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2385 "myParserPrintf.tab.c"
    break;

  case 109: /* operator_overload: visibility_modifier STATIC type OPERATOR '>' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 397 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR > ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2391 "myParserPrintf.tab.c"
    break;

  case 110: /* operator_overload: visibility_modifier STATIC type OPERATOR EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 398 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR == ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2397 "myParserPrintf.tab.c"
    break;

  case 111: /* operator_overload: visibility_modifier STATIC type OPERATOR NOT_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 399 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR != ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2403 "myParserPrintf.tab.c"
    break;

  case 112: /* operator_overload: visibility_modifier STATIC type OPERATOR LESS_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 400 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR <= ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2409 "myParserPrintf.tab.c"
    break;

  case 113: /* operator_overload: visibility_modifier STATIC type OPERATOR GREATER_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 401 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR >= ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2415 "myParserPrintf.tab.c"
    break;

  case 114: /* operator_overload: visibility_modifier STATIC type OPERATOR '!' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 402 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR ! ( var_decl ) { stmt_seq_optional }");     }
#line 2421 "myParserPrintf.tab.c"
    break;

  case 115: /* operator_overload: visibility_modifier STATIC type OPERATOR DECREMENT '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 403 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR -- ( var_decl ) { stmt_seq_optional }");     }
#line 2427 "myParserPrintf.tab.c"
    break;

  case 116: /* operator_overload: visibility_modifier STATIC type OPERATOR INCREMENT '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 404 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR ++ ( var_decl ) { stmt_seq_optional }");     }
#line 2433 "myParserPrintf.tab.c"
    break;

  case 117: /* operator_overload: visibility_modifier STATIC type OPERATOR '-' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 405 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR - ( var_decl ) { stmt_seq_optional }");     }
#line 2439 "myParserPrintf.tab.c"
    break;

  case 118: /* operator_overload: visibility_modifier STATIC type OPERATOR '+' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 406 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR + ( var_decl ) { stmt_seq_optional }");     }
#line 2445 "myParserPrintf.tab.c"
    break;

  case 119: /* operator_overload: visibility_modifier STATIC type OPERATOR BITWISE_AND '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 407 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR & ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2451 "myParserPrintf.tab.c"
    break;

  case 120: /* operator_overload: visibility_modifier STATIC type OPERATOR BITWISE_OR '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 408 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR | ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2457 "myParserPrintf.tab.c"
    break;

  case 121: /* constructor_decl: visibility_modifier IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 438 "myParserPrintf.y"
                                                                                                                                { Print("constructor_decl -> visibility_modifier IDENTIFIER"); }
#line 2463 "myParserPrintf.tab.c"
    break;

  case 122: /* method_decl: visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 441 "myParserPrintf.y"
                                                                                                                                { Print("method_decl -> visibility_modifier type IDENTIFIER"); }
#line 2469 "myParserPrintf.tab.c"
    break;

  case 123: /* method_decl: visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 442 "myParserPrintf.y"
                                                                                                                                        { Print("method_decl -> visibility_modifier VOID_KW IDENTIFIER"); }
#line 2475 "myParserPrintf.tab.c"
    break;

  case 124: /* method_decl: visibility_modifier STATIC type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 443 "myParserPrintf.y"
                                                                                                                                { Print("method_decl -> visibility_modifier STATIC type IDENTIFIER"); }
#line 2481 "myParserPrintf.tab.c"
    break;

  case 125: /* method_decl: visibility_modifier STATIC VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 444 "myParserPrintf.y"
                                                                                                                        { Print("method_decl -> visibility_modifier STATIC VOID_KW IDENTIFIER"); }
#line 2487 "myParserPrintf.tab.c"
    break;

  case 126: /* method_decl: STATIC visibility_modifier type IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 445 "myParserPrintf.y"
                                                                                                                                { Print("method_decl -> STATIC visibility_modifier type IDENTIFIER"); }
#line 2493 "myParserPrintf.tab.c"
    break;

  case 127: /* method_decl: STATIC visibility_modifier VOID_KW IDENTIFIER '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 446 "myParserPrintf.y"
                                                                                                                        { Print("method_decl -> STATIC visibility_modifier VOID_KW IDENTIFIER"); }
#line 2499 "myParserPrintf.tab.c"
    break;

  case 128: /* static_constructor_decl: STATIC IDENTIFIER '(' ')' '{' stmt_seq_optional '}'  */
#line 456 "myParserPrintf.y"
    { Print("STATIC IDENTIFIER"); }
#line 2505 "myParserPrintf.tab.c"
    break;

  case 129: /* destructor_decl: TILDE IDENTIFIER '(' ')' '{' stmt_seq_optional '}'  */
#line 460 "myParserPrintf.y"
    { Print("TILDE IDENTIFIER"); }
#line 2511 "myParserPrintf.tab.c"
    break;

  case 130: /* field_decl: visibility_modifier var_decl ';'  */
#line 467 "myParserPrintf.y"
                                                          { Print("field_decl -> visibility_modifier var_decl ;"); }
#line 2517 "myParserPrintf.tab.c"
    break;

  case 131: /* field_decl: visibility_modifier var_decl_with_init ';'  */
#line 468 "myParserPrintf.y"
                                                          { Print("field_decl -> visibility_modifier var_decl_with_init ;"); }
#line 2523 "myParserPrintf.tab.c"
    break;

  case 132: /* class_members: method_decl  */
#line 475 "myParserPrintf.y"
                                                          { Print("class_members -> method_decl"); }
#line 2529 "myParserPrintf.tab.c"
    break;

  case 133: /* class_members: field_decl  */
#line 476 "myParserPrintf.y"
                                                          { Print("class_members -> field_decl"); }
#line 2535 "myParserPrintf.tab.c"
    break;

  case 134: /* class_members: operator_overload  */
#line 477 "myParserPrintf.y"
                                                          { Print("class_members -> operator_overload"); }
#line 2541 "myParserPrintf.tab.c"
    break;

  case 135: /* class_members: constructor_decl  */
#line 478 "myParserPrintf.y"
                                                          { Print("class_members -> constructor_decl"); }
#line 2547 "myParserPrintf.tab.c"
    break;

  case 136: /* class_members: static_constructor_decl  */
#line 479 "myParserPrintf.y"
                                                          { Print("class_members -> static_constructor_decl"); }
#line 2553 "myParserPrintf.tab.c"
    break;

  case 137: /* class_members: destructor_decl  */
#line 480 "myParserPrintf.y"
                                                          { Print("class_members -> destructor_decl"); }
#line 2559 "myParserPrintf.tab.c"
    break;

  case 138: /* class_members: class_members method_decl  */
#line 481 "myParserPrintf.y"
                                                          { Print("class_members -> class_members method_decl"); }
#line 2565 "myParserPrintf.tab.c"
    break;

  case 139: /* class_members: class_members field_decl  */
#line 482 "myParserPrintf.y"
                                                          { Print("class_members -> class_members field_decl"); }
#line 2571 "myParserPrintf.tab.c"
    break;

  case 140: /* class_members: class_members operator_overload  */
#line 483 "myParserPrintf.y"
                                                          { Print("class_members -> class_members operator_overload"); }
#line 2577 "myParserPrintf.tab.c"
    break;

  case 141: /* class_members: class_members constructor_decl  */
#line 484 "myParserPrintf.y"
                                                          { Print("class_members -> class_members constructor_decl"); }
#line 2583 "myParserPrintf.tab.c"
    break;

  case 142: /* class_members: class_members static_constructor_decl  */
#line 485 "myParserPrintf.y"
                                                          { Print("class_members -> class_members static_constructor_decl"); }
#line 2589 "myParserPrintf.tab.c"
    break;

  case 143: /* class_members: class_members destructor_decl  */
#line 486 "myParserPrintf.y"
                                                          { Print("class_members -> class_members destructor_decl"); }
#line 2595 "myParserPrintf.tab.c"
    break;

  case 144: /* class_members_optional: %empty  */
#line 489 "myParserPrintf.y"
                                            { Print("class_members_optional -> empty"); }
#line 2601 "myParserPrintf.tab.c"
    break;

  case 145: /* class_members_optional: class_members  */
#line 490 "myParserPrintf.y"
                                            { Print("class_members_optional -> class_members"); }
#line 2607 "myParserPrintf.tab.c"
    break;

  case 146: /* struct_members: field_decl  */
#line 498 "myParserPrintf.y"
                                                        { Print("struct_members -> field_decl"); }
#line 2613 "myParserPrintf.tab.c"
    break;

  case 147: /* struct_members: method_decl  */
#line 499 "myParserPrintf.y"
                                                        { Print("struct_members -> method_decl"); }
#line 2619 "myParserPrintf.tab.c"
    break;

  case 148: /* struct_members: static_constructor_decl  */
#line 501 "myParserPrintf.y"
                                                        { Print("struct_members -> static_constructor_decl"); }
#line 2625 "myParserPrintf.tab.c"
    break;

  case 149: /* struct_members: struct_members field_decl  */
#line 502 "myParserPrintf.y"
                                                        { Print("struct_members -> struct_members field_decl"); }
#line 2631 "myParserPrintf.tab.c"
    break;

  case 150: /* struct_members: struct_members method_decl  */
#line 503 "myParserPrintf.y"
                                                        { Print("struct_members -> struct_members method_decl"); }
#line 2637 "myParserPrintf.tab.c"
    break;

  case 151: /* struct_members: struct_members static_constructor_decl  */
#line 505 "myParserPrintf.y"
                                                        { Print("struct_members -> struct_members static_constructor_decl"); }
#line 2643 "myParserPrintf.tab.c"
    break;

  case 152: /* struct_members_optional: %empty  */
#line 508 "myParserPrintf.y"
                                               { Print("struct_members_optional -> empty"); }
#line 2649 "myParserPrintf.tab.c"
    break;

  case 153: /* struct_members_optional: struct_members  */
#line 509 "myParserPrintf.y"
                                           { Print("struct_members_optional -> struct_members"); }
#line 2655 "myParserPrintf.tab.c"
    break;

  case 154: /* struct_decl: PUBLIC STRUCT IDENTIFIER '{' struct_members_optional '}'  */
#line 514 "myParserPrintf.y"
    { Print("public", (yyvsp[-3]._identifier)); }
#line 2661 "myParserPrintf.tab.c"
    break;

  case 155: /* enumerators: IDENTIFIER  */
#line 521 "myParserPrintf.y"
                                            { Print("enumerators -> IDENTIFIER", (yyvsp[0]._identifier)); }
#line 2667 "myParserPrintf.tab.c"
    break;

  case 156: /* enumerators: enumerators ',' IDENTIFIER  */
#line 522 "myParserPrintf.y"
                                            { Print("enumerators -> enumerators , IDENTIFIER"); }
#line 2673 "myParserPrintf.tab.c"
    break;

  case 157: /* enum_decl: PUBLIC ENUM IDENTIFIER '{' enumerators '}'  */
#line 526 "myParserPrintf.y"
    { Print("public", (yyvsp[-3]._identifier)); }
#line 2679 "myParserPrintf.tab.c"
    break;

  case 158: /* class_decl: PUBLIC CLASS IDENTIFIER '{' class_members_optional '}'  */
#line 533 "myParserPrintf.y"
                                                                                    { Print("public", (yyvsp[-3]._identifier)); }
#line 2685 "myParserPrintf.tab.c"
    break;

  case 159: /* class_decl: PUBLIC CLASS IDENTIFIER ':' using_arg '{' class_members_optional '}'  */
#line 534 "myParserPrintf.y"
                                                                                    { Print("class_decl -> PUBLIC CLASS IDENTIFIER : using_arg { class_members_optional }", (yyvsp[-3]._usingArg)); }
#line 2691 "myParserPrintf.tab.c"
    break;

  case 160: /* class_decl: PUBLIC CLASS IDENTIFIER ':' OBJECT '{' class_members_optional '}'  */
#line 535 "myParserPrintf.y"
                                                                                    { Print("class_decl -> PUBLIC CLASS IDENTIFIER : OBJECT { class_members_optional }"); }
#line 2697 "myParserPrintf.tab.c"
    break;

  case 161: /* namespace_members: enum_decl  */
#line 542 "myParserPrintf.y"
                                                { Print("namespace_members -> enum_decl"); }
#line 2703 "myParserPrintf.tab.c"
    break;

  case 162: /* namespace_members: class_decl  */
#line 543 "myParserPrintf.y"
                                                { Print("namespace_members -> class_decl"); }
#line 2709 "myParserPrintf.tab.c"
    break;

  case 163: /* namespace_members: struct_decl  */
#line 544 "myParserPrintf.y"
                                                { Print("namespace_members -> struct_decl"); }
#line 2715 "myParserPrintf.tab.c"
    break;

  case 164: /* namespace_members: namespace_members enum_decl  */
#line 545 "myParserPrintf.y"
                                                { Print("namespace_members -> namespace_members enum_decl"); }
#line 2721 "myParserPrintf.tab.c"
    break;

  case 165: /* namespace_members: namespace_members class_decl  */
#line 546 "myParserPrintf.y"
                                                { Print("namespace_members -> namespace_members class_decl"); }
#line 2727 "myParserPrintf.tab.c"
    break;

  case 166: /* namespace_members: namespace_members struct_decl  */
#line 547 "myParserPrintf.y"
                                                { Print("namespace_members -> namespace_members struct_decl"); }
#line 2733 "myParserPrintf.tab.c"
    break;

  case 167: /* namespace_members_optional: %empty  */
#line 550 "myParserPrintf.y"
                                                    { Print("namespace_members_optional -> empty"); }
#line 2739 "myParserPrintf.tab.c"
    break;

  case 168: /* namespace_members_optional: namespace_members  */
#line 551 "myParserPrintf.y"
                                                    { Print("namespace_members_optional -> namespace_members"); }
#line 2745 "myParserPrintf.tab.c"
    break;

  case 169: /* namespace_decl: NAMESPACE IDENTIFIER '{' namespace_members_optional '}'  */
#line 555 "myParserPrintf.y"
    { Print("namespace_decl");  }
#line 2751 "myParserPrintf.tab.c"
    break;

  case 170: /* namespace_decl_seq: namespace_decl  */
#line 558 "myParserPrintf.y"
                                                        { Print("namespace_decl_seq -> namespace_decl"); }
#line 2757 "myParserPrintf.tab.c"
    break;

  case 171: /* namespace_decl_seq: namespace_decl_seq namespace_decl  */
#line 559 "myParserPrintf.y"
                                                        { Print("namespace_decl_seq -> namespace_decl_seq namespace_decl"); }
#line 2763 "myParserPrintf.tab.c"
    break;

  case 172: /* using_arg: IDENTIFIER  */
#line 562 "myParserPrintf.y"
                                        { Print("using_arg", (yyvsp[0]._identifier)); }
#line 2769 "myParserPrintf.tab.c"
    break;

  case 173: /* using_arg: using_arg '.' IDENTIFIER  */
#line 563 "myParserPrintf.y"
                                        { Print("using_arg . IDENTIFIER"); }
#line 2775 "myParserPrintf.tab.c"
    break;

  case 174: /* using_directive: USING using_arg ';'  */
#line 566 "myParserPrintf.y"
                                        { Print("using_directive", (yyvsp[-1]._usingArg)); }
#line 2781 "myParserPrintf.tab.c"
    break;

  case 175: /* using_directives: using_directive  */
#line 569 "myParserPrintf.y"
                                                    { Print("using_directives -> using_directive"); }
#line 2787 "myParserPrintf.tab.c"
    break;

  case 176: /* using_directives: using_directives using_directive  */
#line 570 "myParserPrintf.y"
                                                    { Print("using_directives -> using_directives using_directive"); }
#line 2793 "myParserPrintf.tab.c"
    break;

  case 177: /* using_directives_optional: %empty  */
#line 573 "myParserPrintf.y"
                                            { Print("using_directives_optional -> empty");  }
#line 2799 "myParserPrintf.tab.c"
    break;

  case 178: /* using_directives_optional: using_directives  */
#line 574 "myParserPrintf.y"
                                            { Print("using_directives_optional -> using_directives"); }
#line 2805 "myParserPrintf.tab.c"
    break;

  case 179: /* interpolated_string: INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END  */
#line 582 "myParserPrintf.y"
    { Print("interpolated_string -> INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END"); }
#line 2811 "myParserPrintf.tab.c"
    break;

  case 180: /* interpolated_string_content: %empty  */
#line 592 "myParserPrintf.y"
                                                { Print("interpolated_string_content -> empty"); }
#line 2817 "myParserPrintf.tab.c"
    break;

  case 181: /* interpolated_string_content: INTERPOLATED_STRING_TEXT interpolated_string_content  */
#line 593 "myParserPrintf.y"
                                                                                                                        { Print("interpolated_string_content -> INTERPOLATED_STRING_TEXT interpolated_string_content"); }
#line 2823 "myParserPrintf.tab.c"
    break;

  case 182: /* interpolated_string_content: INTERPOLATED_STRING_EXPR expr interpolated_string_content  */
#line 594 "myParserPrintf.y"
                                                                                                                { Print("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr interpolated_string_content"); }
#line 2829 "myParserPrintf.tab.c"
    break;


#line 2833 "myParserPrintf.tab.c"

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

#line 598 "myParserPrintf.y"


#ifdef _MSC_VER
#pragma warning( pop )
#endif // _MSC_VER
