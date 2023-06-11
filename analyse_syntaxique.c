/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "analyse_syntaxique.y"

#include <stdlib.h>
#include <stdio.h>
#include "arbre_abstrait.h"
#include "analyse_lexicale.h"
#include "table_symbole.h"


//n_programme* yyparse();
int yylex();
int yyerror(const char *s);
n_programme* arbre_abstrait;
//table_symboles* table;

#line 86 "analyse_syntaxique.c"

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

#include "symboles.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* FIN  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIANT = 3,                /* IDENTIFIANT  */
  YYSYMBOL_PARENTHESE_OUVRANTE = 4,        /* PARENTHESE_OUVRANTE  */
  YYSYMBOL_PARENTHESE_FERMANTE = 5,        /* PARENTHESE_FERMANTE  */
  YYSYMBOL_POINT_VIRGULE = 6,              /* POINT_VIRGULE  */
  YYSYMBOL_ENTIER = 7,                     /* ENTIER  */
  YYSYMBOL_ECRIRE = 8,                     /* ECRIRE  */
  YYSYMBOL_AFFECTATION = 9,                /* AFFECTATION  */
  YYSYMBOL_EGAL = 10,                      /* EGAL  */
  YYSYMBOL_DIFFERENT = 11,                 /* DIFFERENT  */
  YYSYMBOL_INFERIEUR = 12,                 /* INFERIEUR  */
  YYSYMBOL_SUPERIEUR = 13,                 /* SUPERIEUR  */
  YYSYMBOL_INFERIEUR_EGAL = 14,            /* INFERIEUR_EGAL  */
  YYSYMBOL_SUPERIEUR_EGAL = 15,            /* SUPERIEUR_EGAL  */
  YYSYMBOL_ACCOLADE_FERMANTE = 16,         /* ACCOLADE_FERMANTE  */
  YYSYMBOL_ACCOLADE_OUVRANTE = 17,         /* ACCOLADE_OUVRANTE  */
  YYSYMBOL_VIRGULE = 18,                   /* VIRGULE  */
  YYSYMBOL_SI = 19,                        /* SI  */
  YYSYMBOL_SINON = 20,                     /* SINON  */
  YYSYMBOL_SINON_SI = 21,                  /* SINON_SI  */
  YYSYMBOL_LIRE = 22,                      /* LIRE  */
  YYSYMBOL_TANT_QUE = 23,                  /* TANT_QUE  */
  YYSYMBOL_NON = 24,                       /* NON  */
  YYSYMBOL_ET = 25,                        /* ET  */
  YYSYMBOL_OU = 26,                        /* OU  */
  YYSYMBOL_RETOURNER = 27,                 /* RETOURNER  */
  YYSYMBOL_MOINS = 28,                     /* MOINS  */
  YYSYMBOL_DIVISE = 29,                    /* DIVISE  */
  YYSYMBOL_MODULO = 30,                    /* MODULO  */
  YYSYMBOL_FOIS = 31,                      /* FOIS  */
  YYSYMBOL_PLUS = 32,                      /* PLUS  */
  YYSYMBOL_TYPE_ENTIER = 33,               /* TYPE_ENTIER  */
  YYSYMBOL_TYPE_BOOLEEN = 34,              /* TYPE_BOOLEEN  */
  YYSYMBOL_BOOLEEN = 35,                   /* BOOLEEN  */
  YYSYMBOL_UMOINS = 36,                    /* UMOINS  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_prog = 38,                      /* prog  */
  YYSYMBOL_listeFonctions = 39,            /* listeFonctions  */
  YYSYMBOL_fonction = 40,                  /* fonction  */
  YYSYMBOL_listeParametres = 41,           /* listeParametres  */
  YYSYMBOL_parametre = 42,                 /* parametre  */
  YYSYMBOL_listeInstructions = 43,         /* listeInstructions  */
  YYSYMBOL_instruction = 44,               /* instruction  */
  YYSYMBOL_ecrire = 45,                    /* ecrire  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_declarationAffectation = 47,    /* declarationAffectation  */
  YYSYMBOL_affectation = 48,               /* affectation  */
  YYSYMBOL_conditionnelle = 49,            /* conditionnelle  */
  YYSYMBOL_listeSinonSi = 50,              /* listeSinonSi  */
  YYSYMBOL_boucleTanque = 51,              /* boucleTanque  */
  YYSYMBOL_retourner = 52,                 /* retourner  */
  YYSYMBOL_appelFonction = 53,             /* appelFonction  */
  YYSYMBOL_exprAll = 54,                   /* exprAll  */
  YYSYMBOL_booleen = 55,                   /* booleen  */
  YYSYMBOL_expr = 56,                      /* expr  */
  YYSYMBOL_listeExpressions = 57,          /* listeExpressions  */
  YYSYMBOL_facteur = 58                    /* facteur  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
# define YYCOPY_NEEDED 1
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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    92,    97,   100,   106,   111,   116,   121,
     128,   131,   136,   139,   146,   149,   154,   157,   160,   163,
     166,   169,   172,   175,   179,   184,   189,   196,   204,   213,
     224,   228,   232,   237,   243,   246,   251,   256,   261,   266,
     271,   274,   277,   280,   283,   289,   292,   295,   298,   301,
     304,   307,   310,   313,   316,   319,   322,   325,   328,   337,
     340,   345,   352,   359,   362,   376
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
  "FIN", "error", "\"invalid token\"", "IDENTIFIANT",
  "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "POINT_VIRGULE", "ENTIER",
  "ECRIRE", "AFFECTATION", "EGAL", "DIFFERENT", "INFERIEUR", "SUPERIEUR",
  "INFERIEUR_EGAL", "SUPERIEUR_EGAL", "ACCOLADE_FERMANTE",
  "ACCOLADE_OUVRANTE", "VIRGULE", "SI", "SINON", "SINON_SI", "LIRE",
  "TANT_QUE", "NON", "ET", "OU", "RETOURNER", "MOINS", "DIVISE", "MODULO",
  "FOIS", "PLUS", "TYPE_ENTIER", "TYPE_BOOLEEN", "BOOLEEN", "UMOINS",
  "$accept", "prog", "listeFonctions", "fonction", "listeParametres",
  "parametre", "listeInstructions", "instruction", "ecrire", "declaration",
  "declarationAffectation", "affectation", "conditionnelle",
  "listeSinonSi", "boucleTanque", "retourner", "appelFonction", "exprAll",
  "booleen", "expr", "listeExpressions", "facteur", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,    13,    24,    41,    43,    48,    51,    61,     6,    40,
     -72,   -72,    58,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,    48,    48,    48,    48,    48,    65,    48,   -72,    71,
      48,    90,   -72,    50,   -11,   116,   -72,     3,     7,   -72,
     -72,   -72,    81,    87,   -72,    60,    98,   100,   103,   106,
     112,    22,     5,   115,   -72,   -72,   -72,    48,    48,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      53,   -72,    48,    55,   -72,    48,    -1,    56,    48,   117,
     -72,   118,   104,   108,   -72,   127,   -72,   -72,   107,   -72,
     116,    70,    70,    70,    70,    70,    85,   -72,   -72,   -72,
      85,   119,   132,   134,   133,   123,   136,   135,   144,   145,
     -72,   -72,   -72,    58,    58,   -72,    58,   -72,   -72,   137,
     -10,   -72,    58,   138,   -72,   140,   141,   142,    58,   -72,
     143,    58,    75,   -72,   -72,   146,   -72,   147,   148,   149,
     130,   -72,   -72,    58,    48,   150,   152,   155,    58,   -72,
     153,   156,    58,   -72,   157,   154,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     2,    14,    16,    22,    23,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,    61,     0,    62,     0,
       0,     0,    40,     0,    39,    41,    58,     0,     0,     1,
       5,     3,     0,     0,    15,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    50,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,    26,     0,     0,     0,     0,     0,
      29,     0,     0,     0,    65,     0,    51,    63,    42,    43,
      56,    57,    54,    52,    55,    53,    46,    48,    49,    47,
      45,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      60,    38,    24,     0,     0,    64,     0,    12,    13,     0,
       0,    27,     0,     0,    28,     0,     0,     0,     0,    11,
       0,     0,    30,    36,     8,     0,     9,     0,     0,     0,
      32,     6,     7,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    33,     0,    34,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   160,   -71,   -72,    -9,   -72,   -72,   -72,
     -72,   -72,   -72,     9,   -72,   -72,   -72,    -4,    52,   -27,
       2,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    10,   104,   105,    11,    12,    13,    14,
      15,    16,    17,   140,    18,    19,    20,    45,    34,    35,
      46,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    33,   108,    44,    55,    71,    39,    70,    72,    71,
      86,    73,    72,    74,    57,    58,    75,    21,    47,    48,
      49,    50,    22,   102,   103,    26,    27,    84,    23,    28,
      57,    58,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    29,    24,    30,    25,     2,   129,
      31,    26,    27,    85,    37,    28,    56,    32,   101,     3,
     107,     1,    74,     4,    38,    75,     2,     5,   106,    51,
      29,   109,    30,     6,     7,    53,    31,     3,    78,    52,
     110,     4,    54,    32,    76,     5,   102,   103,   102,   103,
      77,    42,    43,    26,    27,   138,   139,    28,    65,    66,
      67,    68,    69,    79,   125,   126,    80,   127,    81,    88,
      89,    82,    29,   130,    66,    67,    68,    83,    31,   135,
      87,   113,   137,   111,   112,   114,    59,    60,    61,    62,
      63,    64,   115,    58,   146,   117,   116,   118,   119,   151,
     147,   120,   121,   154,    65,    66,    67,    68,    69,   123,
     145,   124,   122,   144,   128,   131,   132,   133,   134,   136,
     150,     0,   141,   142,   156,   143,     0,   148,   149,    40,
     152,     0,   153,   155,     0,   139
};

static const yytype_int16 yycheck[] =
{
       9,     5,    73,    12,    31,     6,     0,     4,     9,     6,
       5,     4,     9,     6,    25,    26,     9,     4,    22,    23,
      24,    25,     9,    33,    34,     3,     4,     5,     4,     7,
      25,    26,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     3,    22,     4,    24,     4,     8,   120,
      28,     3,     4,    51,     3,     7,     6,    35,     5,    19,
       5,     3,     6,    23,     3,     9,     8,    27,    72,     4,
      22,    75,    24,    33,    34,     4,    28,    19,    18,    27,
      78,    23,    30,    35,     3,    27,    33,    34,    33,    34,
       3,    33,    34,     3,     4,    20,    21,     7,    28,    29,
      30,    31,    32,     5,   113,   114,     6,   116,     5,    57,
      58,     5,    22,   122,    29,    30,    31,     5,    28,   128,
       5,    17,   131,     6,     6,    17,    10,    11,    12,    13,
      14,    15,     5,    26,   143,     3,    17,     3,     5,   148,
     144,    18,     6,   152,    28,    29,    30,    31,    32,     5,
      20,     6,    17,     4,    17,    17,    16,    16,    16,    16,
       5,    -1,    16,    16,   155,    17,    -1,    17,    16,     9,
      17,    -1,    16,    16,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,    19,    23,    27,    33,    34,    38,    39,
      40,    43,    44,    45,    46,    47,    48,    49,    51,    52,
      53,     4,     9,     4,     4,     4,     3,     4,     7,    22,
      24,    28,    35,    54,    55,    56,    58,     3,     3,     0,
      40,    43,    33,    34,    43,    54,    57,    54,    54,    54,
      54,     4,    55,     4,    55,    56,     6,    25,    26,    10,
      11,    12,    13,    14,    15,    28,    29,    30,    31,    32,
       4,     6,     9,     4,     6,     9,     3,     3,    18,     5,
       6,     5,     5,     5,     5,    57,     5,     5,    55,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,     5,    33,    34,    41,    42,    54,     5,    41,    54,
      57,     6,     6,    17,    17,     5,    17,     3,     3,     5,
      18,     6,    17,     5,     6,    43,    43,    43,    17,    41,
      43,    17,    16,    16,    16,    43,    16,    43,    20,    21,
      50,    16,    16,    17,     4,    20,    43,    54,    17,    16,
       5,    43,    17,    16,    43,    16,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    40,    40,    40,    40,
      41,    41,    42,    42,    43,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    45,    46,    46,    47,    47,    48,
      49,    49,    49,    49,    50,    50,    51,    52,    53,    54,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      57,    58,    58,    58,    58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     8,     8,     7,     7,
       1,     3,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     3,     3,     5,     5,     4,
       7,    11,     8,    12,     7,     8,     7,     3,     5,     1,
       1,     1,     3,     3,     2,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     1,     1,     3,     4,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          goto yyexhaustedlab;                                          \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
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

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
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

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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

  if (yychar <= FIN)
    {
      yychar = FIN;
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* prog: listeInstructions  */
#line 89 "analyse_syntaxique.y"
                            {
	   arbre_abstrait = creer_n_programme(NULL,(yyvsp[0].l_inst));
	}
