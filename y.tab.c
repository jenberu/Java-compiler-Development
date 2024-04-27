
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yacc2.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
#include "semantic.h"




extern int symbol_count;

extern int line_number;
extern int yylex();
extern FILE *yyin;
void yyerror(const char *s);
void semantic_error(const char *msg);
extern int scope_id;

// Define YYSTYPE struct for semantic values
typedef struct {
    char* strval;
    float floatval;
    int intval;
    char charval;
} YYSTYPE;

#define YYSTYPE_IS_DECLARED


/* Line 189 of yacc.c  */
#line 104 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     STRING_CONST = 259,
     VOID = 260,
     FLOAT_CONST = 261,
     CHAR_CONST = 262,
     INT_CONST = 263,
     MAIN = 264,
     CLASS = 265,
     STATIC = 266,
     PRINTLN = 267,
     DOUBLE = 268,
     NEW = 269,
     CHAR = 270,
     IMPORT = 271,
     BREAK = 272,
     FOR = 273,
     RETURN = 274,
     DO = 275,
     WHILE = 276,
     IF = 277,
     ELSE = 278,
     SWITCH = 279,
     PRIVATE = 280,
     PROTECTED = 281,
     PUBLIC = 282,
     IMPLEMENTS = 283,
     THIS = 284,
     SEMICOLON = 285,
     KEYWORD = 286,
     EXTENDS = 287,
     COMMA = 288,
     ASSIGN = 289,
     MINUS = 290,
     COLON = 291,
     PLUS = 292,
     MULTIPLY = 293,
     DIVIDE = 294,
     MODULO = 295,
     DOT = 296,
     RBRACKET = 297,
     LBRACKET = 298,
     LESS_THAN = 299,
     LESS_EQUAL = 300,
     GREATER_THAN = 301,
     GREATER_EQUAL = 302,
     EQUALS = 303,
     NOT_EQUALS = 304,
     AND = 305,
     OR = 306,
     NOT = 307,
     LBRACE = 308,
     RBRACE = 309,
     LPAREN = 310,
     RPAREN = 311,
     INT = 312,
     FLOAT = 313,
     STRING = 314,
     IN = 315,
     OUT = 316,
     SYSTEM = 317,
     JAVA_IMPORT = 318,
     DEFAULT = 319,
     CASE = 320
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_CONST 259
#define VOID 260
#define FLOAT_CONST 261
#define CHAR_CONST 262
#define INT_CONST 263
#define MAIN 264
#define CLASS 265
#define STATIC 266
#define PRINTLN 267
#define DOUBLE 268
#define NEW 269
#define CHAR 270
#define IMPORT 271
#define BREAK 272
#define FOR 273
#define RETURN 274
#define DO 275
#define WHILE 276
#define IF 277
#define ELSE 278
#define SWITCH 279
#define PRIVATE 280
#define PROTECTED 281
#define PUBLIC 282
#define IMPLEMENTS 283
#define THIS 284
#define SEMICOLON 285
#define KEYWORD 286
#define EXTENDS 287
#define COMMA 288
#define ASSIGN 289
#define MINUS 290
#define COLON 291
#define PLUS 292
#define MULTIPLY 293
#define DIVIDE 294
#define MODULO 295
#define DOT 296
#define RBRACKET 297
#define LBRACKET 298
#define LESS_THAN 299
#define LESS_EQUAL 300
#define GREATER_THAN 301
#define GREATER_EQUAL 302
#define EQUALS 303
#define NOT_EQUALS 304
#define AND 305
#define OR 306
#define NOT 307
#define LBRACE 308
#define RBRACE 309
#define LPAREN 310
#define RPAREN 311
#define INT 312
#define FLOAT 313
#define STRING 314
#define IN 315
#define OUT 316
#define SYSTEM 317
#define JAVA_IMPORT 318
#define DEFAULT 319
#define CASE 320




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 214 of yacc.c  */
#line 279 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 291 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   736

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNRULES -- Number of states.  */
#define YYNSTATES  352

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    18,    19,
      21,    24,    25,    26,    27,    39,    40,    41,    42,    53,
      54,    61,    62,    63,    72,    74,    77,    79,    82,    84,
      87,    89,    92,    93,    94,    95,   108,   109,   110,   122,
     123,   124,   136,   137,   138,   151,   153,   154,   155,   156,
     172,   175,   180,   181,   183,   184,   186,   188,   190,   194,
     198,   202,   206,   209,   212,   215,   217,   219,   221,   224,
     227,   229,   231,   233,   236,   238,   243,   249,   254,   259,
     265,   272,   280,   282,   286,   295,   297,   298,   302,   306,
     316,   318,   320,   324,   328,   329,   330,   339,   345,   348,
     350,   351,   356,   358,   362,   366,   370,   374,   376,   378,
     380,   382,   384,   390,   402,   410,   418,   428,   440,   451,
     462,   464,   465,   469,   472,   480,   482,   485,   487,   489,
     494,   498,   502,   506,   510,   514,   518,   522,   526,   530,
     534,   538,   542,   546,   550,   553,   557,   559,   563,   567,
     570,   574,   576,   578,   580,   582
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    69,    -1,    68,    67,    -1,    68,    -1,
      16,    63,    -1,    71,    -1,    69,    71,    -1,    -1,    99,
      -1,    70,    99,    -1,    -1,    -1,    -1,    27,    10,     3,
      72,    32,     3,    73,    53,    74,    81,    54,    -1,    -1,
      -1,    -1,    10,     3,    75,    32,     3,    76,    53,    77,
      81,    54,    -1,    -1,    10,     3,    53,    78,    81,    54,
      -1,    -1,    -1,    27,    10,     3,    79,    53,    80,    81,
      54,    -1,    70,    -1,    70,    81,    -1,    82,    -1,    82,
      81,    -1,    92,    -1,    92,    81,    -1,    71,    -1,    71,
      81,    -1,    -1,    -1,    -1,    97,    91,   114,     3,    83,
      55,    95,    56,    53,    84,    96,    54,    -1,    -1,    -1,
      91,   114,     3,    85,    55,    95,    56,    53,    86,    96,
      54,    -1,    -1,    -1,    91,     5,     3,    87,    55,    95,
      56,    53,    88,    96,    54,    -1,    -1,    -1,    97,    91,
       5,     3,    89,    55,    95,    56,    53,    90,    96,    54,
      -1,    11,    -1,    -1,    -1,    -1,    27,    11,     5,     9,
      55,    59,    43,    42,     3,    93,    56,    53,    94,    96,
      54,    -1,   114,     3,    -1,    95,    33,   114,     3,    -1,
      -1,    70,    -1,    -1,    27,    -1,    25,    -1,    26,    -1,
       3,    34,     3,    -1,     3,    34,     4,    -1,     3,    34,
       8,    -1,     3,    34,     6,    -1,   124,    30,    -1,   110,
      30,    -1,    98,    30,    -1,   115,    -1,   116,    -1,   118,
      -1,   105,    30,    -1,   103,    30,    -1,   106,    -1,   108,
      -1,   119,    -1,   100,    30,    -1,   101,    -1,     3,    34,
     124,    30,    -1,   114,     3,    34,   124,    30,    -1,   114,
       3,    43,    42,    -1,   114,    43,    42,     3,    -1,   114,
       3,    43,   125,    42,    -1,   100,    34,    53,   102,    54,
      30,    -1,     3,    43,   125,    42,    34,   124,    30,    -1,
     124,    -1,   102,    33,   124,    -1,    62,    41,    61,    41,
      12,    55,   104,    56,    -1,   124,    -1,    -1,     3,    37,
      37,    -1,     3,    35,    35,    -1,     3,     3,    34,    14,
       3,    55,   107,    56,    30,    -1,   124,    -1,   125,    -1,
     125,    33,   124,    -1,    62,    41,    60,    -1,    -1,    -1,
       3,    41,     3,   109,    55,   107,    56,    30,    -1,     3,
      55,   107,    56,    30,    -1,   114,   111,    -1,   113,    -1,
      -1,   111,    33,   112,   113,    -1,     3,    -1,     3,    34,
       3,    -1,     3,    34,     8,    -1,     3,    34,     4,    -1,
       3,    34,     6,    -1,    57,    -1,    58,    -1,    59,    -1,
      15,    -1,    13,    -1,    22,    55,   124,    56,   117,    -1,
      22,    55,   124,    56,    53,   117,    54,    23,    53,   117,
      54,    -1,    22,    55,   124,    56,    53,   117,    54,    -1,
      21,    55,   124,    56,    53,   117,    54,    -1,    20,    53,
     117,    54,    21,    55,   124,    56,    30,    -1,    18,    55,
     110,    30,   124,    30,   124,    56,    53,   117,    54,    -1,
      18,    55,    30,    30,    30,    56,    56,    53,   117,    54,
      -1,    18,    55,   110,    30,    30,    56,    56,    53,   117,
      54,    -1,    70,    -1,    -1,    19,   124,    30,    -1,    17,
      30,    -1,    24,    55,   124,    56,    53,   120,    54,    -1,
     121,    -1,   120,   121,    -1,   122,    -1,   123,    -1,    65,
     124,    36,    70,    -1,    64,    36,    70,    -1,   124,    37,
     124,    -1,   124,    35,   124,    -1,   124,    38,   124,    -1,
     124,    39,   124,    -1,   124,    40,   124,    -1,   124,    44,
     124,    -1,   124,    45,   124,    -1,   124,    46,   124,    -1,
     124,    47,   124,    -1,   124,    48,   124,    -1,   124,    49,
     124,    -1,   124,    50,   124,    -1,   124,    51,   124,    -1,
      52,   124,    -1,    55,   124,    56,    -1,   125,    -1,   124,
      37,    37,    -1,   124,    35,    35,    -1,    35,   124,    -1,
      37,    37,   124,    -1,     3,    -1,     6,    -1,     8,    -1,
       4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    56,    57,    59,    61,    62,    63,    65,
      66,    72,    93,   107,    72,   108,   123,   136,   108,   137,
     137,   153,   168,   153,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   182,   192,   182,   195,   205,   195,   208,
     220,   208,   222,   233,   222,   237,   238,   240,   242,   240,
     244,   245,   246,   249,   250,   252,   253,   254,   258,   285,
     304,   335,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   393,   394,   395,
     397,   398,   408,   409,   411,   413,   414,   416,   417,   423,
     437,   438,   439,   440,   441,   444,   443,   450,   457,   463,
     464,   464,   470,   484,   519,   531,   543,   555,   557,   560,
     564,   567,   572,   573,   574,   577,   578,   579,   580,   581,
     584,   585,   587,   588,   590,   593,   594,   596,   597,   599,
     602,   606,   610,   612,   614,   621,   623,   625,   627,   629,
     631,   633,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   647,   656,   657,   658,   659
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_CONST", "VOID",
  "FLOAT_CONST", "CHAR_CONST", "INT_CONST", "MAIN", "CLASS", "STATIC",
  "PRINTLN", "DOUBLE", "NEW", "CHAR", "IMPORT", "BREAK", "FOR", "RETURN",
  "DO", "WHILE", "IF", "ELSE", "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC",
  "IMPLEMENTS", "THIS", "SEMICOLON", "KEYWORD", "EXTENDS", "COMMA",
  "ASSIGN", "MINUS", "COLON", "PLUS", "MULTIPLY", "DIVIDE", "MODULO",
  "DOT", "RBRACKET", "LBRACKET", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN",
  "GREATER_EQUAL", "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "INT", "FLOAT", "STRING", "IN", "OUT",
  "SYSTEM", "JAVA_IMPORT", "DEFAULT", "CASE", "$accept", "start",
  "import_statment", "program", "statement_list", "class_declaration",
  "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "class_body", "function_decl", "$@10", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "$@17", "static_func", "main_method", "$@18", "$@19",
  "parm", "func_body", "modifier", "assignment", "statement",
  "array_declaration", "array_intialization", "arrayvalues",
  "system_out_println", "expr_or_string", "increament_decreament",
  "object_creation", "parametr", "fuction_call", "$@20", "declaration",
  "var_declarations", "$@21", "var_declaration", "type_specifier",
  "selection_statement", "iteration_statement",
  "iteration_or_selection_statement_body", "jump_statement",
  "switch_statement", "switch_block_statements", "switch_block_statement",
  "switch_case_statement", "default_case_statement", "expression",
  "primary_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    68,    69,    69,    69,    70,
      70,    72,    73,    74,    71,    75,    76,    77,    71,    78,
      71,    79,    80,    71,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    83,    84,    82,    85,    86,    82,    87,
      88,    82,    89,    90,    82,    91,    91,    93,    94,    92,
      95,    95,    95,    96,    96,    97,    97,    97,    98,    98,
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   102,   102,   103,   104,   104,   105,   105,   106,
     107,   107,   107,   107,   107,   109,   108,   108,   110,   111,
     112,   111,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     0,     1,
       2,     0,     0,     0,    11,     0,     0,     0,    10,     0,
       6,     0,     0,     8,     1,     2,     1,     2,     1,     2,
       1,     2,     0,     0,     0,    12,     0,     0,    11,     0,
       0,    11,     0,     0,    12,     1,     0,     0,     0,    15,
       2,     4,     0,     1,     0,     1,     1,     1,     3,     3,
       3,     3,     2,     2,     2,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     1,     4,     5,     4,     4,     5,
       6,     7,     1,     3,     8,     1,     0,     3,     3,     9,
       1,     1,     3,     3,     0,     0,     8,     5,     2,     1,
       0,     4,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     5,    11,     7,     7,     9,    11,    10,    10,
       1,     0,     3,     2,     7,     1,     2,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     3,     3,     2,
       3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     0,     0,     4,     2,     6,    15,     5,
       0,     1,     3,     7,    19,     0,    11,    32,     0,     0,
       0,   151,   154,   152,   155,   153,    45,   111,   110,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    55,     0,
       0,     0,     0,   107,   108,   109,     0,    24,    30,     0,
      26,     0,    28,    46,     0,     9,     0,    74,     0,     0,
      70,    71,     0,     0,    65,    66,    67,    72,     0,   146,
      16,     0,    22,     0,     0,     0,     0,     0,     0,    94,
     123,     0,   151,     0,   121,     0,     0,     0,     0,   149,
       0,   144,     0,     0,    25,     9,    31,    20,    27,     0,
       0,    29,     0,    64,    73,     0,    69,    68,    63,   102,
       0,    98,    99,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    32,
       0,   151,   154,   152,   153,     0,    88,    87,    95,     0,
       0,     0,    90,   146,     0,     0,     0,   122,   120,     0,
       0,     0,     0,     0,   150,   145,     0,    39,    36,     0,
       0,     0,     0,     0,     0,   100,   148,   132,   147,   131,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    17,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,   102,    10,     0,     0,   121,     0,     0,
       0,     0,     0,    42,    33,     0,    82,   151,   154,   152,
     153,     0,    77,     0,    78,     0,    32,    13,    23,     0,
      94,     0,    93,    97,    92,     0,     0,     0,     0,     0,
     121,   121,   112,     0,     0,     0,    52,    52,     0,     0,
       0,     0,    76,    79,   101,     0,    32,    94,     0,     0,
       0,     0,     0,   103,   105,   106,   104,     0,     0,     0,
       0,     0,     0,   125,   127,   128,     0,    86,     0,     0,
       0,    52,    52,    83,    80,    18,     0,     0,     0,    81,
       0,     0,     0,     0,   115,   114,     0,     0,   124,   126,
       0,     0,    85,     0,     0,    50,     0,     0,     0,    14,
       0,    96,   121,   121,     0,     0,     0,   130,     0,     0,
      84,     0,    40,    37,     0,     0,    89,     0,     0,   121,
     116,   121,   129,    47,    51,    54,    54,    43,    34,   118,
     119,     0,     0,     0,    53,     0,     0,    54,    54,   117,
     113,     0,    41,    38,     0,     0,    48,    44,    35,    54,
       0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    47,    48,    19,   182,   246,    15,
     127,   216,    17,    20,   129,    49,    50,   239,   338,   202,
     326,   201,   325,   238,   337,    51,    52,   333,   349,   268,
     335,    53,    54,    55,    56,    57,   205,    58,   291,    59,
      60,   141,    61,   186,    62,   111,   215,   112,    63,    64,
      65,   149,    66,    67,   262,   263,   264,   265,    68,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -231
