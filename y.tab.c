
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
extern int search_symbol_table(char *name);
extern void add_to_symbol_table(char *name, int type);
extern void displaySymbolTable();
extern char* get_data_type(char* token_name);
extern void displaySymbolTable();
extern struct symbol_entry {
    char name[50];
    char data_type[20];
    int token_type;
    // Add more attributes as needed
} symbol_table[100];

extern int symbol_count;

extern int line_number;
extern int yylex();
extern FILE *yyin;
void yyerror(const char *s);

// Define YYSTYPE struct for semantic values
typedef struct {
    char* strval;
    float floatval;
    int intval;
    char charval;
} YYSTYPE;

#define YYSTYPE_IS_DECLARED


/* Line 189 of yacc.c  */
#line 108 "y.tab.c"

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
     FLOAT_CONST = 260,
     INT_CONST = 261,
     CHAR_CONST = 262,
     CLASS = 263,
     STATIC = 264,
     PRINTLN = 265,
     NEW = 266,
     IMPORT = 267,
     BREAK = 268,
     FOR = 269,
     RETURN = 270,
     DO = 271,
     WHILE = 272,
     IF = 273,
     ELSE = 274,
     SWITCH = 275,
     PRIVATE = 276,
     PROTECTED = 277,
     PUBLIC = 278,
     IMPLEMENTS = 279,
     THIS = 280,
     SEMICOLON = 281,
     EXTENDS = 282,
     COMMA = 283,
     ASSIGN = 284,
     MINUS = 285,
     NEWLINE = 286,
     PLUS = 287,
     MULTIPLY = 288,
     DIVIDE = 289,
     MODULO = 290,
     DOT = 291,
     RBRACKET = 292,
     LBRACKET = 293,
     IN = 294,
     OUT = 295,
     SYSTEM = 296,
     JAVA_IMPORT = 297,
     CASE = 298,
     DEFAULT = 299,
     LESS_THAN = 300,
     LESS_EQUAL = 301,
     GREATER_THAN = 302,
     GREATER_EQUAL = 303,
     EQUALS = 304,
     NOT_EQUALS = 305,
     AND = 306,
     OR = 307,
     NOT = 308,
     MAIN = 309,
     LBRACE = 310,
     RBRACE = 311,
     LPAREN = 312,
     RPAREN = 313,
     INT = 314,
     FLOAT = 315,
     VOID = 316,
     STRING = 317
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_CONST 259
#define FLOAT_CONST 260
#define INT_CONST 261
#define CHAR_CONST 262
#define CLASS 263
#define STATIC 264
#define PRINTLN 265
#define NEW 266
#define IMPORT 267
#define BREAK 268
#define FOR 269
#define RETURN 270
#define DO 271
#define WHILE 272
#define IF 273
#define ELSE 274
#define SWITCH 275
#define PRIVATE 276
#define PROTECTED 277
#define PUBLIC 278
#define IMPLEMENTS 279
#define THIS 280
#define SEMICOLON 281
#define EXTENDS 282
#define COMMA 283
#define ASSIGN 284
#define MINUS 285
#define NEWLINE 286
#define PLUS 287
#define MULTIPLY 288
#define DIVIDE 289
#define MODULO 290
#define DOT 291
#define RBRACKET 292
#define LBRACKET 293
#define IN 294
#define OUT 295
#define SYSTEM 296
#define JAVA_IMPORT 297
#define CASE 298
#define DEFAULT 299
#define LESS_THAN 300
#define LESS_EQUAL 301
#define GREATER_THAN 302
#define GREATER_EQUAL 303
#define EQUALS 304
#define NOT_EQUALS 305
#define AND 306
#define OR 307
#define NOT 308
#define MAIN 309
#define LBRACE 310
#define RBRACE 311
#define LPAREN 312
#define RPAREN 313
#define INT 314
#define FLOAT 315
#define VOID 316
#define STRING 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 35 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 214 of yacc.c  */
#line 277 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 289 "y.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  260

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    23,    31,
      37,    44,    46,    49,    52,    54,    56,    57,    68,    78,
      88,    99,   101,   102,   116,   119,   124,   125,   127,   128,
     130,   132,   134,   138,   142,   145,   148,   150,   152,   154,
     157,   160,   162,   164,   173,   175,   176,   180,   184,   187,
     197,   205,   207,   211,   213,   217,   219,   221,   223,   229,
     237,   247,   258,   264,   272,   280,   290,   302,   313,   324,
     326,   327,   331,   334,   338,   342,   346,   350,   354,   358,
     362,   366,   370,   374,   378,   382,   386,   389,   393,   395,
     399,   403,   406,   410,   412,   414,   416,   418
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    66,    -1,    64,    66,    -1,    -1,    75,
      -1,    65,    75,    -1,    23,     8,     3,    27,     3,    55,
      67,    56,    -1,     8,     3,    27,     3,    55,    67,    56,
      -1,     8,     3,    55,    67,    56,    -1,    23,     8,     3,
      55,    67,    56,    -1,    65,    -1,    65,    68,    -1,    68,
      65,    -1,    70,    -1,    68,    -1,    -1,    73,    69,    84,
       3,    57,    71,    58,    55,    72,    56,    -1,    69,    84,
       3,    57,    71,    58,    55,    72,    56,    -1,    69,    61,
       3,    57,    71,    58,    55,    72,    56,    -1,    73,    69,
      61,     3,    57,    71,    58,    55,    72,    56,    -1,     9,
      -1,    -1,    23,     9,    61,    54,    57,    62,    38,    37,
       3,    58,    55,    72,    56,    -1,    84,     3,    -1,    71,
      28,    84,     3,    -1,    -1,    65,    -1,    -1,    23,    -1,
      21,    -1,    22,    -1,     3,    29,    89,    -1,    84,    89,
      26,    -1,    79,    26,    -1,    74,    26,    -1,    85,    -1,
      86,    -1,    88,    -1,    78,    26,    -1,    76,    26,    -1,
      80,    -1,    81,    -1,    41,    36,    40,    36,    10,    57,
      77,    58,    -1,    89,    -1,    -1,     3,    32,    32,    -1,
       3,    30,    30,    -1,    84,    82,    -1,     3,     3,    29,
      11,     3,    57,    71,    58,    26,    -1,     3,    36,     3,
      57,    71,    58,    26,    -1,    83,    -1,    82,    28,    83,
      -1,     3,    -1,     3,    29,    89,    -1,    59,    -1,    60,
      -1,    62,    -1,    18,    57,    89,    58,    75,    -1,    18,
      57,    89,    58,    75,    19,    75,    -1,    18,    57,    89,
      58,    55,    75,    56,    19,    75,    -1,    18,    57,    89,
      58,    55,    75,    56,    55,    75,    56,    -1,    20,    57,
      89,    58,    75,    -1,    18,    57,    89,    58,    55,    75,
      56,    -1,    17,    57,    89,    58,    55,    87,    56,    -1,
      16,    55,    87,    56,    17,    57,    89,    58,    26,    -1,
      14,    57,    79,    26,    89,    26,    89,    58,    55,    87,
      56,    -1,    14,    57,    26,    26,    26,    58,    58,    55,
      87,    56,    -1,    14,    57,    79,    26,    26,    58,    58,
      55,    87,    56,    -1,    65,    -1,    -1,    15,    89,    26,
      -1,    13,    26,    -1,    89,    32,    89,    -1,    89,    30,
      89,    -1,    89,    33,    89,    -1,    89,    34,    89,    -1,
      89,    35,    89,    -1,    89,    45,    89,    -1,    89,    46,
      89,    -1,    89,    47,    89,    -1,    89,    48,    89,    -1,
      89,    49,    89,    -1,    89,    50,    89,    -1,    89,    51,
      89,    -1,    89,    52,    89,    -1,    53,    89,    -1,    57,
      89,    58,    -1,    90,    -1,    89,    32,    32,    -1,    89,
      30,    30,    -1,    30,    89,    -1,    32,    32,    89,    -1,
       3,    -1,     5,    -1,     6,    -1,     4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    64,    66,    69,    70,    76,    77,    78,
      79,    83,    84,    85,    86,    87,    88,    92,    93,    94,
      95,    98,    99,   101,   103,   104,   105,   108,   109,   111,
     112,   113,   118,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   145,   147,   148,   150,   151,   156,   160,
     167,   169,   170,   173,   174,   178,   180,   183,   189,   190,
     191,   192,   193,   194,   197,   198,   199,   200,   201,   204,
     205,   207,   208,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   234,   249,   250,   251,   252
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_CONST",
  "FLOAT_CONST", "INT_CONST", "CHAR_CONST", "CLASS", "STATIC", "PRINTLN",
  "NEW", "IMPORT", "BREAK", "FOR", "RETURN", "DO", "WHILE", "IF", "ELSE",
  "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC", "IMPLEMENTS", "THIS",
  "SEMICOLON", "EXTENDS", "COMMA", "ASSIGN", "MINUS", "NEWLINE", "PLUS",
  "MULTIPLY", "DIVIDE", "MODULO", "DOT", "RBRACKET", "LBRACKET", "IN",
  "OUT", "SYSTEM", "JAVA_IMPORT", "CASE", "DEFAULT", "LESS_THAN",
  "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL", "EQUALS", "NOT_EQUALS",
  "AND", "OR", "NOT", "MAIN", "LBRACE", "RBRACE", "LPAREN", "RPAREN",
  "INT", "FLOAT", "VOID", "STRING", "$accept", "program", "statement_list",
  "class_declaration", "class_body", "function_decl", "static_func",
  "main_method", "parm", "func_body", "modifier", "assignment",
  "statement", "system_out_println", "expr_or_string",
  "increament_decreament", "declaration", "object_creation", "object_call",
  "var_declarations", "var_declaration", "type_specifier",
  "selection_statement", "iteration_statement", "iteration_statement_body",
  "jump_statement", "expression", "primary_expression", 0
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
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    70,    71,    71,    71,    72,    72,    73,
      73,    73,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    77,    77,    78,    78,    79,    80,
      81,    82,    82,    83,    83,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     8,     7,     5,
       6,     1,     2,     2,     1,     1,     0,    10,     9,     9,
      10,     1,     0,    13,     2,     4,     0,     1,     0,     1,
       1,     1,     3,     3,     2,     2,     1,     1,     1,     2,
       2,     1,     1,     8,     1,     0,     3,     3,     2,     9,
       7,     1,     3,     1,     3,     1,     1,     1,     5,     7,
       9,    10,     5,     7,     7,     9,    11,    10,    10,     1,
       0,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     3,
       3,     2,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     2,     0,     0,     1,     3,     0,
      16,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    29,     0,    55,    56,    57,    11,
       0,    15,     0,    14,    22,     0,     5,     0,     0,     0,
      41,    42,     0,    36,    37,    38,     0,    16,    16,     0,
       0,     0,     0,     0,    72,     0,    93,    96,    94,    95,
      97,     0,     0,     0,     0,     0,    88,    70,     0,     0,
       0,     0,     0,    29,    12,     6,     9,    13,     0,     0,
       0,    35,    40,    39,    34,    93,    48,    51,     0,     0,
       0,     0,     0,    32,    47,    46,     0,     0,     0,     0,
      91,     0,    86,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    16,    10,     8,     0,    26,     0,     0,    53,
      92,    87,    90,    74,    89,    73,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,    26,    26,     0,     0,    54,    52,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,    58,
      62,     0,     0,     0,     0,    26,    26,     7,    26,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,    64,    63,    59,     0,     0,    44,    28,    28,
       0,     0,     0,    25,    70,    70,     0,     0,     0,     0,
       0,    43,    27,     0,     0,    28,    28,    49,     0,     0,
      70,    65,    60,     0,     0,    19,    18,     0,     0,    67,
      68,     0,    61,     0,    20,    17,    66,    28,     0,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,   118,     4,    30,    31,    32,    33,   171,   233,
      34,    35,    36,    37,   216,    38,    39,    40,    41,    86,
      87,    42,    43,    44,   119,    45,   100,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -201