#line 1751 "analyse_syntaxique.c"
    break;

  case 3: /* prog: listeFonctions listeInstructions  */
#line 92 "analyse_syntaxique.y"
                                           {
	   arbre_abstrait = creer_n_programme((yyvsp[-1].l_fonctions),(yyvsp[0].l_inst));
	}
#line 1759 "analyse_syntaxique.c"
    break;

  case 4: /* listeFonctions: fonction  */
#line 97 "analyse_syntaxique.y"
                   {
		(yyval.l_fonctions) = creer_n_l_fonctions((yyvsp[0].fonction), NULL);
	}
#line 1767 "analyse_syntaxique.c"
    break;

  case 5: /* listeFonctions: listeFonctions fonction  */
#line 100 "analyse_syntaxique.y"
                                  {
		(yyval.l_fonctions) = creer_n_l_fonctions((yyvsp[0].fonction), (yyvsp[-1].l_fonctions));
	}
#line 1775 "analyse_syntaxique.c"
    break;

  case 6: /* fonction: TYPE_ENTIER IDENTIFIANT PARENTHESE_OUVRANTE listeParametres PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 106 "analyse_syntaxique.y"
                                                                                                                                                {
	 	//ajouter_table_symboles_fonction(table, t_entier, $2, adresse, imbrication, nombre_parametres($4), creer_list_type($4));
		//adresse += nombre_parametres($4)*4;
	      	(yyval.fonction) = creer_n_fonction(t_entier, (yyvsp[-6].ident), (yyvsp[-4].l_parametres), (yyvsp[-1].l_inst));
 ;	}
#line 1785 "analyse_syntaxique.c"
    break;

  case 7: /* fonction: TYPE_BOOLEEN IDENTIFIANT PARENTHESE_OUVRANTE listeParametres PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 111 "analyse_syntaxique.y"
                                                                                                                                                 {
        	//ajouter_table_symboles_fonction(table, t_booleen, $2, adresse, imbrication, nombre_parametres($4), creer_list_type($4));
		//adresse += nombre_parametres($4)*4;
              	(yyval.fonction) = creer_n_fonction(t_booleen, (yyvsp[-6].ident), (yyvsp[-4].l_parametres), (yyvsp[-1].l_inst));
        }
#line 1795 "analyse_syntaxique.c"
    break;

  case 8: /* fonction: TYPE_ENTIER IDENTIFIANT PARENTHESE_OUVRANTE PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 116 "analyse_syntaxique.y"
                                                                                                                                {
		//ajouter_table_symboles_fonction(table, t_entier, $2, adresse, imbrication, 0, NULL);
		//adresse += 4;
	      	(yyval.fonction) = creer_n_fonction(t_entier, (yyvsp[-5].ident), NULL, (yyvsp[-1].l_inst));
	}
#line 1805 "analyse_syntaxique.c"
    break;

  case 9: /* fonction: TYPE_BOOLEEN IDENTIFIANT PARENTHESE_OUVRANTE PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 121 "analyse_syntaxique.y"
                                                                                                                                 {
		//ajouter_table_symboles_fonction(table, t_booleen, $2, adresse, imbrication, 0, NULL);
		//adresse += 4;
	      	(yyval.fonction) = creer_n_fonction(t_booleen, (yyvsp[-5].ident), NULL, (yyvsp[-1].l_inst));
	}
#line 1815 "analyse_syntaxique.c"
    break;

  case 10: /* listeParametres: parametre  */
