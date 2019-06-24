/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntax.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  extern int yylex();
  extern void yyerror (const char *);
  extern int yylineno;

  FILE* file = NULL;

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    pr_program = 258,
    pr_id = 259,
    pr_begin = 260,
    pr_end = 261,
    pr_var = 262,
    pr_integer = 263,
    pr_real = 264,
    pr_const = 265,
    pr_read = 266,
    pr_write = 267,
    pr_procedure = 268,
    pr_if = 269,
    pr_then = 270,
    pr_else = 271,
    pr_do = 272,
    pr_while = 273,
    pr_for = 274,
    pr_to = 275,
    op_atribuicao = 276,
    op_ari_igual = 277,
    op_ari_mult = 278,
    op_ari_div = 279,
    op_ari_adi = 280,
    op_ari_sub = 281,
    op_rel_igual = 282,
    op_rel_diferente = 283,
    op_rel_maior = 284,
    op_rel_menor = 285,
    op_rel_maiorIgual = 286,
    op_rel_menorIgual = 287,
    ponto = 288,
    ponto_virgula = 289,
    virgula = 290,
    dois_pontos = 291,
    abre_par = 292,
    fecha_par = 293,
    numero_int = 294,
    numero_real = 295
  };
#endif
/* Tokens.  */
#define pr_program 258
#define pr_id 259
#define pr_begin 260
#define pr_end 261
#define pr_var 262
#define pr_integer 263
#define pr_real 264
#define pr_const 265
#define pr_read 266
#define pr_write 267
#define pr_procedure 268
#define pr_if 269
#define pr_then 270
#define pr_else 271
#define pr_do 272
#define pr_while 273
#define pr_for 274
#define pr_to 275
#define op_atribuicao 276
#define op_ari_igual 277
#define op_ari_mult 278
#define op_ari_div 279
#define op_ari_adi 280
#define op_ari_sub 281
#define op_rel_igual 282
#define op_rel_diferente 283
#define op_rel_maior 284
#define op_rel_menor 285
#define op_rel_maiorIgual 286
#define op_rel_menorIgual 287
#define ponto 288
#define ponto_virgula 289
#define virgula 290
#define dois_pontos 291
#define abre_par 292
#define fecha_par 293
#define numero_int 294
#define numero_real 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "syntax.y" /* yacc.c:355  */

	int integer;
	char *string;
	double real;

#line 204 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    56,    59,    62,    63,    66,    67,    70,
      71,    74,    77,    78,    81,    82,    85,    86,    89,    92,
      93,    96,    99,   102,   103,   106,   109,   110,   113,   114,
     117,   118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   132,   133,   136,   137,   138,   139,   140,   141,   144,
     147,   148,   149,   152,   153,   156,   157,   160,   163,   164,
     167,   168,   171,   172,   173,   176,   177
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "pr_program", "pr_id", "pr_begin",
  "pr_end", "pr_var", "pr_integer", "pr_real", "pr_const", "pr_read",
  "pr_write", "pr_procedure", "pr_if", "pr_then", "pr_else", "pr_do",
  "pr_while", "pr_for", "pr_to", "op_atribuicao", "op_ari_igual",
  "op_ari_mult", "op_ari_div", "op_ari_adi", "op_ari_sub", "op_rel_igual",
  "op_rel_diferente", "op_rel_maior", "op_rel_menor", "op_rel_maiorIgual",
  "op_rel_menorIgual", "ponto", "ponto_virgula", "virgula", "dois_pontos",
  "abre_par", "fecha_par", "numero_int", "numero_real", "$accept",
  "PROGRAMA", "CORPO", "DC", "DC_C", "DC_V", "TIPO_VAR", "VARIAVEIS",
  "MAIS_VAR", "DC_P", "PARAMETROS", "LISTA_PAR", "MAIS_PAR", "CORPO_P",
  "DC_LOC", "LISTA_ARG", "ARGUMENTOS", "MAIS_ID", "PFALSA", "COMANDOS",
  "CMD", "CONDICAO", "RELACAO", "EXPRESSAO", "OP_UN", "OUTROS_TERMOS",
  "OP_AD", "TERMO", "MAIS_FATORES", "OP_MUL", "FATOR", "NUMERO", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

