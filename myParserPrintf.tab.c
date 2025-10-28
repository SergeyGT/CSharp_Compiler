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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LESS = 258,                    /* LESS  */
    GREATER = 259,                 /* GREATER  */
    EQUAL = 260,                   /* EQUAL  */
    NOT_EQUAL = 261,               /* NOT_EQUAL  */
    GREATER_OR_EQUAL = 262,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 263,           /* LESS_OR_EQUAL  */
    OR = 264,                      /* OR  */
    AND = 265,                     /* AND  */
    BITWISE_OR = 266,              /* BITWISE_OR  */
    BITWISE_AND = 267,             /* BITWISE_AND  */
    PLUS_ASSIGN = 268,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 269,            /* MINUS_ASSIGN  */
    MULTIPLY_ASSIGN = 270,         /* MULTIPLY_ASSIGN  */
    DIVISION_ASSIGN = 271,         /* DIVISION_ASSIGN  */
    INCREMENT = 272,               /* INCREMENT  */
    DECREMENT = 273,               /* DECREMENT  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
    INTEGER = 275,                 /* INTEGER  */
    FLOATING_POINT = 276,          /* FLOATING_POINT  */
    FLOAT_LITERAL = 277,           /* FLOAT_LITERAL  */
    STRING = 278,                  /* STRING  */
    CHARACTER = 279,               /* CHARACTER  */
    DECIMAL_LITERAL = 280,         /* DECIMAL_LITERAL  */
    RETURN = 281,                  /* RETURN  */
    IF = 282,                      /* IF  */
    ELSE = 283,                    /* ELSE  */
    WHILE = 284,                   /* WHILE  */
    DO = 285,                      /* DO  */
    FOR = 286,                     /* FOR  */
    CHAR_KW = 287,                 /* CHAR_KW  */
    INT_KW = 288,                  /* INT_KW  */
    STRING_KW = 289,               /* STRING_KW  */
    BOOL_KW = 290,                 /* BOOL_KW  */
    FLOAT_KW = 291,                /* FLOAT_KW  */
    DOUBLE_KW = 292,               /* DOUBLE_KW  */
    DECIMAL_KW = 293,              /* DECIMAL_KW  */
    VOID_KW = 294,                 /* VOID_KW  */
    NEW = 295,                     /* NEW  */
    NULL_KW = 296,                 /* NULL_KW  */
    TRUE_KW = 297,                 /* TRUE_KW  */
    FALSE_KW = 298,                /* FALSE_KW  */
    PUBLIC = 299,                  /* PUBLIC  */
    PROTECTED = 300,               /* PROTECTED  */
    PRIVATE = 301,                 /* PRIVATE  */
    INTERNAL = 302,                /* INTERNAL  */
    PROTECTED_INTERNAL = 303,      /* PROTECTED_INTERNAL  */
    STATIC = 304,                  /* STATIC  */
    CLASS = 305,                   /* CLASS  */
    STRUCT = 306,                  /* STRUCT  */
    ENUM = 307,                    /* ENUM  */
    USING = 308,                   /* USING  */
    NAMESPACE = 309,               /* NAMESPACE  */
    FOREACH = 310,                 /* FOREACH  */
    IN_KW = 311,                   /* IN_KW  */
    OBJECT = 312,                  /* OBJECT  */
    OPERATOR = 313,                /* OPERATOR  */
    VAR = 314,                     /* VAR  */
    TILDE = 315,                   /* TILDE  */
    INTERPOLATED_STRING_START = 316, /* INTERPOLATED_STRING_START  */
    INTERPOLATED_STRING_END = 317, /* INTERPOLATED_STRING_END  */
    INTERPOLATED_STRING_TEXT = 318, /* INTERPOLATED_STRING_TEXT  */
    INTERPOLATED_STRING_EXPR = 319, /* INTERPOLATED_STRING_EXPR  */
    UNARY_MINUS = 320,             /* UNARY_MINUS  */
    UNARY_PLUS = 321,              /* UNARY_PLUS  */
    LOWER_THAN_ELSE = 322          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "myParserPrintf.y"

    int _integer;
    char* _string;
    char* _identifier;
    double _floatingPoint;
    float _floatValue;
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
    struct ConstructorDeclNode* _constructorDecl;
    struct DestructorDeclNode* _destructorDecl;
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
    
    struct InterpolatedStringNode* _interpolatedString;
    struct StructMembersNode* _structMembers;
	
	//struct QualifiedTypeName* _qualifiedTypeName;
	struct ClassNameNode* _className;
    struct MethodNameNode* _methodName;

