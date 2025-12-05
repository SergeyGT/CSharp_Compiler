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
#line 12 "Parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE* yyin;
void yyerror(const char *s);

#line 82 "Parser.tab.c"

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

#include "Parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER_LITERAL = 3,            /* INTEGER_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 4,              /* FLOAT_LITERAL  */
  YYSYMBOL_DOUBLE_LITERAL = 5,             /* DOUBLE_LITERAL  */
  YYSYMBOL_DECIMAL_LITERAL = 6,            /* DECIMAL_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 8,               /* CHAR_LITERAL  */
  YYSYMBOL_BOOL_LITERAL_TRUE = 9,          /* BOOL_LITERAL_TRUE  */
  YYSYMBOL_BOOL_LITERAL_FALSE = 10,        /* BOOL_LITERAL_FALSE  */
  YYSYMBOL_IDENTIFIER = 11,                /* IDENTIFIER  */
  YYSYMBOL_INTERPOLATED_STRING_TEXT = 12,  /* INTERPOLATED_STRING_TEXT  */
  YYSYMBOL_PLUSPLUS = 13,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 14,                /* MINUSMINUS  */
  YYSYMBOL_NULL_SAFE_DOT = 15,             /* NULL_SAFE_DOT  */
  YYSYMBOL_NULL_SAFE_INDEX = 16,           /* NULL_SAFE_INDEX  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_EQUAL = 19,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 20,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 21,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 22,             /* GREATER_EQUAL  */
  YYSYMBOL_PLUS_ASSIGNMENT = 23,           /* PLUS_ASSIGNMENT  */
  YYSYMBOL_MINUS_ASSIGNMENT = 24,          /* MINUS_ASSIGNMENT  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 31,                  /* CONTINUE  */
  YYSYMBOL_CLASS = 32,                     /* CLASS  */
  YYSYMBOL_INTERFACE = 33,                 /* INTERFACE  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_NEW = 35,                       /* NEW  */
  YYSYMBOL_THIS = 36,                      /* THIS  */
  YYSYMBOL_PUBLIC = 37,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 38,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 39,                 /* PROTECTED  */
  YYSYMBOL_INTERNAL = 40,                  /* INTERNAL  */
  YYSYMBOL_PROTECTED_INTERNAL = 41,        /* PROTECTED_INTERNAL  */
  YYSYMBOL_INT_TYPE = 42,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 43,                /* FLOAT_TYPE  */
  YYSYMBOL_DOUBLE_TYPE = 44,               /* DOUBLE_TYPE  */
  YYSYMBOL_BOOL_TYPE = 45,                 /* BOOL_TYPE  */
  YYSYMBOL_CHAR_TYPE = 46,                 /* CHAR_TYPE  */
  YYSYMBOL_STRING_TYPE = 47,               /* STRING_TYPE  */
  YYSYMBOL_VOID_TYPE = 48,                 /* VOID_TYPE  */
  YYSYMBOL_DECIMAL_TYPE = 49,              /* DECIMAL_TYPE  */
  YYSYMBOL_NAMESPACE = 50,                 /* NAMESPACE  */
  YYSYMBOL_USING = 51,                     /* USING  */
  YYSYMBOL_FOREACH = 52,                   /* FOREACH  */
  YYSYMBOL_IN = 53,                        /* IN  */
  YYSYMBOL_NULL_LITERAL = 54,              /* NULL_LITERAL  */
  YYSYMBOL_INTERPOLATED_EXPR_END = 55,     /* INTERPOLATED_EXPR_END  */
  YYSYMBOL_STRUCT = 56,                    /* STRUCT  */
  YYSYMBOL_ENUM = 57,                      /* ENUM  */
  YYSYMBOL_TILDE = 58,                     /* TILDE  */
  YYSYMBOL_INTERPOLATED_STRING_START = 59, /* INTERPOLATED_STRING_START  */
  YYSYMBOL_INTERPOLATED_STRING_END = 60,   /* INTERPOLATED_STRING_END  */
  YYSYMBOL_PLUS_ASSIGN = 61,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 62,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 63,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVISION_ASSIGN = 64,           /* DIVISION_ASSIGN  */
  YYSYMBOL_INCREMENT = 65,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 66,                 /* DECREMENT  */
  YYSYMBOL_LESS = 67,                      /* LESS  */
  YYSYMBOL_GREATER = 68,                   /* GREATER  */
  YYSYMBOL_GREATER_OR_EQUAL = 69,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 70,             /* LESS_OR_EQUAL  */
  YYSYMBOL_LOWER_THAN_ELSE = 71,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_72_ = 72,                       /* '='  */
  YYSYMBOL_73_ = 73,                       /* '<'  */
  YYSYMBOL_74_ = 74,                       /* '>'  */
  YYSYMBOL_75_ = 75,                       /* '+'  */
  YYSYMBOL_76_ = 76,                       /* '-'  */
  YYSYMBOL_77_ = 77,                       /* '*'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '%'  */
  YYSYMBOL_80_ = 80,                       /* '!'  */
  YYSYMBOL_UMINUS = 81,                    /* UMINUS  */
  YYSYMBOL_82_ = 82,                       /* '('  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* '['  */
  YYSYMBOL_85_ = 85,                       /* ']'  */
  YYSYMBOL_86_ = 86,                       /* '{'  */
  YYSYMBOL_87_ = 87,                       /* '}'  */
  YYSYMBOL_88_ = 88,                       /* ';'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* ')'  */
  YYSYMBOL_91_ = 91,                       /* ','  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_program = 93,                   /* program  */
  YYSYMBOL_top_level_declaration = 94,     /* top_level_declaration  */
  YYSYMBOL_namespace_declaration = 95,     /* namespace_declaration  */
  YYSYMBOL_namespace_body = 96,            /* namespace_body  */
  YYSYMBOL_namespace_body_element = 97,    /* namespace_body_element  */
  YYSYMBOL_using_directive = 98,           /* using_directive  */
  YYSYMBOL_type_declaration = 99,          /* type_declaration  */
  YYSYMBOL_primitive_type = 100,           /* primitive_type  */
  YYSYMBOL_method_return_type = 101,       /* method_return_type  */
  YYSYMBOL_class_declaration = 102,        /* class_declaration  */
  YYSYMBOL_class_parent = 103,             /* class_parent  */
  YYSYMBOL_class_body = 104,               /* class_body  */
  YYSYMBOL_class_member = 105,             /* class_member  */
  YYSYMBOL_struct_decl = 106,              /* struct_decl  */
  YYSYMBOL_struct_members = 107,           /* struct_members  */
  YYSYMBOL_struct_members_optional = 108,  /* struct_members_optional  */
  YYSYMBOL_interface_declaration = 109,    /* interface_declaration  */
  YYSYMBOL_interface_body = 110,           /* interface_body  */
  YYSYMBOL_interface_member = 111,         /* interface_member  */
  YYSYMBOL_enum_decl = 112,                /* enum_decl  */
  YYSYMBOL_enumerators = 113,              /* enumerators  */
  YYSYMBOL_visibility_modifier = 114,      /* visibility_modifier  */
  YYSYMBOL_field_declaration = 115,        /* field_declaration  */
  YYSYMBOL_typed_field_declaration = 116,  /* typed_field_declaration  */
  YYSYMBOL_field_init = 117,               /* field_init  */
  YYSYMBOL_method_declaration = 118,       /* method_declaration  */
  YYSYMBOL_method_modifiers = 119,         /* method_modifiers  */
  YYSYMBOL_parameter_list = 120,           /* parameter_list  */
  YYSYMBOL_parameter_list_tail = 121,      /* parameter_list_tail  */
  YYSYMBOL_parameter = 122,                /* parameter  */
  YYSYMBOL_constructor_declaration = 123,  /* constructor_declaration  */
  YYSYMBOL_static_constructor_decl = 124,  /* static_constructor_decl  */
  YYSYMBOL_destructor_decl = 125,          /* destructor_decl  */
  YYSYMBOL_block = 126,                    /* block  */
  YYSYMBOL_statement_list = 127,           /* statement_list  */
  YYSYMBOL_statement = 128,                /* statement  */
  YYSYMBOL_local_variable_declaration = 129, /* local_variable_declaration  */
  YYSYMBOL_local_init = 130,               /* local_init  */
  YYSYMBOL_if_statement = 131,             /* if_statement  */
  YYSYMBOL_while_statement = 132,          /* while_statement  */
  YYSYMBOL_for_statement = 133,            /* for_statement  */
  YYSYMBOL_for_init_opt = 134,             /* for_init_opt  */
  YYSYMBOL_for_iter_opt = 135,             /* for_iter_opt  */
  YYSYMBOL_expression_opt = 136,           /* expression_opt  */
  YYSYMBOL_foreach_statement = 137,        /* foreach_statement  */
  YYSYMBOL_foreach_type = 138,             /* foreach_type  */
  YYSYMBOL_return_statement = 139,         /* return_statement  */
  YYSYMBOL_break_statement = 140,          /* break_statement  */
  YYSYMBOL_continue_statement = 141,       /* continue_statement  */
  YYSYMBOL_expression = 142,               /* expression  */
  YYSYMBOL_assignment_expression = 143,    /* assignment_expression  */
  YYSYMBOL_assignment_op = 144,            /* assignment_op  */
  YYSYMBOL_conditional_expression = 145,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 146,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 147,   /* logical_and_expression  */
  YYSYMBOL_equality_expression = 148,      /* equality_expression  */
  YYSYMBOL_relational_expression = 149,    /* relational_expression  */
  YYSYMBOL_additive_expression = 150,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 151, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 152,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 153,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 154,       /* primary_expression  */
  YYSYMBOL_argument_list = 155,            /* argument_list  */
  YYSYMBOL_expression_list = 156,          /* expression_list  */
  YYSYMBOL_interpolated_string = 157,      /* interpolated_string  */
  YYSYMBOL_interpolation_parts = 158,      /* interpolation_parts  */
  YYSYMBOL_interpolation_part = 159,       /* interpolation_part  */
  YYSYMBOL_qualified_identifier = 160,     /* qualified_identifier  */
  YYSYMBOL_simple_identifier = 161         /* simple_identifier  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   574

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

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
       2,     2,     2,    80,     2,     2,     2,    79,     2,     2,
      82,    90,    77,    75,    91,    76,    83,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    88,
      73,    72,    74,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,    87,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    88,    92,    93,   101,   104,   106,   110,
     111,   115,   116,   124,   125,   126,   127,   135,   136,   137,
     138,   139,   140,   141,   149,   150,   151,   159,   160,   163,
     165,   168,   170,   174,   175,   176,   177,   178,   186,   187,
     191,   192,   193,   194,   195,   196,   197,   200,   202,   210,
     213,   215,   219,   227,   228,   232,   233,   241,   242,   243,
     244,   245,   253,   254,   255,   256,   260,   263,   265,   274,
     277,   279,   280,   281,   282,   285,   287,   291,   292,   296,
     304,   305,   309,   313,   320,   322,   324,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   342,   345,
     347,   351,   352,   355,   358,   361,   363,   364,   367,   369,
     372,   374,   378,   382,   386,   387,   390,   391,   394,   398,
     399,   403,   404,   405,   406,   407,   408,   409,   412,   415,
     416,   420,   421,   425,   426,   427,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   443,   444,   445,   449,   450,
     451,   452,   456,   457,   458,   459,   460,   461,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   493,   495,   499,   500,   507,   510,   511,   514,   515,
     522,   523,   526
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER_LITERAL",
  "FLOAT_LITERAL", "DOUBLE_LITERAL", "DECIMAL_LITERAL", "STRING_LITERAL",
  "CHAR_LITERAL", "BOOL_LITERAL_TRUE", "BOOL_LITERAL_FALSE", "IDENTIFIER",
  "INTERPOLATED_STRING_TEXT", "PLUSPLUS", "MINUSMINUS", "NULL_SAFE_DOT",
  "NULL_SAFE_INDEX", "AND", "OR", "EQUAL", "NOT_EQUAL", "LESS_EQUAL",
  "GREATER_EQUAL", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "BREAK", "CONTINUE", "CLASS", "INTERFACE",
  "STATIC", "NEW", "THIS", "PUBLIC", "PRIVATE", "PROTECTED", "INTERNAL",
  "PROTECTED_INTERNAL", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE",
  "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE", "VOID_TYPE", "DECIMAL_TYPE",
  "NAMESPACE", "USING", "FOREACH", "IN", "NULL_LITERAL",
  "INTERPOLATED_EXPR_END", "STRUCT", "ENUM", "TILDE",
  "INTERPOLATED_STRING_START", "INTERPOLATED_STRING_END", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT",
  "DECREMENT", "LESS", "GREATER", "GREATER_OR_EQUAL", "LESS_OR_EQUAL",
  "LOWER_THAN_ELSE", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "UMINUS", "'('", "'.'", "'['", "']'", "'{'", "'}'", "';'",
  "':'", "')'", "','", "$accept", "program", "top_level_declaration",
  "namespace_declaration", "namespace_body", "namespace_body_element",
  "using_directive", "type_declaration", "primitive_type",
  "method_return_type", "class_declaration", "class_parent", "class_body",
  "class_member", "struct_decl", "struct_members",
  "struct_members_optional", "interface_declaration", "interface_body",
  "interface_member", "enum_decl", "enumerators", "visibility_modifier",
  "field_declaration", "typed_field_declaration", "field_init",
  "method_declaration", "method_modifiers", "parameter_list",
  "parameter_list_tail", "parameter", "constructor_declaration",
  "static_constructor_decl", "destructor_decl", "block", "statement_list",
  "statement", "local_variable_declaration", "local_init", "if_statement",
  "while_statement", "for_statement", "for_init_opt", "for_iter_opt",
  "expression_opt", "foreach_statement", "foreach_type",
  "return_statement", "break_statement", "continue_statement",
  "expression", "assignment_expression", "assignment_op",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "primary_expression", "argument_list",
  "expression_list", "interpolated_string", "interpolation_parts",
  "interpolation_part", "qualified_identifier", "simple_identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-295)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -295,    22,  -295,    -6,    60,  -295,  -295,  -295,  -295,   -67,
    -295,    32,     1,    -6,  -295,    -6,  -295,  -295,   450,     2,
      70,    83,  -295,  -295,  -295,  -295,  -295,    97,   112,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,    35,  -295,    36,
      61,    62,    63,   139,   141,   154,    -6,    85,  -295,   525,
     161,    36,    90,    93,    95,  -295,    96,   102,    92,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,   177,   471,   104,   323,
    -295,  -295,  -295,   246,  -295,  -295,  -295,   -47,   106,   525,
     161,   117,  -295,  -295,  -295,   192,  -295,    95,   496,   123,
     496,   135,   218,  -295,  -295,  -295,  -295,   126,   496,   198,
     199,  -295,   200,  -295,   125,    14,   202,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,   140,   212,   134,   149,  -295,   151,
     220,   468,   155,   496,   234,   135,   164,  -295,   343,  -295,
    -295,   165,   496,  -295,   162,   496,   162,   135,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,   389,  -295,  -295,
    -295,   468,   468,   468,   468,   404,  -295,  -295,  -295,   232,
     236,     7,   100,   -38,    57,   166,   103,  -295,  -295,  -295,
     169,   135,   163,   496,  -295,   178,   179,  -295,  -295,  -295,
    -295,   183,   170,   -36,     9,  -295,  -295,  -295,  -295,   184,
     185,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,   468,  -295,  -295,   262,   468,
     468,   285,   468,   162,   209,  -295,   208,   162,   211,   190,
    -295,   468,   468,  -295,  -295,   468,  -295,   468,  -295,   236,
    -295,     7,   100,   100,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,    57,    57,  -295,  -295,  -295,  -295,  -295,   215,
    -295,   219,   217,  -295,   225,  -295,  -295,   162,  -295,  -295,
     231,   233,   235,   340,   214,   226,   242,  -295,  -295,   305,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
     238,   244,   237,   245,  -295,  -295,  -295,   468,  -295,  -295,
     468,   468,   404,  -295,   243,  -295,  -295,   496,   261,  -295,
    -295,  -295,  -295,  -295,   247,   248,  -295,   251,   217,  -295,
    -295,   325,   468,   252,   276,   276,   468,   300,  -295,  -295,
     329,  -295,   271,  -295,   468,   276,   468,   270,  -295,   273,
     217,   276,   276,  -295,  -295
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     3,     5,     4,   192,     0,
     190,   192,     0,     0,     7,     0,    11,   191,     0,     0,
       0,     0,    57,    59,    58,    60,    61,     0,     0,     6,
       8,     9,    10,    13,    15,    14,    16,     0,    12,    29,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    47,
       0,    29,     0,     0,    30,    31,     0,     0,    72,    17,
      18,    19,    20,    21,    22,    23,     0,    70,     0,    71,
      40,    62,    41,     0,    43,    42,    55,     0,     0,    47,
       0,    70,    25,    49,    24,     0,    51,    26,    75,     0,
      74,    67,    71,    44,    45,    46,    38,     0,    73,     0,
       0,    53,     0,    31,     0,     0,     0,    27,    32,    33,
      34,    35,    37,    36,     0,     0,     0,    76,    77,     0,
       0,     0,     0,    75,     0,    67,     0,    56,    70,    39,
      54,     0,    75,    79,     0,     0,     0,    67,   169,   170,
     171,   172,   173,   174,   175,   176,   168,     0,   178,   177,
     186,     0,     0,     0,     0,     0,    68,   118,   119,   128,
     129,   131,   133,   136,   145,   148,   152,   158,   180,    66,
       0,    67,     0,    75,    28,     0,     0,    85,    80,    78,
      82,     0,     0,     0,     0,   155,   156,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   121,     0,   162,   163,     0,     0,
     181,     0,     0,     0,     0,    63,     0,     0,     0,     0,
      65,     0,   181,   188,   185,     0,   187,     0,   179,   130,
     148,   132,   134,   135,   141,   142,   140,   139,   144,   143,
     137,   138,   146,   147,   149,   150,   151,   120,   164,     0,
     183,     0,   182,   159,     0,    81,    64,     0,    83,    52,
       0,     0,     0,     0,     0,     0,     0,    84,    97,     0,
      96,    86,    87,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,   157,   165,   160,     0,   161,    69,
       0,     0,   105,   114,     0,   116,   117,     0,    99,    88,
     167,   166,   189,   184,     0,     0,   106,     0,   107,   115,
     113,     0,     0,     0,     0,     0,   110,     0,   100,    98,
     101,   103,     0,   111,     0,     0,   108,     0,   102,     0,
     109,     0,     0,   112,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -295,  -295,  -295,  -295,   353,  -295,   -49,   288,
    -295,   322,   275,  -295,  -295,  -295,   295,  -295,  -295,  -295,
    -295,   299,    10,   -58,  -295,   -89,   -52,  -295,   -98,  -295,
     256,   -48,   -50,  -295,  -130,  -295,  -215,    91,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -120,   180,  -295,  -295,  -295,   205,   206,  -106,   297,   -90,
    -141,  -295,  -295,   171,  -294,  -295,  -295,  -295,    -1,   384
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     5,     6,    18,    30,     7,    32,   279,    85,
      33,    47,    81,   108,    34,    67,    68,    35,    56,    86,
      36,    77,    69,    70,    71,   122,    72,    73,   116,   117,
     118,    74,    75,   113,   280,   229,   281,   282,   323,   283,
     284,   285,   317,   339,   332,   286,   321,   287,   288,   289,
     290,   157,   215,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   261,   262,   168,   184,   236,    87,    10
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   156,     9,    12,   178,     8,   180,    84,   318,    93,
     185,   186,   187,   188,    19,    94,    13,    95,    66,    14,
      99,   233,     2,   109,    84,   170,   193,   194,    37,   110,
      66,   112,    66,   111,   176,   190,   172,   203,   204,   115,
     101,   120,   340,    99,   102,    54,   232,    13,   181,   124,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   254,   255,   256,    43,    90,   234,
     109,    11,     3,     4,   115,   226,   110,    92,   112,    66,
     111,    39,   224,   115,    13,    13,   115,   242,   243,    16,
      38,    44,    45,   265,    40,   235,   294,   268,   182,   259,
     260,   130,   264,    89,    15,   102,   189,     8,    41,   330,
     331,   291,   260,   252,   253,   293,   216,   217,   218,   219,
     338,   195,   196,    42,   115,    46,   343,   344,    57,    22,
      23,    24,    25,    26,   205,   206,   207,   299,    59,    60,
      61,    62,    63,    64,    82,    65,   183,    48,    49,    50,
      51,    58,    52,   304,    22,    23,    24,    25,    26,    59,
      60,    61,    62,    63,    64,    53,    65,   197,   198,   199,
     200,    55,    76,   201,   202,   106,    79,   313,    13,    80,
     314,   315,   260,    83,    88,   220,   221,   222,    91,   208,
     209,    96,   103,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   328,   114,   107,   119,   333,   121,   123,   125,
     126,   127,   129,   131,   337,   270,   260,   271,   272,   273,
     274,   275,   132,   133,   134,   147,   148,   210,   211,   212,
     213,   137,    59,    60,    61,    62,    63,    64,   214,    65,
     135,   136,   276,   169,   149,   171,   173,   175,   177,   150,
     191,   225,    98,   192,   231,   151,   152,     8,   320,   223,
      59,    60,    61,    62,    63,    64,   153,    65,   227,   228,
     154,   230,   155,   258,   237,   238,   177,   277,   278,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    59,    60,
      61,    62,    63,    64,    82,    65,   263,   266,   267,   269,
     295,   270,   305,   271,   272,   273,   274,   275,   297,   296,
     298,   147,   148,   300,   306,   301,   308,   302,    59,    60,
      61,    62,    63,    64,   307,    65,   309,   311,   276,   310,
     149,   319,   312,   322,    97,   150,   327,   324,   325,   326,
     329,   151,   152,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   153,   334,    57,   335,   154,    98,   155,   336,
     341,   100,   177,   342,   278,    59,    60,    61,    62,    63,
      64,    31,    65,    78,   104,   147,   148,    58,   128,   105,
      22,    23,    24,    25,    26,    59,    60,    61,    62,    63,
      64,   179,    65,   316,   149,   257,   239,    17,   241,   150,
       8,   106,     0,   292,     0,   151,   152,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   153,     0,     0,     0,
     154,     0,   155,     0,     0,     0,     0,     0,   303,     0,
     174,    59,    60,    61,    62,    63,    64,     0,    65,   147,
     148,     0,     0,     0,     0,     0,    59,    60,    61,    62,
      63,    64,     0,    65,     0,     0,     0,     0,   149,     0,
       0,     0,     0,   150,     0,     0,     0,     0,     0,   151,
     152,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     153,     0,    20,    21,   154,     0,   155,    22,    23,    24,
      25,    26,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     4,     0,   147,   148,    58,    27,    28,    22,    23,
      24,    25,    26,    59,    60,    61,    62,    63,    64,     0,
      65,     0,   149,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,   151,   152,     0,    57,    29,    59,    60,
      61,    62,    63,    64,   153,    65,     0,     0,   154,     0,
     155,     0,     0,     0,     0,     0,     0,     0,   -48,    58,
       0,     0,    22,    23,    24,    25,    26,    59,    60,    61,
      62,    63,    64,   -70,    65
};

static const yytype_int16 yycheck[] =
{
      49,   121,     3,     4,   134,    11,   136,    56,   302,    67,
     151,   152,   153,   154,    15,    67,    83,    67,    67,    86,
      69,    12,     0,    81,    73,   123,    19,    20,    18,    81,
      79,    81,    81,    81,   132,   155,   125,    75,    76,    88,
      87,    90,   336,    92,    91,    46,    82,    83,   137,    98,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,    32,    58,    60,
     128,    11,    50,    51,   123,   173,   128,    67,   128,   128,
     128,    11,   171,   132,    83,    83,   135,   193,   194,    88,
      88,    56,    57,   223,    11,    86,   237,   227,   147,   219,
     220,    87,   222,    11,    72,    91,   155,    11,    11,   324,
     325,   231,   232,   203,   204,   235,    13,    14,    15,    16,
     335,    21,    22,    11,   173,    89,   341,   342,    11,    37,
      38,    39,    40,    41,    77,    78,    79,   267,    42,    43,
      44,    45,    46,    47,    48,    49,   147,    86,    86,    86,
      11,    34,    11,   273,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    11,    49,    67,    68,    69,
      70,    86,    11,    73,    74,    58,    86,   297,    83,    86,
     300,   301,   302,    87,    82,    82,    83,    84,    11,    23,
      24,    87,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   322,    11,    87,    82,   326,    72,    82,    11,
      11,    11,    87,    11,   334,    25,   336,    27,    28,    29,
      30,    31,    82,    11,    90,    35,    36,    61,    62,    63,
      64,    11,    42,    43,    44,    45,    46,    47,    72,    49,
      91,    90,    52,    88,    54,    11,    82,    82,    86,    59,
      18,    88,    34,    17,    84,    65,    66,    11,   307,    90,
      42,    43,    44,    45,    46,    47,    76,    49,    90,    90,
      80,    88,    82,    11,    90,    90,    86,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    42,    43,
      44,    45,    46,    47,    48,    49,    11,    88,    90,    88,
      85,    25,    88,    27,    28,    29,    30,    31,    91,    90,
      85,    35,    36,    82,    88,    82,    11,    82,    42,    43,
      44,    45,    46,    47,    82,    49,    88,    90,    52,    85,
      54,    88,    87,    72,    11,    59,    11,    90,    90,    88,
      88,    65,    66,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    76,    53,    11,    26,    80,    34,    82,    88,
      90,    73,    86,    90,    88,    42,    43,    44,    45,    46,
      47,    18,    49,    51,    79,    35,    36,    34,   103,    80,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   135,    49,   302,    54,   215,   191,    13,   192,    59,
      11,    58,    -1,   232,    -1,    65,    66,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    76,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      87,    42,    43,    44,    45,    46,    47,    -1,    49,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      76,    -1,    32,    33,    80,    -1,    82,    37,    38,    39,
      40,    41,   195,   196,   197,   198,   199,   200,   201,   202,
      -1,    51,    -1,    35,    36,    34,    56,    57,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    11,    87,    42,    43,
      44,    45,    46,    47,    76,    49,    -1,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    34,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,     0,    50,    51,    94,    95,    98,    11,   160,
     161,    11,   160,    83,    86,    72,    88,   161,    96,   160,
      32,    33,    37,    38,    39,    40,    41,    56,    57,    87,
      97,    98,    99,   102,   106,   109,   112,   114,    88,    11,
      11,    11,    11,    32,    56,    57,    89,   103,    86,    86,
      86,    11,    11,    11,   160,    86,   110,    11,    34,    42,
      43,    44,    45,    46,    47,    49,   100,   107,   108,   114,
     115,   116,   118,   119,   123,   124,    11,   113,   103,    86,
      86,   104,    48,    87,   100,   101,   111,   160,    82,    11,
     114,    11,   114,   115,   118,   124,    87,    11,    34,   100,
     101,    87,    91,    86,   108,   113,    58,    87,   105,   115,
     118,   123,   124,   125,    11,   100,   120,   121,   122,    82,
     100,    72,   117,    82,   100,    11,    11,    11,   104,    87,
      87,    11,    82,    11,    90,    91,    90,    11,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    35,    36,    54,
      59,    65,    66,    76,    80,    82,   142,   143,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   157,    88,
     120,    11,   117,    82,    87,    82,   120,    86,   126,   122,
     126,   117,   100,   160,   158,   152,   152,   152,   152,   100,
     142,    18,    17,    19,    20,    21,    22,    67,    68,    69,
      70,    73,    74,    75,    76,    77,    78,    79,    23,    24,
      61,    62,    63,    64,    72,   144,    13,    14,    15,    16,
      82,    83,    84,    90,   117,    88,   120,    90,    90,   127,
      88,    84,    82,    12,    60,    86,   159,    90,    90,   147,
     152,   148,   149,   149,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   152,   152,   152,   143,    11,   142,
     142,   155,   156,    11,   142,   126,    88,    90,   126,    88,
      25,    27,    28,    29,    30,    31,    52,    87,    88,   100,
     126,   128,   129,   131,   132,   133,   137,   139,   140,   141,
     142,   142,   155,   142,   152,    85,    90,    91,    85,   126,
      82,    82,    82,    88,   142,    88,    88,    82,    11,    88,
      85,    90,    87,   142,   142,   142,   129,   134,   156,    88,
     100,   138,    72,   130,    90,    90,    88,    11,   142,    88,
     128,   128,   136,   142,    53,    26,    88,   142,   128,   135,
     156,    90,    90,   128,   128
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   109,
     110,   110,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   115,   115,   115,   115,   116,   117,   117,   118,
     119,   119,   119,   119,   119,   120,   120,   121,   121,   122,
     123,   123,   124,   125,   126,   127,   127,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   129,   130,
     130,   131,   131,   132,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   138,   139,   139,   140,   141,   142,   143,
     143,   144,   144,   144,   144,   144,   144,   144,   145,   146,
     146,   147,   147,   148,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   152,   152,   152,   152,   152,   152,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   157,   158,   158,   159,   159,
     160,   160,   161
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     5,     0,     2,     1,
       1,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     7,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     5,     6,
       1,     1,     1,     1,     2,     2,     2,     0,     1,     5,
       0,     2,     6,     5,     6,     1,     3,     1,     1,     1,
       1,     1,     1,     5,     6,     6,     4,     0,     2,     7,
       0,     1,     1,     2,     2,     0,     1,     1,     3,     2,
       5,     6,     5,     5,     3,     0,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     0,
       2,     5,     7,     5,     9,     0,     1,     1,     0,     1,
       0,     1,     8,     1,     2,     3,     2,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     4,     1,     3,
       4,     4,     2,     2,     3,     4,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     1,     1,     3,     3,     0,     2,     1,     3,
       1,     3,     1
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
  case 17: /* primitive_type: INT_TYPE  */
