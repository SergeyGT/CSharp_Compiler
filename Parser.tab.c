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
#line 1 "Parser.y"

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
  YYSYMBOL_PLUSPLUS = 12,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 13,                /* MINUSMINUS  */
  YYSYMBOL_NULL_COALESCE = 14,             /* NULL_COALESCE  */
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
  YYSYMBOL_BOOL_KW = 55,                   /* BOOL_KW  */
  YYSYMBOL_FLOAT_KW = 56,                  /* FLOAT_KW  */
  YYSYMBOL_DOUBLE_KW = 57,                 /* DOUBLE_KW  */
  YYSYMBOL_DECIMAL_KW = 58,                /* DECIMAL_KW  */
  YYSYMBOL_INT_KW = 59,                    /* INT_KW  */
  YYSYMBOL_NULL_KW = 60,                   /* NULL_KW  */
  YYSYMBOL_TRUE_KW = 61,                   /* TRUE_KW  */
  YYSYMBOL_FALSE_KW = 62,                  /* FALSE_KW  */
  YYSYMBOL_STRUCT = 63,                    /* STRUCT  */
  YYSYMBOL_ENUM = 64,                      /* ENUM  */
  YYSYMBOL_TILDE = 65,                     /* TILDE  */
  YYSYMBOL_INTERPOLATED_STRING_START = 66, /* INTERPOLATED_STRING_START  */
  YYSYMBOL_INTERPOLATED_STRING_END = 67,   /* INTERPOLATED_STRING_END  */
  YYSYMBOL_INTERPOLATED_STRING_TEXT = 68,  /* INTERPOLATED_STRING_TEXT  */
  YYSYMBOL_INTERPOLATED_STRING_EXPR = 69,  /* INTERPOLATED_STRING_EXPR  */
  YYSYMBOL_PLUS_ASSIGN = 70,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 71,              /* MINUS_ASSIGN  */
  YYSYMBOL_MULTIPLY_ASSIGN = 72,           /* MULTIPLY_ASSIGN  */
  YYSYMBOL_DIVISION_ASSIGN = 73,           /* DIVISION_ASSIGN  */
  YYSYMBOL_INCREMENT = 74,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 75,                 /* DECREMENT  */
  YYSYMBOL_LESS = 76,                      /* LESS  */
  YYSYMBOL_GREATER = 77,                   /* GREATER  */
  YYSYMBOL_GREATER_OR_EQUAL = 78,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 79,             /* LESS_OR_EQUAL  */
  YYSYMBOL_BITWISE_OR = 80,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 81,               /* BITWISE_AND  */
  YYSYMBOL_THEN = 82,                      /* THEN  */
  YYSYMBOL_LOWER_THAN_ELSE = 83,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_84_ = 84,                       /* '='  */
  YYSYMBOL_85_ = 85,                       /* '<'  */
  YYSYMBOL_86_ = 86,                       /* '>'  */
  YYSYMBOL_87_ = 87,                       /* '+'  */
  YYSYMBOL_88_ = 88,                       /* '-'  */
  YYSYMBOL_89_ = 89,                       /* '*'  */
  YYSYMBOL_90_ = 90,                       /* '/'  */
  YYSYMBOL_91_ = 91,                       /* '%'  */
  YYSYMBOL_92_ = 92,                       /* '!'  */
  YYSYMBOL_UMINUS = 93,                    /* UMINUS  */
  YYSYMBOL_94_ = 94,                       /* '.'  */
  YYSYMBOL_95_ = 95,                       /* '['  */
  YYSYMBOL_96_ = 96,                       /* ']'  */
  YYSYMBOL_97_ = 97,                       /* '('  */
  YYSYMBOL_FIELD = 98,                     /* FIELD  */
  YYSYMBOL_99_ = 99,                       /* '{'  */
  YYSYMBOL_100_ = 100,                     /* '}'  */
  YYSYMBOL_101_ = 101,                     /* ';'  */
  YYSYMBOL_102_ = 102,                     /* ':'  */
  YYSYMBOL_103_ = 103,                     /* ')'  */
  YYSYMBOL_104_ = 104,                     /* ','  */
  YYSYMBOL_YYACCEPT = 105,                 /* $accept  */
  YYSYMBOL_program = 106,                  /* program  */
  YYSYMBOL_top_level_declaration = 107,    /* top_level_declaration  */
  YYSYMBOL_namespace_declaration = 108,    /* namespace_declaration  */
  YYSYMBOL_namespace_body = 109,           /* namespace_body  */
  YYSYMBOL_namespace_body_element = 110,   /* namespace_body_element  */
  YYSYMBOL_using_directive = 111,          /* using_directive  */
  YYSYMBOL_type_declaration = 112,         /* type_declaration  */
  YYSYMBOL_standard_type = 113,            /* standard_type  */
  YYSYMBOL_primitive_type = 114,           /* primitive_type  */
  YYSYMBOL_method_return_type = 115,       /* method_return_type  */
  YYSYMBOL_class_declaration = 116,        /* class_declaration  */
  YYSYMBOL_class_parent = 117,             /* class_parent  */
  YYSYMBOL_class_body = 118,               /* class_body  */
  YYSYMBOL_class_member = 119,             /* class_member  */
  YYSYMBOL_struct_decl = 120,              /* struct_decl  */
  YYSYMBOL_struct_members = 121,           /* struct_members  */
  YYSYMBOL_struct_members_optional = 122,  /* struct_members_optional  */
  YYSYMBOL_interface_declaration = 123,    /* interface_declaration  */
  YYSYMBOL_interface_body = 124,           /* interface_body  */
  YYSYMBOL_interface_member = 125,         /* interface_member  */
  YYSYMBOL_enum_decl = 126,                /* enum_decl  */
  YYSYMBOL_enumerators = 127,              /* enumerators  */
  YYSYMBOL_visibility_modifier = 128,      /* visibility_modifier  */
  YYSYMBOL_member_modifiers = 129,         /* member_modifiers  */
  YYSYMBOL_field_declaration = 130,        /* field_declaration  */
  YYSYMBOL_typed_field_declaration = 131,  /* typed_field_declaration  */
  YYSYMBOL_field_init = 132,               /* field_init  */
  YYSYMBOL_method_declaration = 133,       /* method_declaration  */
  YYSYMBOL_parameter_list = 134,           /* parameter_list  */
  YYSYMBOL_parameter_list_tail = 135,      /* parameter_list_tail  */
  YYSYMBOL_parameter = 136,                /* parameter  */
  YYSYMBOL_constructor_declaration = 137,  /* constructor_declaration  */
  YYSYMBOL_static_constructor_decl = 138,  /* static_constructor_decl  */
  YYSYMBOL_destructor_decl = 139,          /* destructor_decl  */
  YYSYMBOL_block = 140,                    /* block  */
  YYSYMBOL_statement_list = 141,           /* statement_list  */
  YYSYMBOL_statement = 142,                /* statement  */
  YYSYMBOL_local_variable_declaration = 143, /* local_variable_declaration  */
  YYSYMBOL_local_init = 144,               /* local_init  */
  YYSYMBOL_if_statement = 145,             /* if_statement  */
  YYSYMBOL_while_statement = 146,          /* while_statement  */
  YYSYMBOL_for_statement = 147,            /* for_statement  */
  YYSYMBOL_for_init_opt = 148,             /* for_init_opt  */
  YYSYMBOL_for_iter_opt = 149,             /* for_iter_opt  */
  YYSYMBOL_expression_opt = 150,           /* expression_opt  */
  YYSYMBOL_foreach_statement = 151,        /* foreach_statement  */
  YYSYMBOL_foreach_type = 152,             /* foreach_type  */
  YYSYMBOL_return_statement = 153,         /* return_statement  */
  YYSYMBOL_break_statement = 154,          /* break_statement  */
  YYSYMBOL_continue_statement = 155,       /* continue_statement  */
  YYSYMBOL_expression = 156,               /* expression  */
  YYSYMBOL_assignment_expression = 157,    /* assignment_expression  */
  YYSYMBOL_assignment_op = 158,            /* assignment_op  */
  YYSYMBOL_conditional_expression = 159,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 160,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 161,   /* logical_and_expression  */
  YYSYMBOL_equality_expression = 162,      /* equality_expression  */
  YYSYMBOL_relational_expression = 163,    /* relational_expression  */
  YYSYMBOL_additive_expression = 164,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 165, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 166,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 167,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 168,       /* primary_expression  */
  YYSYMBOL_argument_list = 169,            /* argument_list  */
  YYSYMBOL_expression_list = 170,          /* expression_list  */
  YYSYMBOL_interpolated_string = 171,      /* interpolated_string  */
  YYSYMBOL_interpolated_string_content = 172, /* interpolated_string_content  */
  YYSYMBOL_qualified_identifier = 173,     /* qualified_identifier  */
  YYSYMBOL_simple_identifier = 174         /* simple_identifier  */
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
#define YYLAST   792

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   340


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
       2,     2,     2,    92,     2,     2,     2,    91,     2,     2,
      97,   103,    89,    87,   104,    88,    94,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,   101,
      85,    84,    86,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,    96,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,   100,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    93,
      98
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    76,    80,    81,    82,    83,    84,    85,
      86,    94,    97,    99,   103,   104,   105,   106,   107,   108,
     112,   113,   121,   122,   123,   124,   132,   133,   134,   135,
     136,   140,   141,   142,   143,   144,   145,   146,   147,   152,
     153,   154,   162,   163,   166,   168,   171,   173,   177,   178,
     179,   180,   181,   189,   190,   194,   195,   196,   197,   198,
     199,   202,   204,   212,   215,   217,   221,   229,   230,   234,
     235,   243,   244,   245,   246,   247,   251,   252,   260,   261,
     262,   266,   269,   271,   281,   282,   283,   286,   288,   292,
     293,   297,   305,   306,   310,   314,   321,   323,   325,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     343,   346,   348,   352,   353,   356,   359,   362,   364,   365,
     368,   370,   373,   375,   379,   383,   387,   388,   391,   392,
     395,   399,   400,   404,   405,   406,   407,   408,   409,   410,
     413,   416,   417,   421,   422,   426,   427,   428,   432,   433,
     434,   435,   436,   437,   438,   442,   443,   444,   448,   449,
     450,   451,   455,   456,   457,   458,   459,   463,   464,   465,
     466,   467,   468,   469,   470,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   492,   494,   498,   499,   507,   510,   512,   513,   521,
     522,   530
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
  "PLUSPLUS", "MINUSMINUS", "NULL_COALESCE", "NULL_SAFE_DOT",
  "NULL_SAFE_INDEX", "AND", "OR", "EQUAL", "NOT_EQUAL", "LESS_EQUAL",
  "GREATER_EQUAL", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "BREAK", "CONTINUE", "CLASS", "INTERFACE",
  "STATIC", "NEW", "THIS", "PUBLIC", "PRIVATE", "PROTECTED", "INTERNAL",
  "PROTECTED_INTERNAL", "INT_TYPE", "FLOAT_TYPE", "DOUBLE_TYPE",
  "BOOL_TYPE", "CHAR_TYPE", "STRING_TYPE", "VOID_TYPE", "DECIMAL_TYPE",
  "NAMESPACE", "USING", "FOREACH", "IN", "NULL_LITERAL", "BOOL_KW",
  "FLOAT_KW", "DOUBLE_KW", "DECIMAL_KW", "INT_KW", "NULL_KW", "TRUE_KW",
  "FALSE_KW", "STRUCT", "ENUM", "TILDE", "INTERPOLATED_STRING_START",
  "INTERPOLATED_STRING_END", "INTERPOLATED_STRING_TEXT",
  "INTERPOLATED_STRING_EXPR", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "MULTIPLY_ASSIGN", "DIVISION_ASSIGN", "INCREMENT", "DECREMENT", "LESS",
  "GREATER", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "BITWISE_OR",
  "BITWISE_AND", "THEN", "LOWER_THAN_ELSE", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "'.'", "'['", "']'", "'('",
  "FIELD", "'{'", "'}'", "';'", "':'", "')'", "','", "$accept", "program",
  "top_level_declaration", "namespace_declaration", "namespace_body",
  "namespace_body_element", "using_directive", "type_declaration",
  "standard_type", "primitive_type", "method_return_type",
  "class_declaration", "class_parent", "class_body", "class_member",
  "struct_decl", "struct_members", "struct_members_optional",
  "interface_declaration", "interface_body", "interface_member",
  "enum_decl", "enumerators", "visibility_modifier", "member_modifiers",
  "field_declaration", "typed_field_declaration", "field_init",
  "method_declaration", "parameter_list", "parameter_list_tail",
  "parameter", "constructor_declaration", "static_constructor_decl",
  "destructor_decl", "block", "statement_list", "statement",
  "local_variable_declaration", "local_init", "if_statement",
  "while_statement", "for_statement", "for_init_opt", "for_iter_opt",
  "expression_opt", "foreach_statement", "foreach_type",
  "return_statement", "break_statement", "continue_statement",
  "expression", "assignment_expression", "assignment_op",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "postfix_expression", "primary_expression", "argument_list",
  "expression_list", "interpolated_string", "interpolated_string_content",
  "qualified_identifier", "simple_identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-293)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -293,   630,  -293,   -80,     4,    23,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,    25,  -293,    41,
      53,  -293,  -293,  -293,  -293,  -293,    60,    75,   102,  -293,
    -293,  -293,  -293,  -293,   109,  -293,  -293,  -293,  -293,   239,
    -293,  -293,  -293,  -293,  -293,   156,    26,    55,    43,  -293,
     -81,  -293,    71,   -78,    58,    59,    77,   -62,    78,   165,
     156,   166,   168,   169,   170,    80,    90,  -293,    41,    85,
    -293,   156,    41,  -293,    41,  -293,   715,   184,    93,   182,
     156,   105,   156,   108,   197,   110,   117,   -60,  -293,   118,
     156,   125,  -293,   104,   119,  -293,   546,   -33,   209,   715,
     124,   733,  -293,  -293,  -293,  -293,   -35,   118,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,    11,   182,   182,   182,   182,   182,  -293,  -293,
    -293,   207,   215,    74,    56,    21,     0,    94,    27,  -293,
    -293,   134,  -293,   135,  -293,   155,   715,   184,   156,   139,
    -293,  -293,  -293,     7,  -293,  -293,  -293,   230,  -293,   125,
     118,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     148,  -293,  -293,  -293,  -293,  -293,   235,  -293,    11,   182,
     180,  -293,  -293,  -293,  -293,   149,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,  -293,  -293,  -293,  -293,  -293,  -293,  -293,   182,  -293,
    -293,   240,   182,   242,   182,   182,   118,   118,    16,   154,
     158,   -30,   157,  -293,   313,  -293,  -293,   225,   671,  -293,
    -293,   164,  -293,   159,  -293,  -293,    11,  -293,  -293,   215,
    -293,    74,    56,    56,    21,    21,    21,    21,    21,    21,
       0,     0,  -293,  -293,  -293,  -293,  -293,   171,  -293,   172,
    -293,   161,   162,  -293,  -293,  -293,  -293,  -293,  -293,   118,
     175,   178,   179,    22,   176,   177,   183,  -293,  -293,   258,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     186,  -293,   689,  -293,  -293,  -293,   156,   118,  -293,  -293,
    -293,  -293,   182,  -293,   182,   182,   485,  -293,   188,  -293,
    -293,   156,   206,  -293,   189,  -293,  -293,   190,   196,  -293,
     199,   162,  -293,  -293,   290,   182,   203,   205,   412,   412,
     182,   254,  -293,  -293,  -293,   282,  -293,   208,  -293,   182,
     412,   182,   210,  -293,   211,   162,   412,   412,  -293,  -293
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    71,    73,    72,    74,
      75,    31,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    29,    26,    27,    28,    30,     0,     0,     0,     3,
       4,     5,     6,    38,     0,    22,    24,    23,    25,     0,
       7,    78,     8,     9,    10,    87,    44,     0,     0,   201,
       0,   199,   201,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,     0,     0,
      64,    87,     0,    12,     0,    20,    61,     0,     0,     0,
      87,     0,    87,     0,     0,     0,     0,    82,    91,     0,
       0,    45,    46,     0,     0,   200,     0,     0,     0,    62,
       0,     0,    55,    56,    57,    69,     0,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   175,   188,   186,   187,
     184,   185,   196,     0,     0,     0,     0,     0,    83,   130,
     131,   140,   141,   143,   145,   148,   155,   158,   162,   167,
     190,     0,    81,     0,    46,    82,    61,     0,    87,     0,
      97,    92,    90,     0,    40,    63,    39,     0,    65,    41,
       0,    11,    13,    14,    15,    16,    17,    18,    19,    21,
       0,    58,    59,    60,    53,    67,     0,    95,   196,     0,
       0,   165,   166,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,   137,   138,   139,   133,     0,   170,
     171,     0,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,    79,     0,    42,    47,    76,     0,    52,
      51,     0,    86,     0,    70,   197,   196,   195,   189,   142,
     158,   144,   146,   147,   151,   152,   154,   153,   149,   150,
     156,   157,   159,   160,   161,   132,   172,     0,   168,     0,
     193,     0,   192,    84,    93,    43,    80,    54,    68,     0,
       0,     0,     0,     0,     0,     0,     0,    96,   109,     0,
     108,    98,    99,   101,   102,   103,   104,   105,   106,   107,
       0,    77,     0,    48,    49,    50,    87,     0,   198,   173,
     174,   169,     0,    85,     0,     0,   117,   126,     0,   128,
     129,     0,   111,   100,     0,    94,   194,     0,     0,   118,
       0,   119,   127,   125,     0,     0,     0,     0,     0,     0,
     122,     0,   112,   110,    66,   113,   115,     0,   123,     0,
       0,   120,     0,   114,     0,   121,     0,     0,   124,   116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,  -293,  -293,  -293,  -293,   216,   219,  -293,    -1,
    -293,  -293,  -293,   167,  -293,  -293,  -293,   185,  -293,  -293,
    -293,  -293,   187,     3,  -293,     5,  -293,   -82,     6,   -61,
    -293,   236,   -95,   -91,    10,   -87,  -293,  -203,    19,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,   -76,   121,  -293,  -293,  -293,   144,   145,   -77,   -22,
     -65,   429,  -293,  -293,  -293,  -292,  -293,  -169,    -8,   261
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    29,    30,    96,   162,    31,    32,    33,    64,
     157,    35,    69,   153,   226,    36,    99,   100,    37,    93,
     158,    38,   106,   101,   228,   102,    41,    81,   103,    65,
      66,    67,    43,   104,   230,   280,   224,   281,   282,   326,
     283,   284,   285,   320,   344,   337,   286,   324,   287,   288,
     289,   290,   129,   208,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   261,   262,   140,   180,    50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   167,   151,   128,    39,   149,    40,    42,   173,   235,
      94,    44,    53,    72,   321,    46,    72,    45,    73,   141,
     177,   143,    79,    75,    79,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    47,    80,    48,   148,    63,   209,
     210,    98,   211,   212,     6,     7,     8,     9,    10,   345,
      98,   185,    49,     6,     7,     8,     9,    10,   117,    84,
      91,    72,   229,   219,    52,   175,    97,   298,   169,   176,
     268,    54,    28,   232,   176,    34,   118,   190,   191,   178,
     179,    28,   119,   120,   121,   159,    55,   222,   122,   198,
     199,   200,   156,   188,   189,    34,   123,   124,    34,    39,
      63,   165,   166,   236,   171,   172,   168,   225,   196,   197,
     125,   242,   243,    56,   126,    49,   265,   201,   202,   127,
      57,   213,   214,   307,   215,   335,   336,   229,    68,   263,
     264,   250,   251,   295,   192,   193,   257,   343,   259,   260,
      71,   194,   195,   348,   349,    34,    11,    12,    13,    14,
      15,    16,   154,    18,    70,    74,   227,    76,    77,    21,
      22,    23,    24,    25,   203,   204,   205,   206,   244,   245,
     246,   247,   248,   249,    78,    82,    83,    85,   207,    86,
      87,    88,   303,    89,    92,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    90,   105,   107,   308,    11,    12,
      13,    14,    15,    16,   155,    18,   142,   144,   145,   146,
     315,    21,    22,    23,    24,    25,   147,   150,   117,    72,
     170,   227,   160,   279,   174,   186,   316,    34,   317,   318,
     260,   292,   187,   293,   294,   314,   118,   216,   217,    79,
     223,   231,   119,   120,   121,   233,   234,   237,   122,   332,
      58,   256,   238,   258,   338,   266,   123,   124,   267,   291,
     269,   296,   297,   342,   301,   260,   302,   299,   300,   312,
     125,    59,   304,    60,   126,   305,   306,   309,   310,   127,
     311,    11,    12,    13,    14,    15,    16,   313,    18,   322,
     325,    63,   327,   328,    21,    22,    23,    24,    25,   329,
     330,   331,    61,    62,   333,   279,   334,   339,   340,   341,
     323,   218,   163,   346,   347,   164,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   319,   152,   279,   279,   255,
     239,   220,   241,    95,   221,     0,     0,     0,   270,   279,
     271,   272,   273,   274,   275,   279,   279,     0,     0,   117,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,     0,    18,     0,     0,   276,     0,   118,    21,    22,
      23,    24,    25,   119,   120,   121,     0,     0,     0,   122,
       0,     0,     0,     0,     0,     0,     0,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,     0,   126,     0,     0,     0,     0,
     127,     0,   150,   277,   278,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   270,     0,   271,
     272,   273,   274,   275,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
       0,    18,     0,     0,   276,     0,   118,    21,    22,    23,
      24,    25,   119,   120,   121,     0,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,   123,   124,   108,   109,
     110,   111,   112,   113,   114,   115,   116,     0,     0,     0,
     125,     0,     0,     0,   126,     0,     0,     0,     0,   127,
       0,   150,     0,   278,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,     0,    18,     0,     0,     0,     0,   118,
      21,    22,    23,    24,    25,   119,   120,   121,     0,     0,
       0,   122,   181,   182,   183,   184,     0,     3,     0,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,   126,     4,     5,
       0,     0,   127,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,    20,     0,     0,
       0,    21,    22,    23,    24,    25,     0,     0,     0,    26,
      27,    28,     0,     0,     0,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   252,   253,   254,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     3,     0,     0,    21,    22,    23,    24,    25,
       0,     0,     0,    26,    27,    28,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,    60,     0,     0,    21,    22,    23,    24,
      25,    11,    12,    13,    14,    15,    16,     0,    18,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    98,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,    60,     0,     0,
      21,    22,    23,    24,    25,    11,    12,    13,    14,    15,
      16,     0,    18,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       1,    96,    89,    79,     1,    87,     1,     1,    99,   178,
      71,     1,    20,    94,   306,    11,    94,    97,    99,    80,
     107,    82,    84,   101,    84,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    11,    97,    11,    97,    39,    12,
      13,    34,    15,    16,    37,    38,    39,    40,    41,   341,
      34,   127,    11,    37,    38,    39,    40,    41,    36,    60,
      68,    94,   153,   145,    11,   100,    74,   236,   101,   104,
     100,    11,    65,   160,   104,    76,    54,    21,    22,    68,
      69,    65,    60,    61,    62,    93,    11,   148,    66,    89,
      90,    91,    93,    19,    20,    96,    74,    75,    99,    96,
     101,    96,    96,   179,    99,    99,    96,   100,    87,    88,
      88,   188,   189,    11,    92,    11,   100,    23,    24,    97,
      11,    94,    95,   101,    97,   328,   329,   218,   102,   216,
     217,   196,   197,   228,    78,    79,   212,   340,   214,   215,
      97,    85,    86,   346,   347,   146,    42,    43,    44,    45,
      46,    47,    48,    49,    99,    84,   153,    99,    99,    55,
      56,    57,    58,    59,    70,    71,    72,    73,   190,   191,
     192,   193,   194,   195,    97,    97,    11,    11,    84,    11,
      11,    11,   269,   103,    99,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   104,    11,   103,   273,    42,    43,
      44,    45,    46,    47,   100,    49,   101,    99,    11,    99,
     297,    55,    56,    57,    58,    59,    99,    99,    36,    94,
      11,   218,   103,   224,   100,    18,   302,   228,   304,   305,
     306,   228,    17,   228,   228,   296,    54,   103,   103,    84,
     101,    11,    60,    61,    62,    97,    11,    67,    66,   325,
      11,    11,   103,    11,   330,   101,    74,    75,   100,    34,
     103,    97,   103,   339,   103,   341,   104,    96,    96,    11,
      88,    32,    97,    34,    92,    97,    97,   101,   101,    97,
      97,    42,    43,    44,    45,    46,    47,   101,    49,   101,
      84,   292,   103,   103,    55,    56,    57,    58,    59,   103,
     101,    11,    63,    64,   101,   306,   101,    53,    26,   101,
     311,   144,    96,   103,   103,    96,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   306,    90,   328,   329,   208,
     186,   146,   187,    72,   147,    -1,    -1,    -1,    25,   340,
      27,    28,    29,    30,    31,   346,   347,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,   123,   124,   125,   126,    -1,    11,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    32,    33,
      -1,    -1,    97,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    11,    -1,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    34,    -1,    -1,    55,    56,    57,    58,
      59,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    34,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    34,    -1,    -1,
      55,    56,    57,    58,    59,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   106,     0,    11,    32,    33,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    55,    56,    57,    58,    59,    63,    64,    65,   107,
     108,   111,   112,   113,   114,   116,   120,   123,   126,   128,
     130,   131,   133,   137,   139,    97,    11,    11,    11,    11,
     173,   174,    11,   173,    11,    11,    11,    11,    11,    32,
      34,    63,    64,   114,   114,   134,   135,   136,   102,   117,
      99,    97,    94,    99,    84,   101,    99,    99,    97,    84,
      97,   132,    97,    11,   114,    11,    11,    11,    11,   103,
     104,   173,    99,   124,   134,   174,   109,   173,    34,   121,
     122,   128,   130,   133,   138,    11,   127,   103,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    36,    54,    60,
      61,    62,    66,    74,    75,    88,    92,    97,   156,   157,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     171,   134,   101,   134,    99,    11,    99,    99,    97,   132,
      99,   140,   136,   118,    48,   100,   114,   115,   125,   173,
     103,   100,   110,   111,   112,   130,   133,   137,   139,   101,
      11,   130,   133,   138,   100,   100,   104,   140,    68,    69,
     172,   166,   166,   166,   166,   156,    18,    17,    19,    20,
      21,    22,    78,    79,    85,    86,    87,    88,    89,    90,
      91,    23,    24,    70,    71,    72,    73,    84,   158,    12,
      13,    15,    16,    94,    95,    97,   103,   103,   118,   132,
     122,   127,   134,   101,   141,   100,   119,   128,   129,   138,
     139,    11,   140,    97,    11,   172,   156,    67,   103,   161,
     166,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     165,   165,   166,   166,   166,   157,    11,   156,    11,   156,
     156,   169,   170,   140,   140,   100,   101,   100,   100,   103,
      25,    27,    28,    29,    30,    31,    52,   100,   101,   114,
     140,   142,   143,   145,   146,   147,   151,   153,   154,   155,
     156,    34,   128,   130,   133,   137,    97,   103,   172,    96,
      96,   103,   104,   140,    97,    97,    97,   101,   156,   101,
     101,    97,    11,   101,   134,   140,   156,   156,   156,   143,
     148,   170,   101,   114,   152,    84,   144,   103,   103,   103,
     101,    11,   156,   101,   101,   142,   142,   150,   156,    53,
      26,   101,   156,   142,   149,   170,   103,   103,   142,   142
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   112,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   124,   124,   125,   126,   126,   127,
     127,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     130,   131,   132,   132,   133,   133,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   139,   140,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   144,   144,   145,   145,   146,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   152,   153,   153,   154,   155,
     156,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     159,   160,   160,   161,   161,   162,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   164,   165,   165,
     165,   165,   166,   166,   166,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   169,   169,   170,   170,   171,   172,   172,   172,   173,
     173,   174
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     2,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     6,     0,     2,     0,     2,     2,     2,
       2,     1,     1,     5,     6,     1,     1,     1,     2,     2,
       2,     0,     1,     5,     0,     2,     6,     5,     6,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       6,     4,     0,     2,     6,     7,     6,     0,     1,     1,
       3,     2,     5,     6,     5,     5,     3,     0,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     0,     2,     5,     7,     5,     9,     0,     1,     1,
       0,     1,     0,     1,     8,     1,     2,     3,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     1,     3,     4,
       2,     2,     3,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     1,     1,     3,     3,     0,     2,     3,     1,
       3,     1
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
  case 26: /* standard_type: FLOAT_KW  */