#line 269 "myParserPrintf.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_class_name = 110,               /* class_name  */
  YYSYMBOL_method_name = 111,              /* method_name  */
  YYSYMBOL_constructor_decl = 112,         /* constructor_decl  */
  YYSYMBOL_method_decl = 113,              /* method_decl  */
  YYSYMBOL_static_constructor_decl = 114,  /* static_constructor_decl  */
  YYSYMBOL_destructor_decl = 115,          /* destructor_decl  */
  YYSYMBOL_field_decl = 116,               /* field_decl  */
  YYSYMBOL_class_members = 117,            /* class_members  */
  YYSYMBOL_class_members_optional = 118,   /* class_members_optional  */
  YYSYMBOL_struct_members = 119,           /* struct_members  */
  YYSYMBOL_struct_members_optional = 120,  /* struct_members_optional  */
  YYSYMBOL_struct_decl = 121,              /* struct_decl  */
  YYSYMBOL_enumerators = 122,              /* enumerators  */
  YYSYMBOL_enum_decl = 123,                /* enum_decl  */
  YYSYMBOL_class_decl = 124,               /* class_decl  */
  YYSYMBOL_namespace_members = 125,        /* namespace_members  */
  YYSYMBOL_namespace_members_optional = 126, /* namespace_members_optional  */
  YYSYMBOL_namespace_decl = 127,           /* namespace_decl  */
  YYSYMBOL_namespace_decl_seq = 128,       /* namespace_decl_seq  */
  YYSYMBOL_using_arg = 129,                /* using_arg  */
  YYSYMBOL_using_directive = 130,          /* using_directive  */
  YYSYMBOL_using_directives = 131,         /* using_directives  */
  YYSYMBOL_using_directives_optional = 132, /* using_directives_optional  */
  YYSYMBOL_interpolated_string = 133,      /* interpolated_string  */
  YYSYMBOL_interpolated_string_content = 134 /* interpolated_string_content  */
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
#define YYLAST   1427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  509

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
       0,   214,   214,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     276,   277,   280,   281,   284,   285,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   305,   306,   309,
     310,   313,   316,   319,   320,   321,   324,   325,   328,   335,
     336,   337,   338,   339,   340,   341,   344,   345,   348,   349,
     350,   363,   364,   367,   368,   375,   376,   378,   379,   386,
     387,   388,   389,   390,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   420,   423,   453,   456,   457,   458,   459,   460,   461,
     470,   475,   483,   484,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   505,   506,   514,   515,
     517,   518,   519,   521,   524,   525,   529,   537,   538,   541,
     549,   550,   551,   558,   559,   560,   561,   562,   563,   566,
     567,   570,   574,   575,   578,   579,   582,   585,   586,   589,
     590,   597,   608,   609,   610
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
  "class_name", "method_name", "constructor_decl", "method_decl",
  "static_constructor_decl", "destructor_decl", "field_decl",
  "class_members", "class_members_optional", "struct_members",
  "struct_members_optional", "struct_decl", "enumerators", "enum_decl",
  "class_decl", "namespace_members", "namespace_members_optional",
  "namespace_decl", "namespace_decl_seq", "using_arg", "using_directive",
  "using_directives", "using_directives_optional", "interpolated_string",
  "interpolated_string_content", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-320)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-123)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -43,    18,    40,  -320,   -43,     6,  -320,   -69,  -320,  -320,
      58,  -320,     6,    93,  -320,    79,  -320,  -320,   122,    50,
    -320,  -320,  -320,   122,   106,   162,   162,   162,  -320,  -320,
    -320,  -320,  -320,    12,   108,   110,   226,    -1,   174,   181,
    -320,  -320,  -320,  -320,  -320,   151,   162,  1227,  -320,  -320,
    -320,  -320,  -320,  -320,   226,   111,   127,   -58,  1258,  -320,
    -320,  -320,   174,   128,  -320,    47,   946,   131,   133,   135,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,   195,  -320,  -320,  1289,   197,    75,  1167,
     109,   148,   149,   212,   152,   154,   157,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,   226,   226,   135,  1289,  -320,
    -320,  -320,  -320,  -320,   221,   195,   195,   163,   165,  1167,
    -320,   167,   195,   -16,   176,    75,  1167,   199,  1167,  1167,
    1319,  -320,  1167,  1167,  1167,  1060,   109,    39,   243,  1093,
     187,   188,   -56,   189,  -320,  -320,  1349,   183,   184,   195,
    -320,   190,   198,   209,   211,   943,   213,   218,  1349,   220,
     545,   222,  1167,  -320,   931,  -320,  -320,  -320,   223,   224,
     225,  -320,  -320,  -320,   228,  1167,  1167,  1167,  1167,  1167,
    1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,  1167,
    1167,  1167,  1167,  1167,  -320,   227,  -320,   674,  -320,  -320,
    1167,  1349,   283,   284,  -320,   234,   229,  -320,  -320,  1349,
    1349,   851,   851,  1167,  -320,   231,  1349,   240,   241,   242,
     244,   252,   253,   256,   258,   262,   264,   265,   266,   267,
     268,   271,  1349,   943,  -320,   269,  1155,  1167,  1167,   107,
     107,   107,   107,   308,   308,   308,   308,   943,   943,   943,
     943,   943,   107,   107,    86,    86,  -320,  -320,  1167,  -320,
     943,   272,  -320,  -320,  1349,   273,   274,   276,  1167,   278,
     279,   851,   280,   281,   851,  -320,   -18,    19,  -320,   851,
     239,  -320,  -320,  -320,  -320,  -320,   285,   277,   286,   270,
     943,   288,   292,  1349,  1349,  1349,  1349,  1349,  1349,  1349,
    1349,  1349,  1349,  1349,  1349,  1349,  1349,  1349,   294,  1167,
     791,   282,  -320,   301,   302,  -320,   851,   303,   304,   943,
     297,  1167,  1167,   331,   998,  1349,   305,  -320,  -320,  -320,
     317,  -320,  -320,  -320,   851,   307,   309,   310,   311,   312,
     313,   314,   319,   320,   318,   321,    36,    38,   322,   323,
     328,   334,   339,  -320,  -320,  -320,   851,   343,   851,   851,
    -320,    57,   136,   287,   306,   316,   332,   330,  -320,   345,
     851,  1349,  1349,  1349,  1349,  1349,  1349,   349,   350,  1349,
    1349,   355,  1349,   356,  1349,  1349,  1349,   357,   851,  -320,
     358,  -320,   359,   360,   851,   851,  1167,  1167,  1167,  1167,
    1167,  -320,   361,   368,   369,   370,   371,   372,   373,   851,
     851,   374,   375,   851,   376,   851,   378,   379,   380,   851,
     381,  -320,  -320,  -320,   363,  -320,   566,   377,   382,   384,
     588,  -320,   383,   388,   389,   390,   391,   392,   412,   413,
     393,   415,   416,   418,   419,   421,   422,   423,   424,  -320,
     851,   426,  1167,  1167,  1167,   851,   851,   851,   851,   851,
     851,   851,  -320,  -320,   851,   851,  -320,   851,  -320,   851,
     851,   851,  -320,  -320,  -320,   386,   428,   429,  -320,   430,
     432,   433,   434,   435,   436,   437,   439,   440,   441,   442,
     443,   851,   851,   851,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     179,     0,     0,   177,   180,     0,   174,     0,     1,   178,
       0,   172,     2,     0,   176,     0,   173,   175,   169,     0,
     165,   163,   164,   170,     0,     0,     0,     0,   168,   166,
     167,   171,   121,     0,     0,     0,   146,     0,   154,     0,
      99,   100,   101,   102,   103,     0,     0,     0,   136,   137,
     134,   138,   139,   135,   147,     0,     0,     0,     0,   149,
     150,   148,   155,     0,   157,     0,     0,     0,     0,    14,
       6,     7,     8,    10,    11,     9,    79,    80,    85,    81,
      82,    83,    84,     0,    12,    13,     0,     0,   182,     0,
      90,    88,    89,     0,     0,     0,     0,    18,   142,   143,
     140,   144,   145,   141,   160,   146,   146,    14,     0,   152,
     153,   151,   156,   159,     0,     0,     0,     0,     0,    54,
     122,     0,     0,     0,    92,   182,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,    91,     0,   132,   133,    97,     0,     0,     0,
     158,     0,     0,     0,     0,    52,    55,     0,    97,     0,
       0,     0,     0,   183,   182,   181,    39,    40,     0,    88,
      45,    41,    42,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,    16,     5,     0,    86,    87,
       0,    97,     0,     0,    95,    98,     0,   162,   161,    97,
      97,    69,    69,     0,    15,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    94,   184,     0,     0,    54,     0,    30,
      31,    33,    32,    35,    34,    37,    36,    24,    25,    26,
      27,    23,    28,    29,    19,    20,    21,    22,    54,     4,
      93,     0,    92,    91,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,    69,    56,    44,     0,    67,    70,
       0,    60,    61,    62,    63,    64,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,    48,     0,     0,    96,    69,     0,     0,    51,
       0,     0,     0,     0,    50,     0,     0,    57,    68,   130,
      91,    58,    59,   131,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,    46,    17,    69,     0,    69,    69,
      66,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    47,
       0,   123,     0,     0,     0,     0,     0,    50,    50,    50,
       0,   125,     0,     0,     0,     0,     0,     0,     0,    69,
      69,     0,     0,    69,     0,    69,     0,     0,     0,    69,
       0,   124,   129,   128,    76,    71,     0,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,    50,    50,    50,     0,    69,    69,    69,    69,
      69,    69,   116,   115,    69,    69,   118,    69,   117,    69,
      69,    69,   114,    77,    72,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,   113,   112,   120,   119,
     108,   109,   104,   105,   106,   107,    75,    73,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,   -47,   300,  -319,  -320,  -217,  -263,  -320,  -176,
    -320,  -320,  -320,  -320,  -320,  -123,  -320,   462,   409,   -45,
    -320,   -42,   -24,   348,    49,    -2,   406,    20,    99,   451,
     117,  -320,    67,  -320,  -320,   344,  -320,   474,   488,  -320,
    -320,   514,  -320,   490,   525,  -320,  -320,  -320,  -121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   136,   277,   320,   156,   157,   278,   279,   280,
     281,   282,   283,   284,   285,    91,    92,   286,   287,   288,
     205,   206,    47,    48,    33,   161,    49,    50,    51,    52,
      53,    54,    55,    62,    63,    20,    65,    21,    22,    23,
      24,    11,    12,     7,     3,     4,     5,    97,   127
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,   -90,    95,   120,   163,   364,    13,   169,   323,   200,
       1,    90,   174,    95,    58,    14,   328,    13,     6,    90,
     311,    66,  -122,   106,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   289,     6,    58,    90,
       8,   313,   160,   234,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    56,   138,    59,   139,
      10,    90,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   100,    34,    35,    15,   427,   428,
     429,   121,   109,    90,   187,   188,   189,   190,   191,   192,
     193,   143,   352,    36,    67,    68,    96,    37,   326,    90,
      25,    26,    27,   327,   187,   188,   189,   190,   191,   192,
     193,    90,    17,   151,   152,   381,   215,   383,   194,   382,
     159,   384,   187,   188,   189,   190,   191,   192,   193,   113,
     114,   424,   425,   475,   476,   477,   394,    60,   125,   126,
     357,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   101,    90,    61,   192,   193,   369,   261,
      18,   110,    90,    90,   276,   276,    19,   266,   267,    90,
      32,   103,   147,   148,   292,   190,   191,   192,   193,   111,
     390,    32,   392,   393,   138,    90,   139,   473,    31,    38,
     308,    39,   478,   104,   402,    40,    41,    42,    43,    44,
      64,   187,   188,   189,   190,   191,   192,   193,   105,   117,
     112,   118,   420,   119,   120,   395,   124,    90,    40,    41,
      42,    43,    44,    45,   276,   140,   141,   276,   506,   507,
     508,   142,   276,   438,   439,   146,   144,   442,   145,   444,
     150,   162,   153,   448,   154,   158,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,   165,   195,   198,   199,   207,   208,   201,   209,   276,
      40,    41,    42,    43,    44,    45,   210,   276,    90,   366,
     479,   480,   481,   482,   483,   484,    46,   276,   485,   486,
     211,   487,   212,   488,   489,   490,   213,   214,   216,   235,
     232,   236,   262,   263,   330,   258,   237,   238,   265,   276,
     291,   276,   276,   175,   176,   177,   178,   264,   293,   294,
     295,   329,   296,   276,    90,    90,    90,    90,    90,    90,
     297,   298,    90,    90,   299,    90,   300,    90,    90,    90,
     301,   276,   302,   303,   304,   305,   306,   276,   276,   307,
     309,   314,   333,   317,   316,   318,   321,   322,   324,   325,
     363,   331,   276,   276,   354,   396,   276,    28,   276,   334,
     332,   335,   276,   351,   188,   189,   190,   191,   192,   193,
     355,   360,   200,   356,   358,   359,   400,   368,   370,   137,
     397,   450,   371,   372,   373,   374,   375,   376,   377,   378,
     398,   379,    98,   276,   380,   385,   386,   387,   276,   276,
     276,   276,   276,   276,   276,   388,   399,   276,   276,   155,
     276,   389,   276,   276,   276,   391,   164,   401,   166,   167,
     409,   410,   171,   172,   173,   137,   413,   415,   419,   197,
     421,   422,   423,   431,   276,   276,   276,   432,   433,   434,
     435,   436,   437,   440,   441,   443,    94,   445,   446,   447,
      99,   452,   233,   449,   456,   491,   453,    94,   454,   457,
     458,   459,   460,   461,   464,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   462,   463,   465,    29,   466,   467,
     260,   468,   469,   470,   471,   102,   472,   492,   493,    93,
     474,    30,   494,   290,   495,   496,   497,   498,   499,   500,
      93,   501,   502,   503,   504,   505,    16,    57,   116,     9,
       0,     0,     0,     0,     0,     0,   310,   155,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
     217,   218,   219,   220,     0,   204,   221,   222,   155,     0,
       0,     0,   223,   224,     0,     0,     0,   204,   319,     0,
     149,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,     0,     0,     0,   203,   155,
     204,   225,   226,   227,   228,   229,   230,   231,   204,   204,
     203,   361,   362,     0,   319,   204,     0,     0,     0,     0,
       0,   187,   188,   189,   190,   191,   192,   193,     0,     0,
       0,   204,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,     0,   187,   188,   189,   190,   191,   192,   193,
       0,     0,     0,   203,     0,     0,     0,   455,     0,     0,
       0,   203,   203,   315,     0,     0,     0,     0,   203,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,     0,     0,     0,   203,     0,   426,   319,   319,   319,
     430,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,     0,
       0,     0,     0,   365,   367,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,     0,     0,     0,     0,
     259,     0,   319,   319,   319,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     403,   404,   405,   406,   407,   408,     0,   203,   411,   412,
       0,   414,     0,   416,   417,   418,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,   203,   203,   203,   203,   203,     0,
       0,   203,   203,     0,   203,     0,   203,   203,   203,     0,
       0,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,     0,     0,     0,     0,   353,   128,   129,
     107,    70,    71,    72,    73,    74,    75,   268,   269,     0,
     270,   271,   272,    76,    77,    78,    79,    80,    81,    82,
       0,   130,   131,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,     0,     0,     0,
      87,     0,    88,     0,     0,     0,     0,     0,     0,   132,
     133,     0,     0,   134,     0,     0,     0,     0,     0,   135,
       0,     0,   274,     0,     0,   275,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
       0,     0,     0,     0,     0,   107,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,   115,     0,     0,    84,    85,
       0,     0,     0,     0,   125,   126,   187,   188,   189,   190,
     191,   192,   193,     0,     0,     0,     0,    88,   187,   188,
     189,   190,   191,   192,   193,   128,   129,   107,    70,    71,
      72,    73,    74,    75,    89,     0,     0,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,   130,   131,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,     0,     0,     0,     0,   132,   133,     0,     0,
     134,     0,     0,     0,     0,     0,   135,   128,   129,   107,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,     0,
     130,   131,    84,    85,     0,     0,     0,     0,     0,     0,
     128,   129,   107,    70,    71,    72,    73,    74,    75,     0,
       0,    88,     0,     0,     0,     0,     0,     0,   132,   133,
       0,     0,   134,   130,   131,    84,    85,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,   132,   133,     0,     0,   134,     0,     0,     0,   196,
       0,   135,   128,   129,   107,    70,    71,    72,    73,    74,
      75,     0,     0,     0,   128,   129,   107,    70,    71,    72,
      73,    74,    75,     0,     0,   130,   131,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131,    84,
      85,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,   132,   133,     0,     0,   134,    88,     0,
       0,   198,     0,   135,     0,   132,   133,     0,     0,   134,
       0,     0,     0,     0,     0,   135,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    83,     0,     0,    84,
      85,     0,     0,     0,     0,     0,    86,   107,    70,    71,
      72,    73,    74,    75,     0,     0,    87,     0,    88,     0,
      76,    77,    78,    79,    80,    81,    82,    83,     0,     0,
      84,    85,     0,     0,     0,    89,     0,   108,   107,    70,
      71,    72,    73,    74,    75,     0,     0,    87,     0,    88,
       0,    76,    77,    78,    79,    80,    81,    82,   122,     0,
       0,    84,    85,     0,     0,     0,    89,     0,   107,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
      88,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,    84,    85,     0,     0,     0,     0,    89,   107,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
      88,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,    84,    85,     0,     0,     0,   168,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      47,    19,    47,    19,   125,   324,    75,   130,   271,    65,
      53,    58,   135,    58,    38,    84,   279,    75,    19,    66,
     237,    45,    78,    81,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   212,    19,    62,    86,
       0,   258,    58,   164,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    57,    75,    38,    77,
      54,   108,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    54,    26,    27,    19,   397,   398,
     399,    83,    62,   130,    65,    66,    67,    68,    69,    70,
      71,    93,   309,    81,    45,    46,    47,    85,   274,   146,
      50,    51,    52,    84,    65,    66,    67,    68,    69,    70,
      71,   158,    19,   115,   116,    79,   158,    79,    79,    83,
     122,    83,    65,    66,    67,    68,    69,    70,    71,    82,
      83,   394,   395,   452,   453,   454,    79,    38,    63,    64,
     316,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    54,   201,    38,    70,    71,   334,   201,
      81,    62,   209,   210,   211,   212,    44,   209,   210,   216,
      19,    54,   105,   106,   216,    68,    69,    70,    71,    62,
     356,    19,   358,   359,    75,   232,    77,   450,    82,    81,
     232,    81,   455,    82,   370,    44,    45,    46,    47,    48,
      19,    65,    66,    67,    68,    69,    70,    71,    81,    78,
      82,    78,   388,    78,    19,    79,    19,   264,    44,    45,
      46,    47,    48,    49,   271,    77,    77,   274,   491,   492,
     493,    19,   279,   409,   410,    78,    84,   413,    84,   415,
      19,    65,    79,   419,    79,    78,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,    62,    19,    76,    76,    82,    82,    78,    78,   316,
      44,    45,    46,    47,    48,    49,    78,   324,   325,   324,
     456,   457,   458,   459,   460,   461,    60,   334,   464,   465,
      81,   467,    81,   469,   470,   471,    83,    79,    78,    76,
      78,    77,    19,    19,    19,    78,    81,    79,    79,   356,
      79,   358,   359,     5,     6,     7,     8,    83,    78,    78,
      78,    82,    78,   370,   371,   372,   373,   374,   375,   376,
      78,    78,   379,   380,    78,   382,    78,   384,   385,   386,
      78,   388,    78,    78,    78,    78,    78,   394,   395,    78,
      81,    79,    82,    79,    81,    79,    78,    78,    78,    78,
      29,    84,   409,   410,    82,    78,   413,    23,   415,    81,
      84,    79,   419,    79,    66,    67,    68,    69,    70,    71,
      79,    84,    65,    81,    81,    81,    56,    82,    81,    89,
      84,    28,    83,    83,    83,    83,    83,    83,    79,    79,
      84,    83,    54,   450,    83,    83,    83,    79,   455,   456,
     457,   458,   459,   460,   461,    81,    84,   464,   465,   119,
     467,    82,   469,   470,   471,    82,   126,    82,   128,   129,
      81,    81,   132,   133,   134,   135,    81,    81,    81,   139,
      82,    82,    82,    82,   491,   492,   493,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    47,    79,    79,    79,
      54,    84,   162,    82,    81,    79,    84,    58,    84,    81,
      81,    81,    81,    81,    81,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    82,    82,    81,    23,    82,    81,
     200,    82,    81,    81,    81,    54,    82,    79,    79,    47,
      84,    23,    82,   213,    82,    82,    82,    82,    82,    82,
      58,    82,    82,    82,    82,    82,    12,    37,    66,     4,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   237,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
       5,     6,     7,     8,    -1,   146,    11,    12,   258,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,   158,   268,    -1,
     108,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,   146,   309,
     201,    66,    67,    68,    69,    70,    71,    72,   209,   210,
     158,   321,   322,    -1,   324,   216,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,   232,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    79,    -1,    -1,
      -1,   209,   210,   264,    -1,    -1,    -1,    -1,   216,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,   232,    -1,   396,   397,   398,   399,
     400,    -1,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,
      -1,    -1,    -1,   324,   325,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      76,    -1,   452,   453,   454,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     371,   372,   373,   374,   375,   376,    -1,   325,   379,   380,
      -1,   382,    -1,   384,   385,   386,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   371,   372,   373,   374,   375,   376,    -1,
      -1,   379,   380,    -1,   382,    -1,   384,   385,   386,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    76,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    81,    -1,    -1,    84,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    61,    65,    66,
      67,    68,    69,    70,    71,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    78,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    78,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      -1,    -1,    72,    40,    41,    42,    43,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    78,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    72,    61,    -1,
      -1,    76,    -1,    78,    -1,    68,    69,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    59,    -1,    61,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    -1,    -1,    -1,    78,    -1,    49,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    59,    -1,    61,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    -1,    -1,    78,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      61,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    78,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      61,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    87,   130,   131,   132,    19,   129,     0,   130,
      54,   127,   128,    75,    84,    19,   127,    19,    81,    44,
     121,   123,   124,   125,   126,    50,    51,    52,   121,   123,
     124,    82,    19,   110,   110,   110,    81,    85,    81,    81,
      44,    45,    46,    47,    48,    49,    60,   108,   109,   112,
     113,   114,   115,   116,   117,   118,    57,   129,   108,   113,
     114,   116,   119,   120,    19,   122,   108,   110,   110,    19,
      20,    21,    22,    23,    24,    25,    32,    33,    34,    35,
      36,    37,    38,    39,    42,    43,    49,    59,    61,    78,
      88,   101,   102,   103,   104,   105,   110,   133,   109,   112,
     113,   114,   115,   116,    82,    81,    81,    19,    49,   113,
     114,   116,    82,    82,    83,    39,   103,    78,    78,    78,
      19,   111,    39,   103,    19,    63,    64,   134,    17,    18,
      40,    41,    68,    69,    72,    78,    88,    89,    75,    77,
      77,    77,    19,   111,    84,    84,    78,   118,   118,   103,
      19,   111,   111,    79,    79,    89,    91,    92,    78,   111,
      58,   111,    65,   134,    89,    62,    89,    89,    77,   101,
     103,    89,    89,    89,   101,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    65,    66,    67,
      68,    69,    70,    71,    79,    19,    76,    89,    76,    76,
      65,    78,    59,   103,   104,   106,   107,    82,    82,    78,
      78,    81,    81,    83,    79,   107,    78,     5,     6,     7,
       8,    11,    12,    17,    18,    66,    67,    68,    69,    70,
      71,    72,    78,    89,   134,    76,    77,    81,    79,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    78,    76,
      89,   107,    19,    19,    83,    79,   107,   107,    26,    27,
      29,    30,    31,    55,    81,    84,    88,    89,    93,    94,
      95,    96,    97,    98,    99,   100,   103,   104,   105,    95,
      89,    79,   107,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,   107,    81,
      89,    92,    89,    92,    79,   104,    81,    79,    79,    89,
      90,    78,    78,    93,    78,    78,    95,    84,    93,    82,
      19,    84,    84,    82,    81,    79,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,    79,    92,    76,    82,    79,    81,    95,    81,    81,
      84,    89,    89,    29,    90,   104,   105,   104,    82,    95,
      81,    83,    83,    83,    83,    83,    83,    79,    79,    83,
      83,    79,    83,    79,    83,    83,    83,    79,    81,    82,
      95,    82,    95,    95,    79,    79,    78,    84,    84,    84,
      56,    82,    95,   104,   104,   104,   104,   104,   104,    81,
      81,   104,   104,    81,   104,    81,   104,   104,   104,    81,
      95,    82,    82,    82,    93,    93,    89,    90,    90,    90,
      89,    82,    79,    79,    79,    79,    79,    79,    95,    95,
      79,    79,    95,    79,    95,    79,    79,    79,    95,    82,
      28,    79,    84,    84,    84,    79,    81,    81,    81,    81,
      81,    81,    82,    82,    81,    81,    82,    81,    82,    81,
      81,    81,    82,    93,    84,    90,    90,    90,    93,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    79,    79,    79,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    93,    93,    93
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
     109,   110,   111,   112,   113,   113,   113,   113,   113,   113,
     114,   115,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   120,   120,   121,   122,   122,   123,
     124,   124,   124,   125,   125,   125,   125,   125,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   131,   131,   132,
     132,   133,   134,   134,   134
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
      13,     1,     1,     8,     9,     9,    10,    10,    10,    10,
       7,     7,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     0,     1,     1,     1,
       1,     2,     2,     2,     0,     1,     6,     1,     3,     6,
       6,     8,     8,     1,     1,     1,     2,     2,     2,     0,
       1,     5,     1,     2,     1,     3,     3,     1,     2,     0,
       1,     3,     0,     2,     3
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
#line 214 "myParserPrintf.y"
                                                      { treeRoot = new Program((yyvsp[-1]._usingDirectives), (yyvsp[0]._namespaceDeclSeq)); }
