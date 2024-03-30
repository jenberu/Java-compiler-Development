
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
     DOUBLE = 266,
     NEW = 267,
     CHAR = 268,
     IMPORT = 269,
     BREAK = 270,
     FOR = 271,
     RETURN = 272,
     DO = 273,
     WHILE = 274,
     IF = 275,
     ELSE = 276,
     SWITCH = 277,
     PRIVATE = 278,
     PROTECTED = 279,
     PUBLIC = 280,
     IMPLEMENTS = 281,
     THIS = 282,
     SEMICOLON = 283,
     EXTENDS = 284,
     COMMA = 285,
     ASSIGN = 286,
     MINUS = 287,
     NEWLINE = 288,
     PLUS = 289,
     MULTIPLY = 290,
     DIVIDE = 291,
     MODULO = 292,
     DOT = 293,
     RBRACKET = 294,
     LBRACKET = 295,
     IN = 296,
     OUT = 297,
     SYSTEM = 298,
     JAVA_IMPORT = 299,
     CASE = 300,
     DEFAULT = 301,
     LESS_THAN = 302,
     LESS_EQUAL = 303,
     GREATER_THAN = 304,
     GREATER_EQUAL = 305,
     EQUALS = 306,
     NOT_EQUALS = 307,
     AND = 308,
     OR = 309,
     NOT = 310,
     MAIN = 311,
     LBRACE = 312,
     RBRACE = 313,
     LPAREN = 314,
     RPAREN = 315,
     INT = 316,
     FLOAT = 317,
     VOID = 318,
     STRING = 319
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
#define DOUBLE 266
#define NEW 267
#define CHAR 268
#define IMPORT 269
#define BREAK 270
#define FOR 271
#define RETURN 272
#define DO 273
#define WHILE 274
#define IF 275
#define ELSE 276
#define SWITCH 277
#define PRIVATE 278
#define PROTECTED 279
#define PUBLIC 280
#define IMPLEMENTS 281
#define THIS 282
#define SEMICOLON 283
#define EXTENDS 284
#define COMMA 285
#define ASSIGN 286
#define MINUS 287
#define NEWLINE 288
#define PLUS 289
#define MULTIPLY 290
#define DIVIDE 291
#define MODULO 292
#define DOT 293
#define RBRACKET 294
#define LBRACKET 295
#define IN 296
#define OUT 297
#define SYSTEM 298
#define JAVA_IMPORT 299
#define CASE 300
#define DEFAULT 301
#define LESS_THAN 302
#define LESS_EQUAL 303
#define GREATER_THAN 304
#define GREATER_EQUAL 305
#define EQUALS 306
#define NOT_EQUALS 307
#define AND 308
#define OR 309
#define NOT 310
#define MAIN 311
#define LBRACE 312
#define RBRACE 313
#define LPAREN 314
#define RPAREN 315
#define INT 316
#define FLOAT 317
#define VOID 318
#define STRING 319




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
#line 281 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 293 "y.tab.c"

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
#define YYLAST   560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    18,    19,
      21,    24,    25,    35,    36,    45,    46,    53,    54,    62,
      64,    67,    69,    72,    74,    77,    79,    82,    83,    84,
      96,    97,   108,   109,   120,   121,   133,   135,   136,   137,
     152,   155,   160,   161,   163,   164,   166,   168,   170,   174,
     178,   181,   184,   186,   188,   190,   193,   196,   198,   200,
     209,   211,   212,   216,   220,   223,   233,   234,   243,   245,
     246,   251,   253,   257,   259,   261,   263,   265,   267,   273,
     281,   291,   302,   308,   316,   324,   334,   346,   357,   368,
     370,   371,   375,   378,   382,   386,   390,   394,   398,   402,
     406,   410,   414,   418,   422,   426,   430,   433,   437,   439,
     443,   447,   450,   454,   456,   458,   460,   462
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    68,    -1,    67,    66,    -1,    67,    -1,
      14,    44,    -1,    70,    -1,    68,    70,    -1,    -1,    88,
      -1,    69,    88,    -1,    -1,    25,     8,     3,    71,    29,
       3,    57,    75,    58,    -1,    -1,     8,     3,    72,    29,
       3,    57,    75,    58,    -1,    -1,     8,     3,    57,    73,
      75,    58,    -1,    -1,    25,     8,     3,    74,    57,    75,
      58,    -1,    69,    -1,    69,    75,    -1,    76,    -1,    76,
      75,    -1,    82,    -1,    82,    75,    -1,    70,    -1,    70,
      75,    -1,    -1,    -1,    86,    81,    99,    77,     3,    59,
      84,    60,    57,    85,    58,    -1,    -1,    81,    99,    78,
       3,    59,    84,    60,    57,    85,    58,    -1,    -1,    81,
      79,    63,     3,    59,    84,    60,    57,    85,    58,    -1,
      -1,    86,    81,    80,    63,     3,    59,    84,    60,    57,
      85,    58,    -1,     9,    -1,    -1,    -1,    25,     9,    63,
      56,    59,    64,    40,    39,    83,     3,    60,    57,    85,
      58,    -1,    99,     3,    -1,    84,    30,    99,     3,    -1,
      -1,    69,    -1,    -1,    25,    -1,    23,    -1,    24,    -1,
       3,    31,   104,    -1,    99,   104,    28,    -1,    92,    28,
      -1,    87,    28,    -1,   100,    -1,   101,    -1,   103,    -1,
      91,    28,    -1,    89,    28,    -1,    93,    -1,    94,    -1,
      43,    38,    42,    38,    10,    59,    90,    60,    -1,   104,
      -1,    -1,     3,    34,    34,    -1,     3,    32,    32,    -1,
      99,    96,    -1,     3,     3,    31,    12,     3,    59,    84,
      60,    28,    -1,    -1,     3,    38,    95,     3,    59,    84,
      60,    28,    -1,    98,    -1,    -1,    96,    30,    97,    98,
      -1,     3,    -1,     3,    31,   104,    -1,    61,    -1,    62,
      -1,    64,    -1,    13,    -1,    11,    -1,    20,    59,   104,
      60,   102,    -1,    20,    59,   104,    60,   102,    21,   102,
      -1,    20,    59,   104,    60,    57,   102,    58,    21,   102,
      -1,    20,    59,   104,    60,    57,   102,    58,    57,   102,
      58,    -1,    22,    59,   104,    60,   102,    -1,    20,    59,
     104,    60,    57,   102,    58,    -1,    19,    59,   104,    60,
      57,   102,    58,    -1,    18,    57,   102,    58,    19,    59,
     104,    60,    28,    -1,    16,    59,    92,    28,   104,    28,
     104,    60,    57,   102,    58,    -1,    16,    59,    28,    28,
      28,    60,    60,    57,   102,    58,    -1,    16,    59,    92,
      28,    28,    60,    60,    57,   102,    58,    -1,    69,    -1,
      -1,    17,   104,    28,    -1,    15,    28,    -1,   104,    34,
     104,    -1,   104,    32,   104,    -1,   104,    35,   104,    -1,
     104,    36,   104,    -1,   104,    37,   104,    -1,   104,    47,
     104,    -1,   104,    48,   104,    -1,   104,    49,   104,    -1,
     104,    50,   104,    -1,   104,    51,   104,    -1,   104,    52,
     104,    -1,   104,    53,   104,    -1,   104,    54,   104,    -1,
      55,   104,    -1,    59,   104,    60,    -1,   105,    -1,   104,
      34,    34,    -1,   104,    32,    32,    -1,    32,   104,    -1,
      34,    34,   104,    -1,     3,    -1,     5,    -1,     6,    -1,
       4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    63,    64,    66,    68,    69,    70,    72,
      73,    79,    79,    82,    82,    85,    85,    88,    88,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   106,   106,
     107,   107,   108,   108,   109,   109,   112,   113,   115,   115,
     117,   118,   119,   122,   123,   125,   126,   127,   132,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   160,
     162,   163,   165,   166,   171,   175,   182,   182,   184,   185,
     185,   191,   192,   196,   198,   201,   205,   208,   213,   214,
     215,   216,   217,   218,   221,   222,   223,   224,   225,   228,
     229,   231,   232,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   258,   273,   274,   275,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_CONST",
  "FLOAT_CONST", "INT_CONST", "CHAR_CONST", "CLASS", "STATIC", "PRINTLN",
  "DOUBLE", "NEW", "CHAR", "IMPORT", "BREAK", "FOR", "RETURN", "DO",
  "WHILE", "IF", "ELSE", "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC",
  "IMPLEMENTS", "THIS", "SEMICOLON", "EXTENDS", "COMMA", "ASSIGN", "MINUS",
  "NEWLINE", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "RBRACKET",
  "LBRACKET", "IN", "OUT", "SYSTEM", "JAVA_IMPORT", "CASE", "DEFAULT",
  "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "NOT", "MAIN", "LBRACE", "RBRACE", "LPAREN",
  "RPAREN", "INT", "FLOAT", "VOID", "STRING", "$accept", "start",
  "import_statment", "program", "statement_list", "class_declaration",
  "$@1", "$@2", "$@3", "$@4", "class_body", "function_decl", "$@5", "$@6",
  "$@7", "$@8", "static_func", "main_method", "$@9", "parm", "func_body",
  "modifier", "assignment", "statement", "system_out_println",
  "expr_or_string", "increament_decreament", "declaration",
  "object_creation", "object_call", "$@10", "var_declarations", "$@11",
  "var_declaration", "type_specifier", "selection_statement",
  "iteration_statement", "iteration_or_selection_statement_body",
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
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    67,    68,    68,    68,    69,
      69,    71,    70,    72,    70,    73,    70,    74,    70,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    77,    76,
      78,    76,    79,    76,    80,    76,    81,    81,    83,    82,
      84,    84,    84,    85,    85,    86,    86,    86,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      90,    90,    91,    91,    92,    93,    95,    94,    96,    97,
      96,    98,    98,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     0,     1,
       2,     0,     9,     0,     8,     0,     6,     0,     7,     1,
       2,     1,     2,     1,     2,     1,     2,     0,     0,    11,
       0,    10,     0,    10,     0,    11,     1,     0,     0,    14,
       2,     4,     0,     1,     0,     1,     1,     1,     3,     3,
       2,     2,     1,     1,     1,     2,     2,     1,     1,     8,
       1,     0,     3,     3,     2,     9,     0,     8,     1,     0,
       4,     1,     3,     1,     1,     1,     1,     1,     5,     7,
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
       8,     0,     0,     0,     0,     4,     2,     6,    13,     5,
       0,     1,     3,     7,    15,     0,    11,    27,     0,     0,
       0,     0,    36,    77,    76,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    45,     0,    73,    74,    75,    19,
      25,     0,    21,    32,    23,    37,     0,     9,     0,     0,
       0,    57,    58,     0,    52,    53,    54,     0,     0,    27,
       0,     0,     0,     0,    66,    92,     0,   113,   116,   114,
     115,   117,     0,     0,     0,     0,     0,   108,    90,     0,
       0,     0,     0,     0,    20,     9,    26,    16,    22,     0,
      30,    24,    34,    51,    56,    55,    50,   113,    64,    68,
       0,    27,     0,     0,     0,    48,    63,    62,     0,     0,
       0,     0,   111,     0,   106,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,    69,    49,     0,    27,    18,     0,     0,     0,
       0,    71,   112,   107,   110,    94,   109,    93,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    10,
       0,     0,    90,    90,     0,     0,     0,     0,     0,     0,
      72,     0,    14,     0,     0,    42,     0,     0,     0,     0,
      90,    90,    78,    82,     0,     0,    42,    42,     0,     0,
      70,    12,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    61,     0,     0,    42,    42,     0,     0,
       0,    40,     0,     0,     0,     0,    84,    83,    79,     0,
       0,    60,     0,     0,     0,     0,     0,     0,    67,    90,
      90,     0,     0,    90,    90,    38,    59,    44,    44,     0,
       0,    65,    41,     0,     0,    90,    85,    80,     0,     0,
      43,     0,     0,    44,    44,    87,    88,     0,    81,     0,
      33,    31,     0,     0,    86,     0,    35,    29,    44,     0,
      39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,   130,    40,    19,    15,    17,    20,
      41,    42,   179,   138,    89,   139,    43,    44,   259,   203,
     261,    45,    46,    47,    48,   230,    49,    50,    51,    52,
     108,    98,   181,    99,    53,    54,    55,   131,    56,   112,
      77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -196