static const yytype_int16 yypact[] =
{
      84,    11,   -54,     9,    24,    84,    71,  -231,   -24,  -231,
      41,  -231,  -231,  -231,  -231,    42,    -1,   273,    62,    44,
      52,   194,  -231,  -231,  -231,  -231,  -231,  -231,  -231,    65,
      88,   204,    96,   100,   108,   111,  -231,  -231,    79,   204,
     143,   204,   204,  -231,  -231,  -231,   110,   273,   273,    83,
     273,    20,   273,   174,   156,  -231,    33,  -231,   162,   164,
    -231,  -231,   165,     0,  -231,  -231,  -231,  -231,   394,  -231,
    -231,   196,  -231,   167,   210,   170,   178,   199,   132,   138,
    -231,   309,  -231,   416,   299,   204,   204,   204,   216,   131,
     204,  -231,   433,   163,  -231,  -231,  -231,  -231,  -231,   227,
     229,  -231,    25,  -231,  -231,   180,  -231,  -231,  -231,    17,
     192,   207,  -231,  -231,   334,   340,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   195,  -231,   273,
     236,   221,   222,   231,   234,   455,  -231,  -231,  -231,   215,
     230,   212,   654,   -22,   252,   255,   286,  -231,   299,   242,
     472,   492,   512,   292,   131,  -231,   263,  -231,  -231,   306,
     308,   204,   356,    14,   310,  -231,   375,   131,  -231,   131,
    -231,  -231,  -231,   382,   382,   382,   382,   359,   359,   687,
     671,  -231,   262,   272,   324,  -231,   274,   311,   289,   303,
     204,   320,   154,   318,  -231,   332,   302,    51,   312,   319,
     361,   321,   325,  -231,  -231,   -18,   654,    69,    82,    86,
     126,   534,  -231,   342,  -231,   286,   273,  -231,  -231,   330,
     138,   204,  -231,  -231,   654,   331,   344,   556,   266,   333,
     299,   299,  -231,   114,   343,   335,   357,   357,   346,   352,
     204,   379,  -231,  -231,  -231,   358,   273,   138,   354,   578,
     362,   367,   204,  -231,  -231,  -231,  -231,   204,   371,   372,
     377,   204,    53,  -231,  -231,  -231,   385,   204,   -17,   432,
     -10,   357,   357,   654,  -231,  -231,   383,   380,   417,  -231,
     395,   396,   595,   615,  -231,   427,   299,   637,  -231,  -231,
     410,   401,   654,   357,   405,  -231,   406,    -7,    -6,  -231,
     439,  -231,   299,   299,   421,   445,   423,   299,   299,   483,
    -231,   484,  -231,  -231,   435,   438,  -231,   442,   443,   299,
    -231,   299,   299,  -231,  -231,   299,   299,  -231,  -231,  -231,
    -231,   444,   454,   457,   299,   460,   461,   299,   299,  -231,
    -231,   471,  -231,  -231,   479,   480,  -231,  -231,  -231,   299,
     481,  -231
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,   520,  -231,  -231,   -83,   177,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,   -42,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,   473,  -231,  -231,  -231,  -230,
    -173,  -231,  -231,   -47,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -216,  -231,  -231,   463,  -231,  -231,   338,   -49,  -231,
    -231,  -169,  -231,  -231,  -231,   283,  -231,  -231,     6,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -107
static const yytype_int16 yytable[] =
{
      95,   148,   100,   109,   248,    94,    96,   270,    98,     9,
     101,   190,   139,   143,     8,   240,   293,    82,    22,    10,
      23,    24,    25,   293,    11,    99,   293,   293,   232,    14,
     159,   277,   146,    27,   -91,    28,   241,    83,    27,   294,
      28,   297,   298,   110,    16,    89,   296,    91,    92,   314,
     315,   162,   -21,   160,    21,    22,   212,    23,    24,    25,
     163,   258,   259,   104,    27,    70,    28,   105,    29,    30,
      31,    32,    33,    34,    18,    35,    71,    43,    44,    45,
     135,     1,    43,    44,    45,   142,    39,   183,    40,    10,
      88,   150,   151,   152,     1,    80,   154,   213,     3,  -103,
       2,   194,  -103,    41,   231,    72,    42,   288,    43,    44,
      45,     3,  -105,    46,   148,  -105,  -106,   260,   261,  -106,
     167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   317,   318,    82,    22,    97,    23,    24,
      25,    82,    22,    81,    23,    24,    25,   148,   148,    84,
     331,    93,   332,   336,   143,    85,  -104,    82,    22,  -104,
      23,    24,    25,    86,   344,   345,    87,   206,   211,   116,
     117,   118,    89,    39,   245,    40,   350,     7,   260,   261,
      90,   143,     7,    13,   226,    26,   103,   269,   269,    39,
      41,    40,   106,    42,   107,   108,   224,    73,   227,   128,
     140,   130,   138,   307,   276,   136,    41,    82,    22,    42,
      23,    24,    25,   131,   132,   137,   133,    24,   134,   148,
     148,   153,   269,   269,   156,   322,   142,   249,    74,    75,
     157,    76,   158,   161,   164,    77,   148,    78,   148,    39,
     165,    40,   334,   334,   311,    39,   273,    40,   181,    79,
     184,   -58,   -59,   142,   334,   334,    41,   187,   282,    42,
     194,   -61,    41,   283,   -60,    42,   334,   287,   189,   253,
     254,   188,   255,   292,   256,   194,    21,    22,   -46,    23,
      24,    25,   191,     1,    26,   192,    27,   194,    28,   193,
      29,    30,    31,    32,    33,    34,   195,    35,    36,    37,
      38,   199,    21,    22,   200,    23,    24,    25,    39,   203,
      40,   204,    27,   214,    28,   217,    29,    30,    31,    32,
      33,    34,    27,    35,    28,    41,   218,   219,    42,   220,
      43,    44,    45,   223,    39,    46,    40,    82,    22,   144,
      23,    24,    25,    82,    22,   221,    23,    24,    25,   222,
     225,    41,   228,   229,    42,   230,    43,    44,    45,   207,
     208,    46,   209,    24,   210,   233,    43,    44,    45,   166,
      27,    40,    28,   235,   234,    39,   236,   168,    82,    22,
     237,    23,    24,    25,   243,   247,    41,   250,   257,    42,
     267,    39,    41,    40,   114,    42,   115,   116,   117,   118,
     251,   271,   266,   119,   120,   121,   122,   272,    41,   274,
     278,    42,   275,   286,    43,    44,    45,   114,   280,   115,
     116,   117,   118,   281,   113,   284,   285,    41,   290,   114,
      42,   115,   116,   117,   118,   295,   300,   299,   119,   120,
     121,   122,   123,   124,   125,   126,   147,   301,   302,   303,
     306,   114,   309,   115,   116,   117,   118,   310,   312,   313,
     119,   120,   121,   122,   123,   124,   125,   126,   114,   316,
     115,   116,   117,   118,   319,   320,   321,   119,   120,   121,
     122,   123,   124,   125,   126,   185,   323,   324,   327,   155,
     114,   328,   115,   116,   117,   118,   329,   330,   339,   119,
     120,   121,   122,   123,   124,   125,   126,   114,   340,   115,
     116,   117,   118,   341,   342,   343,   119,   120,   121,   122,
     123,   124,   125,   126,   346,    12,   102,   114,   196,   115,
     116,   117,   118,   347,   348,   351,   119,   120,   121,   122,
     123,   124,   125,   126,   145,   289,     0,   114,   197,   115,
     116,   117,   118,   244,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   242,     0,     0,     0,   198,   114,
       0,   115,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   252,     0,     0,     0,
       0,   114,     0,   115,   116,   117,   118,     0,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   279,     0,
       0,     0,     0,   114,     0,   115,   116,   117,   118,     0,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   126,
     114,     0,   115,   116,   117,   118,     0,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,     0,     0,     0,
     114,   304,   115,   116,   117,   118,     0,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,     0,     0,     0,
       0,   305,   114,   308,   115,   116,   117,   118,     0,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   114,
       0,   115,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   114,     0,   115,   116,
     117,   118,     0,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   114,     0,   115,   116,   117,   118,     0,     0,
       0,   119,   120,   121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      47,    84,    51,     3,   220,    47,    48,   237,    50,    63,
      52,    33,    78,    79,     3,    33,    33,     3,     4,    10,
       6,     7,     8,    33,     0,     5,    33,    33,   197,    53,
       5,   247,    81,    13,    56,    15,    54,    31,    13,    56,
      15,   271,   272,    43,     3,    39,    56,    41,    42,    56,
      56,    34,    53,   102,     3,     4,    42,     6,     7,     8,
      43,   230,   231,    30,    13,     3,    15,    34,    17,    18,
      19,    20,    21,    22,    32,    24,    32,    57,    58,    59,
      74,    10,    57,    58,    59,    79,    35,   129,    37,    10,
      11,    85,    86,    87,    10,    30,    90,   163,    27,    30,
      16,   148,    33,    52,    53,    53,    55,    54,    57,    58,
      59,    27,    30,    62,   197,    33,    30,    64,    65,    33,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   302,   303,     3,     4,    54,     6,     7,
       8,     3,     4,    55,     6,     7,     8,   230,   231,    53,
     319,    41,   321,   326,   220,    55,    30,     3,     4,    33,
       6,     7,     8,    55,   337,   338,    55,   161,   162,    38,
      39,    40,   166,    35,   216,    37,   349,     0,    64,    65,
      37,   247,     5,     6,    30,    11,    30,   236,   237,    35,
      52,    37,    30,    55,    30,    30,   190,     3,   192,     3,
      62,    34,     3,   286,   246,    35,    52,     3,     4,    55,
       6,     7,     8,     3,     4,    37,     6,     7,     8,   302,
     303,     5,   271,   272,    61,   308,   220,   221,    34,    35,
       3,    37,     3,    53,    42,    41,   319,    43,   321,    35,
      33,    37,   325,   326,   293,    35,   240,    37,    53,    55,
      14,    30,    30,   247,   337,   338,    52,    42,   252,    55,
     307,    30,    52,   257,    30,    55,   349,   261,    56,     3,
       4,    41,     6,   267,     8,   322,     3,     4,     5,     6,
       7,     8,    30,    10,    11,    30,    13,   334,    15,     3,
      17,    18,    19,    20,    21,    22,    54,    24,    25,    26,
      27,     9,     3,     4,    41,     6,     7,     8,    35,     3,
      37,     3,    13,     3,    15,    53,    17,    18,    19,    20,
      21,    22,    13,    24,    15,    52,    54,     3,    55,    55,
      57,    58,    59,    30,    35,    62,    37,     3,     4,    30,
       6,     7,     8,     3,     4,    34,     6,     7,     8,    60,
      30,    52,    34,    21,    55,    53,    57,    58,    59,     3,
       4,    62,     6,     7,     8,    53,    57,    58,    59,    35,
      13,    37,    15,    12,    55,    35,    55,    37,     3,     4,
      55,     6,     7,     8,    42,    55,    52,    56,    55,    55,
      55,    35,    52,    37,    35,    55,    37,    38,    39,    40,
      56,    55,    59,    44,    45,    46,    47,    55,    52,    30,
      56,    55,    54,    36,    57,    58,    59,    35,    56,    37,
      38,    39,    40,    56,    30,    54,    54,    52,    43,    35,
      55,    37,    38,    39,    40,     3,    56,    54,    44,    45,
      46,    47,    48,    49,    50,    51,    30,    30,    53,    53,
      23,    35,    42,    37,    38,    39,    40,    56,    53,    53,
      44,    45,    46,    47,    48,    49,    50,    51,    35,    30,
      37,    38,    39,    40,    53,    30,    53,    44,    45,    46,
      47,    48,    49,    50,    51,    30,     3,     3,    53,    56,
      35,    53,    37,    38,    39,    40,    54,    54,    54,    44,
      45,    46,    47,    48,    49,    50,    51,    35,    54,    37,
      38,    39,    40,    56,    54,    54,    44,    45,    46,    47,
      48,    49,    50,    51,    53,     5,    53,    35,    56,    37,
      38,    39,    40,    54,    54,    54,    44,    45,    46,    47,
      48,    49,    50,    51,    81,   262,    -1,    35,    56,    37,
      38,    39,    40,   215,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    30,    -1,    -1,    -1,    56,    35,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    30,    -1,    -1,    -1,
      -1,    35,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    30,    -1,
      -1,    -1,    -1,    35,    -1,    37,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      35,    -1,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      35,    56,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    56,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    35,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    35,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    35,    -1,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    16,    27,    67,    68,    69,    71,     3,    63,
      10,     0,    67,    71,    53,    75,     3,    78,    32,    72,
      79,     3,     4,     6,     7,     8,    11,    13,    15,    17,
      18,    19,    20,    21,    22,    24,    25,    26,    27,    35,
      37,    52,    55,    57,    58,    59,    62,    70,    71,    81,
      82,    91,    92,    97,    98,    99,   100,   101,   103,   105,
     106,   108,   110,   114,   115,   116,   118,   119,   124,   125,
       3,    32,    53,     3,    34,    35,    37,    41,    43,    55,
      30,    55,     3,   124,    53,    55,    55,    55,    11,   124,
      37,   124,   124,    41,    81,    99,    81,    54,    81,     5,
     114,    81,    91,    30,    30,    34,    30,    30,    30,     3,
      43,   111,   113,    30,    35,    37,    38,    39,    40,    44,
      45,    46,    47,    48,    49,    50,    51,    76,     3,    80,
      34,     3,     4,     6,     8,   124,    35,    37,     3,   125,
      62,   107,   124,   125,    30,   110,   114,    30,    70,   117,
     124,   124,   124,     5,   124,    56,    61,     3,     3,     5,
     114,    53,    34,    43,    42,    33,    35,   124,    37,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,    53,    73,    81,    14,    30,   109,    42,    41,    56,
      33,    30,    30,     3,    99,    54,    56,    56,    56,     9,
      41,    87,    85,     3,     3,   102,   124,     3,     4,     6,
       8,   124,    42,   125,     3,   112,    77,    53,    54,     3,
      55,    34,    60,    30,   124,    30,    30,   124,    34,    21,
      53,    53,   117,    53,    55,    12,    55,    55,    89,    83,
      33,    54,    30,    42,   113,    81,    74,    55,   107,   124,
      56,    56,    30,     3,     4,     6,     8,    55,   117,   117,
      64,    65,   120,   121,   122,   123,    59,    55,    95,   114,
      95,    55,    55,   124,    30,    54,    81,   107,    56,    30,
      56,    56,   124,   124,    54,    54,    36,   124,    54,   121,
      43,   104,   124,    33,    56,     3,    56,    95,    95,    54,
      56,    30,    53,    53,    56,    56,    23,    70,    36,    42,
      56,   114,    53,    53,    56,    56,    30,   117,   117,    53,
      30,    53,    70,     3,     3,    88,    86,    53,    53,    54,
      54,   117,   117,    93,    70,    96,    96,    90,    84,    54,
      54,    56,    54,    54,    96,    96,    53,    54,    54,    94,
      96,    54
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 61 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 72 "yacc2.y"
    {
                                            char* identifier =(yyvsp[(3) - (3)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                            
                              //int token = search_symbol_table(identifier);
                             if(check_class_redeclaration(identifier)) {
                                semantic_error("the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                                            
                                            
                                       
                }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 93 "yacc2.y"
    {char* identifier =(yyvsp[(6) - (6)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(6) - (6)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                  int token = search_symbol_table(identifier);
                            if (token == -1) {
                  semantic_error("unknown class ,the extended class is not defiend\n");

                             } 
                                       
                }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 107 "yacc2.y"
    { scope_id++;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 108 "yacc2.y"
    {
                                          char* identifier=(yyvsp[(2) - (2)].strval);
                                      char *data_type = get_data_type((yyvsp[(2) - (2)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                     if(check_class_redeclaration(identifier)) {
                                semantic_error("the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 123 "yacc2.y"
    {
                                          char* identifier=(yyvsp[(5) - (5)].strval);
                                      char *data_type = get_data_type((yyvsp[(5) - (5)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                    int token = search_symbol_table(identifier);
                             if (token == -1) {
                  semantic_error(" unknown class ,the extended class is not defiend\n");

                             } 
                }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 136 "yacc2.y"
    { scope_id++;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 137 "yacc2.y"
    { scope_id++;
                                    char* identifier=(yyvsp[(2) - (3)].strval);
                             char *data_type = get_data_type((yyvsp[(2) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                         if(check_class_redeclaration(identifier)) {
                                semantic_error("the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             }  
                }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 153 "yacc2.y"
    {char *identifier=(yyvsp[(3) - (3)].strval);
                                        char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                              if(check_class_redeclaration(identifier)) {
                                semantic_error(" the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 168 "yacc2.y"
    { scope_id++;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 182 "yacc2.y"
    { char* identifier=(yyvsp[(4) - (4)].strval);
                                 if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name not allowod in java\n");

                                   }
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                         set_is_function_attribute((yyvsp[(4) - (4)].strval));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 192 "yacc2.y"
    { scope_id++; push_scope("local");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 192 "yacc2.y"
    {pop_scope();
                                
                             }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 195 "yacc2.y"
    { char* identifier=(yyvsp[(3) - (3)].strval);
                if(check_function_redeclaration(identifier)){
                                semantic_error(" the function is already defined ,function the with same name not allowod in java\n");

                                   }
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
        set_is_function_attribute((yyvsp[(3) - (3)].strval));}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 205 "yacc2.y"
    { scope_id++; push_scope("local");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 205 "yacc2.y"
    {pop_scope();
               
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 208 "yacc2.y"
    { char* identifier=(yyvsp[(3) - (3)].strval);
                                   if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name not allowod in java\n");

                                   }
                                strcpy(symbol_table[symbol_count].data_type, "void");
            
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                         set_is_function_attribute((yyvsp[(3) - (3)].strval));}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 220 "yacc2.y"
    {scope_id++; push_scope("local");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 220 "yacc2.y"
    {  pop_scope();
                                  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 222 "yacc2.y"
    {char* identifier=(yyvsp[(4) - (4)].strval);
                                if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name not allowod in java\n");

                                   }
                                strcpy(symbol_table[symbol_count].data_type, "void");
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                      set_is_function_attribute((yyvsp[(4) - (4)].strval));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 233 "yacc2.y"
    { scope_id++; push_scope("local");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 233 "yacc2.y"
    {pop_scope();
                                }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 240 "yacc2.y"
    {
  strcpy(symbol_table[symbol_count].data_type, "String");add_to_symbol_table((yyvsp[(9) - (9)].strval), IDENTIFIER, line_number ,false);
}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 242 "yacc2.y"
    { scope_id++; push_scope("local"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 242 "yacc2.y"
    {pop_scope();}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 258 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (3)].strval);
                                          char* identifier1 =(yyvsp[(3) - (3)].strval);

                        
                                        char *data_type1 = get_data_type((yyvsp[(1) - (3)].strval));
                                         char *data_type2 = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result =strcmp(data_type1,"UNKNOWN");
                                        int result1 =strcmp(data_type2,"UNKNOWN");
                                           
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment before declaration is not allowed");
                                            }
                                             if (result1==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier1);
                                         semantic_error("usage before declaration is not allowed");
                                            }
                                        
                                        if(!check_same_or_not_type_For_ids((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){

                                        semantic_error("oprandes  in differnt type can not be assined\n");
                                                 }
                                              else
                                                 getValueOfid((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
                                    

                                       }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 285 "yacc2.y"
    {
                              char* identifier =(yyvsp[(1) - (3)].strval);
                   
                               char *data_type = get_data_type((yyvsp[(1) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment before declaration is not allowed");
                                            }
                                      
                                          else if(!check_constant_type_For_String((yyvsp[(1) - (3)].strval))){
                                                 printf("Error: Identifier '%s' is not String type.\n", (yyvsp[(1) - (3)].strval));
                                                
                                               semantic_error(" oprades are in differnt type can not be assined\n");
                                                 }
                                              else
                                                 addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));

                                                 }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 304 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (3)].strval);
                      //            if (!analyze_variable_declaration(identifier)) {
                      //     printf("Error: Identifier '%s'is already declared \n", identifier);
                      //     semantic_error("Identifier with same scope can not be redclare");
                          
                      // }


                      
                    
                          //    else {

                          //   add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                          //  } 
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment of int const  before declaration is not allowed");
                                            }
                                            
                                    else if(!check_constant_type_For_int((yyvsp[(1) - (3)].strval))){
                                      printf("Error: Identifier '%s' is not int type.\n", (yyvsp[(1) - (3)].strval));

                                      semantic_error("Error type incopatable\n");

                                                 }
                                                 else  addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
                                                 }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 335 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (3)].strval);
                    //           if (!analyze_variable_declaration(identifier)) {
                    //       printf("Error: Identifier '%s'is already declared \n", identifier);
                    //       semantic_error("Identifier with same scope can not be redclare");
                          
                    //   }
                    //          else  {

                    // add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                    //        } 
                   // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment before declaration is not allowed");
                                            }

                                            if(!check_constant_type_For_Float((yyvsp[(1) - (3)].strval))){
                                                 printf("Error: Identifier '%s' is not float type.\n", (yyvsp[(1) - (3)].strval));

                                                 semantic_error(" the data type of ID is not float type\n");

                                                 }
                                                 else addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
                                                 }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 378 "yacc2.y"
    { char* identifier =(yyvsp[(2) - (5)].strval);

                      if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                          
                     }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 398 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (7)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (7)].strval));
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment not allowed");                                            }
                                       
                                           }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 423 "yacc2.y"
    {  
                                        char *data_type = get_data_type((yyvsp[(1) - (9)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                          strcpy(symbol_table[symbol_count-2].data_type, "class");

                                            }
                                                                                         
                
                                        strcpy(symbol_table[symbol_count-1].data_type, strcat((yyvsp[(1) - (9)].strval)," obj"));
                                                                                                                                                                                 
                                                                                          
                                        }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 444 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count].data_type, " func call");
                                            }
            }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 450 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(1) - (5)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count].data_type, " func call");
                                            }
            }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 464 "yacc2.y"
    {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 470 "yacc2.y"
    { char* identifier =(yyvsp[(1) - (1)].strval);

                      if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                          
                     }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 484 "yacc2.y"
    { char* identifier =(yyvsp[(1) - (3)].strval);
                                                     char* identifier1 =(yyvsp[(3) - (3)].strval);


                      if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);
                          addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));


                      } 
                     

                        
                                         char *data_type2 = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result1 =strcmp(data_type2,"UNKNOWN");
                                           
                                        if (result1==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier1);
                                         semantic_error("usage before declaration is not allowed");
                                            }
                                        
                                        if(!check_same_or_not_type_For_ids((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){

                                        semantic_error("oprandes  in differnt type can not be assined\n");
                                                 }
                                              else
                                                 getValueOfid((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
                                          
                     }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 519 "yacc2.y"
    {
                                    char* identifier =(yyvsp[(1) - (3)].strval);
                                     add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                      if(!check_constant_type_For_int((yyvsp[(1) - (3)].strval))){
                                      printf("Error: Identifier '%s' is not int type.\n", (yyvsp[(1) - (3)].strval));

                                      semantic_error("type incopatable\n");

                                                 }
                                                 else  addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
                                                 }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 531 "yacc2.y"
    {
                      char* identifier =(yyvsp[(1) - (3)].strval);
                                              add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                     if(!check_constant_type_For_String((yyvsp[(1) - (3)].strval))){
                                          printf("Error: Identifier '%s' is not String type.\n", (yyvsp[(1) - (3)].strval));

                                                
                                               semantic_error("type incpatable Identifier is not String type\n");
                                                 }
                                              else
                                                 addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 543 "yacc2.y"
    { 
                    char* identifier =(yyvsp[(1) - (3)].strval);
                                      add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                     if(!check_constant_type_For_Float((yyvsp[(1) - (3)].strval))){
                                                printf("Error: Identifier '%s' is not Float type.\n", (yyvsp[(1) - (3)].strval));

                                                 semantic_error(" the Identifier is not float type\n");

                                                 }
                                                 else addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 555 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "int");
                    }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 557 "yacc2.y"
    { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 561 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 564 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "char");
                 }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 567 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "double");
                 }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 606 "yacc2.y"
    {
                                       if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                      exit(EXIT_FAILURE);
                                      } }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 610 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("Operands  are not of the same type\n");} }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 612 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("Operands  are not of the same type\n");} }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 614 "yacc2.y"
    { 
                                             if(strcmp((yyvsp[(3) - (3)].strval),"0")==0){
                                               
                                            semantic_error("Can not be diveded by zero\n");}

                                        else if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("Operands  are not of the same type\n");} }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 621 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 623 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 625 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 627 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 629 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 631 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 633 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 647 "yacc2.y"
    {  
                                  char* identifier =(yyvsp[(1) - (1)].strval);
         
                      int token = search_symbol_table(identifier);
                      if (token == -1) {
                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                           }
    break;



/* Line 1455 of yacc.c  */
#line 2683 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 663 "yacc2.y"


void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
    exit(EXIT_FAILURE);
}
void semantic_error(const char *msg) {
    fprintf(stderr, "Semantic error at line %d: %s\n",line_number, msg);
     exit(EXIT_FAILURE);
}


int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("Error opening input file.\n");
        return 1;
    }

    yyin = input_file;

   if (yyparse() == 0) {
        printf("Your input java code is correct\n");
    }

    fclose(input_file);
   
 displaySymbolTable();
    return 0;
}