#line 1898 "myParserPrintf.tab.c"
    break;

  case 3: /* access_expr: '(' expr ')'  */
#line 221 "myParserPrintf.y"
                                                                            { Print("access_expr -> ( expr )"); }
#line 1904 "myParserPrintf.tab.c"
    break;

  case 4: /* access_expr: access_expr '[' expr ']'  */
#line 222 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr [ expr ]"); }
#line 1910 "myParserPrintf.tab.c"
    break;

  case 5: /* access_expr: access_expr '[' ']'  */
#line 223 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr [ ]"); }
#line 1916 "myParserPrintf.tab.c"
    break;

  case 6: /* access_expr: INTEGER  */
#line 224 "myParserPrintf.y"
                                                                            { Print("access_expr -> INTEGER", (yyvsp[0]._integer)); }
#line 1922 "myParserPrintf.tab.c"
    break;

  case 7: /* access_expr: FLOATING_POINT  */
#line 225 "myParserPrintf.y"
                                                                            { Print("access_expr -> FLOATING_POINT", (yyvsp[0]._floatingPoint)); }
#line 1928 "myParserPrintf.tab.c"
    break;

  case 8: /* access_expr: FLOAT_LITERAL  */
#line 226 "myParserPrintf.y"
                                                                            { Print("access_expr -> FLOAT_LITERAL", (yyvsp[0]._floatValue)); }