#line 132 "Parser.y"
                   { (yyval.type_value) = 2; }
#line 1610 "Parser.tab.c"
    break;

  case 27: /* standard_type: DOUBLE_KW  */
#line 133 "Parser.y"
                   { (yyval.type_value) = 3; }
#line 1616 "Parser.tab.c"
    break;

  case 28: /* standard_type: DECIMAL_KW  */
#line 134 "Parser.y"
                   { (yyval.type_value) = 7; }
#line 1622 "Parser.tab.c"
    break;

  case 29: /* standard_type: BOOL_KW  */
#line 135 "Parser.y"
                   { (yyval.type_value) = 4; }
#line 1628 "Parser.tab.c"
    break;

  case 30: /* standard_type: INT_KW  */
#line 136 "Parser.y"
                   { (yyval.type_value) = 1; }
#line 1634 "Parser.tab.c"
    break;

  case 31: /* primitive_type: INT_TYPE  */
#line 140 "Parser.y"
                   { (yyval.type_value) = 1; }
#line 1640 "Parser.tab.c"
    break;

  case 32: /* primitive_type: FLOAT_TYPE  */
#line 141 "Parser.y"
                   { (yyval.type_value) = 2; }
#line 1646 "Parser.tab.c"
    break;

  case 33: /* primitive_type: DOUBLE_TYPE  */