#line 128 "analyse_syntaxique.y"
                    {
		(yyval.l_parametres) = creer_n_l_parametres((yyvsp[0].parametre), NULL);
	}
#line 1823 "analyse_syntaxique.c"
    break;

  case 11: /* listeParametres: parametre VIRGULE listeParametres  */
#line 131 "analyse_syntaxique.y"
                                            {
		(yyval.l_parametres) = creer_n_l_parametres((yyvsp[-2].parametre), (yyvsp[0].l_parametres));
	}
#line 1831 "analyse_syntaxique.c"
    break;

  case 12: /* parametre: TYPE_ENTIER IDENTIFIANT  */
#line 136 "analyse_syntaxique.y"
                                  {
		(yyval.parametre) = creer_n_parametre(t_entier, (yyvsp[0].ident));
	}
#line 1839 "analyse_syntaxique.c"
    break;

  case 13: /* parametre: TYPE_BOOLEEN IDENTIFIANT  */
#line 139 "analyse_syntaxique.y"
                                   {
		(yyval.parametre) = creer_n_parametre(t_booleen, (yyvsp[0].ident));
	}
#line 1847 "analyse_syntaxique.c"
    break;

  case 14: /* listeInstructions: instruction  */
#line 146 "analyse_syntaxique.y"
                      {
		(yyval.l_inst) = creer_n_l_instructions((yyvsp[0].inst) ,NULL);
	}