#line 1934 "myParserPrintf.tab.c"
    break;

  case 9: /* access_expr: DECIMAL_LITERAL  */
#line 227 "myParserPrintf.y"
                                                                                                                                        { Print("access_expr -> DECIMAL_LITERAL", (yyvsp[0]._floatingPoint)); }
#line 1940 "myParserPrintf.tab.c"
    break;

  case 10: /* access_expr: STRING  */
#line 228 "myParserPrintf.y"
                                                                            { Print("access_expr -> FLOATING_STRING", (yyvsp[0]._string)); }
#line 1946 "myParserPrintf.tab.c"
    break;

  case 11: /* access_expr: CHARACTER  */
#line 229 "myParserPrintf.y"
                                                                            { Print("access_expr -> CHARACTER", "'" + (yyvsp[0]._character) + "'"); }
#line 1952 "myParserPrintf.tab.c"
    break;

  case 12: /* access_expr: TRUE_KW  */
#line 230 "myParserPrintf.y"
                                                                            { Print("access_expr -> TRUE_KW"); }
#line 1958 "myParserPrintf.tab.c"
    break;

  case 13: /* access_expr: FALSE_KW  */
#line 231 "myParserPrintf.y"
                                                                            { Print("access_expr -> FALSE_KW"); }
#line 1964 "myParserPrintf.tab.c"
    break;

  case 14: /* access_expr: IDENTIFIER  */
#line 232 "myParserPrintf.y"
                                                                            { Print("access_expr -> IDENTIFIER", (yyvsp[0]._identifier)); }
#line 1970 "myParserPrintf.tab.c"
    break;

  case 15: /* access_expr: IDENTIFIER '(' expr_seq_optional ')'  */
#line 233 "myParserPrintf.y"
                                                                            { Print("access_expr -> IDENTIFIER ( expr_seq_optional )", (yyvsp[-3]._identifier)); }
#line 1976 "myParserPrintf.tab.c"
    break;

  case 16: /* access_expr: access_expr '.' IDENTIFIER  */
#line 234 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr . IDENTIFIER"); }
#line 1982 "myParserPrintf.tab.c"
    break;

  case 17: /* access_expr: access_expr '.' IDENTIFIER '(' expr_seq_optional ')'  */
#line 235 "myParserPrintf.y"
                                                                            { Print("access_expr -> access_expr . IDENTIFIER ( expr_seq_optional )"); }
#line 1988 "myParserPrintf.tab.c"
    break;

  case 18: /* access_expr: interpolated_string  */
#line 236 "myParserPrintf.y"
                                                                            { Print("access_expr -> interpolated_string"); }
#line 1994 "myParserPrintf.tab.c"
    break;

  case 19: /* expr: expr '+' expr  */
#line 243 "myParserPrintf.y"
                                                { Print("expr + expr"); }
#line 2000 "myParserPrintf.tab.c"
    break;

  case 20: /* expr: expr '-' expr  */
#line 244 "myParserPrintf.y"
                                                { Print("expr - expr"); }
#line 2006 "myParserPrintf.tab.c"
    break;

  case 21: /* expr: expr '*' expr  */
#line 245 "myParserPrintf.y"
                                                { Print("expr * expr"); }
#line 2012 "myParserPrintf.tab.c"
    break;

  case 22: /* expr: expr '/' expr  */
#line 246 "myParserPrintf.y"
                                                { Print("expr / expr"); }
#line 2018 "myParserPrintf.tab.c"
    break;

  case 23: /* expr: expr '=' expr  */
#line 247 "myParserPrintf.y"
                                                { Print("expr = expr"); }
#line 2024 "myParserPrintf.tab.c"
    break;

  case 24: /* expr: expr PLUS_ASSIGN expr  */
#line 248 "myParserPrintf.y"
                                                { Print("expr PLUS_ASSIGN expr"); }
#line 2030 "myParserPrintf.tab.c"
    break;

  case 25: /* expr: expr MINUS_ASSIGN expr  */
#line 249 "myParserPrintf.y"
                                                { Print("expr MINUS_ASSIGN expr"); }
#line 2036 "myParserPrintf.tab.c"
    break;

  case 26: /* expr: expr MULTIPLY_ASSIGN expr  */
#line 250 "myParserPrintf.y"
                                                { Print("expr MULTIPLY_ASSIGN expr"); }
