/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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
int adresse;
int imbrication;

#line 87 "analyse_syntaxique.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYMBOLES_H_INCLUDED
# define YY_YY_SYMBOLES_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FIN = 0,
    IDENTIFIANT = 258,
    PARENTHESE_OUVRANTE = 259,
    PARENTHESE_FERMANTE = 260,
    POINT_VIRGULE = 261,
    ENTIER = 262,
    ECRIRE = 263,
    AFFECTATION = 264,
    EGAL = 265,
    DIFFERENT = 266,
    INFERIEUR = 267,
    SUPERIEUR = 268,
    INFERIEUR_EGAL = 269,
    SUPERIEUR_EGAL = 270,
    ACCOLADE_FERMANTE = 271,
    ACCOLADE_OUVRANTE = 272,
    VIRGULE = 273,
    SI = 274,
    SINON = 275,
    SINON_SI = 276,
    LIRE = 277,
    TANT_QUE = 278,
    NON = 279,
    ET = 280,
    OU = 281,
    RETOURNER = 282,
    MOINS = 283,
    DIVISE = 284,
    MODULO = 285,
    FOIS = 286,
    PLUS = 287,
    TYPE_ENTIER = 288,
    TYPE_BOOLEEN = 289,
    BOOLEEN = 290,
    UMOINS = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "analyse_syntaxique.y"

    int entier;
    n_programme* prog;
    n_l_instructions* l_inst;
    n_instruction* inst;
    n_exp* exp;
    n_l_exp* l_exp;
    char* ident;
    type type;
    n_l_fonctions* l_fonctions;
    n_fonction* fonction;
    n_l_parametres* l_parametres;
    n_parametre* parametre;

#line 192 "analyse_syntaxique.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYMBOLES_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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
#endif


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

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,    91,    91,    94,    99,   102,   108,   113,   118,   123,
     130,   133,   138,   141,   148,   151,   156,   159,   162,   165,
     168,   171,   174,   177,   181,   186,   191,   198,   206,   215,
     226,   230,   234,   239,   245,   248,   253,   258,   263,   268,
     273,   276,   279,   282,   285,   291,   294,   297,   300,   303,
     306,   309,   312,   315,   318,   321,   324,   327,   330,   339,
     342,   347,   354,   361,   364,   378
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "FIN", "error", "$undefined", "IDENTIFIANT", "PARENTHESE_OUVRANTE",
  "PARENTHESE_FERMANTE", "POINT_VIRGULE", "ENTIER", "ECRIRE",
  "AFFECTATION", "EGAL", "DIFFERENT", "INFERIEUR", "SUPERIEUR",
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
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

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
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   104,   105,    11,    12,    13,    14,
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   required.  Return 1 if memory is exhausted.  */
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
          return 1;
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
          return 1;
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
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
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
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
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
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
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
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
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
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
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
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 91 "analyse_syntaxique.y"
                            {
	   arbre_abstrait = creer_n_programme(NULL,(yyvsp[0].l_inst));
	}
#line 1711 "analyse_syntaxique.c"
    break;

  case 3:
#line 94 "analyse_syntaxique.y"
                                           {
	   arbre_abstrait = creer_n_programme((yyvsp[-1].l_fonctions),(yyvsp[0].l_inst));
	}
#line 1719 "analyse_syntaxique.c"
    break;

  case 4:
#line 99 "analyse_syntaxique.y"
                   {
		(yyval.l_fonctions) = creer_n_l_fonctions((yyvsp[0].fonction), NULL);
	}
#line 1727 "analyse_syntaxique.c"
    break;

  case 5:
#line 102 "analyse_syntaxique.y"
                                  {
		(yyval.l_fonctions) = creer_n_l_fonctions((yyvsp[0].fonction), (yyvsp[-1].l_fonctions));
	}
#line 1735 "analyse_syntaxique.c"
    break;

  case 6:
#line 108 "analyse_syntaxique.y"
                                                                                                                                                {
	 	//ajouter_table_symboles_fonction(table, t_entier, $2, adresse, imbrication, nombre_parametres($4), creer_list_type($4));
		//adresse += nombre_parametres($4)*4;
	      	(yyval.fonction) = creer_n_fonction(t_entier, (yyvsp[-6].ident), (yyvsp[-4].l_parametres), (yyvsp[-1].l_inst));
 ;	}
#line 1745 "analyse_syntaxique.c"
    break;

  case 7:
#line 113 "analyse_syntaxique.y"
                                                                                                                                                 {
        	//ajouter_table_symboles_fonction(table, t_booleen, $2, adresse, imbrication, nombre_parametres($4), creer_list_type($4));
		//adresse += nombre_parametres($4)*4;
              	(yyval.fonction) = creer_n_fonction(t_booleen, (yyvsp[-6].ident), (yyvsp[-4].l_parametres), (yyvsp[-1].l_inst));
        }