static const yytype_int16 yypact[] =
{
      56,     7,   -23,    -2,    20,    56,     3,  -196,   -21,  -196,
      23,  -196,  -196,  -196,  -196,    10,    -8,   116,    49,    25,
       5,   117,  -196,  -196,  -196,    44,    32,    12,    58,    50,
      59,    71,  -196,  -196,   113,    36,  -196,  -196,  -196,   116,
     116,    79,   116,   139,   116,   133,   125,  -196,   128,   129,
     136,  -196,  -196,   211,  -196,  -196,  -196,   110,   166,   116,
     142,    12,   138,   141,  -196,  -196,    52,  -196,  -196,  -196,
    -196,  -196,    12,   147,    12,    12,   416,  -196,   222,    12,
      12,    12,   119,   134,  -196,  -196,  -196,  -196,  -196,   124,
    -196,  -196,   139,  -196,  -196,  -196,  -196,    57,   163,  -196,
     443,   116,   148,   154,   184,   478,  -196,  -196,   194,   170,
     192,   216,   155,    12,  -196,   244,  -196,   253,   268,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
     222,   165,   281,   308,   335,   168,   183,   223,   224,   169,
    -196,    12,  -196,  -196,   171,   116,  -196,   225,   177,   221,
     140,   219,   155,  -196,    27,   155,  -196,   155,  -196,  -196,
    -196,   126,   126,   126,   126,   316,   316,   508,   501,  -196,
     232,   197,   191,   222,   203,   254,   204,   208,   265,   266,
     478,   216,  -196,   230,   218,   139,   229,   239,   470,   231,
     222,   222,   261,  -196,   237,   248,   139,   139,   250,   251,
    -196,  -196,   139,    13,   300,   259,   260,    12,    12,   256,
     263,   222,   282,    12,    15,    17,   139,   139,    18,   139,
     296,  -196,   279,   280,   362,   389,  -196,   -19,  -196,   299,
     286,   478,   290,   292,    30,    46,   311,   351,  -196,   222,
     222,   317,   345,   222,   222,  -196,  -196,   222,   222,   318,
     319,  -196,  -196,   320,   321,   222,  -196,  -196,   322,   374,
     222,   323,   332,   222,   222,  -196,  -196,   333,  -196,   340,
    -196,  -196,   334,   343,  -196,   336,  -196,  -196,   222,   344,
    -196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,   398,  -196,  -196,   -17,     8,  -196,  -196,  -196,  -196,
     -35,  -196,  -196,  -196,  -196,  -196,   359,  -196,  -196,   109,
    -195,  -196,  -196,   -38,  -196,  -196,  -196,   339,  -196,  -196,
    -196,  -196,  -196,   226,   -31,  -196,  -196,  -132,  -196,   -24,
    -196
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      39,    85,   243,    76,    84,    86,    10,    88,     7,    91,
       8,     1,    90,     7,    13,    67,    68,    69,    70,    71,
      11,     9,    39,    39,   103,    39,    16,    39,     3,   100,
      67,    68,    69,    70,    71,   111,    14,   105,   244,    18,
     192,   193,    39,   219,    72,   219,    73,   219,   219,   -17,
     114,   115,    57,   262,    58,   132,   133,   134,   209,   210,
     219,   140,    59,    23,     1,    24,   144,    74,   272,   273,
       2,    75,    65,   220,    83,   232,   219,   233,   236,   228,
     109,     3,    74,   279,    39,   -71,    75,   -71,   141,   152,
     249,    66,   169,   155,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   250,   253,   254,    79,
     183,   257,   258,    36,    37,    78,    38,   180,    80,    21,
      60,    10,    82,   267,     1,    22,   188,    23,    39,    24,
      81,    25,    26,    27,    28,    29,    30,    87,    31,    32,
      33,    34,    22,    67,    68,    69,    70,    71,    61,    62,
      23,    63,    24,    93,   204,    64,    94,    95,   117,    35,
     118,   119,   120,   121,    96,   204,   204,   101,   187,   102,
     106,   204,    72,   104,    73,   107,   136,    36,    37,   -37,
      38,   113,   135,   224,   225,   204,   204,   137,   237,   231,
     119,   120,   121,   142,    21,    74,   147,   148,   149,    75,
      36,    37,    23,    38,    24,   145,    25,    26,    27,    28,
      29,    30,   146,    31,    97,    68,    69,    70,    71,   151,
     150,   175,   169,   170,   174,    21,   176,   177,   184,   182,
     260,   260,   178,    23,    35,    24,   185,    25,    26,    27,
      28,    29,    30,    72,    31,    73,   260,   260,   191,   186,
     141,   189,    36,    37,   190,    38,    67,    68,    69,    70,
      71,   260,   194,   196,   195,    35,    74,   197,   198,   199,
      75,    67,    68,    69,    70,    71,   117,   202,   118,   119,
     120,   121,   211,    36,    37,   154,    38,    73,   201,   205,
     208,   122,   123,   124,   125,   126,   127,   128,   129,   206,
      72,   212,   156,   221,   153,   214,   215,   213,    74,   216,
     217,   218,    75,   117,   226,   118,   119,   120,   121,   222,
     223,   227,   229,    74,   238,   234,   235,    75,   122,   123,
     124,   125,   126,   127,   128,   129,   239,   240,   245,   251,
     117,   171,   118,   119,   120,   121,   246,   247,   117,   248,
     118,   119,   120,   121,   252,   122,   123,   124,   125,   126,
     127,   128,   129,   122,   123,   124,   125,   117,   172,   118,
     119,   120,   121,   256,   255,   263,   264,   269,   265,   266,
     268,   270,   122,   123,   124,   125,   126,   127,   128,   129,
     271,   274,   276,   278,   117,   173,   118,   119,   120,   121,
     275,   277,   280,    12,    92,   110,     0,   200,     0,   122,
     123,   124,   125,   126,   127,   128,   129,     0,     0,     0,
       0,   117,   241,   118,   119,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   116,     0,     0,     0,   117,   242,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   143,     0,     0,     0,   117,     0,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   207,     0,
       0,     0,   117,     0,   118,   119,   120,   121,     0,     0,
     117,     0,   118,   119,   120,   121,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   122,   123,   124,   125,   126,
     127,   128,   129,   117,     0,   118,   119,   120,   121,     0,
     117,     0,   118,   119,   120,   121,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   122,   123,   124,   125,   126,
     127
};

