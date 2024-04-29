
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
extern int parm_count;
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
#define YYLAST   752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  378

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
     172,   175,   181,   190,   195,   196,   198,   200,   202,   204,
     206,   208,   209,   211,   213,   215,   219,   223,   227,   231,
     234,   237,   240,   242,   244,   246,   249,   252,   254,   256,
     258,   261,   263,   268,   274,   279,   284,   290,   297,   305,
     307,   311,   320,   322,   323,   327,   331,   341,   343,   347,
     351,   352,   360,   368,   376,   382,   388,   394,   399,   405,
     408,   410,   411,   416,   418,   422,   426,   430,   434,   436,
     438,   440,   442,   444,   450,   462,   470,   478,   488,   500,
     511,   522,   524,   525,   529,   532,   540,   542,   545,   547,
     549,   554,   558,   562,   566,   570,   574,   578,   582,   586,
     590,   594,   598,   602,   606,   610,   613,   617,   619,   623,
     627,   630,   634,   636,   638,   640,   642
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    69,    -1,    68,    67,    -1,    68,    -1,
      16,    63,    -1,    71,    -1,    69,    71,    -1,    -1,   100,
      -1,    70,   100,    -1,    -1,    -1,    -1,    27,    10,     3,
      72,    32,     3,    73,    53,    74,    81,    54,    -1,    -1,
      -1,    -1,    10,     3,    75,    32,     3,    76,    53,    77,
      81,    54,    -1,    -1,    10,     3,    53,    78,    81,    54,
      -1,    -1,    -1,    27,    10,     3,    79,    53,    80,    81,
      54,    -1,    70,    -1,    70,    81,    -1,    82,    -1,    82,
      81,    -1,    92,    -1,    92,    81,    -1,    71,    -1,    71,
      81,    -1,    -1,    -1,    -1,    98,    91,   114,     3,    83,
      55,    95,    56,    53,    84,    97,    54,    -1,    -1,    -1,
      91,   114,     3,    85,    55,    95,    56,    53,    86,    97,
      54,    -1,    -1,    -1,    91,     5,     3,    87,    55,    95,
      56,    53,    88,    97,    54,    -1,    -1,    -1,    98,    91,
       5,     3,    89,    55,    95,    56,    53,    90,    97,    54,
      -1,    11,    -1,    -1,    -1,    -1,    27,    11,     5,     9,
      55,    59,    43,    42,     3,    93,    56,    53,    94,    97,
      54,    -1,    96,     3,    -1,    96,     3,    33,    96,     3,
      -1,    96,     3,    33,    96,     3,    33,    96,     3,    -1,
      95,    33,    96,     3,    -1,    -1,    57,    -1,    58,    -1,
      59,    -1,    15,    -1,    13,    -1,    70,    -1,    -1,    27,
      -1,    25,    -1,    26,    -1,     3,    34,     3,    -1,     3,
      34,     4,    -1,     3,    34,     8,    -1,     3,    34,     6,
      -1,   124,    30,    -1,   110,    30,    -1,    99,    30,    -1,
     115,    -1,   116,    -1,   118,    -1,   106,    30,    -1,   104,
      30,    -1,   107,    -1,   109,    -1,   119,    -1,   101,    30,
      -1,   102,    -1,     3,    34,   124,    30,    -1,   114,     3,
      34,   124,    30,    -1,   114,     3,    43,    42,    -1,   114,
      43,    42,     3,    -1,   114,     3,    43,   125,    42,    -1,
     101,    34,    53,   103,    54,    30,    -1,     3,    43,   125,
      42,    34,   124,    30,    -1,   124,    -1,   103,    33,   124,
      -1,    62,    41,    61,    41,    12,    55,   105,    56,    -1,
     124,    -1,    -1,     3,    37,    37,    -1,     3,    35,    35,
      -1,     3,     3,    34,    14,     3,    55,   108,    56,    30,
      -1,   124,    -1,   108,    33,   108,    -1,    62,    41,    60,
      -1,    -1,     3,    41,     3,    55,   108,    56,    30,    -1,
       3,    41,     3,    55,     8,    56,    30,    -1,     3,    41,
       3,    55,     4,    56,    30,    -1,     3,    55,   108,    56,
      30,    -1,     3,    55,     4,    56,    30,    -1,     3,    55,
       8,    56,    30,    -1,     3,    55,    56,    30,    -1,     3,
      55,     6,    56,    30,    -1,   114,   111,    -1,   113,    -1,
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
       0,    55,    55,    57,    59,    61,    63,    64,    65,    67,
      68,    74,    95,   109,    74,   110,   125,   138,   110,   139,
     139,   155,   170,   155,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   184,   194,   184,   197,   207,   197,   210,
     222,   210,   224,   235,   224,   239,   240,   242,   246,   242,
     248,   249,   250,   251,   252,   254,   255,   256,   258,   259,
     261,   262,   268,   269,   270,   274,   306,   325,   356,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   403,   420,   421,   422,   424,   425,   435,
     436,   438,   440,   441,   443,   444,   450,   464,   465,   466,
     467,   469,   475,   476,   478,   484,   485,   486,   487,   489,
     495,   496,   496,   502,   516,   554,   571,   588,   605,   607,
     610,   614,   617,   622,   623,   624,   627,   628,   629,   630,
     631,   634,   635,   637,   638,   640,   643,   644,   646,   647,
     649,   652,   656,   660,   662,   664,   671,   673,   675,   677,
     679,   681,   683,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   697,   706,   707,   708,   709
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
  "parm", "parm_type_specifier", "func_body", "modifier", "assignment",
  "statement", "array_declaration", "array_intialization", "arrayvalues",
  "system_out_println", "expr_or_string", "increament_decreament",
  "object_creation", "parametr", "fuction_call", "declaration",
  "var_declarations", "$@20", "var_declaration", "type_specifier",
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
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    99,    99,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   104,   105,   105,   106,   106,   107,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     111,   112,   111,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   115,   115,   115,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   121,   121,
     122,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   125,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     0,     1,
       2,     0,     0,     0,    11,     0,     0,     0,    10,     0,
       6,     0,     0,     8,     1,     2,     1,     2,     1,     2,
       1,     2,     0,     0,     0,    12,     0,     0,    11,     0,
       0,    11,     0,     0,    12,     1,     0,     0,     0,    15,
       2,     5,     8,     4,     0,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     3,     3,     3,     3,     2,
       2,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       2,     1,     4,     5,     4,     4,     5,     6,     7,     1,
       3,     8,     1,     0,     3,     3,     9,     1,     3,     3,
       0,     7,     7,     7,     5,     5,     5,     4,     5,     2,
       1,     0,     4,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     5,    11,     7,     7,     9,    11,    10,
      10,     1,     0,     3,     2,     7,     1,     2,     1,     1,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     3,     3,
       2,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     0,     0,     4,     2,     6,    15,     5,
       0,     1,     3,     7,    19,     0,    11,    32,     0,     0,
       0,   162,   165,   163,   166,   164,    45,   122,   121,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    62,     0,
       0,     0,     0,   118,   119,   120,     0,    24,    30,     0,
      26,     0,    28,    46,     0,     9,     0,    81,     0,     0,
      77,    78,     0,     0,    72,    73,    74,    79,     0,   157,
      16,     0,    22,     0,     0,     0,     0,     0,     0,   100,
     134,     0,   162,     0,   132,     0,     0,     0,     0,   160,
       0,   155,     0,     0,    25,     9,    31,    20,    27,     0,
       0,    29,     0,    71,    80,     0,    76,    75,    70,   113,
       0,   109,   110,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    32,
       0,   162,   165,   163,   164,     0,    95,    94,     0,     0,
     165,   163,   164,     0,     0,     0,    97,     0,     0,     0,
     133,   131,     0,     0,     0,     0,     0,   161,   156,     0,
      39,    36,     0,     0,     0,     0,     0,     0,   111,   159,
     143,   158,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    17,     0,     0,     0,    82,   100,
       0,     0,     0,     0,   107,     0,   100,     0,     0,     0,
     113,    10,     0,     0,   132,     0,     0,     0,     0,     0,
      42,    33,     0,    89,   162,   165,   163,   164,     0,    84,
       0,    85,     0,    32,    13,    23,     0,   165,   164,     0,
       0,   105,   108,   106,    99,    98,   104,     0,     0,     0,
       0,     0,   132,   132,   123,     0,     0,     0,    54,    54,
       0,     0,     0,     0,    83,    86,   112,     0,    32,   100,
       0,     0,     0,     0,     0,     0,     0,   114,   116,   117,
     115,     0,     0,     0,     0,     0,     0,   136,   138,   139,
       0,    93,    59,    58,    55,    56,    57,     0,     0,     0,
      54,    54,    90,    87,    18,     0,     0,   103,   102,   101,
      88,     0,     0,     0,     0,   126,   125,     0,     0,   135,
     137,     0,     0,    92,     0,     0,    50,     0,     0,     0,
      14,     0,   132,   132,     0,     0,     0,   141,     0,     0,
      91,     0,    40,     0,    37,     0,     0,    96,     0,     0,
     132,   127,   132,   140,    47,    53,    61,     0,    61,    43,
      34,   129,   130,     0,     0,     0,    60,     0,    51,     0,
      61,    61,   128,   124,     0,    41,     0,    38,     0,     0,
      48,     0,    44,    35,    61,    52,     0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    47,    48,    19,   185,   258,    15,
     127,   223,    17,    20,   129,    49,    50,   251,   361,   209,
     348,   208,   346,   250,   360,    51,    52,   355,   374,   287,
     288,   357,    53,    54,    55,    56,    57,   212,    58,   312,
      59,    60,   145,    61,    62,   111,   222,   112,    63,    64,
      65,   152,    66,    67,   276,   277,   278,   279,    68,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -288
