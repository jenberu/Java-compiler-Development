
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
    int location;
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
#line 109 "y.tab.c"

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
     INT_CONST = 262,
     CHAR_CONST = 263,
     CLASS = 264,
     STATIC = 265,
     PRINTLN = 266,
     DOUBLE = 267,
     NEW = 268,
     CHAR = 269,
     IMPORT = 270,
     BREAK = 271,
     FOR = 272,
     RETURN = 273,
     DO = 274,
     WHILE = 275,
     IF = 276,
     ELSE = 277,
     SWITCH = 278,
     PRIVATE = 279,
     PROTECTED = 280,
     PUBLIC = 281,
     IMPLEMENTS = 282,
     THIS = 283,
     SEMICOLON = 284,
     EXTENDS = 285,
     COMMA = 286,
     ASSIGN = 287,
     MINUS = 288,
     COLON = 289,
     PLUS = 290,
     MULTIPLY = 291,
     DIVIDE = 292,
     MODULO = 293,
     DOT = 294,
     RBRACKET = 295,
     LBRACKET = 296,
     IN = 297,
     OUT = 298,
     SYSTEM = 299,
     JAVA_IMPORT = 300,
     CASE = 301,
     DEFAULT = 302,
     LESS_THAN = 303,
     LESS_EQUAL = 304,
     GREATER_THAN = 305,
     GREATER_EQUAL = 306,
     EQUALS = 307,
     NOT_EQUALS = 308,
     AND = 309,
     OR = 310,
     NOT = 311,
     MAIN = 312,
     LBRACE = 313,
     RBRACE = 314,
     LPAREN = 315,
     RPAREN = 316,
     INT = 317,
     FLOAT = 318,
     STRING = 319
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_CONST 259
#define VOID 260
#define FLOAT_CONST 261
#define INT_CONST 262
#define CHAR_CONST 263
#define CLASS 264
#define STATIC 265
#define PRINTLN 266
#define DOUBLE 267
#define NEW 268
#define CHAR 269
#define IMPORT 270
#define BREAK 271
#define FOR 272
#define RETURN 273
#define DO 274
#define WHILE 275
#define IF 276
#define ELSE 277
#define SWITCH 278
#define PRIVATE 279
#define PROTECTED 280
#define PUBLIC 281
#define IMPLEMENTS 282
#define THIS 283
#define SEMICOLON 284
#define EXTENDS 285
#define COMMA 286
#define ASSIGN 287
#define MINUS 288
#define COLON 289
#define PLUS 290
#define MULTIPLY 291
#define DIVIDE 292
#define MODULO 293
#define DOT 294
#define RBRACKET 295
#define LBRACKET 296
#define IN 297
#define OUT 298
#define SYSTEM 299
#define JAVA_IMPORT 300
#define CASE 301
#define DEFAULT 302
#define LESS_THAN 303
#define LESS_EQUAL 304
#define GREATER_THAN 305
#define GREATER_EQUAL 306
#define EQUALS 307
#define NOT_EQUALS 308
#define AND 309
#define OR 310
#define NOT 311
#define MAIN 312
#define LBRACE 313
#define RBRACE 314
#define LPAREN 315
#define RPAREN 316
#define INT 317
#define FLOAT 318
#define STRING 319




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 214 of yacc.c  */
#line 282 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 294 "y.tab.c"

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
#define YYLAST   683

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  328

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
      21,    24,    25,    26,    37,    38,    47,    48,    55,    56,
      64,    66,    69,    71,    74,    76,    79,    81,    84,    85,
      86,    98,    99,   110,   111,   122,   123,   135,   137,   138,
     139,   154,   157,   162,   163,   165,   166,   168,   170,   172,
     176,   180,   183,   186,   188,   190,   192,   195,   198,   200,
     202,   204,   207,   209,   214,   219,   225,   232,   240,   242,
     246,   255,   257,   258,   262,   266,   269,   279,   281,   283,
     287,   291,   292,   293,   302,   308,   310,   311,   316,   318,
     322,   324,   326,   328,   330,   332,   338,   350,   358,   366,
     376,   388,   399,   410,   412,   413,   417,   420,   428,   430,
     433,   435,   437,   442,   446,   450,   454,   458,   462,   466,
     470,   474,   478,   482,   486,   490,   494,   498,   501,   505,
     507,   511,   515,   518,   522,   524,   526,   528,   530
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    68,    -1,    67,    66,    -1,    67,    -1,
      15,    45,    -1,    70,    -1,    68,    70,    -1,    -1,    89,
      -1,    69,    89,    -1,    -1,    -1,    26,     9,     3,    71,
      30,     3,    72,    58,    76,    59,    -1,    -1,     9,     3,
      73,    30,     3,    58,    76,    59,    -1,    -1,     9,     3,
      58,    74,    76,    59,    -1,    -1,    26,     9,     3,    75,
      58,    76,    59,    -1,    69,    -1,    69,    76,    -1,    77,
      -1,    77,    76,    -1,    83,    -1,    83,    76,    -1,    70,
      -1,    70,    76,    -1,    -1,    -1,    87,    82,   104,    78,
       3,    60,    85,    61,    58,    86,    59,    -1,    -1,    82,
     104,    79,     3,    60,    85,    61,    58,    86,    59,    -1,
      -1,    82,     5,    80,     3,    60,    85,    61,    58,    86,
      59,    -1,    -1,    87,    82,     5,    81,     3,    60,    85,
      61,    58,    86,    59,    -1,    10,    -1,    -1,    -1,    26,
      10,     5,    57,    60,    64,    41,    40,    84,     3,    61,
      58,    86,    59,    -1,   104,     3,    -1,    85,    31,   104,
       3,    -1,    -1,    69,    -1,    -1,    26,    -1,    24,    -1,
      25,    -1,     3,    32,   114,    -1,   104,   114,    29,    -1,
      96,    29,    -1,    88,    29,    -1,   105,    -1,   106,    -1,
     108,    -1,    95,    29,    -1,    93,    29,    -1,    97,    -1,
      99,    -1,   109,    -1,    90,    29,    -1,    91,    -1,   104,
       3,    41,    40,    -1,   104,    41,    40,     3,    -1,   104,
       3,    41,   115,    40,    -1,    90,    32,    58,    92,    59,
      29,    -1,     3,    41,   115,    40,    32,   114,    29,    -1,
     114,    -1,    92,    31,   114,    -1,    44,    39,    43,    39,
      11,    60,    94,    61,    -1,   114,    -1,    -1,     3,    35,
      35,    -1,     3,    33,    33,    -1,   104,   101,    -1,     3,
       3,    32,    13,     3,    60,    98,    61,    29,    -1,   114,
      -1,   115,    -1,   115,    31,   114,    -1,    44,    39,    42,
      -1,    -1,    -1,     3,    39,     3,   100,    60,    98,    61,
      29,    -1,     3,    60,    98,    61,    29,    -1,   103,    -1,
      -1,   101,    31,   102,   103,    -1,     3,    -1,     3,    32,
     114,    -1,    62,    -1,    63,    -1,    64,    -1,    14,    -1,
      12,    -1,    21,    60,   114,    61,   107,    -1,    21,    60,
     114,    61,    58,   107,    59,    22,    58,   107,    59,    -1,
      21,    60,   114,    61,    58,   107,    59,    -1,    20,    60,
     114,    61,    58,   107,    59,    -1,    19,    58,   107,    59,
      20,    60,   114,    61,    29,    -1,    17,    60,    96,    29,
     114,    29,   114,    61,    58,   107,    59,    -1,    17,    60,
      29,    29,    29,    61,    61,    58,   107,    59,    -1,    17,
      60,    96,    29,    29,    61,    61,    58,   107,    59,    -1,
      69,    -1,    -1,    18,   114,    29,    -1,    16,    29,    -1,
      23,    60,   114,    61,    58,   110,    59,    -1,   111,    -1,
     110,   111,    -1,   112,    -1,   113,    -1,    46,   114,    34,
      69,    -1,    47,    34,    69,    -1,   114,    35,   114,    -1,
     114,    33,   114,    -1,   114,    36,   114,    -1,   114,    37,
     114,    -1,   114,    38,   114,    -1,   114,    48,   114,    -1,
     114,    49,   114,    -1,   114,    50,   114,    -1,   114,    51,
     114,    -1,   114,    52,   114,    -1,   114,    53,   114,    -1,
     114,    54,   114,    -1,   114,    55,   114,    -1,    56,   114,
      -1,    60,   114,    61,    -1,   115,    -1,   114,    35,    35,
      -1,   114,    33,    33,    -1,    33,   114,    -1,    35,    35,
     114,    -1,     3,    -1,     6,    -1,     7,    -1,     4,    -1,
       8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    64,    65,    67,    69,    70,    71,    73,
      74,    80,    90,    80,   100,   100,   108,   108,   116,   116,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   139,
     139,   140,   140,   141,   141,   142,   142,   145,   146,   148,
     148,   150,   151,   152,   155,   156,   158,   159,   160,   163,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   192,   193,   194,   196,   197,   207,   208,
     210,   212,   213,   215,   216,   221,   225,   239,   240,   241,
     242,   243,   246,   245,   252,   259,   260,   260,   266,   267,
     271,   273,   276,   280,   283,   288,   289,   290,   293,   294,
     295,   296,   297,   300,   301,   303,   304,   306,   309,   310,
     312,   313,   315,   318,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   345,   359,   360,   361,   362
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_CONST", "VOID",
  "FLOAT_CONST", "INT_CONST", "CHAR_CONST", "CLASS", "STATIC", "PRINTLN",
  "DOUBLE", "NEW", "CHAR", "IMPORT", "BREAK", "FOR", "RETURN", "DO",
  "WHILE", "IF", "ELSE", "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC",
  "IMPLEMENTS", "THIS", "SEMICOLON", "EXTENDS", "COMMA", "ASSIGN", "MINUS",
  "COLON", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "RBRACKET",
  "LBRACKET", "IN", "OUT", "SYSTEM", "JAVA_IMPORT", "CASE", "DEFAULT",
  "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "NOT", "MAIN", "LBRACE", "RBRACE", "LPAREN",
  "RPAREN", "INT", "FLOAT", "STRING", "$accept", "start",
  "import_statment", "program", "statement_list", "class_declaration",
  "$@1", "$@2", "$@3", "$@4", "$@5", "class_body", "function_decl", "$@6",
  "$@7", "$@8", "$@9", "static_func", "main_method", "$@10", "parm",
  "func_body", "modifier", "assignment", "statement", "array_declaration",
  "array_intialization", "arrayvalues", "system_out_println",
  "expr_or_string", "increament_decreament", "declaration",
  "object_creation", "parametr", "fuction_call", "$@11",
  "var_declarations", "$@12", "var_declaration", "type_specifier",
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
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    67,    68,    68,    68,    69,
      69,    71,    72,    70,    73,    70,    74,    70,    75,    70,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    78,
      77,    79,    77,    80,    77,    81,    77,    82,    82,    84,
      83,    85,    85,    85,    86,    86,    87,    87,    87,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    92,    92,
      93,    94,    94,    95,    95,    96,    97,    98,    98,    98,
      98,    98,   100,    99,    99,   101,   102,   101,   103,   103,
     104,   104,   104,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   106,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   112,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     0,     1,
       2,     0,     0,    10,     0,     8,     0,     6,     0,     7,
       1,     2,     1,     2,     1,     2,     1,     2,     0,     0,
      11,     0,    10,     0,    10,     0,    11,     1,     0,     0,
      14,     2,     4,     0,     1,     0,     1,     1,     1,     3,
       3,     2,     2,     1,     1,     1,     2,     2,     1,     1,
       1,     2,     1,     4,     4,     5,     6,     7,     1,     3,
       8,     1,     0,     3,     3,     2,     9,     1,     1,     3,
       3,     0,     0,     8,     5,     1,     0,     4,     1,     3,
       1,     1,     1,     1,     1,     5,    11,     7,     7,     9,
      11,    10,    10,     1,     0,     3,     2,     7,     1,     2,
       1,     1,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     1,
       3,     3,     2,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     0,     0,     4,     2,     6,    14,     5,
       0,     1,     3,     7,    16,     0,    11,    28,     0,     0,
       0,     0,    37,    94,    93,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    46,     0,    90,    91,    92,    20,
      26,     0,    22,     0,    24,    38,     0,     9,     0,    62,
       0,     0,     0,    58,    59,     0,    53,    54,    55,    60,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    81,
     106,     0,   134,   137,   135,   136,   138,     0,     0,     0,
       0,     0,   129,   104,     0,     0,     0,     0,     0,    21,
       9,    27,    17,    23,    33,    31,    25,     0,    52,    61,
       0,    57,    56,    51,   134,     0,    75,    85,     0,    28,
      12,     0,     0,    49,    74,    73,    82,     0,     0,     0,
      77,   129,     0,     0,     0,   132,     0,   127,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    29,     0,     0,     0,     0,    86,    50,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    88,   133,   128,   131,   115,   130,   114,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    10,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    89,    63,     0,    64,     0,    15,    28,     0,
      81,     0,    80,    84,    79,     0,     0,     0,     0,   104,
     104,    95,     0,     0,     0,    43,    43,     0,     0,     0,
       0,    65,    87,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   110,   111,     0,
      72,     0,     0,     0,    43,    43,    69,    66,    13,     0,
       0,    67,     0,     0,     0,     0,    98,    97,     0,     0,
     107,   109,     0,     0,    71,     0,     0,    41,     0,     0,
       0,     0,    83,   104,   104,     0,     0,     0,     0,   113,
      39,    70,     0,    45,    45,     0,     0,    76,     0,     0,
     104,    99,   104,   112,     0,    42,    44,     0,     0,    45,
      45,   101,   102,     0,     0,     0,    34,    32,     0,     0,
     100,    96,     0,    36,    30,    45,     0,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    39,    40,    19,   161,    15,    17,
      20,    41,    42,   199,   151,   150,   198,    43,    44,   304,
     251,   307,    45,    46,    47,    48,    49,   200,    50,   273,
      51,    52,    53,   119,    54,   164,   106,   206,   107,    55,
      56,    57,   144,    58,    59,   245,   246,   247,   248,   120,
      82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -250