#line 2042 "myParserPrintf.tab.c"
    break;

  case 27: /* expr: expr DIVISION_ASSIGN expr  */
#line 251 "myParserPrintf.y"
                                                { Print("expr DIVISION_ASSIGN expr"); }
#line 2048 "myParserPrintf.tab.c"
    break;

  case 28: /* expr: expr '<' expr  */
#line 252 "myParserPrintf.y"
                                                { Print("expr < expr"); }
#line 2054 "myParserPrintf.tab.c"
    break;

  case 29: /* expr: expr '>' expr  */
#line 253 "myParserPrintf.y"
                                                { Print("expr > expr"); }
#line 2060 "myParserPrintf.tab.c"
    break;

  case 30: /* expr: expr EQUAL expr  */
#line 254 "myParserPrintf.y"
                                                { Print("expr EQUAL expr"); }
#line 2066 "myParserPrintf.tab.c"
    break;

  case 31: /* expr: expr NOT_EQUAL expr  */
#line 255 "myParserPrintf.y"
                                                { Print("expr NOT_EQUAL expr"); }
#line 2072 "myParserPrintf.tab.c"
    break;

  case 32: /* expr: expr LESS_OR_EQUAL expr  */
#line 256 "myParserPrintf.y"
                                                { Print("expr LESS_OR_EQUAL expr"); }
#line 2078 "myParserPrintf.tab.c"
    break;

  case 33: /* expr: expr GREATER_OR_EQUAL expr  */
#line 257 "myParserPrintf.y"
                                                { Print("expr GREATER_OR_EQUAL expr"); }
#line 2084 "myParserPrintf.tab.c"
    break;

  case 34: /* expr: expr AND expr  */
#line 258 "myParserPrintf.y"
                                                { Print("expr AND expr"); }
#line 2090 "myParserPrintf.tab.c"
    break;

  case 35: /* expr: expr OR expr  */
#line 259 "myParserPrintf.y"
                                                { Print("expr OR expr"); }
#line 2096 "myParserPrintf.tab.c"
    break;

  case 36: /* expr: expr BITWISE_AND expr  */
#line 260 "myParserPrintf.y"
                                                { Print("expr BITWISE_AND expr"); }
#line 2102 "myParserPrintf.tab.c"
    break;

  case 37: /* expr: expr BITWISE_OR expr  */
#line 261 "myParserPrintf.y"
                                                { Print("expr BITWISE_OR expr"); }
#line 2108 "myParserPrintf.tab.c"
    break;

  case 38: /* expr: '!' expr  */
#line 262 "myParserPrintf.y"
                                                { Print(" ! expr"); }
#line 2114 "myParserPrintf.tab.c"
    break;

  case 39: /* expr: INCREMENT expr  */
#line 263 "myParserPrintf.y"
                                                { Print("INCREMENT expr"); }
#line 2120 "myParserPrintf.tab.c"
    break;

  case 40: /* expr: DECREMENT expr  */
#line 264 "myParserPrintf.y"
                                                { Print("DECREMENT expr"); }
#line 2126 "myParserPrintf.tab.c"
    break;

  case 41: /* expr: '+' expr  */
#line 265 "myParserPrintf.y"
                                                { Print("+ expr UNARY_PLUS"); }
#line 2132 "myParserPrintf.tab.c"
    break;

  case 42: /* expr: '-' expr  */
#line 266 "myParserPrintf.y"
                                                { Print("- expr UNARY_MINUS"); }
#line 2138 "myParserPrintf.tab.c"
    break;

  case 43: /* expr: NULL_KW  */
#line 267 "myParserPrintf.y"
                                                { Print("NULL_KW"); }
#line 2144 "myParserPrintf.tab.c"
    break;

  case 44: /* expr: access_expr  */
#line 268 "myParserPrintf.y"
                                                { Print("access_expr"); }
#line 2150 "myParserPrintf.tab.c"
    break;

  case 45: /* expr: NEW type  */
#line 269 "myParserPrintf.y"
                                                { Print("NEW type"); }
#line 2156 "myParserPrintf.tab.c"
    break;

  case 46: /* expr: NEW type '{' expr_seq_optional '}'  */
#line 270 "myParserPrintf.y"
                                                { Print("NEW type { expr_seq_optional }"); }
#line 2162 "myParserPrintf.tab.c"
    break;

  case 47: /* expr: NEW '[' ']' '{' expr_seq_optional '}'  */
#line 271 "myParserPrintf.y"
                                                { Print("NEW [] { expr_seq_optional }"); }
#line 2168 "myParserPrintf.tab.c"
    break;

  case 48: /* expr: '(' standard_type ')' expr  */
#line 272 "myParserPrintf.y"
                                                { Print("( standard_type )"); }
#line 2174 "myParserPrintf.tab.c"
    break;

  case 49: /* expr: NEW standard_type '[' expr ']'  */
#line 273 "myParserPrintf.y"
                                                { Print("NEW standard_type [ expr ]"); }
#line 2180 "myParserPrintf.tab.c"
    break;

  case 50: /* expr_optional: %empty  */
#line 276 "myParserPrintf.y"
                                { Print(" expr_optional -> empty "); }
#line 2186 "myParserPrintf.tab.c"
    break;

  case 51: /* expr_optional: expr  */
#line 277 "myParserPrintf.y"
                                { Print(" expr_optional -> expr "); }
#line 2192 "myParserPrintf.tab.c"
    break;

  case 52: /* expr_seq: expr  */
#line 280 "myParserPrintf.y"
                                { Print(" expr_seq -> expr "); }
#line 2198 "myParserPrintf.tab.c"
    break;

  case 53: /* expr_seq: expr_seq ',' expr  */
#line 281 "myParserPrintf.y"
                                { Print(" expr_seq -> expr_seq , expr "); }
#line 2204 "myParserPrintf.tab.c"
    break;

  case 54: /* expr_seq_optional: %empty  */
#line 284 "myParserPrintf.y"
                                { Print("expr_seq_optional -> empty"); }
#line 2210 "myParserPrintf.tab.c"
    break;

  case 55: /* expr_seq_optional: expr_seq  */
#line 285 "myParserPrintf.y"
                                { Print("expr_seq_optional -> expr_seq"); }
#line 2216 "myParserPrintf.tab.c"
    break;

  case 56: /* stmt: ';'  */
#line 292 "myParserPrintf.y"
                                    { Print("stmt -> ;"); }
#line 2222 "myParserPrintf.tab.c"
    break;

  case 57: /* stmt: expr ';'  */
#line 293 "myParserPrintf.y"
                                    { Print("stmt -> expr ;"); }
#line 2228 "myParserPrintf.tab.c"
    break;

  case 58: /* stmt: var_decl ';'  */
#line 294 "myParserPrintf.y"
                                    { Print("stmt -> var_decl ;"); }
#line 2234 "myParserPrintf.tab.c"
    break;

  case 59: /* stmt: var_decl_with_init ';'  */
#line 295 "myParserPrintf.y"
                                    { Print("stmt -> var_decl_with_init ;"); }
#line 2240 "myParserPrintf.tab.c"
    break;

  case 60: /* stmt: while_stmt  */
#line 296 "myParserPrintf.y"
                                    { Print("stmt -> while_stmt ;"); }
#line 2246 "myParserPrintf.tab.c"
    break;

  case 61: /* stmt: do_while_stmt  */
#line 297 "myParserPrintf.y"
                                    { Print("stmt -> do_while_stmt ;"); }
#line 2252 "myParserPrintf.tab.c"
    break;

  case 62: /* stmt: for_stmt  */
#line 298 "myParserPrintf.y"
                                    { Print("stmt -> for_stmt ;"); }
#line 2258 "myParserPrintf.tab.c"
    break;

  case 63: /* stmt: if_stmt  */
#line 299 "myParserPrintf.y"
                                    { Print("stmt -> if_stmt ;"); }
#line 2264 "myParserPrintf.tab.c"
    break;

  case 64: /* stmt: foreach_stmt  */
#line 300 "myParserPrintf.y"
                                    { Print("stmt -> foreach_stmt ;"); }
#line 2270 "myParserPrintf.tab.c"
    break;

  case 65: /* stmt: '{' stmt_seq_optional '}'  */
#line 301 "myParserPrintf.y"
                                    { Print("stmt -> { stmt_seq_optional } ;"); }
#line 2276 "myParserPrintf.tab.c"
    break;

  case 66: /* stmt: RETURN expr_optional ';'  */
#line 302 "myParserPrintf.y"
                                    { Print("stmt -> RETURN expr_optional ;"); }
#line 2282 "myParserPrintf.tab.c"
    break;

  case 67: /* stmt_seq: stmt  */
#line 305 "myParserPrintf.y"
                            { Print("stmt_seq -> stmt"); }
#line 2288 "myParserPrintf.tab.c"
    break;

  case 68: /* stmt_seq: stmt_seq stmt  */
#line 306 "myParserPrintf.y"
                            { Print("stmt_seq -> stmt_seq stmt"); }
#line 2294 "myParserPrintf.tab.c"
    break;

  case 69: /* stmt_seq_optional: %empty  */