static const yytype_int16 yypact[] =
{
       3,    60,     5,    62,   117,     3,    78,  -288,    80,  -288,
     119,  -288,  -288,  -288,  -288,   105,    89,    18,   153,   143,
     130,   352,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   155,
     132,   323,   136,   145,   146,   157,  -288,  -288,   138,   323,
     180,   323,   323,  -288,  -288,  -288,   188,    18,    18,   184,
      18,    51,    18,   226,   213,  -288,   -22,  -288,   214,   222,
    -288,  -288,   223,    15,  -288,  -288,  -288,  -288,   391,  -288,
    -288,   251,  -288,   221,   330,   225,   224,   255,   291,    79,
    -288,   375,  -288,   413,   266,   323,   323,   323,   257,   183,
     323,  -288,   430,   205,  -288,  -288,  -288,  -288,  -288,   265,
     268,  -288,    54,  -288,  -288,   229,  -288,  -288,  -288,    -2,
     233,   243,  -288,  -288,   339,   346,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   236,  -288,    18,
     278,   263,   270,   272,   274,   452,  -288,  -288,   250,   264,
     260,   276,   279,   283,   281,     1,   651,   290,   310,   341,
    -288,   266,   294,   469,   489,   509,   342,   183,  -288,   316,
    -288,  -288,   358,   359,   323,   365,   405,   360,  -288,   159,
     183,  -288,   183,  -288,  -288,  -288,   712,   712,   712,   712,
     699,   699,   684,   668,  -288,   317,   325,   361,  -288,   147,
     343,   350,   354,   362,  -288,   336,   304,   367,   369,   212,
     370,  -288,   382,   353,   173,   357,   363,   402,   364,   368,
    -288,  -288,   103,   651,    48,   128,   203,   218,   531,  -288,
     373,  -288,   341,    18,  -288,  -288,   372,   366,   388,    69,
     323,  -288,  -288,  -288,  -288,   383,  -288,   389,   390,   553,
     311,   394,   266,   266,  -288,   108,   395,   400,   111,   111,
     401,   411,   323,   441,  -288,  -288,  -288,   371,    18,   304,
     442,   443,   453,   575,   428,   429,   323,  -288,  -288,  -288,
    -288,   323,   434,   439,   458,   323,   142,  -288,  -288,  -288,
     381,   323,  -288,  -288,  -288,  -288,  -288,    74,   492,    82,
     111,   111,   651,  -288,  -288,   451,    87,  -288,  -288,  -288,
    -288,   457,   459,   592,   612,  -288,   488,   266,   634,  -288,
    -288,   479,   466,   651,   111,   470,   497,   478,    90,    96,
    -288,   502,   266,   266,   490,   511,   498,   266,   266,   539,
    -288,   547,  -288,   111,  -288,   499,   510,  -288,   508,   513,
     266,  -288,   266,   266,  -288,  -288,   266,   561,   266,  -288,
    -288,  -288,  -288,   518,   519,   528,   266,   520,   552,   532,
     266,   266,  -288,  -288,   534,  -288,   111,  -288,   535,   540,
    -288,   593,  -288,  -288,   266,  -288,   541,  -288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,   601,  -288,  -288,   -83,   198,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,   -45,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,   554,  -288,  -288,  -288,  -239,
    -287,  -242,  -288,  -288,   -47,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -185,  -288,   527,  -288,  -288,   387,   -31,  -288,
    -288,  -195,  -288,  -288,  -288,   335,  -288,  -288,   -25,   -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -118
static const yytype_int16 yytable[] =
{
      95,   151,    94,    96,   229,    98,    83,   101,   104,   244,
     289,   235,   105,     1,    89,   139,    91,    92,   109,     2,
     100,    21,    22,   -46,    23,    24,    25,   331,     1,    26,
       3,    27,   165,    28,   196,    29,    30,    31,    32,    33,
      34,   166,    35,    36,    37,    38,   347,   272,   273,   135,
     149,   318,   319,    39,   146,    40,    99,   197,   110,   162,
     153,   154,   155,     8,    27,   157,    28,    27,     9,    28,
      41,   163,    10,    42,   296,    43,    44,    45,  -114,   371,
      46,  -114,    82,   140,   186,   141,    24,   142,     1,   170,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   196,   220,   201,     3,   359,   314,    43,    44,
      45,    43,    44,    45,    39,   314,    40,    11,   368,   369,
     196,   151,    16,   314,   282,   262,   283,   338,   339,   314,
     315,    41,   376,    14,    42,   143,   252,    18,   317,   213,
     218,   144,   -21,   321,    89,   353,   335,   354,    10,    88,
      82,   227,   336,    23,    24,   228,    70,   253,  -116,   151,
     151,  -116,    82,    22,   146,    23,    24,    25,   284,   285,
     286,   146,   274,   275,   239,    71,    21,    22,   257,    23,
      24,    25,    39,    72,    40,    80,    27,    81,    28,    84,
      29,    30,    31,    32,    33,    34,   309,    35,     7,    41,
      85,    86,    42,     7,    13,   263,   274,   275,    39,   144,
      40,    41,    87,   295,    42,    82,    22,    90,    23,    24,
      25,   116,   117,   118,   327,    41,   243,   292,    42,    93,
      43,    44,    45,  -117,   146,    46,  -117,    26,    97,   151,
     151,   303,   238,   103,   106,   343,   304,    39,  -115,    40,
     308,  -115,   107,   108,   128,   130,   313,   151,   138,   151,
     136,   137,   156,   356,    41,   356,   159,    42,   160,    21,
      22,   161,    23,    24,    25,   167,   168,   356,   356,    27,
     201,    28,   164,    29,    30,    31,    32,    33,    34,   184,
      35,   356,   187,   -65,    82,    22,   201,    23,    24,    25,
     -66,    39,   -68,    40,   -67,   189,   190,    82,    22,   201,
      23,    24,    25,   194,   267,   268,   191,   269,    41,   270,
     198,    42,   195,    43,    44,    45,    82,    22,    46,    23,
      24,    25,   192,   131,   132,   193,   133,    24,   134,    39,
     199,    40,    82,    22,   200,    23,    24,    25,   202,    82,
      22,   206,    23,    24,    25,    73,    41,   207,    39,    42,
      40,   210,   211,   221,   226,    39,   144,    40,   214,   215,
     224,   216,    24,   217,   169,    41,    40,   230,    42,   225,
     231,    39,    41,   171,   232,    42,    74,    75,    27,    76,
      28,    41,   233,    77,    42,    78,   234,   236,    41,   237,
      39,    42,    40,   241,   240,   147,   242,    79,    82,    22,
     245,    23,    24,    25,   247,   255,   196,    41,   246,   248,
      42,   113,   260,   249,   311,   294,   114,   259,   115,   116,
     117,   118,    43,    44,    45,   119,   120,   121,   122,   123,
     124,   125,   126,   150,   261,   264,   265,   219,   114,   271,
     115,   116,   117,   118,   280,   281,   290,   119,   120,   121,
     122,   123,   124,   125,   126,   114,   291,   115,   116,   117,
     118,   293,   297,   298,   119,   120,   121,   122,   123,   124,
     125,   126,   188,   299,   301,   302,   158,   114,   305,   115,
     116,   117,   118,   306,   307,   316,   119,   120,   121,   122,
     123,   124,   125,   126,   114,   320,   115,   116,   117,   118,
     322,   326,   323,   119,   120,   121,   122,   123,   124,   125,
     126,   329,   330,   332,   114,   203,   115,   116,   117,   118,
     333,   334,   337,   119,   120,   121,   122,   123,   124,   125,
     126,   341,   344,   340,   114,   204,   115,   116,   117,   118,
     345,   342,   349,   119,   120,   121,   122,   123,   124,   125,
     126,   254,   351,   350,   358,   205,   114,   352,   115,   116,
     117,   118,   362,   363,   365,   119,   120,   121,   122,   123,
     124,   125,   126,   266,   364,   366,   367,   370,   114,   372,
     115,   116,   117,   118,   373,   377,   375,   119,   120,   121,
     122,   123,   124,   125,   126,   300,    12,   102,   148,   256,
     114,   310,   115,   116,   117,   118,     0,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   114,     0,   115,
     116,   117,   118,     0,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,     0,   114,   324,   115,
     116,   117,   118,     0,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,     0,     0,   325,   114,
     328,   115,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   114,     0,   115,   116,
     117,   118,     0,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   114,     0,   115,   116,   117,   118,     0,
       0,     0,   119,   120,   121,   122,   123,   124,   125,   114,
       0,   115,   116,   117,   118,     0,     0,     0,   119,   120,
     121,   122,   123,   124,   114,     0,   115,   116,   117,   118,
       0,     0,     0,   119,   120,   121,   122,   114,     0,   115,
     116,   117,   118
};

static const yytype_int16 yycheck[] =
{
      47,    84,    47,    48,   189,    50,    31,    52,    30,   204,
     249,   196,    34,    10,    39,    78,    41,    42,     3,    16,
      51,     3,     4,     5,     6,     7,     8,   314,    10,    11,
      27,    13,    34,    15,    33,    17,    18,    19,    20,    21,
      22,    43,    24,    25,    26,    27,   333,   242,   243,    74,
      81,   290,   291,    35,    79,    37,     5,    56,    43,     5,
      85,    86,    87,     3,    13,    90,    15,    13,    63,    15,
      52,   102,    10,    55,   259,    57,    58,    59,    30,   366,
      62,    33,     3,     4,   129,     6,     7,     8,    10,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    33,   166,   151,    27,   348,    33,    57,    58,
      59,    57,    58,    59,    35,    33,    37,     0,   360,   361,
      33,   204,     3,    33,    13,    56,    15,   322,   323,    33,
      56,    52,   374,    53,    55,    56,    33,    32,    56,   164,
     165,    62,    53,    56,   169,   340,    56,   342,    10,    11,
       3,     4,    56,     6,     7,     8,     3,    54,    30,   242,
     243,    33,     3,     4,   189,     6,     7,     8,    57,    58,
      59,   196,    64,    65,   199,    32,     3,     4,   223,     6,
       7,     8,    35,    53,    37,    30,    13,    55,    15,    53,
      17,    18,    19,    20,    21,    22,    54,    24,     0,    52,
      55,    55,    55,     5,     6,   230,    64,    65,    35,    62,
      37,    52,    55,   258,    55,     3,     4,    37,     6,     7,
       8,    38,    39,    40,   307,    52,    53,   252,    55,    41,
      57,    58,    59,    30,   259,    62,    33,    11,    54,   322,
     323,   266,    30,    30,    30,   328,   271,    35,    30,    37,
     275,    33,    30,    30,     3,    34,   281,   340,     3,   342,
      35,    37,     5,   346,    52,   348,    61,    55,     3,     3,
       4,     3,     6,     7,     8,    42,    33,   360,   361,    13,
     327,    15,    53,    17,    18,    19,    20,    21,    22,    53,
      24,   374,    14,    30,     3,     4,   343,     6,     7,     8,
      30,    35,    30,    37,    30,    55,    42,     3,     4,   356,
       6,     7,     8,    30,     3,     4,    56,     6,    52,     8,
      30,    55,    41,    57,    58,    59,     3,     4,    62,     6,
       7,     8,    56,     3,     4,    56,     6,     7,     8,    35,
      30,    37,     3,     4,     3,     6,     7,     8,    54,     3,
       4,     9,     6,     7,     8,     3,    52,    41,    35,    55,
      37,     3,     3,     3,     3,    35,    62,    37,     3,     4,
      53,     6,     7,     8,    35,    52,    37,    34,    55,    54,
      30,    35,    52,    37,    30,    55,    34,    35,    13,    37,
      15,    52,    30,    41,    55,    43,    60,    30,    52,    30,
      35,    55,    37,    21,    34,    30,    53,    55,     3,     4,
      53,     6,     7,     8,    12,    42,    33,    52,    55,    55,
      55,    30,    56,    55,    43,    54,    35,    55,    37,    38,
      39,    40,    57,    58,    59,    44,    45,    46,    47,    48,
      49,    50,    51,    30,    56,    56,    56,    42,    35,    55,
      37,    38,    39,    40,    59,    55,    55,    44,    45,    46,
      47,    48,    49,    50,    51,    35,    55,    37,    38,    39,
      40,    30,    30,    30,    44,    45,    46,    47,    48,    49,
      50,    51,    30,    30,    56,    56,    56,    35,    54,    37,
      38,    39,    40,    54,    36,     3,    44,    45,    46,    47,
      48,    49,    50,    51,    35,    54,    37,    38,    39,    40,
      53,    23,    53,    44,    45,    46,    47,    48,    49,    50,
      51,    42,    56,    53,    35,    56,    37,    38,    39,    40,
      33,    53,    30,    44,    45,    46,    47,    48,    49,    50,
      51,    30,     3,    53,    35,    56,    37,    38,    39,    40,
       3,    53,    53,    44,    45,    46,    47,    48,    49,    50,
      51,    30,    54,    53,     3,    56,    35,    54,    37,    38,
      39,    40,    54,    54,    54,    44,    45,    46,    47,    48,
      49,    50,    51,    30,    56,    33,    54,    53,    35,    54,
      37,    38,    39,    40,    54,    54,     3,    44,    45,    46,
      47,    48,    49,    50,    51,    30,     5,    53,    81,   222,
      35,   276,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    35,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    35,    56,    37,
      38,    39,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    35,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    35,    -1,    37,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    35,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    35,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    45,    46,    47,    35,    -1,    37,
      38,    39,    40
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
      82,    91,    92,    98,    99,   100,   101,   102,   104,   106,
     107,   109,   110,   114,   115,   116,   118,   119,   124,   125,
       3,    32,    53,     3,    34,    35,    37,    41,    43,    55,
      30,    55,     3,   124,    53,    55,    55,    55,    11,   124,
      37,   124,   124,    41,    81,   100,    81,    54,    81,     5,
     114,    81,    91,    30,    30,    34,    30,    30,    30,     3,
      43,   111,   113,    30,    35,    37,    38,    39,    40,    44,
      45,    46,    47,    48,    49,    50,    51,    76,     3,    80,
      34,     3,     4,     6,     8,   124,    35,    37,     3,   125,
       4,     6,     8,    56,    62,   108,   124,    30,   110,   114,
      30,    70,   117,   124,   124,   124,     5,   124,    56,    61,
       3,     3,     5,   114,    53,    34,    43,    42,    33,    35,
     124,    37,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,    53,    73,    81,    14,    30,    55,
      42,    56,    56,    56,    30,    41,    33,    56,    30,    30,
       3,   100,    54,    56,    56,    56,     9,    41,    87,    85,
       3,     3,   103,   124,     3,     4,     6,     8,   124,    42,
     125,     3,   112,    77,    53,    54,     3,     4,     8,   108,
      34,    30,    30,    30,    60,   108,    30,    30,    30,   124,
      34,    21,    53,    53,   117,    53,    55,    12,    55,    55,
      89,    83,    33,    54,    30,    42,   113,    81,    74,    55,
      56,    56,    56,   124,    56,    56,    30,     3,     4,     6,
       8,    55,   117,   117,    64,    65,   120,   121,   122,   123,
      59,    55,    13,    15,    57,    58,    59,    95,    96,    95,
      55,    55,   124,    30,    54,    81,   108,    30,    30,    30,
      30,    56,    56,   124,   124,    54,    54,    36,   124,    54,
     121,    43,   105,   124,    33,    56,     3,    56,    95,    95,
      54,    56,    53,    53,    56,    56,    23,    70,    36,    42,
      56,    96,    53,    33,    53,    56,    56,    30,   117,   117,
      53,    30,    53,    70,     3,     3,    88,    96,    86,    53,
      53,    54,    54,   117,   117,    93,    70,    97,     3,    97,
      90,    84,    54,    54,    56,    54,    33,    54,    97,    97,
      53,    96,    54,    54,    94,     3,    97,    54
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
        case 2:

/* Line 1455 of yacc.c  */
#line 55 "yacc2.y"
    {if(!check_main_mathed()){printf(" can not find main method\n"); exit(EXIT_FAILURE);
}}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 57 "yacc2.y"
    {if(!check_main_mathed()){printf(" can not find main method\n"); exit(EXIT_FAILURE);
}}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 63 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 74 "yacc2.y"
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
#line 95 "yacc2.y"
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
#line 109 "yacc2.y"
    { scope_id++;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 109 "yacc2.y"
    { scope_id++;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 110 "yacc2.y"
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
#line 125 "yacc2.y"
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
#line 138 "yacc2.y"
    { scope_id++;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 138 "yacc2.y"
    { scope_id++;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 139 "yacc2.y"
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

  case 20:

/* Line 1455 of yacc.c  */
#line 154 "yacc2.y"
    { scope_id++;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 155 "yacc2.y"
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
#line 170 "yacc2.y"
    { scope_id++;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 170 "yacc2.y"
    { scope_id++; }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 184 "yacc2.y"
    { char* identifier=(yyvsp[(4) - (4)].strval);
                                 if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name in one class not allowod in java\n");

                                   }
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,true);

                             } 
                         set_is_function_attribute((yyvsp[(4) - (4)].strval));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 194 "yacc2.y"
    { scope_id++; push_scope("local");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 194 "yacc2.y"
    {pop_scope();
                                
                             }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 197 "yacc2.y"
    { char* identifier=(yyvsp[(3) - (3)].strval);
                if(check_function_redeclaration(identifier)){
                 semantic_error(" the function is already defined ,function the with same name in one class not allowod in java\n");

                                   }
                             // int token = search_symbol_table(identifier);
                             //if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,true);

                          //   } 
        set_is_function_attribute((yyvsp[(3) - (3)].strval));}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 207 "yacc2.y"
    { scope_id++; push_scope("local");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 207 "yacc2.y"
    {pop_scope();
               
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 210 "yacc2.y"
    { char* identifier=(yyvsp[(3) - (3)].strval);
                                   if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name in one class not allowod in java\n");

                                   }
                                strcpy(symbol_table[symbol_count].data_type, "void");
            
                             // int token = search_symbol_table(identifier);
                            // if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,true);

                            // } 
                         set_is_function_attribute((yyvsp[(3) - (3)].strval));}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 222 "yacc2.y"
    {scope_id++; push_scope("local");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 222 "yacc2.y"
    {  pop_scope();
                                  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 224 "yacc2.y"
    {char* identifier=(yyvsp[(4) - (4)].strval);
                                if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name in one clss not allowod in java\n");

                                   }
                                strcpy(symbol_table[symbol_count].data_type, "void");
                             // int token = search_symbol_table(identifier);
                             //if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,true);

                           //  } 
                      set_is_function_attribute((yyvsp[(4) - (4)].strval));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 235 "yacc2.y"
    { scope_id++; push_scope("local");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 235 "yacc2.y"
    {pop_scope();
                                }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 242 "yacc2.y"
    {
  if(check_main_mathed()){printf(" more than one  main method is not allowed\n"); exit(EXIT_FAILURE);
}
  strcpy(symbol_table[symbol_count].data_type, "void");add_to_symbol_table("main", IDENTIFIER, line_number ,true);  
}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 246 "yacc2.y"
    { scope_id++; push_scope("local"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 246 "yacc2.y"
    {pop_scope();}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 248 "yacc2.y"
    {  add_parm1_for_function((yyvsp[(2) - (2)].strval));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 249 "yacc2.y"
    {add_parm1_for_function((yyvsp[(2) - (5)].strval)); add_parm1_for_function((yyvsp[(5) - (5)].strval));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 250 "yacc2.y"
    { add_parm1_for_function((yyvsp[(2) - (8)].strval)); add_parm1_for_function((yyvsp[(5) - (8)].strval));add_parm1_for_function((yyvsp[(8) - (8)].strval));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 254 "yacc2.y"
    {strcpy(fun_parm[parm_count].parm_type, "int");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 255 "yacc2.y"
    {strcpy(fun_parm[parm_count].parm_type, "float");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 256 "yacc2.y"
    {strcpy(fun_parm[parm_count].parm_type, "String");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 258 "yacc2.y"
    {strcpy(fun_parm[parm_count].parm_type, "char");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 259 "yacc2.y"
    {strcpy(fun_parm[parm_count].parm_type, "double");}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 274 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (3)].strval);
                                          char* identifier1 =(yyvsp[(3) - (3)].strval);

                          if(!check_value_of_id((yyvsp[(3) - (3)].strval))){
                         printf("identifier %s has not intialized",(yyvsp[(3) - (3)].strval));
                         exit(EXIT_FAILURE);
                       } 

                        
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

  case 66:

/* Line 1455 of yacc.c  */
#line 306 "yacc2.y"
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

  case 67:

/* Line 1455 of yacc.c  */
#line 325 "yacc2.y"
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

  case 68:

/* Line 1455 of yacc.c  */
#line 356 "yacc2.y"
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

  case 82:

/* Line 1455 of yacc.c  */
#line 398 "yacc2.y"
    {
                            
                                 if(!analyzePlusExpression((yyvsp[(1) - (4)].strval),(yyvsp[(3) - (4)].strval))){
                                      exit(EXIT_FAILURE);
                                      } }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 403 "yacc2.y"
    { char* identifier =(yyvsp[(2) - (5)].strval);
                          
                      if (!analyze_variable_declaration(identifier)) {
                          printf(" Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                        if(!analyzePlusExpression((yyvsp[(2) - (5)].strval),(yyvsp[(4) - (5)].strval))){
                                      exit(EXIT_FAILURE);
                                      }                    
                     }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 425 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (7)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (7)].strval));
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment not allowed");                                            }
                                       
                                           }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 450 "yacc2.y"
    {  
                                        char *data_type = get_data_type((yyvsp[(1) - (9)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                          strcpy(symbol_table[symbol_count-2].data_type, "class");

                                            }
                                                                                         
                
                                        strcpy(symbol_table[symbol_count-1].data_type, strcat((yyvsp[(1) - (9)].strval)," obj"));
                                                                                                                                                                                 
                                                                                          
                                        }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 470 "yacc2.y"
    {char *data_type = get_data_type((yyvsp[(3) - (7)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count].data_type, " func call");
                                            }if(!check_parmconstant_type_For_int((yyvsp[(1) - (7)].strval))){semantic_error("called function have not argument\n");}}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 475 "yacc2.y"
    {if(!check_parmconstant_type_For_int((yyvsp[(3) - (7)].strval))){semantic_error("type mismach in function call\n");}}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 476 "yacc2.y"
    {if(!check_parmconstant_type_For_string((yyvsp[(3) - (7)].strval))){semantic_error("type mismach in function call\n");}}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 478 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(1) - (5)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count].data_type, " func call");
                                            }
            }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 484 "yacc2.y"
    {if(!check_parmconstant_type_For_string((yyvsp[(1) - (5)].strval))){semantic_error("type mismach in function call\n");}}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 485 "yacc2.y"
    {if(!check_parmconstant_type_For_int((yyvsp[(1) - (5)].strval))){semantic_error("type mismach in function call\n");}}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 486 "yacc2.y"
    {if(!check_parmconstant_type_For_int((yyvsp[(1) - (4)].strval))){semantic_error("called function have not argument\n");}}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 487 "yacc2.y"
    {if(!check_parmconstant_type_For_float((yyvsp[(1) - (5)].strval))){semantic_error("type mismach in function call it not float type\n");}}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 496 "yacc2.y"
    {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 502 "yacc2.y"
    { char* identifier =(yyvsp[(1) - (1)].strval);

                      if (!analyze_variable_declaration(identifier)) {
                          printf(" Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                          
                     }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 516 "yacc2.y"
    { char* identifier =(yyvsp[(1) - (3)].strval);
                                                     char* identifier1 =(yyvsp[(3) - (3)].strval);

                       if(!check_value_of_id(identifier1)){
                         printf("identifier %s has not intialized",identifier1);
                         exit(EXIT_FAILURE);
                       }
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

  case 115:

/* Line 1455 of yacc.c  */
#line 554 "yacc2.y"
    {
                                    char* identifier =(yyvsp[(1) - (3)].strval);
                                     if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                                     add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                      if(!check_constant_type_For_int((yyvsp[(1) - (3)].strval))){
                                      printf("Error: Identifier '%s' is not int type.\n", (yyvsp[(1) - (3)].strval));

                                      semantic_error("type incopatable\n");

                                                 }
                                                 else  addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));
                                                 }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 571 "yacc2.y"
    {
                      char* identifier =(yyvsp[(1) - (3)].strval);
                       if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                     add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      if(!check_constant_type_For_String((yyvsp[(1) - (3)].strval))){
                       printf("Error: Identifier '%s' is not String type.\n", (yyvsp[(1) - (3)].strval));

                                                
                                               semantic_error("type incpatable Identifier is not String type\n");
                                                 }
                                              else
                                                 addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 588 "yacc2.y"
    { 
                    char* identifier =(yyvsp[(1) - (3)].strval);
                     if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                                      add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                     if(!check_constant_type_For_Float((yyvsp[(1) - (3)].strval))){
                                                printf("Error: Identifier '%s' is not Float type.\n", (yyvsp[(1) - (3)].strval));

                                                 semantic_error(" the Identifier is not float type\n");

                                                 }
                                                 else addAssignmentValue((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval));}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 605 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "int");
                    }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 607 "yacc2.y"
    { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 611 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 614 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "char");
                 }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 617 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "double");
                 }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 656 "yacc2.y"
    {
                                       if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                      exit(EXIT_FAILURE);
                                      } }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 660 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("Operands  are not of the same type\n");} }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 662 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("Operands  are not of the same type\n");} }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 664 "yacc2.y"
    { 
                                             if(strcmp((yyvsp[(3) - (3)].strval),"0")==0){
                                               
                                            semantic_error("Can not be diveded by zero\n");}

                                        else if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("Operands  are not of the same type\n");} }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 671 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 673 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 675 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 677 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 679 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 681 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 683 "yacc2.y"
    {if(!analyzePlusExpression((yyvsp[(1) - (3)].strval),(yyvsp[(3) - (3)].strval))){
                                       semantic_error("comparation with differnt type is impossible\n");} }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 697 "yacc2.y"
    {  
                                  char* identifier =(yyvsp[(1) - (1)].strval);
         
                      int token = search_symbol_table(identifier);
                      if (token == -1) {
                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                           }
    break;



/* Line 1455 of yacc.c  */
#line 2882 "y.tab.c"
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
#line 713 "yacc2.y"


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