#line 142 "Parser.y"
                   { (yyval.type_value) = 3; }
#line 1652 "Parser.tab.c"
    break;

  case 34: /* primitive_type: BOOL_TYPE  */
#line 143 "Parser.y"
                   { (yyval.type_value) = 4; }
#line 1658 "Parser.tab.c"
    break;

  case 35: /* primitive_type: CHAR_TYPE  */
#line 144 "Parser.y"
                   { (yyval.type_value) = 5; }
#line 1664 "Parser.tab.c"
    break;

  case 36: /* primitive_type: STRING_TYPE  */
#line 145 "Parser.y"
                   { (yyval.type_value) = 6; }
#line 1670 "Parser.tab.c"
    break;

  case 37: /* primitive_type: DECIMAL_TYPE  */
#line 146 "Parser.y"
                   { (yyval.type_value) = 7; }
#line 1676 "Parser.tab.c"
    break;

  case 38: /* primitive_type: standard_type  */
#line 147 "Parser.y"
                    { (yyval.type_value) = (yyvsp[0].type_value); }
#line 1682 "Parser.tab.c"
    break;

  case 39: /* method_return_type: primitive_type  */
#line 152 "Parser.y"
                     { (yyval.type_value) = (yyvsp[0].type_value); }
#line 1688 "Parser.tab.c"
    break;

  case 40: /* method_return_type: VOID_TYPE  */
#line 153 "Parser.y"
                     { (yyval.type_value) = 0; }
#line 1694 "Parser.tab.c"
    break;

  case 41: /* method_return_type: qualified_identifier  */
#line 154 "Parser.y"
                           { (yyval.type_value) = 100; }
#line 1700 "Parser.tab.c"
    break;

  case 200: /* qualified_identifier: qualified_identifier '.' simple_identifier  */
#line 523 "Parser.y"
    {
        char* temp = malloc(strlen((yyvsp[-2].string_value)) + strlen((yyvsp[0].string_value)) + 2);
        sprintf(temp, "%s.%s", (yyvsp[-2].string_value), (yyvsp[0].string_value));
        (yyval.string_value) = temp;
    }
#line 1710 "Parser.tab.c"
    break;

  case 201: /* simple_identifier: IDENTIFIER  */
#line 530 "Parser.y"
                              { (yyval.string_value) = (yyvsp[0].string_value); }
#line 1716 "Parser.tab.c"
    break;


#line 1720 "Parser.tab.c"

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

#line 532 "Parser.y"


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