static const yytype_int16 yypact[] =
{
      60,     2,   -33,     6,    25,    60,    55,  -250,     4,  -250,
      79,  -250,  -250,  -250,  -250,    54,    35,   228,    95,    84,
      72,   310,  -250,  -250,  -250,   107,    89,   262,    81,    98,
     104,   108,  -250,  -250,    86,   105,  -250,  -250,  -250,   228,
     228,    96,   228,    37,   228,   176,   144,  -250,    14,  -250,
     171,   174,   181,  -250,  -250,   163,  -250,  -250,  -250,  -250,
     147,   213,   228,   185,   262,   188,   187,   221,   321,   252,
    -250,   145,  -250,  -250,  -250,  -250,  -250,   262,   195,   262,
     262,   488,  -250,    15,   262,   262,   262,   227,   192,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,    43,  -250,  -250,
     183,  -250,  -250,  -250,   257,   199,   226,  -250,   515,   228,
    -250,   202,   249,   600,  -250,  -250,  -250,   223,   232,   214,
     600,   -24,   264,   265,   278,   152,   262,  -250,   326,  -250,
     276,   313,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,    15,   241,   353,   380,   407,   244,   263,
     301,   303,  -250,  -250,   262,   262,    13,   304,  -250,  -250,
     251,   256,  -250,   312,   271,   291,   292,   315,   262,   318,
     270,   309,   152,  -250,   139,   152,  -250,   152,  -250,  -250,
    -250,   302,   302,   302,   302,   143,   143,   630,   608,  -250,
     330,   275,    71,   294,   293,   343,   295,   296,   354,   355,
     -20,   600,   600,  -250,   320,  -250,   278,  -250,   228,   305,
     252,   262,  -250,  -250,   600,   306,   307,   542,   311,    15,
      15,  -250,    56,   308,   322,    99,    99,   323,   324,   262,
     337,  -250,  -250,   333,   252,   332,   569,   334,   335,   262,
     262,   338,   339,   262,   351,   106,  -250,  -250,  -250,   358,
     262,   -17,   391,    -9,    99,    99,   600,  -250,  -250,   348,
     371,  -250,   352,   361,   434,   461,  -250,   389,   577,    15,
    -250,  -250,   372,   359,   600,    99,   363,  -250,   364,    -7,
      -3,   394,  -250,    15,    15,   366,   396,   368,    15,    15,
    -250,  -250,   424,    15,    15,   378,   379,  -250,   387,   388,
      15,  -250,    15,    15,   435,  -250,    15,   390,   392,    15,
      15,  -250,  -250,   393,   395,   402,  -250,  -250,   405,   406,
    -250,  -250,   381,  -250,  -250,    15,   414,  -250
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,   443,  -250,  -250,   -82,   177,  -250,  -250,  -250,  -250,
    -250,   -36,  -250,  -250,  -250,  -250,  -250,   408,  -250,  -250,
    -146,  -249,  -250,  -250,   -39,  -250,  -250,  -250,  -250,  -250,
    -250,   403,  -250,  -187,  -250,  -250,  -250,  -250,   260,   -41,
    -250,  -250,  -152,  -250,  -250,  -250,   205,  -250,  -250,   -14,
     -59
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -89
static const yytype_int16 yytable[] =
{
      90,   143,    95,    89,    91,     8,    93,   168,    96,   117,
     121,   229,     9,    81,   275,    10,    72,    73,    21,    74,
      75,    76,   275,   235,   275,    11,   111,    23,   275,    24,
     124,    25,    26,    27,    28,    29,    30,   -78,    31,   230,
     221,   108,    94,    99,   276,   308,   100,   259,   152,    23,
     113,    24,   278,   203,   295,    23,   153,    24,   296,    35,
     318,   319,    14,   125,     1,   127,   128,   241,   242,     1,
     145,   146,   147,   160,    21,     2,   326,    36,    37,    38,
     253,     3,    16,    23,    18,    24,     3,    25,    26,    27,
      28,    29,    30,   -18,    31,    10,    87,   204,    60,    36,
      37,    38,   243,   244,   189,    36,    37,    38,   279,   280,
     143,    23,   172,    24,    61,    35,   175,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   220,
      62,   298,   299,    36,    37,    38,    70,   143,   143,    83,
     201,   202,    72,    73,    88,    74,    75,    76,   313,    71,
     314,   121,   243,   244,   214,    92,   217,    23,    84,    24,
     125,    36,    37,    38,    85,   270,   104,    73,    86,    74,
      75,    76,   233,    98,   122,   121,   130,     7,   131,   132,
     133,   134,     7,    13,   252,   252,    22,   289,   132,   133,
     134,   135,   136,   137,   138,    79,    77,   236,    78,    80,
     101,   143,   143,   102,   105,   109,   303,    36,    37,    38,
     103,   306,   306,   252,   252,   256,   110,   112,   143,    79,
     143,   114,   115,    80,   116,   264,   265,   306,   306,   268,
     126,    21,   148,   -38,   292,   149,   274,     1,    22,   157,
      23,   154,    24,   306,    25,    26,    27,    28,    29,    30,
     189,    31,    32,    33,    34,    72,    73,   158,    74,    75,
      76,   162,   163,   165,   189,    72,    73,   189,    74,    75,
      76,   166,    35,    72,    73,   167,    74,    75,    76,    72,
      73,   171,    74,    75,    76,    77,   -88,    78,   -88,   155,
      36,    37,    38,   169,   170,    77,   118,    78,   156,   216,
     190,   194,   195,    77,   196,    78,   197,   205,    79,   174,
     207,    78,    80,    63,   208,   209,    72,    73,    79,    74,
      75,    76,    80,   211,    72,    73,    79,    74,    75,    76,
      80,   210,    79,   219,   212,   130,    80,   131,   132,   133,
     134,   155,    64,    65,   213,    66,    77,   215,   176,    67,
     218,    68,   222,   223,   224,   225,   226,   227,   228,   130,
     231,   131,   132,   133,   134,   234,   257,   237,   238,    79,
      69,   240,   249,    80,   135,   136,   137,   138,   139,   140,
     141,   142,   250,   254,   255,   269,   130,   173,   131,   132,
     133,   134,   258,   260,   277,   262,   263,   266,   267,   272,
     282,   135,   136,   137,   138,   139,   140,   141,   142,   281,
     283,   287,   290,   130,   191,   131,   132,   133,   134,   284,
     291,   293,   294,   297,   300,   301,   302,   305,   135,   136,
     137,   138,   139,   140,   141,   142,   309,   310,   315,   325,
     130,   192,   131,   132,   133,   134,   311,   312,    12,   316,
     271,   317,   320,    97,   321,   135,   136,   137,   138,   139,
     140,   141,   142,   322,   323,   324,   232,   130,   193,   131,
     132,   133,   134,   327,   123,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
       0,     0,     0,     0,   130,   285,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   129,     0,     0,
       0,   130,   286,   131,   132,   133,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   159,     0,     0,     0,   130,     0,
     131,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   239,     0,     0,     0,   130,     0,   131,   132,   133,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   261,     0,
       0,     0,   130,     0,   131,   132,   133,   134,     0,     0,
     130,   288,   131,   132,   133,   134,     0,   135,   136,   137,
     138,   139,   140,   141,   142,   135,   136,   137,   138,   139,
     140,   141,   142,   130,     0,   131,   132,   133,   134,     0,
       0,   130,     0,   131,   132,   133,   134,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   135,   136,   137,   138,
     139,   140,   141,   130,     0,   131,   132,   133,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140
};

static const yytype_int16 yycheck[] =
{
      39,    83,    43,    39,    40,     3,    42,    31,    44,    68,
      69,    31,    45,    27,    31,     9,     3,     4,     3,     6,
       7,     8,    31,   210,    31,     0,    62,    12,    31,    14,
      71,    16,    17,    18,    19,    20,    21,    61,    23,    59,
     192,    55,     5,    29,    61,   294,    32,   234,     5,    12,
      64,    14,    61,    40,    61,    12,    97,    14,    61,    44,
     309,   310,    58,    77,     9,    79,    80,   219,   220,     9,
      84,    85,    86,   109,     3,    15,   325,    62,    63,    64,
     226,    26,     3,    12,    30,    14,    26,    16,    17,    18,
      19,    20,    21,    58,    23,     9,    10,   156,     3,    62,
      63,    64,    46,    47,   143,    62,    63,    64,   254,   255,
     192,    12,   126,    14,    30,    44,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,    58,
      58,   283,   284,    62,    63,    64,    29,   219,   220,    58,
     154,   155,     3,     4,    39,     6,     7,     8,   300,    60,
     302,   210,    46,    47,   168,    59,   170,    12,    60,    14,
     174,    62,    63,    64,    60,    59,     3,     4,    60,     6,
       7,     8,   208,    29,    29,   234,    33,     0,    35,    36,
      37,    38,     5,     6,   225,   226,    10,   269,    36,    37,
      38,    48,    49,    50,    51,    56,    33,   211,    35,    60,
      29,   283,   284,    29,    41,    58,   288,    62,    63,    64,
      29,   293,   294,   254,   255,   229,     3,    32,   300,    56,
     302,    33,    35,    60,     3,   239,   240,   309,   310,   243,
      35,     3,     5,     5,   275,    43,   250,     9,    10,    40,
      12,    58,    14,   325,    16,    17,    18,    19,    20,    21,
     289,    23,    24,    25,    26,     3,     4,    31,     6,     7,
       8,    59,    13,    40,   303,     3,     4,   306,     6,     7,
       8,    39,    44,     3,     4,    61,     6,     7,     8,     3,
       4,     3,     6,     7,     8,    33,    29,    35,    31,    32,
      62,    63,    64,    29,    29,    33,    44,    35,    41,    29,
      59,    57,    39,    33,     3,    35,     3,     3,    56,    33,
      59,    35,    60,     3,    58,     3,     3,     4,    56,     6,
       7,     8,    60,    32,     3,     4,    56,     6,     7,     8,
      60,    60,    56,    58,    42,    33,    60,    35,    36,    37,
      38,    32,    32,    33,    29,    35,    33,    29,    35,    39,
      20,    41,    58,    60,    11,    60,    60,     3,     3,    33,
      40,    35,    36,    37,    38,    60,    29,    61,    61,    56,
      60,    60,    64,    60,    48,    49,    50,    51,    52,    53,
      54,    55,    60,    60,    60,    34,    33,    61,    35,    36,
      37,    38,    59,    61,     3,    61,    61,    59,    59,    41,
      29,    48,    49,    50,    51,    52,    53,    54,    55,    61,
      58,    22,    40,    33,    61,    35,    36,    37,    38,    58,
      61,    58,    58,    29,    58,    29,    58,     3,    48,    49,
      50,    51,    52,    53,    54,    55,    58,    58,     3,    58,
      33,    61,    35,    36,    37,    38,    59,    59,     5,    59,
     245,    59,    59,    45,    59,    48,    49,    50,    51,    52,
      53,    54,    55,    61,    59,    59,   206,    33,    61,    35,
      36,    37,    38,    59,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    33,    61,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    29,    -1,    -1,
      -1,    33,    61,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    29,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    48,    49,    50,    51,    52,
      53,    54,    55,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    33,    -1,    35,    36,    37,    38,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    48,    49,    50,    51,
      52,    53,    54,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    15,    26,    66,    67,    68,    70,     3,    45,
       9,     0,    66,    70,    58,    73,     3,    74,    30,    71,
      75,     3,    10,    12,    14,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    26,    44,    62,    63,    64,    69,
      70,    76,    77,    82,    83,    87,    88,    89,    90,    91,
      93,    95,    96,    97,    99,   104,   105,   106,   108,   109,
       3,    30,    58,     3,    32,    33,    35,    39,    41,    60,
      29,    60,     3,     4,     6,     7,     8,    33,    35,    56,
      60,   114,   115,    58,    60,    60,    60,    10,    39,    76,
      89,    76,    59,    76,     5,   104,    76,    82,    29,    29,
      32,    29,    29,    29,     3,    41,   101,   103,   114,    58,
       3,    76,    32,   114,    33,    35,     3,   115,    44,    98,
     114,   115,    29,    96,   104,   114,    35,   114,   114,    29,
      33,    35,    36,    37,    38,    48,    49,    50,    51,    52,
      53,    54,    55,    69,   107,   114,   114,   114,     5,    43,
      80,    79,     5,   104,    58,    32,    41,    40,    31,    29,
      76,    72,    59,    13,   100,    40,    39,    61,    31,    29,
      29,     3,   114,    61,    33,   114,    35,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,    89,
      59,    61,    61,    61,    57,    39,     3,     3,    81,    78,
      92,   114,   114,    40,   115,     3,   102,    59,    58,     3,
      60,    32,    42,    29,   114,    29,    29,   114,    20,    58,
      58,   107,    58,    60,    11,    60,    60,     3,     3,    31,
      59,    40,   103,    76,    60,    98,   114,    61,    61,    29,
      60,   107,   107,    46,    47,   110,   111,   112,   113,    64,
      60,    85,   104,    85,    60,    60,   114,    29,    59,    98,
      61,    29,    61,    61,   114,   114,    59,    59,   114,    34,
      59,   111,    41,    94,   114,    31,    61,     3,    61,    85,
      85,    61,    29,    58,    58,    61,    61,    22,    34,    69,
      40,    61,   104,    58,    58,    61,    61,    29,   107,   107,
      58,    29,    58,    69,    84,     3,    69,    86,    86,    58,
      58,    59,    59,   107,   107,     3,    59,    59,    86,    86,
      59,    59,    61,    59,    59,    58,    86,    59
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
#line 69 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 80 "yacc2.y"
    {
                        char* identifier =(yyvsp[(3) - (3)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                                       
                }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 90 "yacc2.y"
    {
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(6) - (6)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                                       
                }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 100 "yacc2.y"
    {
             char *data_type = get_data_type((yyvsp[(2) - (2)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 108 "yacc2.y"
    {
             char *data_type = get_data_type((yyvsp[(2) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 116 "yacc2.y"
    {
               char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 139 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(3) - (3)].strval));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 140 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(2) - (2)].strval));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 141 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(2) - (2)].strval));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 142 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(3) - (3)].strval));}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 148 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "String");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 163 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (3)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result!=0) {
                                          // Identifier exists, perform the assignment
                                            }
                                        else {
                                              // Identifier does not exist, print an error message
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment before declaration is not allowed");
                                            // You can also choose to exit parsing or handle the error differently
                                           } 
                                           }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 197 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (7)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (7)].strval));
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment not allowed");                                            }
                                       
                                           }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 225 "yacc2.y"
    {  
                                        char *data_type = get_data_type((yyvsp[(1) - (9)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                          strcpy(symbol_table[symbol_count-2].data_type, "class");

                                            }
                                                                                         
                
                                        strcpy(symbol_table[symbol_count-1].data_type, strcat((yyvsp[(1) - (9)].strval)," obj"));
                                                                                                                                                                                 
                                                                                          
                                        }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 246 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count-1].data_type, " func call");
                                            }
            }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 252 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(1) - (5)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count-1].data_type, " func call");
                                            }
            }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 260 "yacc2.y"
    {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 271 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "int");
                    }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 273 "yacc2.y"
    { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 277 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 280 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "char");
                 }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 283 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "double");
                 }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 345 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (1)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (1)].strval));
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result!=0) {
                                          // Identifier exists, perform the assignment
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
#line 2119 "y.tab.c"
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
#line 366 "yacc2.y"


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