#define YYPACT_NINF -94

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-94)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,     2,    17,   -30,   -94,    29,    43,    20,    49,    27,
      33,   -94,     4,    59,    51,   -19,   -18,     4,    28,    31,
      -1,    32,    62,    61,    36,    37,    35,    70,   -94,   -94,
     -94,    41,    -1,    72,   -94,    71,    59,    59,   -94,   -94,
      63,    30,     6,     3,     1,    58,   -94,     4,    59,   -94,
      24,    44,    29,   -94,    46,    45,   -94,    47,    48,     4,
      -1,   -94,   -94,   -94,   -94,   -94,   -94,    -1,   -94,    -1,
      26,   -94,   -94,   -94,   -94,    -1,    50,    52,    53,   -94,
     -94,   -94,   -94,    55,    59,    57,   -94,    72,   -94,   -94,
     -94,   -94,    66,   -94,   -94,    56,   -94,   -94,   -94,     6,
       3,    67,    76,    75,    27,    60,    64,    27,   -94,     4,
     -94,   -94,    26,   -94,     4,     4,    65,   -94,    24,   -94,
     -94,    51,    82,   -94,   -94,   -94,   -94,    80,    69,   -94,
       4,     4,    59,   -94,    92,   -94,   -94,    73,   -94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     6,     0,     0,     0,     8,
       0,     2,    31,     0,    15,     0,    24,    31,     0,     0,
      52,     0,     0,     0,     0,    13,     0,     0,     4,    65,
      66,     0,    52,     0,    38,     0,     0,     0,    50,    51,
       0,     0,     0,    54,     0,     0,     3,    31,     0,    11,
       0,    17,     6,    37,    27,     0,    39,     0,     0,     0,
      52,    43,    44,    47,    48,    45,    46,    52,    62,    52,
      59,    63,    55,    56,    49,    52,     0,     0,     0,    30,
      12,    10,     9,     0,     0,     0,     5,     0,    25,    23,
      32,    33,    29,    42,    41,     0,    60,    61,    57,     0,
      54,     0,     0,     0,     8,     0,     0,     8,    26,     0,
      36,    64,    59,    53,     0,     0,     0,     7,     0,    16,
      22,    15,     0,    28,    58,    35,    34,     0,    20,    14,
      31,     0,     0,    18,     0,    40,    19,     0,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -94,   -94,   -94,   -94,    54,   -93,   -13,     0,   -94,   -22,
     -94,   -32,   -94,   -94,   -94,   -94,    14,   -94,   -94,   -17,
     -58,    68,   -94,   -25,   -94,     8,   -94,    34,    -2,   -94,
      12,    99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,     9,    14,    83,   105,    49,    28,
      85,   106,   133,   121,   122,    34,    55,    88,   110,    23,
      24,    40,    67,    41,    42,    74,    75,    43,    98,    99,
      70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    92,    76,    32,     5,   -52,     3,    53,    16,    17,
      68,   117,     1,    26,   120,    18,    19,     4,    20,    33,
      29,    30,    21,    22,    38,    39,    38,    39,    72,    73,
      79,    60,    81,    82,    13,    93,    57,    58,   -52,     6,
     -52,   -52,    94,    69,    95,    29,    30,    10,    80,    96,
      97,   123,    61,    11,    12,    15,   125,   126,    62,    63,
      64,    65,    66,    25,    27,    36,    45,    46,    37,    44,
      47,    50,    48,   135,    51,    52,    54,    56,    59,    78,
      87,    84,   109,    89,   114,    90,    91,   130,   101,   104,
     102,   107,   103,   115,   111,   116,   118,   131,   137,   129,
     136,   108,   119,   132,   127,   128,    86,   138,   113,   100,
     124,   112,    77,   134,    31
};