#line 1755 "analyse_syntaxique.c"
    break;

  case 8:
#line 118 "analyse_syntaxique.y"
                                                                                                                                {
		//ajouter_table_symboles_fonction(table, t_entier, $2, adresse, imbrication, 0, NULL);
		//adresse += 4;
	      	(yyval.fonction) = creer_n_fonction(t_entier, (yyvsp[-5].ident), NULL, (yyvsp[-1].l_inst));
	}
#line 1765 "analyse_syntaxique.c"
    break;

  case 9:
#line 123 "analyse_syntaxique.y"
                                                                                                                                 {
		//ajouter_table_symboles_fonction(table, t_booleen, $2, adresse, imbrication, 0, NULL);
		//adresse += 4;
	      	(yyval.fonction) = creer_n_fonction(t_booleen, (yyvsp[-5].ident), NULL, (yyvsp[-1].l_inst));
	}
#line 1775 "analyse_syntaxique.c"
    break;

  case 10:
#line 130 "analyse_syntaxique.y"
                    {
		(yyval.l_parametres) = creer_n_l_parametres((yyvsp[0].parametre), NULL);
	}
#line 1783 "analyse_syntaxique.c"
    break;

  case 11:
#line 133 "analyse_syntaxique.y"
                                            {
		(yyval.l_parametres) = creer_n_l_parametres((yyvsp[-2].parametre), (yyvsp[0].l_parametres));
	}
#line 1791 "analyse_syntaxique.c"
    break;

  case 12:
#line 138 "analyse_syntaxique.y"
                                  {
		(yyval.parametre) = creer_n_parametre(t_entier, (yyvsp[0].ident));
	}
#line 1799 "analyse_syntaxique.c"
    break;

  case 13:
#line 141 "analyse_syntaxique.y"
                                   {
		(yyval.parametre) = creer_n_parametre(t_booleen, (yyvsp[0].ident));
	}
#line 1807 "analyse_syntaxique.c"
    break;

  case 14:
#line 148 "analyse_syntaxique.y"
                      {
		(yyval.l_inst) = creer_n_l_instructions((yyvsp[0].inst) ,NULL);
	}
#line 1815 "analyse_syntaxique.c"
    break;

  case 15:
#line 151 "analyse_syntaxique.y"
                                        {
		(yyval.l_inst) =creer_n_l_instructions((yyvsp[-1].inst) ,(yyvsp[0].l_inst));
	}
#line 1823 "analyse_syntaxique.c"
    break;

  case 16:
#line 156 "analyse_syntaxique.y"
                 {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1831 "analyse_syntaxique.c"
    break;

  case 17:
#line 159 "analyse_syntaxique.y"
                      {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1839 "analyse_syntaxique.c"
    break;

  case 18:
#line 162 "analyse_syntaxique.y"
                         {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1847 "analyse_syntaxique.c"
    break;

  case 19:
#line 165 "analyse_syntaxique.y"
                       {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1855 "analyse_syntaxique.c"
    break;

  case 20:
#line 168 "analyse_syntaxique.y"
                    {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1863 "analyse_syntaxique.c"
    break;

  case 21:
#line 171 "analyse_syntaxique.y"
                        {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1871 "analyse_syntaxique.c"
    break;

  case 22:
#line 174 "analyse_syntaxique.y"
                      {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1879 "analyse_syntaxique.c"
    break;

  case 23:
#line 177 "analyse_syntaxique.y"
                                 {
		(yyval.inst) = (yyvsp[0].inst);
	}
#line 1887 "analyse_syntaxique.c"
    break;

  case 24:
#line 181 "analyse_syntaxique.y"
                                                                             {
		(yyval.inst) = creer_n_ecrire((yyvsp[-2].exp));
	}
#line 1895 "analyse_syntaxique.c"
    break;

  case 25:
#line 186 "analyse_syntaxique.y"
                                                 {
		//ajouter_table_symboles(table, t_entier, $2, adresse, imbrication);
		//adresse += 4;
		(yyval.inst) = creer_n_declaration(creer_n_variable((yyvsp[-1].ident)), t_entier);
	}
#line 1905 "analyse_syntaxique.c"
    break;

  case 26:
#line 191 "analyse_syntaxique.y"
                                                 {
		//ajouter_table_symboles(table, t_booleen, $2, adresse, imbrication);
		//adresse += 4;
		(yyval.inst) = creer_n_declaration(creer_n_variable((yyvsp[-1].ident)), t_booleen);
	}
#line 1915 "analyse_syntaxique.c"
    break;

  case 27:
#line 198 "analyse_syntaxique.y"
                                                                    {
		//ajouter_table_symboles(table, t_entier, $2, adresse, imbrication);
		//adresse += 4;
		n_instruction* decl = creer_n_declaration(creer_n_variable((yyvsp[-3].ident)), t_entier);
		n_instruction* aff = creer_n_affectation(creer_n_variable((yyvsp[-3].ident)), (yyvsp[-1].exp));
		(yyval.inst) = creer_n_decla_aff(decl, aff);

	}
#line 1928 "analyse_syntaxique.c"
    break;

  case 28:
#line 206 "analyse_syntaxique.y"
                                                                     {
		//ajouter_table_symboles(table, t_booleen, $2, adresse, imbrication);
		//adresse += 4;
		n_instruction* decl = creer_n_declaration(creer_n_variable((yyvsp[-3].ident)), t_booleen);
		n_instruction* aff = creer_n_affectation(creer_n_variable((yyvsp[-3].ident)), (yyvsp[-1].exp));
		(yyval.inst) = creer_n_decla_aff(decl, aff);
	}
#line 1940 "analyse_syntaxique.c"
    break;

  case 29:
#line 215 "analyse_syntaxique.y"
                                                        {
		//symbole *s = chercher_table_symboles(table, $1);
		//if(s == NULL) {
		//	perror("Variable non déclarée");
		//} else {
		(yyval.inst) = creer_n_affectation(creer_n_variable((yyvsp[-3].ident)), (yyvsp[-1].exp));
		//}
	}
#line 1953 "analyse_syntaxique.c"
    break;

  case 30:
#line 226 "analyse_syntaxique.y"
                                                                                                                   {
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-4].exp), (yyvsp[-1].l_inst), NULL, NULL);
	}
#line 1961 "analyse_syntaxique.c"
    break;

  case 31:
#line 230 "analyse_syntaxique.y"
                                                                                                                                                                               {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-8].exp), (yyvsp[-5].l_inst), NULL, (yyvsp[-1].l_inst));
	}
#line 1970 "analyse_syntaxique.c"
    break;

  case 32:
#line 234 "analyse_syntaxique.y"
                                                                                                                                {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
		//n_instruction* sinon_si = creer_n_conditionnelle($10, $13, NULL, NULL);
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-5].exp), (yyvsp[-2].l_inst), (yyvsp[0].inst), NULL);
	}