static const yytype_int16 yypact[] =
{
      71,     6,     8,    72,  -201,    66,    17,  -201,  -201,    31,
       9,    87,    60,    81,  -201,    92,    62,   249,    73,    69,
      76,    77,  -201,  -201,    37,    94,  -201,  -201,  -201,   151,
      88,   218,    79,  -201,   126,   117,  -201,   119,   122,   125,
    -201,  -201,   262,  -201,  -201,  -201,   149,     9,     9,   134,
     249,   145,   144,   154,  -201,   -20,  -201,  -201,  -201,  -201,
    -201,   249,   147,   249,   249,   455,  -201,   218,   249,   249,
     249,   116,   162,  -201,  -201,  -201,  -201,   218,   181,   200,
     128,  -201,  -201,  -201,  -201,   127,   178,  -201,   482,   152,
     158,   167,   213,   517,  -201,  -201,   170,   203,   204,   225,
      48,   249,  -201,   293,  -201,   267,   279,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   218,   188,
     320,   347,   374,   191,   210,   192,   193,   245,   248,   249,
     225,  -201,     9,  -201,  -201,   255,   -49,   234,    59,   246,
      48,  -201,    70,    48,  -201,    48,  -201,  -201,  -201,   207,
     207,   207,   207,   328,   328,   540,   148,   259,   208,   202,
     218,   230,   278,   -49,   -49,   232,   233,   517,  -201,   235,
     236,   -14,   292,   238,   240,   509,   243,   218,   218,   282,
    -201,   241,   247,   -13,   -11,   -49,   -49,  -201,   -49,   -49,
     281,  -201,   250,   252,   249,   249,   256,   257,   218,   276,
     249,   261,   263,    20,    28,    30,   302,  -201,   266,   274,
     401,   428,  -201,   -12,  -201,   280,   264,   517,   218,   218,
     275,   291,   305,  -201,   218,   218,   294,   307,   218,   218,
     331,  -201,   218,   300,   301,   218,   218,  -201,   303,   308,
     218,  -201,  -201,   327,   277,  -201,  -201,   329,   330,  -201,
    -201,   332,  -201,   334,  -201,  -201,  -201,   218,   335,  -201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,   -10,   344,   -45,   319,   350,  -201,   -39,  -200,
    -201,  -201,   -28,  -201,  -201,  -201,   345,  -201,  -201,  -201,
     260,   -27,  -201,  -201,  -173,  -201,    -9,  -201
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -54
static const yytype_int16 yytable[] =
{
      29,    75,    90,    91,   196,    79,    97,   228,    65,     5,
      26,    27,    13,    28,   189,   189,     6,   189,    14,   234,
      11,    77,    15,    16,    17,    18,    19,    20,    99,    21,
      22,    23,    24,    88,    12,   247,   248,    29,    29,    26,
      27,    93,    28,   229,   190,   201,    71,   202,   189,    75,
      25,   238,   239,   128,   102,   103,   189,   258,   189,   120,
     121,   122,    56,    57,    58,    59,    60,   251,    26,    27,
     -22,    28,     7,    56,    57,    58,    59,    60,   220,     1,
       1,   107,   108,   109,    49,   174,   221,   169,   222,    61,
      75,    62,   140,     9,     2,     2,   143,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   172,
      50,    51,    63,    52,    46,    48,    64,    53,    54,    55,
     167,    10,    29,    63,   183,   184,    68,    64,    67,   175,
      72,   179,   180,    69,    70,    14,   172,   172,    26,    27,
      78,    28,    47,    81,    76,    82,   203,   204,    83,   205,
     197,    84,    89,   -53,    13,   -53,   129,    96,   172,   172,
      14,   172,   206,    92,    15,    16,    17,    18,    19,    20,
     214,    21,    22,    23,    73,    94,    95,   123,   105,   101,
     106,   107,   108,   109,   125,   210,   211,    26,    27,   127,
      28,   217,    25,   110,   111,   112,   113,   114,   115,   116,
     242,   243,   124,   126,    75,    13,   130,   132,   232,   232,
      26,    27,   -22,    28,   133,    15,    16,    17,    18,    19,
      20,    13,    21,   134,   135,   232,   232,   136,   139,   137,
     138,    15,    16,    17,    18,    19,    20,   105,    21,   106,
     107,   108,   109,    25,   157,   161,   162,   232,   165,   163,
     164,   166,    56,    57,    58,    59,    60,   178,   170,    25,
     173,    26,    27,   177,    28,    85,    57,    58,    59,    60,
      56,    57,    58,    59,    60,   129,   176,    26,    27,    61,
      28,    62,    56,    57,    58,    59,    60,   181,   182,   185,
     186,   187,    61,   188,    62,   191,   192,   142,   193,    62,
     195,   198,    63,   199,   200,   223,    64,   207,   208,    61,
     209,   144,   212,   213,   215,    63,   218,   230,   219,    64,
      63,   224,   231,   105,    64,   106,   107,   108,   109,   225,
     235,   237,    63,   241,   244,   253,    64,     0,   110,   111,
     112,   113,   114,   115,   116,   117,   236,     8,    74,   240,
     105,   141,   106,   107,   108,   109,   245,   246,   105,   249,
     106,   107,   108,   109,   250,   110,   111,   112,   113,   114,
     115,   116,   117,   110,   111,   112,   113,   105,   158,   106,
     107,   108,   109,   252,    80,   254,   255,     0,   256,   257,
     168,   259,   110,   111,   112,   113,   114,   115,   116,   117,
      98,     0,     0,     0,   105,   159,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   105,   160,   106,   107,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,   105,   226,
     106,   107,   108,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   114,   115,   116,
     117,   104,     0,     0,     0,   105,   227,   106,   107,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,   116,   117,   131,     0,
       0,     0,   105,     0,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,   116,   117,   194,     0,     0,     0,   105,
       0,   106,   107,   108,   109,     0,     0,   105,     0,   106,
     107,   108,   109,     0,   110,   111,   112,   113,   114,   115,
     116,   117,   110,   111,   112,   113,   114,   115,   116,   117,
     105,     0,   106,   107,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115
};

static const yytype_int16 yycheck[] =
{
      10,    29,    47,    48,   177,    32,    26,    19,    17,     3,
      59,    60,     3,    62,    28,    28,     8,    28,     9,   219,
       3,    31,    13,    14,    15,    16,    17,    18,    55,    20,
      21,    22,    23,    42,     3,   235,   236,    47,    48,    59,
      60,    50,    62,    55,    58,    58,     9,    58,    28,    77,
      41,   224,   225,    80,    63,    64,    28,   257,    28,    68,
      69,    70,     3,     4,     5,     6,     7,   240,    59,    60,
      61,    62,     0,     3,     4,     5,     6,     7,    58,     8,
       8,    33,    34,    35,     3,    26,    58,   132,    58,    30,
     118,    32,   101,    27,    23,    23,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   136,
      29,    30,    53,    32,    27,    55,    57,    36,    26,    57,
     129,    55,   132,    53,   163,   164,    57,    57,    55,   138,
      36,   159,   160,    57,    57,     9,   163,   164,    59,    60,
      61,    62,    55,    26,    56,    26,   185,   186,    26,   188,
     178,    26,     3,    26,     3,    28,    29,     3,   185,   186,
       9,   188,   189,    29,    13,    14,    15,    16,    17,    18,
     198,    20,    21,    22,    23,    30,    32,    61,    30,    32,
      32,    33,    34,    35,     3,   194,   195,    59,    60,    61,
      62,   200,    41,    45,    46,    47,    48,    49,    50,    51,
     228,   229,    40,     3,   232,     3,    28,    55,   218,   219,
      59,    60,    61,    62,    56,    13,    14,    15,    16,    17,
      18,     3,    20,    56,    11,   235,   236,    57,     3,    26,
      26,    13,    14,    15,    16,    17,    18,    30,    20,    32,
      33,    34,    35,    41,    56,    54,    36,   257,     3,    57,
      57,     3,     3,     4,     5,     6,     7,    55,     3,    41,
      26,    59,    60,    55,    62,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    29,    17,    59,    60,    30,
      62,    32,     3,     4,     5,     6,     7,    57,    10,    57,
      57,    56,    30,    57,    32,     3,    58,    30,    58,    32,
      57,    19,    53,    62,    57,     3,    57,    26,    58,    30,
      58,    32,    56,    56,    38,    53,    55,    37,    55,    57,
      53,    55,    58,    30,    57,    32,    33,    34,    35,    55,
      55,    26,    53,    26,     3,    58,    57,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    55,     3,    29,    55,
      30,    58,    32,    33,    34,    35,    56,    56,    30,    56,
      32,    33,    34,    35,    56,    45,    46,    47,    48,    49,
      50,    51,    52,    45,    46,    47,    48,    30,    58,    32,
      33,    34,    35,    56,    34,    56,    56,    -1,    56,    55,
     130,    56,    45,    46,    47,    48,    49,    50,    51,    52,
      55,    -1,    -1,    -1,    30,    58,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    30,    58,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,    30,    58,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    26,    -1,    -1,    -1,    30,    58,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    26,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    45,    46,    47,    48,    49,    50,    51,    52,
      30,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    23,    64,    66,     3,     8,     0,    66,    27,
      55,     3,     3,     3,     9,    13,    14,    15,    16,    17,
      18,    20,    21,    22,    23,    41,    59,    60,    62,    65,
      67,    68,    69,    70,    73,    74,    75,    76,    78,    79,
      80,    81,    84,    85,    86,    88,    27,    55,    55,     3,
      29,    30,    32,    36,    26,    57,     3,     4,     5,     6,
       7,    30,    32,    53,    57,    89,    90,    55,    57,    57,
      57,     9,    36,    23,    68,    75,    56,    65,    61,    84,
      69,    26,    26,    26,    26,     3,    82,    83,    89,     3,
      67,    67,    29,    89,    30,    32,     3,    26,    79,    84,
      89,    32,    89,    89,    26,    30,    32,    33,    34,    35,
      45,    46,    47,    48,    49,    50,    51,    52,    65,    87,
      89,    89,    89,    61,    40,     3,     3,    61,    84,    29,
      28,    26,    55,    56,    56,    11,    57,    26,    26,     3,
      89,    58,    30,    89,    32,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    56,    58,    58,
      58,    54,    36,    57,    57,     3,     3,    89,    83,    67,
       3,    71,    84,    26,    26,    89,    17,    55,    55,    75,
      75,    57,    10,    71,    71,    57,    57,    56,    57,    28,
      58,     3,    58,    58,    26,    57,    87,    75,    19,    62,
      57,    58,    58,    71,    71,    71,    84,    26,    58,    58,
      89,    89,    56,    56,    75,    38,    77,    89,    55,    55,
      58,    58,    58,     3,    55,    55,    58,    58,    19,    55,
      37,    58,    65,    72,    72,    55,    55,    26,    87,    87,
      55,    26,    75,    75,     3,    56,    56,    72,    72,    56,
      56,    87,    56,    58,    56,    56,    56,    55,    72,    56
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
#line 63 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 118 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (3)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result!=0) {
                                          // Identifier exists, perform the assignment
                                       printf("Assignment to identifier '%s' is allowed.\n", identifier);
                                            }
                                        else {
                                              // Identifier does not exist, print an error message
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment before declaration is not allowed");
                                            // You can also choose to exit parsing or handle the error differently
                                           } 
                                           }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 136 "yacc2.y"
    { printf("Assignment statement parsed.\n"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 160 "yacc2.y"
    {  
                                                                                        symbol_count=symbol_count-1;
                                                                                         strcpy(symbol_table[symbol_count].data_type, (yyvsp[(1) - (9)].strval));
                                                                                             symbol_count=symbol_count+1;                                                                                       
                                                                                          
                                                                }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 178 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "intger");
                    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 180 "yacc2.y"
    { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 184 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 234 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (1)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (1)].strval));
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result!=0) {
                                          // Identifier exists, perform the assignment
                                       printf("Assignment to identifier for '%s' is allowed.\n", identifier);
                                            }
                                        else {
                                              // Identifier does not exist, print an error message
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment not allowed");
                                            // You can also choose to exit parsing or handle the error differently
                                           } 
                                           }
    break;



/* Line 1455 of yacc.c  */
#line 1861 "y.tab.c"
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
#line 256 "yacc2.y"


void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
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