#line 309 "myParserPrintf.y"
                            { Print("stmt_seq_optional -> empty"); }
#line 2300 "myParserPrintf.tab.c"
    break;

  case 70: /* stmt_seq_optional: stmt_seq  */
#line 310 "myParserPrintf.y"
                             { Print("stmt_seq_optional -> stmt_seq"); }
#line 2306 "myParserPrintf.tab.c"
    break;

  case 71: /* while_stmt: WHILE '(' expr ')' stmt  */
#line 313 "myParserPrintf.y"
                                                    { Print("while_stmt -> WHILE ( expr ) stmt"); }
#line 2312 "myParserPrintf.tab.c"
    break;

  case 72: /* do_while_stmt: DO stmt WHILE '(' expr ')' ';'  */
#line 316 "myParserPrintf.y"
                                                    { Print("do_while_stmt -> DO stmt WHILE ( expr ) ;"); }
#line 2318 "myParserPrintf.tab.c"
    break;

  case 73: /* for_stmt: FOR '(' var_decl ';' expr_optional ';' expr_optional ')' stmt  */
#line 319 "myParserPrintf.y"
                                                                                            { Print("for_stmt -> FOR ( var_decl ; expr_optional ; expr_optional ) stmt"); }
#line 2324 "myParserPrintf.tab.c"
    break;

  case 74: /* for_stmt: FOR '(' var_decl_with_init ';' expr_optional ';' expr_optional ')' stmt  */
#line 320 "myParserPrintf.y"
                                                                                            { Print("for_stmt -> FOR ( var_decl_with_init ; expr_optional ; expr_optional ) stmt"); }
#line 2330 "myParserPrintf.tab.c"
    break;

  case 75: /* for_stmt: FOR '(' expr_optional ';' expr_optional ';' expr_optional ')' stmt  */
#line 321 "myParserPrintf.y"
                                                                                            { Print("for_stmt -> FOR ( expr_optional ; expr_optional ; expr_optional ) stmt"); }
#line 2336 "myParserPrintf.tab.c"
    break;

  case 76: /* if_stmt: IF '(' expr ')' stmt  */
#line 324 "myParserPrintf.y"
                                                                 { Print("if_stmt -> IF ( expr ) stmt"); }
#line 2342 "myParserPrintf.tab.c"
    break;

  case 77: /* if_stmt: IF '(' expr ')' stmt ELSE stmt  */
#line 325 "myParserPrintf.y"
                                            { Print("if_stmt -> IF ( expr ) stmt ELSE stmt"); }
#line 2348 "myParserPrintf.tab.c"
    break;

  case 78: /* foreach_stmt: FOREACH '(' var_decl IN_KW expr ')' stmt  */
#line 328 "myParserPrintf.y"
                                                            { Print("foreach_stmt -> FOREACH ( var_decl IN_KW expr ) stmt"); }
#line 2354 "myParserPrintf.tab.c"
    break;

  case 79: /* standard_type: CHAR_KW  */
#line 335 "myParserPrintf.y"
                            { Print("standard_type -> CHAR_KW"); }
#line 2360 "myParserPrintf.tab.c"
    break;

  case 80: /* standard_type: INT_KW  */
#line 336 "myParserPrintf.y"
                            { Print("standard_type -> INT_KW"); }
#line 2366 "myParserPrintf.tab.c"
    break;

  case 81: /* standard_type: BOOL_KW  */
#line 337 "myParserPrintf.y"
                            { Print("standard_type -> BOOL_KW"); }
#line 2372 "myParserPrintf.tab.c"
    break;

  case 82: /* standard_type: FLOAT_KW  */
#line 338 "myParserPrintf.y"
                            { Print("standard_type -> FLOAT_KW"); }
#line 2378 "myParserPrintf.tab.c"
    break;

  case 83: /* standard_type: DOUBLE_KW  */
#line 339 "myParserPrintf.y"
                            { Print("standard_type -> DOUBLE_KW"); }
#line 2384 "myParserPrintf.tab.c"
    break;

  case 84: /* standard_type: DECIMAL_KW  */
#line 340 "myParserPrintf.y"
                            { Print("standard_type -> DECIMAL_KW"); }
#line 2390 "myParserPrintf.tab.c"
    break;

  case 85: /* standard_type: STRING_KW  */
#line 341 "myParserPrintf.y"
                            { Print("standard_type -> STRING_KW"); }
#line 2396 "myParserPrintf.tab.c"
    break;

  case 86: /* standard_array_type: standard_type '[' ']'  */
#line 344 "myParserPrintf.y"
                                                    { Print("standard_type [ ]"); }
#line 2402 "myParserPrintf.tab.c"
    break;

  case 87: /* standard_array_type: standard_array_type '[' ']'  */
#line 345 "myParserPrintf.y"
                                                    { Print("standard_array_type [ ]"); }
#line 2408 "myParserPrintf.tab.c"
    break;

  case 88: /* type: standard_type  */
#line 348 "myParserPrintf.y"
                            { Print("type -> standard_type"); }
#line 2414 "myParserPrintf.tab.c"
    break;

  case 89: /* type: standard_array_type  */
#line 349 "myParserPrintf.y"
                            { Print("type -> standard_array_type"); }
#line 2420 "myParserPrintf.tab.c"
    break;

  case 90: /* type: access_expr  */
#line 350 "myParserPrintf.y"
                            { Print("type -> access_expr"); }
#line 2426 "myParserPrintf.tab.c"
    break;

  case 91: /* var_decl: type IDENTIFIER  */
#line 363 "myParserPrintf.y"
                                                    { Print("var_decl -> type IDENTIFIER"); }
#line 2432 "myParserPrintf.tab.c"
    break;

  case 92: /* var_decl: VAR IDENTIFIER  */
#line 364 "myParserPrintf.y"
                                                    { Print("var_decl -> VAR IDENTIFIER"); }
#line 2438 "myParserPrintf.tab.c"
    break;

  case 93: /* var_decl_with_init: type IDENTIFIER '=' expr  */
#line 367 "myParserPrintf.y"
                                                    { Print("var_decl_with_init -> type IDENTIFIER = expr"); }
#line 2444 "myParserPrintf.tab.c"
    break;

  case 94: /* var_decl_with_init: VAR IDENTIFIER '=' expr  */
#line 368 "myParserPrintf.y"
                                                    { Print("var_decl_with_init -> VAR IDENTIFIER = expr"); }
#line 2450 "myParserPrintf.tab.c"
    break;

  case 95: /* method_arguments: var_decl  */
#line 375 "myParserPrintf.y"
                                                    { Print("method_arguments -> var_decl"); }
#line 2456 "myParserPrintf.tab.c"
    break;

  case 96: /* method_arguments: method_arguments ',' var_decl  */
#line 376 "myParserPrintf.y"
                                                    { Print("method_arguments -> method_arguments , var_decl"); }
#line 2462 "myParserPrintf.tab.c"
    break;

  case 97: /* method_arguments_optional: %empty  */
#line 378 "myParserPrintf.y"
                                                    { Print("method_arguments_optional -> empty"); }
#line 2468 "myParserPrintf.tab.c"
    break;

  case 98: /* method_arguments_optional: method_arguments  */
#line 379 "myParserPrintf.y"
                                                    { Print("method_arguments_optional -> method_arguments"); }
#line 2474 "myParserPrintf.tab.c"
    break;

  case 99: /* visibility_modifier: PUBLIC  */
#line 386 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PUBLIC"); }
#line 2480 "myParserPrintf.tab.c"
    break;

  case 100: /* visibility_modifier: PROTECTED  */
#line 387 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PROTECTED"); }
#line 2486 "myParserPrintf.tab.c"
    break;

  case 101: /* visibility_modifier: PRIVATE  */
#line 388 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PRIVATE"); }
#line 2492 "myParserPrintf.tab.c"
    break;

  case 102: /* visibility_modifier: INTERNAL  */
#line 389 "myParserPrintf.y"
                                            { Print("visibility_modifier -> INTERNAL"); }
#line 2498 "myParserPrintf.tab.c"
    break;

  case 103: /* visibility_modifier: PROTECTED_INTERNAL  */
#line 390 "myParserPrintf.y"
                                            { Print("visibility_modifier -> PROTECTED_INTERNAL"); }