static const yytype_uint8 yycheck[] =
{
      17,    59,     1,    21,    34,     4,     4,    32,     4,     5,
       4,   104,     3,    13,   107,    11,    12,     0,    14,    37,
      39,    40,    18,    19,    25,    26,    25,    26,    25,    26,
      47,     1,     8,     9,     7,    60,    36,    37,    37,    10,
      39,    40,    67,    37,    69,    39,    40,     4,    48,    23,
      24,   109,    22,    33,     5,    22,   114,   115,    28,    29,
      30,    31,    32,     4,    13,    37,     4,     6,    37,    37,
      34,    36,    35,   131,     4,    34,     4,     6,    15,    21,
      34,    37,    16,    38,    17,    38,    38,     5,    38,    34,
      38,    34,    39,    17,    38,    20,    36,    17,     6,   121,
     132,    87,    38,    34,    39,   118,    52,    34,   100,    75,
     112,    99,    44,   130,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    42,     4,     0,    34,    10,    43,    44,    45,
       4,    33,     5,     7,    46,    22,     4,     5,    11,    12,
      14,    18,    19,    60,    61,     4,    48,    13,    50,    39,
      40,    72,    21,    37,    56,    60,    37,    37,    25,    26,
      62,    64,    65,    68,    37,     4,     6,    34,    35,    49,
      36,     4,    34,    64,     4,    57,     6,    48,    48,    15,
       1,    22,    28,    29,    30,    31,    32,    63,     4,    37,
      71,    72,    25,    26,    66,    67,     1,    62,    21,    60,
      48,     8,     9,    47,    37,    51,    45,    34,    58,    38,
      38,    38,    61,    64,    64,    64,    23,    24,    69,    70,
      68,    38,    38,    39,    34,    48,    52,    34,    57,    16,
      59,    38,    71,    66,    17,    17,    20,    46,    36,    38,
      46,    54,    55,    61,    69,    61,    61,    39,    47,    50,
       5,    17,    34,    53,    60,    61,    52,     6,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    44,    45,    45,    46,    46,    47,
      47,    48,    49,    49,    50,    50,    51,    51,    52,    53,
      53,    54,    55,    56,    56,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    64,
      65,    65,    65,    66,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     3,     6,     0,     6,     0,     1,
       1,     2,     2,     0,     6,     0,     3,     0,     4,     2,
       0,     5,     1,     3,     0,     2,     2,     0,     2,     0,
       3,     0,     4,     4,     6,     6,     5,     3,     2,     3,
       8,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     0,     3,     0,     1,     1,     3,     3,     0,
       1,     1,     1,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 53 "syntax.y" /* yacc.c:1646  */
    {}
#line 1390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "syntax.y" /* yacc.c:1646  */
    {}
#line 1396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "syntax.y" /* yacc.c:1646  */
    {}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "syntax.y" /* yacc.c:1646  */
    {}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 66 "syntax.y" /* yacc.c:1646  */
    {}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "syntax.y" /* yacc.c:1646  */
    {}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "syntax.y" /* yacc.c:1646  */
    {}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "syntax.y" /* yacc.c:1646  */
    {}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "syntax.y" /* yacc.c:1646  */
    {}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 78 "syntax.y" /* yacc.c:1646  */
    {}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "syntax.y" /* yacc.c:1646  */
    {}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "syntax.y" /* yacc.c:1646  */
    {}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "syntax.y" /* yacc.c:1646  */
    {}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "syntax.y" /* yacc.c:1646  */
    {}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "syntax.y" /* yacc.c:1646  */
    {}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "syntax.y" /* yacc.c:1646  */
    {}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 93 "syntax.y" /* yacc.c:1646  */
    {}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "syntax.y" /* yacc.c:1646  */
    {}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "syntax.y" /* yacc.c:1646  */
    {}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 102 "syntax.y" /* yacc.c:1646  */
    {}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "syntax.y" /* yacc.c:1646  */
    {}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "syntax.y" /* yacc.c:1646  */
    {}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 109 "syntax.y" /* yacc.c:1646  */
    {}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "syntax.y" /* yacc.c:1646  */
    {}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "syntax.y" /* yacc.c:1646  */
    {}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 114 "syntax.y" /* yacc.c:1646  */
    {}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 117 "syntax.y" /* yacc.c:1646  */
    {}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 118 "syntax.y" /* yacc.c:1646  */
    {}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 121 "syntax.y" /* yacc.c:1646  */
    {}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 122 "syntax.y" /* yacc.c:1646  */
    {}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "syntax.y" /* yacc.c:1646  */
    {}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 124 "syntax.y" /* yacc.c:1646  */
    {  }
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "syntax.y" /* yacc.c:1646  */
    {}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "syntax.y" /* yacc.c:1646  */
    {}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "syntax.y" /* yacc.c:1646  */
    {}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 128 "syntax.y" /* yacc.c:1646  */
    {}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "syntax.y" /* yacc.c:1646  */
    {}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "syntax.y" /* yacc.c:1646  */
    {}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "syntax.y" /* yacc.c:1646  */
    {  }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 136 "syntax.y" /* yacc.c:1646  */
    {}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 137 "syntax.y" /* yacc.c:1646  */
    {}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 138 "syntax.y" /* yacc.c:1646  */
    {}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 139 "syntax.y" /* yacc.c:1646  */
    {}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 140 "syntax.y" /* yacc.c:1646  */
    {}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 141 "syntax.y" /* yacc.c:1646  */
    {}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 144 "syntax.y" /* yacc.c:1646  */
    {}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 147 "syntax.y" /* yacc.c:1646  */
    {}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "syntax.y" /* yacc.c:1646  */
    {}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 149 "syntax.y" /* yacc.c:1646  */
    {}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 152 "syntax.y" /* yacc.c:1646  */
    {}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 153 "syntax.y" /* yacc.c:1646  */
    {}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 156 "syntax.y" /* yacc.c:1646  */
    {}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 157 "syntax.y" /* yacc.c:1646  */
    {}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 160 "syntax.y" /* yacc.c:1646  */
    {}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 163 "syntax.y" /* yacc.c:1646  */
    {}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 164 "syntax.y" /* yacc.c:1646  */
    {}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 167 "syntax.y" /* yacc.c:1646  */
    {}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "syntax.y" /* yacc.c:1646  */
    {}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 171 "syntax.y" /* yacc.c:1646  */
    {}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "syntax.y" /* yacc.c:1646  */
    {}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "syntax.y" /* yacc.c:1646  */
    {}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 176 "syntax.y" /* yacc.c:1646  */
    {}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 177 "syntax.y" /* yacc.c:1646  */
    {}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1766 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 180 "syntax.y" /* yacc.c:1906  */


int main(int argc, char *argv[]){
  /* Abertura do arquivo de entrada. */
  if ( argc > 1 ) {
    file = fopen(argv[1], "r");
  }

  yyparse();





  fclose(file);

  return 0;
}