#line 135 "Parser.y"
                   { (yyval.type_value) = 1; }
#line 1545 "Parser.tab.c"
    break;

  case 18: /* primitive_type: FLOAT_TYPE  */
#line 136 "Parser.y"
                   { (yyval.type_value) = 2; }
#line 1551 "Parser.tab.c"
    break;

  case 19: /* primitive_type: DOUBLE_TYPE  */
#line 137 "Parser.y"
                   { (yyval.type_value) = 3; }
#line 1557 "Parser.tab.c"
    break;

  case 20: /* primitive_type: BOOL_TYPE  */
#line 138 "Parser.y"
                   { (yyval.type_value) = 4; }
#line 1563 "Parser.tab.c"
    break;

  case 21: /* primitive_type: CHAR_TYPE  */
#line 139 "Parser.y"
                   { (yyval.type_value) = 5; }
#line 1569 "Parser.tab.c"
    break;

  case 22: /* primitive_type: STRING_TYPE  */
#line 140 "Parser.y"
                   { (yyval.type_value) = 6; }
#line 1575 "Parser.tab.c"
    break;

  case 23: /* primitive_type: DECIMAL_TYPE  */
#line 141 "Parser.y"
                   { (yyval.type_value) = 7; }
#line 1581 "Parser.tab.c"
    break;

  case 24: /* method_return_type: primitive_type  */