#line 2504 "myParserPrintf.tab.c"
    break;

  case 104: /* operator_overload: visibility_modifier STATIC type OPERATOR '+' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 397 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR + ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2510 "myParserPrintf.tab.c"
    break;

  case 105: /* operator_overload: visibility_modifier STATIC type OPERATOR '-' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 398 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR - ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2516 "myParserPrintf.tab.c"
    break;

  case 106: /* operator_overload: visibility_modifier STATIC type OPERATOR '*' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 399 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR * ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2522 "myParserPrintf.tab.c"
    break;

  case 107: /* operator_overload: visibility_modifier STATIC type OPERATOR '/' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 400 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR / ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2528 "myParserPrintf.tab.c"
    break;

  case 108: /* operator_overload: visibility_modifier STATIC type OPERATOR '<' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 401 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR < ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2534 "myParserPrintf.tab.c"
    break;

  case 109: /* operator_overload: visibility_modifier STATIC type OPERATOR '>' '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 402 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR > ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2540 "myParserPrintf.tab.c"
    break;

  case 110: /* operator_overload: visibility_modifier STATIC type OPERATOR EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 403 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR == ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2546 "myParserPrintf.tab.c"
    break;

  case 111: /* operator_overload: visibility_modifier STATIC type OPERATOR NOT_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 404 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR != ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2552 "myParserPrintf.tab.c"
    break;

  case 112: /* operator_overload: visibility_modifier STATIC type OPERATOR LESS_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 405 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR <= ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2558 "myParserPrintf.tab.c"
    break;

  case 113: /* operator_overload: visibility_modifier STATIC type OPERATOR GREATER_OR_EQUAL '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 406 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR >= ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2564 "myParserPrintf.tab.c"
    break;

  case 114: /* operator_overload: visibility_modifier STATIC type OPERATOR '!' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 407 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR ! ( var_decl ) { stmt_seq_optional }");     }
#line 2570 "myParserPrintf.tab.c"
    break;

  case 115: /* operator_overload: visibility_modifier STATIC type OPERATOR DECREMENT '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 408 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR -- ( var_decl ) { stmt_seq_optional }");     }
#line 2576 "myParserPrintf.tab.c"
    break;

  case 116: /* operator_overload: visibility_modifier STATIC type OPERATOR INCREMENT '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 409 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR ++ ( var_decl ) { stmt_seq_optional }");     }
#line 2582 "myParserPrintf.tab.c"
    break;

  case 117: /* operator_overload: visibility_modifier STATIC type OPERATOR '-' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 410 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR - ( var_decl ) { stmt_seq_optional }");     }
#line 2588 "myParserPrintf.tab.c"
    break;

  case 118: /* operator_overload: visibility_modifier STATIC type OPERATOR '+' '(' var_decl ')' '{' stmt_seq_optional '}'  */
#line 411 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR + ( var_decl ) { stmt_seq_optional }");     }
#line 2594 "myParserPrintf.tab.c"
    break;

  case 119: /* operator_overload: visibility_modifier STATIC type OPERATOR BITWISE_AND '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 412 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR & ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2600 "myParserPrintf.tab.c"
    break;

  case 120: /* operator_overload: visibility_modifier STATIC type OPERATOR BITWISE_OR '(' var_decl ',' var_decl ')' '{' stmt_seq_optional '}'  */
#line 413 "myParserPrintf.y"
                                                                                                                                         { Print("operator_overload -> visibility_modifier STATIC type OPERATOR | ( var_decl , var_decl ) { stmt_seq_optional }"); }
#line 2606 "myParserPrintf.tab.c"
    break;

  case 121: /* class_name: IDENTIFIER  */
#line 420 "myParserPrintf.y"
                       { Print("class_name -> IDENTIFIER"); }
#line 2612 "myParserPrintf.tab.c"
    break;

  case 122: /* method_name: IDENTIFIER  */
#line 423 "myParserPrintf.y"
                        { Print("method_name -> IDENTIFIER"); }
#line 2618 "myParserPrintf.tab.c"
    break;

  case 123: /* constructor_decl: visibility_modifier class_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 453 "myParserPrintf.y"
                                                                                                                                { Print("constructor_decl -> visibility_modifier class_name"); }
#line 2624 "myParserPrintf.tab.c"
    break;

  case 124: /* method_decl: visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 456 "myParserPrintf.y"
                                                                                                                                { Print("method_decl -> visibility_modifier type IDENTIFIER"); }
#line 2630 "myParserPrintf.tab.c"
    break;

  case 125: /* method_decl: visibility_modifier VOID_KW method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 457 "myParserPrintf.y"
                                                                                                                                        { Print("method_decl -> visibility_modifier VOID_KW IDENTIFIER"); }
#line 2636 "myParserPrintf.tab.c"
    break;

  case 126: /* method_decl: visibility_modifier STATIC type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 458 "myParserPrintf.y"
                                                                                                                                { Print("method_decl -> visibility_modifier STATIC type IDENTIFIER"); }
#line 2642 "myParserPrintf.tab.c"
    break;

  case 127: /* method_decl: visibility_modifier STATIC VOID_KW method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 459 "myParserPrintf.y"
                                                                                                                        { Print("method_decl -> visibility_modifier STATIC VOID_KW IDENTIFIER"); }
#line 2648 "myParserPrintf.tab.c"
    break;

  case 128: /* method_decl: STATIC visibility_modifier type method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 460 "myParserPrintf.y"
                                                                                                                                { Print("method_decl -> STATIC visibility_modifier type IDENTIFIER"); }
#line 2654 "myParserPrintf.tab.c"
    break;

  case 129: /* method_decl: STATIC visibility_modifier VOID_KW method_name '(' method_arguments_optional ')' '{' stmt_seq_optional '}'  */
#line 461 "myParserPrintf.y"
                                                                                                                        { Print("method_decl -> STATIC visibility_modifier VOID_KW IDENTIFIER"); }
#line 2660 "myParserPrintf.tab.c"
    break;

  case 130: /* static_constructor_decl: STATIC class_name '(' ')' '{' stmt_seq_optional '}'  */
#line 471 "myParserPrintf.y"
    { Print("STATIC IDENTIFIER"); }
#line 2666 "myParserPrintf.tab.c"
    break;

  case 131: /* destructor_decl: TILDE class_name '(' ')' '{' stmt_seq_optional '}'  */
#line 476 "myParserPrintf.y"
    { Print("TILDE IDENTIFIER"); }
#line 2672 "myParserPrintf.tab.c"
    break;

  case 132: /* field_decl: visibility_modifier var_decl ';'  */
#line 483 "myParserPrintf.y"
                                                          { Print("field_decl -> visibility_modifier var_decl ;"); }
#line 2678 "myParserPrintf.tab.c"
    break;

  case 133: /* field_decl: visibility_modifier var_decl_with_init ';'  */
#line 484 "myParserPrintf.y"
                                                          { Print("field_decl -> visibility_modifier var_decl_with_init ;"); }
#line 2684 "myParserPrintf.tab.c"
    break;

  case 134: /* class_members: method_decl  */
#line 491 "myParserPrintf.y"
                                                          { Print("class_members -> method_decl"); }
#line 2690 "myParserPrintf.tab.c"
    break;

  case 135: /* class_members: field_decl  */
#line 492 "myParserPrintf.y"
                                                          { Print("class_members -> field_decl"); }
#line 2696 "myParserPrintf.tab.c"
    break;

  case 136: /* class_members: operator_overload  */
#line 493 "myParserPrintf.y"
                                                          { Print("class_members -> operator_overload"); }
#line 2702 "myParserPrintf.tab.c"
    break;

  case 137: /* class_members: constructor_decl  */
#line 494 "myParserPrintf.y"
                                                          { Print("class_members -> constructor_decl"); }
#line 2708 "myParserPrintf.tab.c"
    break;

  case 138: /* class_members: static_constructor_decl  */
#line 495 "myParserPrintf.y"
                                                          { Print("class_members -> static_constructor_decl"); }
#line 2714 "myParserPrintf.tab.c"
    break;

  case 139: /* class_members: destructor_decl  */
#line 496 "myParserPrintf.y"
                                                          { Print("class_members -> destructor_decl"); }
#line 2720 "myParserPrintf.tab.c"
    break;

  case 140: /* class_members: class_members method_decl  */
#line 497 "myParserPrintf.y"
                                                          { Print("class_members -> class_members method_decl"); }
#line 2726 "myParserPrintf.tab.c"
    break;

  case 141: /* class_members: class_members field_decl  */
#line 498 "myParserPrintf.y"
                                                          { Print("class_members -> class_members field_decl"); }
#line 2732 "myParserPrintf.tab.c"
    break;

  case 142: /* class_members: class_members operator_overload  */
#line 499 "myParserPrintf.y"
                                                          { Print("class_members -> class_members operator_overload"); }
#line 2738 "myParserPrintf.tab.c"
    break;

  case 143: /* class_members: class_members constructor_decl  */
#line 500 "myParserPrintf.y"
                                                          { Print("class_members -> class_members constructor_decl"); }
#line 2744 "myParserPrintf.tab.c"
    break;

  case 144: /* class_members: class_members static_constructor_decl  */
#line 501 "myParserPrintf.y"
                                                          { Print("class_members -> class_members static_constructor_decl"); }
#line 2750 "myParserPrintf.tab.c"
    break;

  case 145: /* class_members: class_members destructor_decl  */
#line 502 "myParserPrintf.y"
                                                          { Print("class_members -> class_members destructor_decl"); }
#line 2756 "myParserPrintf.tab.c"
    break;

  case 146: /* class_members_optional: %empty  */
#line 505 "myParserPrintf.y"
                                            { Print("class_members_optional -> empty"); }
#line 2762 "myParserPrintf.tab.c"
    break;

  case 147: /* class_members_optional: class_members  */
#line 506 "myParserPrintf.y"
                                            { Print("class_members_optional -> class_members"); }
#line 2768 "myParserPrintf.tab.c"
    break;

  case 148: /* struct_members: field_decl  */
#line 514 "myParserPrintf.y"
                                                        { Print("struct_members -> field_decl"); }