#line 1855 "analyse_syntaxique.c"
    break;

  case 15: /* listeInstructions: instruction listeInstructions  */
#line 149 "analyse_syntaxique.y"
                                        {
		(yyval.l_inst) = creer_n_l_instructions((yyvsp[-1].inst) ,(yyvsp[0].l_inst));
	}
#line 1863 "analyse_syntaxique.c"
    break;

  case 16: /* instruction: ecrire  */
#line 154 "analyse_syntaxique.y"
                 {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1871 "analyse_syntaxique.c"
    break;

  case 17: /* instruction: affectation  */
#line 157 "analyse_syntaxique.y"
                      {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1879 "analyse_syntaxique.c"
    break;

  case 18: /* instruction: conditionnelle  */
#line 160 "analyse_syntaxique.y"
                         {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1887 "analyse_syntaxique.c"
    break;

  case 19: /* instruction: boucleTanque  */
#line 163 "analyse_syntaxique.y"
                       {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1895 "analyse_syntaxique.c"
    break;

  case 20: /* instruction: retourner  */
#line 166 "analyse_syntaxique.y"
                    {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1903 "analyse_syntaxique.c"
    break;

  case 21: /* instruction: appelFonction  */
#line 169 "analyse_syntaxique.y"
                        {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1911 "analyse_syntaxique.c"
    break;

  case 22: /* instruction: declaration  */
#line 172 "analyse_syntaxique.y"
                      {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1919 "analyse_syntaxique.c"
    break;

  case 23: /* instruction: declarationAffectation  */
#line 175 "analyse_syntaxique.y"
                                 {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1927 "analyse_syntaxique.c"
    break;

  case 24: /* ecrire: ECRIRE PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE POINT_VIRGULE  */
#line 179 "analyse_syntaxique.y"
                                                                             {
		(yyval.inst) = creer_n_ecrire((yyvsp[-2].exp));
	}
#line 1935 "analyse_syntaxique.c"
    break;

  case 25: /* declaration: TYPE_ENTIER IDENTIFIANT POINT_VIRGULE  */
#line 184 "analyse_syntaxique.y"
                                                 {
		//ajouter_table_symboles(table, t_entier, $2, adresse, imbrication);
		//adresse += 4;
		(yyval.inst) = creer_n_declaration(creer_n_variable((yyvsp[-1].ident)), t_entier);
	}
#line 1945 "analyse_syntaxique.c"
    break;

  case 26: /* declaration: TYPE_BOOLEEN IDENTIFIANT POINT_VIRGULE  */
#line 189 "analyse_syntaxique.y"
                                                 {
		//ajouter_table_symboles(table, t_booleen, $2, adresse, imbrication);
		//adresse += 4;
		(yyval.inst) = creer_n_declaration(creer_n_variable((yyvsp[-1].ident)), t_booleen);
	}
#line 1955 "analyse_syntaxique.c"
    break;

  case 27: /* declarationAffectation: TYPE_ENTIER IDENTIFIANT AFFECTATION exprAll POINT_VIRGULE  */
#line 196 "analyse_syntaxique.y"
                                                                    {
		//ajouter_table_symboles(table, t_entier, $2, adresse, imbrication);
		//adresse += 4;
		n_instruction* decl = creer_n_declaration(creer_n_variable((yyvsp[-3].ident)), t_entier);
		n_instruction* aff = creer_n_affectation(creer_n_variable((yyvsp[-3].ident)), (yyvsp[-1].exp));
		(yyval.inst) = creer_n_decla_aff(decl, aff);

	}
#line 1968 "analyse_syntaxique.c"
    break;

  case 28: /* declarationAffectation: TYPE_BOOLEEN IDENTIFIANT AFFECTATION exprAll POINT_VIRGULE  */
#line 204 "analyse_syntaxique.y"
                                                                     {
		//ajouter_table_symboles(table, t_booleen, $2, adresse, imbrication);
		//adresse += 4;
		n_instruction* decl = creer_n_declaration(creer_n_variable((yyvsp[-3].ident)), t_booleen);
		n_instruction* aff = creer_n_affectation(creer_n_variable((yyvsp[-3].ident)), (yyvsp[-1].exp));
		(yyval.inst) = creer_n_decla_aff(decl, aff);
	}
#line 1980 "analyse_syntaxique.c"
    break;

  case 29: /* affectation: IDENTIFIANT AFFECTATION exprAll POINT_VIRGULE  */
#line 213 "analyse_syntaxique.y"
                                                        {
		//symbole *s = chercher_table_symboles(table, $1);
		//if(s == NULL) {
		//	perror("Variable non déclarée");
		//} else {
		(yyval.inst) = creer_n_affectation(creer_n_variable((yyvsp[-3].ident)), (yyvsp[-1].exp));
		//}
	}
#line 1993 "analyse_syntaxique.c"
    break;

  case 30: /* conditionnelle: SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 224 "analyse_syntaxique.y"
                                                                                                                   {
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-4].exp), (yyvsp[-1].l_inst), NULL, NULL);
	}
#line 2001 "analyse_syntaxique.c"
    break;

  case 31: /* conditionnelle: SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE SINON ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 228 "analyse_syntaxique.y"
                                                                                                                                                                               {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_l_instructions* liste_sinon_si, n_l_instructions* liste_sinon);
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-8].exp), (yyvsp[-5].l_inst), NULL, (yyvsp[-1].l_inst));
	}
#line 2010 "analyse_syntaxique.c"
    break;

  case 32: /* conditionnelle: SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE listeSinonSi  */
#line 232 "analyse_syntaxique.y"
                                                                                                                                {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_l_instructions* liste_sinon_si, n_l_instructions* liste_sinon);
		//n_instruction* sinon_si = creer_n_conditionnelle($10, $13, NULL, NULL);
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-5].exp), (yyvsp[-2].l_inst), (yyvsp[0].l_inst), NULL);
	}
#line 2020 "analyse_syntaxique.c"
    break;

  case 33: /* conditionnelle: SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE listeSinonSi SINON ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 237 "analyse_syntaxique.y"
                                                                                                                                                                                            {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_l_instructions* liste_sinon_si, n_l_instructions* liste_sinon);
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-9].exp), (yyvsp[-6].l_inst), (yyvsp[-4].l_inst), (yyvsp[-1].l_inst));
	}
#line 2029 "analyse_syntaxique.c"
    break;

  case 34: /* listeSinonSi: SINON_SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 243 "analyse_syntaxique.y"
                                                                                                                         {
		(yyval.l_inst) = creer_n_l_instructions(creer_n_conditionnelle((yyvsp[-4].exp), (yyvsp[-1].l_inst), NULL, NULL), NULL);
	}
#line 2037 "analyse_syntaxique.c"
    break;

  case 35: /* listeSinonSi: SINON_SI PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE listeSinonSi  */
#line 246 "analyse_syntaxique.y"
                                                                                                                                      {
		(yyval.l_inst) = creer_n_l_instructions(creer_n_conditionnelle((yyvsp[-5].exp), (yyvsp[-2].l_inst), (yyvsp[0].l_inst), NULL), (yyvsp[0].l_inst));
	}
#line 2045 "analyse_syntaxique.c"
    break;

  case 36: /* boucleTanque: TANT_QUE PARENTHESE_OUVRANTE exprAll PARENTHESE_FERMANTE ACCOLADE_OUVRANTE listeInstructions ACCOLADE_FERMANTE  */
#line 251 "analyse_syntaxique.y"
                                                                                                                         {
		(yyval.inst) = creer_n_boucle_tantque((yyvsp[-4].exp), (yyvsp[-1].l_inst));
	}
#line 2053 "analyse_syntaxique.c"
    break;

  case 37: /* retourner: RETOURNER exprAll POINT_VIRGULE  */
#line 256 "analyse_syntaxique.y"
                                          {
		(yyval.inst) = creer_n_retour((yyvsp[-1].exp));
	}
#line 2061 "analyse_syntaxique.c"
    break;

  case 38: /* appelFonction: IDENTIFIANT PARENTHESE_OUVRANTE listeExpressions PARENTHESE_FERMANTE POINT_VIRGULE  */
#line 261 "analyse_syntaxique.y"
                                                                                             {
		(yyval.inst) = creer_n_appelF((yyvsp[-4].ident), (yyvsp[-2].l_exp));
	}
#line 2069 "analyse_syntaxique.c"
    break;

  case 39: /* exprAll: booleen  */
#line 266 "analyse_syntaxique.y"
                  {
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2077 "analyse_syntaxique.c"
    break;

  case 40: /* booleen: BOOLEEN  */
#line 271 "analyse_syntaxique.y"
                  {
		(yyval.exp) = creer_n_booleen((yyvsp[0].entier));
	}
#line 2085 "analyse_syntaxique.c"
    break;

  case 41: /* booleen: expr  */
#line 274 "analyse_syntaxique.y"
               {
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2093 "analyse_syntaxique.c"
    break;

  case 42: /* booleen: booleen ET booleen  */
#line 277 "analyse_syntaxique.y"
                             {
		(yyval.exp) = creer_n_operation_et((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2101 "analyse_syntaxique.c"
    break;

  case 43: /* booleen: booleen OU booleen  */
#line 280 "analyse_syntaxique.y"
                             {
		(yyval.exp) = creer_n_operation_ou((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2109 "analyse_syntaxique.c"
    break;

  case 44: /* booleen: NON booleen  */
#line 283 "analyse_syntaxique.y"
                      {
		(yyval.exp) = creer_n_operation_non((yyvsp[0].exp));
	}
#line 2117 "analyse_syntaxique.c"
    break;

  case 45: /* expr: expr PLUS expr  */
#line 289 "analyse_syntaxique.y"
                        {
		(yyval.exp) =creer_n_operation('+', (yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2125 "analyse_syntaxique.c"
    break;

  case 46: /* expr: expr MOINS expr  */
#line 292 "analyse_syntaxique.y"
                         {
		(yyval.exp) =creer_n_operation('-', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2133 "analyse_syntaxique.c"
    break;

  case 47: /* expr: expr FOIS expr  */
#line 295 "analyse_syntaxique.y"
                        {
		(yyval.exp) =creer_n_operation('*', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2141 "analyse_syntaxique.c"
    break;

  case 48: /* expr: expr DIVISE expr  */
#line 298 "analyse_syntaxique.y"
                          {
		(yyval.exp) =creer_n_operation('/', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2149 "analyse_syntaxique.c"
    break;

  case 49: /* expr: expr MODULO expr  */
#line 301 "analyse_syntaxique.y"
                          {
		(yyval.exp) =creer_n_operation('%', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2157 "analyse_syntaxique.c"
    break;

  case 50: /* expr: MOINS expr  */
#line 304 "analyse_syntaxique.y"
                                 {
		(yyval.exp) =creer_n_operation('-', creer_n_entier(0), (yyvsp[0].exp));
	}
#line 2165 "analyse_syntaxique.c"
    break;

  case 51: /* expr: PARENTHESE_OUVRANTE booleen PARENTHESE_FERMANTE  */
#line 307 "analyse_syntaxique.y"
                                                          {
		(yyval.exp) = (yyvsp[-1].exp);
	}
#line 2173 "analyse_syntaxique.c"
    break;

  case 52: /* expr: expr SUPERIEUR expr  */
#line 310 "analyse_syntaxique.y"
                              {
		(yyval.exp) = creer_n_operation('>', (yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2181 "analyse_syntaxique.c"
    break;

  case 53: /* expr: expr SUPERIEUR_EGAL expr  */
#line 313 "analyse_syntaxique.y"
                                   {
		(yyval.exp) = creer_n_operation_supeg((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2189 "analyse_syntaxique.c"
    break;

  case 54: /* expr: expr INFERIEUR expr  */
#line 316 "analyse_syntaxique.y"
                              {
		(yyval.exp) = creer_n_operation('<', (yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2197 "analyse_syntaxique.c"
    break;

  case 55: /* expr: expr INFERIEUR_EGAL expr  */
#line 319 "analyse_syntaxique.y"
                                   {
		(yyval.exp) = creer_n_operation_infeg((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2205 "analyse_syntaxique.c"
    break;

  case 56: /* expr: expr EGAL expr  */
#line 322 "analyse_syntaxique.y"
                         {
		(yyval.exp) = creer_n_operation_egal((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2213 "analyse_syntaxique.c"
    break;

  case 57: /* expr: expr DIFFERENT expr  */
#line 325 "analyse_syntaxique.y"
                              {
		(yyval.exp) = creer_n_operation_diff((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2221 "analyse_syntaxique.c"
    break;

  case 58: /* expr: facteur  */
#line 328 "analyse_syntaxique.y"
                  {
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2229 "analyse_syntaxique.c"
    break;

  case 59: /* listeExpressions: exprAll  */
#line 337 "analyse_syntaxique.y"
                  {
		(yyval.l_exp) = creer_n_l_exp((yyvsp[0].exp), NULL);
	}
#line 2237 "analyse_syntaxique.c"
    break;

  case 60: /* listeExpressions: exprAll VIRGULE listeExpressions  */
#line 340 "analyse_syntaxique.y"
                                           {
		(yyval.l_exp) = creer_n_l_exp((yyvsp[-2].exp), (yyvsp[0].l_exp));
	}
#line 2245 "analyse_syntaxique.c"
    break;

  case 61: /* facteur: IDENTIFIANT  */
#line 345 "analyse_syntaxique.y"
                      {
		/*if (chercher_table_symboles(table,$1) == NULL) {
			perror("Variable non déclarée");
		} else {*/
		(yyval.exp) = (n_exp*) creer_n_variable((yyvsp[0].ident));
		//}
	}
#line 2257 "analyse_syntaxique.c"
    break;

  case 62: /* facteur: ENTIER  */
#line 352 "analyse_syntaxique.y"
                 {
		(yyval.exp) = creer_n_entier((yyvsp[0].entier));
	}
#line 2265 "analyse_syntaxique.c"
    break;

  case 63: /* facteur: LIRE PARENTHESE_OUVRANTE PARENTHESE_FERMANTE  */
#line 359 "analyse_syntaxique.y"
                                                       {
		(yyval.exp) = creer_n_lire();
	}
#line 2273 "analyse_syntaxique.c"
    break;

  case 64: /* facteur: IDENTIFIANT PARENTHESE_OUVRANTE listeExpressions PARENTHESE_FERMANTE  */
#line 362 "analyse_syntaxique.y"
                                                                               {
		/*int cpt = 0;
		while ($3 != NULL) {
			cpt++;
			$3 = $3->suivant;
		}
		symbole *s = chercher_table_symboles(table,$1);
		if (s->estFonction == 1 && s->nbParametres == cpt) { */
		(yyval.exp) = (n_exp*) creer_n_appel((yyvsp[-3].ident), (yyvsp[-1].l_exp));
		/*} else {
			perror("Nombre de paramètres incorrect");
			exit(1);
		}*/
	}
#line 2292 "analyse_syntaxique.c"
    break;

  case 65: /* facteur: IDENTIFIANT PARENTHESE_OUVRANTE PARENTHESE_FERMANTE  */
#line 376 "analyse_syntaxique.y"
                                                              {
		/*symbole *s = chercher_table_symboles(table,$1);
		if (s == NULL) {
			perror("Fonction non déclarée");
		} else if (s->estFonction == 1 && s->nbParametres == 0) { */
		(yyval.exp) = (n_exp*) creer_n_appel((yyvsp[-2].ident), NULL);
		/*} else {
			perror("Nombre de paramètres incorrect");
		} */
	}
#line 2307 "analyse_syntaxique.c"
    break;


#line 2311 "analyse_syntaxique.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= FIN)
        {
          /* Return failure if at end of input.  */
          if (yychar == FIN)
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 386 "analyse_syntaxique.y"


int yyerror(const char *s) {
    printf("yyerror : %s\n",s);
    return 0;
}