#line 149 "Parser.y"
                     { (yyval.type_value) = (yyvsp[0].type_value); }
#line 1587 "Parser.tab.c"
    break;

  case 25: /* method_return_type: VOID_TYPE  */
#line 150 "Parser.y"
                     { (yyval.type_value) = 0; }
#line 1593 "Parser.tab.c"
    break;

  case 26: /* method_return_type: qualified_identifier  */
#line 151 "Parser.y"
                           { (yyval.type_value) = 100; }
#line 1599 "Parser.tab.c"
    break;

  case 190: /* qualified_identifier: simple_identifier  */
#line 522 "Parser.y"
                                       {       (yyval.string_array) = create_string_array((yyvsp[0].string_value)); free((yyvsp[0].string_value)); }
#line 1605 "Parser.tab.c"
    break;

  case 191: /* qualified_identifier: qualified_identifier '.' simple_identifier  */
#line 523 "Parser.y"
                                                                                    {        add_to_string_array((yyvsp[-2].string_array), (yyvsp[0].string_value));free((yyvsp[0].string_value)); (yyval.string_array) = (yyvsp[-2].string_array);  }
#line 1611 "Parser.tab.c"
    break;

  case 192: /* simple_identifier: IDENTIFIER  */
#line 526 "Parser.y"
                              { (yyval.string_value) = (yyvsp[0].string_value); }
#line 1617 "Parser.tab.c"
    break;


#line 1621 "Parser.tab.c"

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

#line 528 "Parser.y"


StringArray* create_string_array(const char* str) {
    StringArray* array = (StringArray*)malloc(sizeof(StringArray));
    if (!array) return NULL;
    
    array->items = (char**)malloc(sizeof(char*));
    array->items[0] = strdup(str);
    array->count = 1;
    
    return array;
}

void add_to_string_array(StringArray* array, const char* str) {
    if (!array || !str) return;
    
    // Увеличиваем массив на 1 элемент
    array->items = (char**)realloc(array->items, (array->count + 1) * sizeof(char*));
    if (!array->items) return;
    
    // Добавляем новый элемент
    array->items[array->count] = strdup(str);
    array->count++;
}

void free_string_array(StringArray* array) {
    if (!array) return;
    
    for (int i = 0; i < array->count; i++) {
        free(array->items[i]);
    }
    free(array->items);
    free(array);
}

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