#line 2774 "myParserPrintf.tab.c"
    break;

  case 149: /* struct_members: method_decl  */
#line 515 "myParserPrintf.y"
                                                        { Print("struct_members -> method_decl"); }
#line 2780 "myParserPrintf.tab.c"
    break;

  case 150: /* struct_members: static_constructor_decl  */
#line 517 "myParserPrintf.y"
                                                        { Print("struct_members -> static_constructor_decl"); }
#line 2786 "myParserPrintf.tab.c"
    break;

  case 151: /* struct_members: struct_members field_decl  */
#line 518 "myParserPrintf.y"
                                                        { Print("struct_members -> struct_members field_decl"); }
#line 2792 "myParserPrintf.tab.c"
    break;

  case 152: /* struct_members: struct_members method_decl  */
#line 519 "myParserPrintf.y"
                                                        { Print("struct_members -> struct_members method_decl"); }
#line 2798 "myParserPrintf.tab.c"
    break;

  case 153: /* struct_members: struct_members static_constructor_decl  */
#line 521 "myParserPrintf.y"
                                                        { Print("struct_members -> struct_members static_constructor_decl"); }
#line 2804 "myParserPrintf.tab.c"
    break;

  case 154: /* struct_members_optional: %empty  */
#line 524 "myParserPrintf.y"
                                               { Print("struct_members_optional -> empty"); }
#line 2810 "myParserPrintf.tab.c"
    break;

  case 155: /* struct_members_optional: struct_members  */
#line 525 "myParserPrintf.y"
                                           { Print("struct_members_optional -> struct_members"); }
#line 2816 "myParserPrintf.tab.c"
    break;

  case 156: /* struct_decl: PUBLIC STRUCT class_name '{' struct_members_optional '}'  */
#line 530 "myParserPrintf.y"
    { Print("public", (yyvsp[-3]._className)); }
#line 2822 "myParserPrintf.tab.c"
    break;

  case 157: /* enumerators: IDENTIFIER  */
#line 537 "myParserPrintf.y"
                                            { Print("enumerators -> IDENTIFIER"); }
#line 2828 "myParserPrintf.tab.c"
    break;

  case 158: /* enumerators: enumerators ',' IDENTIFIER  */
#line 538 "myParserPrintf.y"
                                            { Print("enumerators -> enumerators , IDENTIFIER"); }
#line 2834 "myParserPrintf.tab.c"
    break;

  case 159: /* enum_decl: PUBLIC ENUM class_name '{' enumerators '}'  */
#line 542 "myParserPrintf.y"
    { Print("public", (yyvsp[-3]._className)); }
#line 2840 "myParserPrintf.tab.c"
    break;

  case 160: /* class_decl: PUBLIC CLASS class_name '{' class_members_optional '}'  */
#line 549 "myParserPrintf.y"
                                                                                    { Print("PUBLIC CLASS class_name -> class_members_optional"); }
#line 2846 "myParserPrintf.tab.c"
    break;

  case 161: /* class_decl: PUBLIC CLASS class_name ':' using_arg '{' class_members_optional '}'  */
#line 550 "myParserPrintf.y"
                                                                                    { Print("class_decl -> PUBLIC CLASS IDENTIFIER : using_arg { class_members_optional }"); }
#line 2852 "myParserPrintf.tab.c"
    break;

  case 162: /* class_decl: PUBLIC CLASS class_name ':' OBJECT '{' class_members_optional '}'  */
#line 551 "myParserPrintf.y"
                                                                                    { Print("class_decl -> PUBLIC CLASS IDENTIFIER : OBJECT { class_members_optional }"); }
#line 2858 "myParserPrintf.tab.c"
    break;

  case 163: /* namespace_members: enum_decl  */
#line 558 "myParserPrintf.y"
                                                { Print("namespace_members -> enum_decl"); }
#line 2864 "myParserPrintf.tab.c"
    break;

  case 164: /* namespace_members: class_decl  */
#line 559 "myParserPrintf.y"
                                                { Print("namespace_members -> class_decl"); }
#line 2870 "myParserPrintf.tab.c"
    break;

  case 165: /* namespace_members: struct_decl  */
#line 560 "myParserPrintf.y"
                                                { Print("namespace_members -> struct_decl"); }
#line 2876 "myParserPrintf.tab.c"
    break;

  case 166: /* namespace_members: namespace_members enum_decl  */
#line 561 "myParserPrintf.y"
                                                { Print("namespace_members -> namespace_members enum_decl"); }
#line 2882 "myParserPrintf.tab.c"
    break;

  case 167: /* namespace_members: namespace_members class_decl  */
#line 562 "myParserPrintf.y"
                                                { Print("namespace_members -> namespace_members class_decl"); }
#line 2888 "myParserPrintf.tab.c"
    break;

  case 168: /* namespace_members: namespace_members struct_decl  */
#line 563 "myParserPrintf.y"
                                                { Print("namespace_members -> namespace_members struct_decl"); }
#line 2894 "myParserPrintf.tab.c"
    break;

  case 169: /* namespace_members_optional: %empty  */
#line 566 "myParserPrintf.y"
                                                    { Print("namespace_members_optional -> empty"); }
#line 2900 "myParserPrintf.tab.c"
    break;

  case 170: /* namespace_members_optional: namespace_members  */
#line 567 "myParserPrintf.y"
                                                    { Print("namespace_members_optional -> namespace_members"); }
#line 2906 "myParserPrintf.tab.c"
    break;

  case 171: /* namespace_decl: NAMESPACE IDENTIFIER '{' namespace_members_optional '}'  */
#line 571 "myParserPrintf.y"
    { Print("namespace_decl");  }
#line 2912 "myParserPrintf.tab.c"
    break;

  case 172: /* namespace_decl_seq: namespace_decl  */
#line 574 "myParserPrintf.y"
                                                        { Print("namespace_decl_seq -> namespace_decl"); }
#line 2918 "myParserPrintf.tab.c"
    break;

  case 173: /* namespace_decl_seq: namespace_decl_seq namespace_decl  */
#line 575 "myParserPrintf.y"
                                                        { Print("namespace_decl_seq -> namespace_decl_seq namespace_decl"); }
#line 2924 "myParserPrintf.tab.c"
    break;

  case 174: /* using_arg: IDENTIFIER  */
#line 578 "myParserPrintf.y"
                                        { Print("using_arg", (yyvsp[0]._identifier)); }
#line 2930 "myParserPrintf.tab.c"
    break;

  case 175: /* using_arg: using_arg '.' IDENTIFIER  */
#line 579 "myParserPrintf.y"
                                        { Print("using_arg . IDENTIFIER"); }
#line 2936 "myParserPrintf.tab.c"
    break;

  case 176: /* using_directive: USING using_arg ';'  */
#line 582 "myParserPrintf.y"
                                        { Print("using_directive", (yyvsp[-1]._usingArg)); }
#line 2942 "myParserPrintf.tab.c"
    break;

  case 177: /* using_directives: using_directive  */
#line 585 "myParserPrintf.y"
                                                    { Print("using_directives -> using_directive"); }
#line 2948 "myParserPrintf.tab.c"
    break;

  case 178: /* using_directives: using_directives using_directive  */
#line 586 "myParserPrintf.y"
                                                    { Print("using_directives -> using_directives using_directive"); }
#line 2954 "myParserPrintf.tab.c"
    break;

  case 179: /* using_directives_optional: %empty  */
#line 589 "myParserPrintf.y"
                                            { Print("using_directives_optional -> empty");  }
#line 2960 "myParserPrintf.tab.c"
    break;

  case 180: /* using_directives_optional: using_directives  */
#line 590 "myParserPrintf.y"
                                            { Print("using_directives_optional -> using_directives"); }
#line 2966 "myParserPrintf.tab.c"
    break;

  case 181: /* interpolated_string: INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END  */
#line 598 "myParserPrintf.y"
    { Print("interpolated_string -> INTERPOLATED_STRING_START interpolated_string_content INTERPOLATED_STRING_END"); }
#line 2972 "myParserPrintf.tab.c"
    break;

  case 182: /* interpolated_string_content: %empty  */
#line 608 "myParserPrintf.y"
                                                { Print("interpolated_string_content -> empty"); }
#line 2978 "myParserPrintf.tab.c"
    break;

  case 183: /* interpolated_string_content: INTERPOLATED_STRING_TEXT interpolated_string_content  */
#line 609 "myParserPrintf.y"
                                                                                                                        { Print("interpolated_string_content -> INTERPOLATED_STRING_TEXT interpolated_string_content"); }
#line 2984 "myParserPrintf.tab.c"
    break;

  case 184: /* interpolated_string_content: INTERPOLATED_STRING_EXPR expr interpolated_string_content  */
#line 610 "myParserPrintf.y"
                                                                                                                { Print("interpolated_string_content -> INTERPOLATED_STRING_EXPR expr interpolated_string_content"); }
#line 2990 "myParserPrintf.tab.c"
    break;


#line 2994 "myParserPrintf.tab.c"

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

#line 614 "myParserPrintf.y"


#ifdef _MSC_VER
#pragma warning( pop )
#endif // _MSC_VER