#line 1980 "analyse_syntaxique.c"
    break;

  case 33:
#line 239 "analyse_syntaxique.y"
                                                                                                                                                                                            {
		// creer_n_conditionnelle(n_exp* condition, n_l_instructions* instructions_si, n_instruction* liste_sinon_si, n_l_instructions* liste_sinon);
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-9].exp), (yyvsp[-6].l_inst), (yyvsp[-4].inst), (yyvsp[-1].l_inst));
	}
#line 1989 "analyse_syntaxique.c"
    break;

  case 34:
#line 245 "analyse_syntaxique.y"
                                                                                                                         {
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-4].exp), (yyvsp[-1].l_inst), NULL, NULL);
	}
#line 1997 "analyse_syntaxique.c"
    break;

  case 35:
#line 248 "analyse_syntaxique.y"
                                                                                                                                      {
		(yyval.inst) = creer_n_conditionnelle((yyvsp[-5].exp), (yyvsp[-2].l_inst), (yyvsp[0].inst), NULL);
	}
#line 2005 "analyse_syntaxique.c"
    break;

  case 36:
#line 253 "analyse_syntaxique.y"
                                                                                                                         {
		(yyval.inst) = creer_n_boucle_tantque((yyvsp[-4].exp), (yyvsp[-1].l_inst));
	}
#line 2013 "analyse_syntaxique.c"
    break;

  case 37:
#line 258 "analyse_syntaxique.y"
                                          {
		(yyval.inst) = creer_n_retour((yyvsp[-1].exp));
	}
#line 2021 "analyse_syntaxique.c"
    break;

  case 38:
#line 263 "analyse_syntaxique.y"
                                                                                             {
		(yyval.inst) = creer_n_appelF((yyvsp[-4].ident), (yyvsp[-2].l_exp));
	}
#line 2029 "analyse_syntaxique.c"
    break;

  case 39:
#line 268 "analyse_syntaxique.y"
                  {
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2037 "analyse_syntaxique.c"
    break;

  case 40:
#line 273 "analyse_syntaxique.y"
                  {
		(yyval.exp) = creer_n_booleen((yyvsp[0].entier));
	}
#line 2045 "analyse_syntaxique.c"
    break;

  case 41:
#line 276 "analyse_syntaxique.y"
               {
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2053 "analyse_syntaxique.c"
    break;

  case 42:
#line 279 "analyse_syntaxique.y"
                             {
		(yyval.exp) = creer_n_operation_et((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2061 "analyse_syntaxique.c"
    break;

  case 43:
#line 282 "analyse_syntaxique.y"
                             {
		(yyval.exp) = creer_n_operation_ou((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2069 "analyse_syntaxique.c"
    break;

  case 44:
#line 285 "analyse_syntaxique.y"
                      {
		(yyval.exp) = creer_n_operation_non((yyvsp[0].exp));
	}
#line 2077 "analyse_syntaxique.c"
    break;

  case 45:
#line 291 "analyse_syntaxique.y"
                        {
		(yyval.exp) =creer_n_operation('+', (yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2085 "analyse_syntaxique.c"
    break;

  case 46:
#line 294 "analyse_syntaxique.y"
                         {
		(yyval.exp) =creer_n_operation('-', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2093 "analyse_syntaxique.c"
    break;

  case 47:
#line 297 "analyse_syntaxique.y"
                        {
		(yyval.exp) =creer_n_operation('*', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2101 "analyse_syntaxique.c"
    break;

  case 48:
#line 300 "analyse_syntaxique.y"
                          {
		(yyval.exp) =creer_n_operation('/', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2109 "analyse_syntaxique.c"
    break;

  case 49:
#line 303 "analyse_syntaxique.y"
                          {
		(yyval.exp) =creer_n_operation('%', (yyvsp[-2].exp) , (yyvsp[0].exp));
	}
#line 2117 "analyse_syntaxique.c"
    break;

  case 50:
#line 306 "analyse_syntaxique.y"
                                 {
		(yyval.exp) =creer_n_operation('-', creer_n_entier(0), (yyvsp[0].exp));
	}
#line 2125 "analyse_syntaxique.c"
    break;

  case 51:
#line 309 "analyse_syntaxique.y"
                                                          {
		(yyval.exp) = (yyvsp[-1].exp);
	}
#line 2133 "analyse_syntaxique.c"
    break;

  case 52:
#line 312 "analyse_syntaxique.y"
                              {
		(yyval.exp) = creer_n_operation('>', (yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2141 "analyse_syntaxique.c"
    break;

  case 53:
#line 315 "analyse_syntaxique.y"
                                   {
		(yyval.exp) = creer_n_operation_supeg((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2149 "analyse_syntaxique.c"
    break;

  case 54:
#line 318 "analyse_syntaxique.y"
                              {
		(yyval.exp) = creer_n_operation('<', (yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2157 "analyse_syntaxique.c"
    break;

  case 55:
#line 321 "analyse_syntaxique.y"
                                   {
		(yyval.exp) = creer_n_operation_infeg((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2165 "analyse_syntaxique.c"
    break;

  case 56:
#line 324 "analyse_syntaxique.y"
                         {
		(yyval.exp) = creer_n_operation_egal((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2173 "analyse_syntaxique.c"
    break;

  case 57:
#line 327 "analyse_syntaxique.y"
                              {
		(yyval.exp) = creer_n_operation_diff((yyvsp[-2].exp), (yyvsp[0].exp));
	}
#line 2181 "analyse_syntaxique.c"
    break;

  case 58:
#line 330 "analyse_syntaxique.y"
                  {
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2189 "analyse_syntaxique.c"
    break;

  case 59:
#line 339 "analyse_syntaxique.y"
                  {
		(yyval.l_exp) = creer_n_l_exp((yyvsp[0].exp), NULL);
	}
#line 2197 "analyse_syntaxique.c"
    break;

  case 60:
#line 342 "analyse_syntaxique.y"
                                           {
		(yyval.l_exp) = creer_n_l_exp((yyvsp[-2].exp), (yyvsp[0].l_exp));
	}
#line 2205 "analyse_syntaxique.c"
    break;

  case 61:
#line 347 "analyse_syntaxique.y"
                      {
		/*if (chercher_table_symboles(table,$1) == NULL) {
			perror("Variable non déclarée");
		} else {*/
		(yyval.exp) = (n_exp*) creer_n_variable((yyvsp[0].ident));
		//}
	}
#line 2217 "analyse_syntaxique.c"
    break;

  case 62:
#line 354 "analyse_syntaxique.y"
                 {
		(yyval.exp) = creer_n_entier((yyvsp[0].entier));
	}
#line 2225 "analyse_syntaxique.c"
    break;

  case 63:
#line 361 "analyse_syntaxique.y"
                                                       {
		(yyval.exp) = creer_n_lire();
	}
#line 2233 "analyse_syntaxique.c"
    break;

  case 64:
#line 364 "analyse_syntaxique.y"
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
#line 2252 "analyse_syntaxique.c"
    break;

  case 65:
#line 378 "analyse_syntaxique.y"
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
#line 2267 "analyse_syntaxique.c"
    break;


#line 2271 "analyse_syntaxique.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 388 "analyse_syntaxique.y"


int yyerror(const char *s) {
    printf("yyerror : %s\n",s);
    return 0;
}