static const yytype_int16 yycheck[] =
{
      17,    39,    21,    27,    39,    40,     8,    42,     0,    44,
       3,     8,    43,     5,     6,     3,     4,     5,     6,     7,
       0,    44,    39,    40,    59,    42,     3,    44,    25,    53,
       3,     4,     5,     6,     7,    66,    57,    61,    57,    29,
     172,   173,    59,    30,    32,    30,    34,    30,    30,    57,
      74,    75,     3,   248,    29,    79,    80,    81,   190,   191,
      30,    92,    57,    11,     8,    13,   101,    55,   263,   264,
      14,    59,    28,    60,    38,    60,    30,    60,    60,   211,
      28,    25,    55,   278,   101,    28,    59,    30,    31,   113,
      60,    59,   130,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    60,   239,   240,    59,
     145,   243,   244,    61,    62,    57,    64,   141,    59,     3,
       3,     8,     9,   255,     8,     9,   150,    11,   145,    13,
      59,    15,    16,    17,    18,    19,    20,    58,    22,    23,
      24,    25,     9,     3,     4,     5,     6,     7,    31,    32,
      11,    34,    13,    28,   185,    38,    28,    28,    32,    43,
      34,    35,    36,    37,    28,   196,   197,    57,    28,     3,
      32,   202,    32,    31,    34,    34,    42,    61,    62,    63,
      64,    34,    63,   207,   208,   216,   217,    63,   219,   213,
      35,    36,    37,    30,     3,    55,    12,     3,    28,    59,
      61,    62,    11,    64,    13,    57,    15,    16,    17,    18,
      19,    20,    58,    22,     3,     4,     5,     6,     7,     3,
      28,    38,   260,    58,    56,     3,     3,     3,     3,    58,
     247,   248,    63,    11,    43,    13,    59,    15,    16,    17,
      18,    19,    20,    32,    22,    34,   263,   264,    57,    28,
      31,    19,    61,    62,    57,    64,     3,     4,     5,     6,
       7,   278,    59,    59,    10,    43,    55,    59,     3,     3,
      59,     3,     4,     5,     6,     7,    32,    59,    34,    35,
      36,    37,    21,    61,    62,    32,    64,    34,    58,    60,
      59,    47,    48,    49,    50,    51,    52,    53,    54,    60,
      32,    64,    34,     3,    60,   196,   197,    59,    55,    59,
      59,   202,    59,    32,    58,    34,    35,    36,    37,    60,
      60,    58,    40,    55,    28,   216,   217,    59,    47,    48,
      49,    50,    51,    52,    53,    54,    57,    57,    39,    28,
      32,    60,    34,    35,    36,    37,    60,    57,    32,    57,
      34,    35,    36,    37,     3,    47,    48,    49,    50,    51,
      52,    53,    54,    47,    48,    49,    50,    32,    60,    34,
      35,    36,    37,    28,    57,    57,    57,     3,    58,    58,
      58,    58,    47,    48,    49,    50,    51,    52,    53,    54,
      58,    58,    58,    57,    32,    60,    34,    35,    36,    37,
      60,    58,    58,     5,    45,    66,    -1,   181,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    32,    60,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    28,    -1,    -1,    -1,    32,    60,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    28,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    28,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    37,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    47,    48,    49,    50,    51,
      52,    53,    54,    32,    -1,    34,    35,    36,    37,    -1,
      32,    -1,    34,    35,    36,    37,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    47,    48,    49,    50,    51,
      52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    14,    25,    66,    67,    68,    70,     3,    44,
       8,     0,    66,    70,    57,    72,     3,    73,    29,    71,
      74,     3,     9,    11,    13,    15,    16,    17,    18,    19,
      20,    22,    23,    24,    25,    43,    61,    62,    64,    69,
      70,    75,    76,    81,    82,    86,    87,    88,    89,    91,
      92,    93,    94,    99,   100,   101,   103,     3,    29,    57,
       3,    31,    32,    34,    38,    28,    59,     3,     4,     5,
       6,     7,    32,    34,    55,    59,   104,   105,    57,    59,
      59,    59,     9,    38,    75,    88,    75,    58,    75,    79,
      99,    75,    81,    28,    28,    28,    28,     3,    96,    98,
     104,    57,     3,    75,    31,   104,    32,    34,    95,    28,
      92,    99,   104,    34,   104,   104,    28,    32,    34,    35,
      36,    37,    47,    48,    49,    50,    51,    52,    53,    54,
      69,   102,   104,   104,   104,    63,    42,    63,    78,    80,
      99,    31,    30,    28,    75,    57,    58,    12,     3,    28,
      28,     3,   104,    60,    32,   104,    34,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,    88,
      58,    60,    60,    60,    56,    38,     3,     3,    63,    77,
     104,    97,    58,    75,     3,    59,    28,    28,   104,    19,
      57,    57,   102,   102,    59,    10,    59,    59,     3,     3,
      98,    58,    59,    84,    99,    60,    60,    28,    59,   102,
     102,    21,    64,    59,    84,    84,    59,    59,    84,    30,
      60,     3,    60,    60,   104,   104,    58,    58,   102,    40,
      90,   104,    60,    60,    84,    84,    60,    99,    28,    57,
      57,    60,    60,    21,    57,    39,    60,    57,    57,    60,
      60,    28,     3,   102,   102,    57,    28,   102,   102,    83,
      69,    85,    85,    57,    57,    58,    58,   102,    58,     3,
      58,    58,    85,    85,    58,    60,    58,    58,    57,    85,
      58
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
#line 68 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 79 "yacc2.y"
    {
                   strcpy(symbol_table[symbol_count-1].data_type, "class");
                }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 82 "yacc2.y"
    {
                strcpy(symbol_table[symbol_count-1].data_type, "class");
                }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 85 "yacc2.y"
    {
                strcpy(symbol_table[symbol_count-1].data_type, "class");
                }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 88 "yacc2.y"
    {
                strcpy(symbol_table[symbol_count-1].data_type, "class");
                }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 106 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, " function");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 107 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "function");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 108 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "function");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 109 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "function");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 115 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "String");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 132 "yacc2.y"
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

  case 51:

/* Line 1455 of yacc.c  */
#line 150 "yacc2.y"
    { printf("Assignment statement parsed.\n"); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 175 "yacc2.y"
    {  
                                                                                        
                                                                                         strcpy(symbol_table[symbol_count-1].data_type, strcat((yyvsp[(1) - (9)].strval)," obj"));
                                                                                                                                                                                 
                                                                                          
                                                                }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 182 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, " function");}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 185 "yacc2.y"
    {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 196 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "intger");
                    }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 198 "yacc2.y"
    { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 202 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 205 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "char");
                 }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 208 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "double");
                 }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 258 "yacc2.y"
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
#line 1992 "y.tab.c"
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
#line 280 "yacc2.y"


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


