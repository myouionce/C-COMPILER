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
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#define YYERROR_VERBOSE 1
int yylex();
extern FILE *yyin;
extern int yylineno;
extern int columna;
int yyerror(char *s);
int linea_anterior=-1;
int contexto =0;

#line 84 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INCLUDE = 3,                    /* INCLUDE  */
  YYSYMBOL_DEFINE = 4,                     /* DEFINE  */
  YYSYMBOL_ENTERO = 5,                     /* ENTERO  */
  YYSYMBOL_DIGITO = 6,                     /* DIGITO  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_ERROR = 8,                      /* ERROR  */
  YYSYMBOL_SUMA = 9,                       /* SUMA  */
  YYSYMBOL_RESTA = 10,                     /* RESTA  */
  YYSYMBOL_MUL = 11,                       /* MUL  */
  YYSYMBOL_DIV = 12,                       /* DIV  */
  YYSYMBOL_ASIGNACION = 13,                /* ASIGNACION  */
  YYSYMBOL_COMA = 14,                      /* COMA  */
  YYSYMBOL_PUNTOCOMA = 15,                 /* PUNTOCOMA  */
  YYSYMBOL_DOSPUNTOS = 16,                 /* DOSPUNTOS  */
  YYSYMBOL_CARACTER = 17,                  /* CARACTER  */
  YYSYMBOL_INC = 18,                       /* INC  */
  YYSYMBOL_DEC = 19,                       /* DEC  */
  YYSYMBOL_MOD = 20,                       /* MOD  */
  YYSYMBOL_DIF = 21,                       /* DIF  */
  YYSYMBOL_IGUAL = 22,                     /* IGUAL  */
  YYSYMBOL_MAYOR = 23,                     /* MAYOR  */
  YYSYMBOL_MENOR = 24,                     /* MENOR  */
  YYSYMBOL_MAYORIGUAL = 25,                /* MAYORIGUAL  */
  YYSYMBOL_MENORIGUAL = 26,                /* MENORIGUAL  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_SUMAVAR = 30,                   /* SUMAVAR  */
  YYSYMBOL_RESTAVAR = 31,                  /* RESTAVAR  */
  YYSYMBOL_MULVAR = 32,                    /* MULVAR  */
  YYSYMBOL_DIVVAR = 33,                    /* DIVVAR  */
  YYSYMBOL_MODVAR = 34,                    /* MODVAR  */
  YYSYMBOL_INTERROGACION = 35,             /* INTERROGACION  */
  YYSYMBOL_CORCH_A = 36,                   /* CORCH_A  */
  YYSYMBOL_CORCH_C = 37,                   /* CORCH_C  */
  YYSYMBOL_SPAREN_A = 38,                  /* SPAREN_A  */
  YYSYMBOL_SPAREN_C = 39,                  /* SPAREN_C  */
  YYSYMBOL_PAREN_A = 40,                   /* PAREN_A  */
  YYSYMBOL_PAREN_C = 41,                   /* PAREN_C  */
  YYSYMBOL_BREAK = 42,                     /* BREAK  */
  YYSYMBOL_CASE = 43,                      /* CASE  */
  YYSYMBOL_CHAR = 44,                      /* CHAR  */
  YYSYMBOL_CONTINUE = 45,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 46,                   /* DEFAULT  */
  YYSYMBOL_DO = 47,                        /* DO  */
  YYSYMBOL_ELSE = 48,                      /* ELSE  */
  YYSYMBOL_FOR = 49,                       /* FOR  */
  YYSYMBOL_GOTO = 50,                      /* GOTO  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_INT = 52,                       /* INT  */
  YYSYMBOL_RETURN = 53,                    /* RETURN  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_VOID = 55,                      /* VOID  */
  YYSYMBOL_WHILE = 56,                     /* WHILE  */
  YYSYMBOL_LOWER_THAN_ELSE = 57,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_statement_list = 59,            /* statement_list  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_res_tokens = 61,                /* res_tokens  */
  YYSYMBOL_primary_expression = 62,        /* primary_expression  */
  YYSYMBOL_expression = 63,                /* expression  */
  YYSYMBOL_op = 64,                        /* op  */
  YYSYMBOL_preSufix_expr = 65,             /* preSufix_expr  */
  YYSYMBOL_id_side = 66,                   /* id_side  */
  YYSYMBOL_preSufix_cicle = 67,            /* preSufix_cicle  */
  YYSYMBOL_id_arr = 68,                    /* id_arr  */
  YYSYMBOL_op_inc_dec = 69,                /* op_inc_dec  */
  YYSYMBOL_preSufix_op = 70,               /* preSufix_op  */
  YYSYMBOL_declaration_init_list = 71,     /* declaration_init_list  */
  YYSYMBOL_declaration_init_listP = 72,    /* declaration_init_listP  */
  YYSYMBOL_declaration_list = 73,          /* declaration_list  */
  YYSYMBOL_expression_list = 74,           /* expression_list  */
  YYSYMBOL_expr_option = 75,               /* expr_option  */
  YYSYMBOL_asign_list = 76,                /* asign_list  */
  YYSYMBOL_asign_cicle = 77,               /* asign_cicle  */
  YYSYMBOL_asign_ciclep = 78,              /* asign_ciclep  */
  YYSYMBOL_asign_op = 79,                  /* asign_op  */
  YYSYMBOL_tipo_data = 80,                 /* tipo_data  */
  YYSYMBOL_condicional_exp = 81,           /* condicional_exp  */
  YYSYMBOL_iterador_exp = 82,              /* iterador_exp  */
  YYSYMBOL_for_option = 83,                /* for_option  */
  YYSYMBOL_ite_cond_options = 84,          /* ite_cond_options  */
  YYSYMBOL_op_bool = 85,                   /* op_bool  */
  YYSYMBOL_defFunc = 86,                   /* defFunc  */
  YYSYMBOL_param_list = 87,                /* param_list  */
  YYSYMBOL_param_tipo = 88,                /* param_tipo  */
  YYSYMBOL_callFunc = 89,                  /* callFunc  */
  YYSYMBOL_arg_list = 90,                  /* arg_list  */
  YYSYMBOL_etiqueta_statement = 91,        /* etiqueta_statement  */
  YYSYMBOL_block_stmt = 92                 /* block_stmt  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   969

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    39,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    59,    60,    61,    62,    63,
      67,    68,    69,    70,    71,    72,    73,    74,    79,    80,
      81,    82,    86,    87,    88,    89,    90,    96,    97,    98,
     102,   103,   104,   105,   108,   109,   112,   113,   114,   115,
     116,   120,   121,   125,   126,   127,   130,   131,   134,   135,
     136,   137,   142,   143,   147,   148,   152,   153,   158,   159,
     162,   163,   164,   167,   168,   173,   174,   175,   176,   177,
     181,   182,   187,   188,   189,   193,   194,   195,   198,   199,
     200,   201,   204,   205,   209,   210,   211,   212,   213,   214,
     215,   216,   220,   221,   222,   223,   224,   225,   226,   227,
     231,   232,   233,   234,   238,   239,   240,   244,   245,   246,
     247,   251,   252,   256,   257,   258,   259,   260,   264,   265,
     266
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INCLUDE", "DEFINE",
  "ENTERO", "DIGITO", "ID", "ERROR", "SUMA", "RESTA", "MUL", "DIV",
  "ASIGNACION", "COMA", "PUNTOCOMA", "DOSPUNTOS", "CARACTER", "INC", "DEC",
  "MOD", "DIF", "IGUAL", "MAYOR", "MENOR", "MAYORIGUAL", "MENORIGUAL",
  "AND", "OR", "NOT", "SUMAVAR", "RESTAVAR", "MULVAR", "DIVVAR", "MODVAR",
  "INTERROGACION", "CORCH_A", "CORCH_C", "SPAREN_A", "SPAREN_C", "PAREN_A",
  "PAREN_C", "BREAK", "CASE", "CHAR", "CONTINUE", "DEFAULT", "DO", "ELSE",
  "FOR", "GOTO", "IF", "INT", "RETURN", "SWITCH", "VOID", "WHILE",
  "LOWER_THAN_ELSE", "$accept", "statement_list", "statement",
  "res_tokens", "primary_expression", "expression", "op", "preSufix_expr",
  "id_side", "preSufix_cicle", "id_arr", "op_inc_dec", "preSufix_op",
  "declaration_init_list", "declaration_init_listP", "declaration_list",
  "expression_list", "expr_option", "asign_list", "asign_cicle",
  "asign_ciclep", "asign_op", "tipo_data", "condicional_exp",
  "iterador_exp", "for_option", "ite_cond_options", "op_bool", "defFunc",
  "param_list", "param_tipo", "callFunc", "arg_list", "etiqueta_statement",
  "block_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-121)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-116)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     443,   563,  -121,  -121,     1,  -121,  -121,  -121,  -121,  -121,
    -121,   275,   735,  -121,   735,  -121,  -121,    17,   443,   -32,
      43,    40,  -121,   680,    54,   100,    65,   219,  -121,    37,
    -121,   901,  -121,  -121,   130,   599,   102,  -121,    39,    23,
    -121,  -121,  -121,  -121,    24,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,   695,   638,  -121,   760,
     443,   653,   846,  -121,   331,    64,    76,   786,    79,    71,
    -121,   443,   499,   555,  -121,   760,   941,   735,    36,    78,
     106,   760,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   760,   775,
     775,   183,  -121,  -121,    79,  -121,   760,   720,  -121,   760,
      91,    95,  -121,   760,  -121,   265,    78,   149,   124,  -121,
     126,  -121,   116,  -121,  -121,    -9,   869,  -121,  -121,  -121,
    -121,  -121,    -5,  -121,  -121,   735,  -121,   443,  -121,   132,
    -121,  -121,   107,   131,  -121,  -121,   135,   143,   144,  -121,
      14,  -121,   145,   157,   735,  -121,  -121,  -121,  -121,   151,
    -121,  -121,  -121,   125,  -121,  -121,   735,  -121,  -121,   921,
    -121,   760,   161,   332,  -121,   760,   443,   443,   129,    -1,
      15,    74,     8,  -121,   443,   760,   808,  -121,   161,   276,
    -121,  -121,   735,   147,   181,   150,  -121,  -121,   -23,   129,
    -121,  -121,  -121,    91,    95,    18,    -8,  -121,  -121,   830,
     387,   760,   443,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,   159,  -121,   443,  -121
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    24,    25,    46,    53,    54,    26,    51,    52,
      55,     0,     0,    18,     0,    81,    17,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     2,     0,
      28,    66,    22,    39,     0,     0,     0,    44,     0,     0,
      62,    64,    63,    68,     0,    10,    11,    23,    13,    14,
      75,   127,    76,    77,    79,    78,     0,     0,    43,     0,
       0,     0,    21,   129,     0,    21,    46,     0,    20,     0,
     126,     0,     0,     0,    19,     0,    16,     0,     0,     0,
       7,     0,     1,     3,    12,    32,    33,    34,    35,    36,
      95,    94,    96,    97,    98,    99,   100,   101,     0,     0,
       0,     0,    46,    37,    38,    45,     0,     0,    40,     0,
      42,    41,     5,     0,     4,     0,    46,     0,    56,    58,
       6,    49,     0,   120,   121,     0,    21,    73,    74,    71,
     125,   118,     0,   130,   128,     0,    27,     0,   124,     0,
      90,    91,     0,     0,    92,    93,     0,     0,     0,   106,
       0,     9,     0,     0,     0,    29,    30,    72,    48,     0,
      70,    65,    69,     0,     8,    50,     0,   119,   117,     0,
     123,     0,    89,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,    47,     0,     0,
      60,   122,     0,     0,     0,    82,    84,   109,     0,     0,
     107,   104,   105,   116,   114,     0,     0,    85,    67,     0,
       0,     0,     0,   113,   108,   112,   111,   102,   103,    31,
      87,     0,    83,     0,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,    16,    -7,  -121,    68,   -11,  -121,  -121,   172,  -121,
      12,     9,   173,  -121,  -121,  -121,  -121,   -14,  -121,    47,
     -95,   -31,   -71,  -121,  -121,  -121,   -75,  -121,   164,  -121,
    -120,  -121,   148,  -121,   -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    27,    28,    29,    30,    31,    99,    32,    33,    34,
      35,    36,    37,    38,   118,    39,    40,    41,    42,    43,
     129,    59,    44,    45,    46,   143,   146,   100,    80,   182,
     183,    47,   125,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    67,   142,   153,   109,   166,   152,   217,    73,   166,
      58,   157,    76,   198,   160,   179,   200,    60,    70,   215,
      83,    15,   205,   149,    68,   115,    68,    64,    11,    22,
     201,   116,   167,    71,    72,    68,   168,   113,   114,   -57,
     199,    61,   122,   124,   108,   127,   104,   124,   111,   206,
      74,    11,    84,   130,   112,   180,   117,    83,    15,   140,
     149,   144,    15,   147,   138,    83,    22,   144,    68,    68,
      22,    58,    11,    68,    58,   203,   148,   108,   213,   181,
      75,   102,     8,     9,   127,   216,   109,   137,  -115,    68,
     208,   119,   127,   159,    77,   127,   193,     8,     9,   161,
     194,    78,    56,   110,    57,    81,   128,    79,   172,   102,
      58,    68,    68,   108,   102,  -115,    61,   107,   150,    68,
     141,   151,   145,   197,   169,   202,   188,   181,   145,    56,
     170,   101,   102,   107,   181,    58,   221,   102,   163,     5,
       6,   164,   109,   186,   214,   128,   175,    68,     8,     9,
     106,   218,   191,   128,   173,   165,   128,   144,   109,    10,
     162,   144,    50,   -59,   -59,    11,    68,   155,   156,   195,
     196,   127,   171,   185,    50,   189,   176,   207,    68,    52,
      53,   209,    54,    55,   177,   178,   184,   107,   210,   174,
     187,    52,    53,   204,    54,    55,   211,   144,   212,    56,
     223,     8,     9,   207,    68,   222,   103,   105,   120,   132,
     190,     0,     0,     0,     0,     0,   224,     0,   145,    82,
       1,    56,   145,     0,     2,     3,     4,     0,     5,     6,
       0,     0,   128,     0,     0,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    11,     0,     0,   145,    12,
       0,    13,    14,    15,    16,    17,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    62,   106,    50,     0,
       2,     3,     4,     0,     5,     6,     0,     0,     0,    50,
     -61,   -61,     7,     8,     9,    52,    53,     0,    54,    55,
       0,    11,     0,    56,    10,   148,    52,    53,     0,    54,
      55,    11,    63,     0,   107,    12,     0,    13,    14,    15,
      16,    17,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,     1,   106,     0,     0,     2,     3,     4,     0,
       5,     6,     0,     0,     0,    50,     0,     0,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,    52,    53,     0,    54,    55,    11,   134,     0,
     107,    12,     0,    13,    14,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     2,     3,     4,     0,     5,     6,     0,     0,
       0,     0,   220,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     2,     3,
       4,     0,     5,     6,     0,     0,     0,     0,     0,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
       1,     0,     0,     0,     2,     3,     4,     0,     5,     6,
       0,     0,     0,     0,     0,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,     0,    19,    20,
      21,    22,    23,    24,    25,   139,   126,     0,     0,     0,
       2,     3,    66,     0,     5,     6,     0,     0,     0,     0,
       0,     0,     7,     8,     9,     0,    50,     0,     0,    51,
       0,     8,     9,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    12,    54,    55,     0,    15,
     106,    56,     0,    57,     0,     0,     0,    22,   -20,   -20,
     -20,   -20,    50,   -20,   -20,   -20,     0,     8,     9,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,    52,
      53,     0,    54,    55,   -20,     0,     0,   107,   -20,    65,
     -20,     0,     0,     2,     3,    66,     0,     5,     6,     0,
       0,     0,     0,     0,    65,     7,     8,     9,     2,     3,
      66,     0,     5,     6,     0,     0,     0,    10,     0,     0,
       7,     8,     9,     0,     0,     0,     0,     0,    12,   123,
       0,    65,    10,     0,     0,     2,     3,    66,     0,     5,
       6,     0,     0,    12,   131,   -15,    65,     7,     8,     9,
       2,     3,    66,     0,     5,     6,     0,     0,     0,    10,
       0,     0,     7,     8,     9,     0,     0,     0,     0,     0,
      12,    65,     0,     0,    10,     2,     3,    66,     0,     5,
       6,     0,     0,     0,   121,    12,    65,     7,     8,     9,
       2,     3,    66,     0,     5,     6,     0,     0,     0,    10,
       0,     0,     7,     8,     9,     0,     0,     0,     0,   158,
      12,   126,     0,     0,    10,     2,     3,    66,     0,     5,
       6,     0,     0,     0,     0,    12,    65,     7,     8,     9,
       2,     3,    66,     0,     5,     6,     0,     0,     0,    10,
       0,     0,     7,     8,     9,    85,    86,    87,    88,     0,
      12,     0,     0,     0,    10,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   154,     0,    85,    86,    87,
      88,   135,     0,     0,     0,     0,     0,   136,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,   136,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    50,
       0,     0,    51,     0,     8,     9,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,    52,    53,     0,    54,
      55,     0,    50,   133,    56,     0,    57,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,     0,    54,    55,     0,     0,     0,    56,     0,    57,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      85,    86,    87,    88,     0,     0,    98,   192,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      14,    12,    73,    98,    35,    14,    81,    15,    40,    14,
       1,   106,    23,    14,   109,     1,     1,    16,     1,     1,
      27,    44,    14,    78,    12,     1,    14,    11,    36,    52,
      15,     7,    41,    16,    18,    23,    41,    14,    15,    15,
      41,    40,    56,    57,    35,    59,    34,    61,    36,    41,
       7,    36,    15,    60,    15,    41,    44,    64,    44,    73,
     115,    75,    44,    77,    71,    72,    52,    81,    56,    57,
      52,    62,    36,    61,    65,     1,    40,    68,   198,   150,
      40,     7,    18,    19,    98,   205,   117,    16,    14,    77,
     185,    44,   106,   107,    40,   109,   171,    18,    19,   113,
     175,     1,    38,     1,    40,    40,    59,     7,     1,     7,
     101,    99,   100,   104,     7,    41,    40,    38,    40,   107,
      73,    15,    75,   178,   135,   180,     1,   198,    81,    38,
     137,     1,     7,    38,   205,   126,   211,     7,    14,     9,
      10,    15,   173,   154,   199,    98,    15,   135,    18,    19,
       1,   206,   166,   106,   142,    39,   109,   171,   189,    29,
     113,   175,    13,    14,    15,    36,   154,    99,   100,   176,
     177,   185,    40,    16,    13,   163,    41,   184,   166,    30,
      31,   192,    33,    34,    41,    41,    41,    38,    41,   142,
      39,    30,    31,   181,    33,    34,    15,   211,    48,    38,
      41,    18,    19,   210,   192,   212,    34,    34,    44,    61,
     163,    -1,    -1,    -1,    -1,    -1,   223,    -1,   171,     0,
       1,    38,   175,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,   185,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,   211,    40,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,     1,     1,    13,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    13,
      14,    15,    17,    18,    19,    30,    31,    -1,    33,    34,
      -1,    36,    -1,    38,    29,    40,    30,    31,    -1,    33,
      34,    36,    37,    -1,    38,    40,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,     1,     1,    -1,    -1,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    13,    -1,    -1,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    30,    31,    -1,    33,    34,    36,    37,    -1,
      38,    40,    -1,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,    -1,    -1,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    40,    33,    34,    -1,    44,
       1,    38,    -1,    40,    -1,    -1,    -1,    52,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    -1,    33,    34,    35,    -1,    -1,    38,    39,     1,
      41,    -1,    -1,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,     1,    17,    18,    19,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    29,    -1,    -1,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,     1,    29,    -1,    -1,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    40,    41,    15,     1,    17,    18,    19,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    29,
      -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      40,     1,    -1,    -1,    29,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    39,    40,     1,    17,    18,    19,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    29,
      -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,    39,
      40,     1,    -1,    -1,    29,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    40,     1,    17,    18,    19,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    29,
      -1,    -1,    17,    18,    19,     9,    10,    11,    12,    -1,
      40,    -1,    -1,    -1,    29,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    40,    -1,     9,    10,    11,
      12,    35,    -1,    -1,    -1,    -1,    -1,    41,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    13,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,
      34,    -1,    13,    37,    38,    -1,    40,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    34,    -1,    -1,    -1,    38,    -1,    40,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       9,    10,    11,    12,    -1,    -1,    35,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,     6,     7,     9,    10,    17,    18,    19,
      29,    36,    40,    42,    43,    44,    45,    46,    47,    49,
      50,    51,    52,    53,    54,    55,    56,    59,    60,    61,
      62,    63,    65,    66,    67,    68,    69,    70,    71,    73,
      74,    75,    76,    77,    80,    81,    82,    89,    91,    92,
      13,    16,    30,    31,    33,    34,    38,    40,    69,    79,
      16,    40,     1,    37,    59,     1,     7,    63,    68,    75,
       1,    16,    59,    40,     7,    40,    63,    40,     1,     7,
      86,    40,     0,    60,    15,     9,    10,    11,    12,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    35,    64,
      85,     1,     7,    66,    68,    70,     1,    38,    69,    79,
       1,    68,    15,    14,    15,     1,     7,    68,    72,    77,
      86,    39,    75,    41,    75,    90,     1,    75,    77,    78,
      60,    41,    90,    37,    37,    35,    41,    16,    60,    56,
      75,    77,    80,    83,    75,    77,    84,    75,    40,    92,
      40,    15,    84,    78,    40,    62,    62,    78,    39,    75,
      78,    75,    77,    14,    15,    39,    14,    41,    41,    63,
      60,    40,     1,    68,    77,    15,    41,    41,    41,     1,
      41,    80,    87,    88,    41,    16,    63,    39,     1,    68,
      77,    75,    16,    84,    84,    60,    60,    92,    14,    41,
       1,    15,    92,     1,    68,    14,    41,    60,    78,    63,
      41,    15,    48,    88,    92,     1,    88,    15,    92,    41,
      15,    84,    60,    41,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    65,    65,    65,
      66,    66,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    71,    71,    72,    72,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     3,     3,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     7,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     2,     2,     2,     1,     2,     1,     4,     3,     3,
       4,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     1,     1,     1,     3,     1,     5,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     5,     9,     7,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     4,     4,     2,     4,     5,     4,
       1,     3,     3,     3,     2,     1,     2,     4,     3,     4,
       3,     1,     3,     4,     3,     3,     2,     2,     3,     2,
       3
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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

#line 1741 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 269 "parser.y"



int yyerror(char* s) {
	 
    char buffer[300];
    int banderaC=0;
    int indiceBuff=0;
   
    memset(buffer, 0, sizeof(buffer));
    for(int i =0 ;i<strlen(s);i++){
		 	if(banderaC==1){
		 		buffer[indiceBuff]=s[i];
		 		indiceBuff++;
		 	}else if(s[i]==','){
		 		banderaC=1;	
		 	} 			
    }
    
    fprintf(stderr, "\x1b[93mError\x1b[0m line %d,column%d:%s\n", yylineno, columna,buffer);
    FILE *archivo_entrada = fopen("temporal.txt", "r");
    if (archivo_entrada) {
        char linea[5000];
        memset(linea, 0, sizeof(linea));
         int num_linea = 0;
         while (fgets(linea, sizeof(linea), archivo_entrada)) {
             num_linea++;
             
             if (num_linea == yylineno) {
                 printf("Original line: %s", linea);
                 break;
              }
         }
         char bufferC[5000];
        	memset(bufferC, 0, sizeof(bufferC));
         for(int i =0;i<15;i++){
         	bufferC[i]=' ';
         } 
         
         int contadorBufferC=15;
         for(int i =0; i < strlen(linea);i++){
         	if(columna==i){
         		bufferC[contadorBufferC]='^';
         		contadorBufferC++;
         		break;
         	}else if(linea[i]=='\t'){
         		bufferC[contadorBufferC]='\t';
         		contadorBufferC++;
         	}else{
         		bufferC[contadorBufferC]='_';
         		contadorBufferC++;
         	}
         }
        
        	
         printf("\x1b[35m%s\x1b[0m\x1b[36m---Error token-> \x1b[0m\x1b[32m%s\x1b[0m\n\n", bufferC,yylval.reservada);
           fclose(archivo_entrada);
     }
        
       
    
}

