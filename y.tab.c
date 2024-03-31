
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
#define YYLAST   692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  327

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
     202,   205,   207,   212,   217,   223,   230,   238,   240,   244,
     253,   255,   256,   260,   264,   267,   277,   279,   281,   285,
     289,   290,   291,   300,   306,   308,   309,   314,   316,   320,
     322,   324,   326,   328,   330,   336,   348,   356,   364,   374,
     386,   397,   408,   410,   411,   415,   418,   426,   428,   431,
     433,   435,   440,   444,   448,   452,   456,   460,   464,   468,
     472,   476,   480,   484,   488,   492,   496,   499,   503,   505,
     509,   513,   516,   520,   522,   524,   526,   528
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    68,    -1,    67,    66,    -1,    67,    -1,
      15,    45,    -1,    70,    -1,    68,    70,    -1,    -1,    88,
      -1,    69,    88,    -1,    -1,    26,     9,     3,    71,    30,
       3,    58,    75,    59,    -1,    -1,     9,     3,    72,    30,
       3,    58,    75,    59,    -1,    -1,     9,     3,    58,    73,
      75,    59,    -1,    -1,    26,     9,     3,    74,    58,    75,
      59,    -1,    69,    -1,    69,    75,    -1,    76,    -1,    76,
      75,    -1,    82,    -1,    82,    75,    -1,    70,    -1,    70,
      75,    -1,    -1,    -1,    86,    81,   103,    77,     3,    60,
      84,    61,    58,    85,    59,    -1,    -1,    81,   103,    78,
       3,    60,    84,    61,    58,    85,    59,    -1,    -1,    81,
       5,    79,     3,    60,    84,    61,    58,    85,    59,    -1,
      -1,    86,    81,     5,    80,     3,    60,    84,    61,    58,
      85,    59,    -1,    10,    -1,    -1,    -1,    26,    10,     5,
      57,    60,    64,    41,    40,    83,     3,    61,    58,    85,
      59,    -1,   103,     3,    -1,    84,    31,   103,     3,    -1,
      -1,    69,    -1,    -1,    26,    -1,    24,    -1,    25,    -1,
       3,    32,   113,    -1,   103,   113,    29,    -1,    95,    29,
      -1,    87,    29,    -1,   104,    -1,   105,    -1,   107,    -1,
      94,    29,    -1,    92,    29,    -1,    96,    -1,    98,    -1,
     108,    -1,    89,    29,    -1,    90,    -1,   103,     3,    41,
      40,    -1,   103,    41,    40,     3,    -1,   103,     3,    41,
     114,    40,    -1,    89,    32,    58,    91,    59,    29,    -1,
       3,    41,   114,    40,    32,   113,    29,    -1,   113,    -1,
      91,    31,   113,    -1,    44,    39,    43,    39,    11,    60,
      93,    61,    -1,   113,    -1,    -1,     3,    35,    35,    -1,
       3,    33,    33,    -1,   103,   100,    -1,     3,     3,    32,
      13,     3,    60,    97,    61,    29,    -1,   113,    -1,   114,
      -1,   114,    31,   113,    -1,    44,    39,    42,    -1,    -1,
      -1,     3,    39,     3,    99,    60,    97,    61,    29,    -1,
       3,    60,    97,    61,    29,    -1,   102,    -1,    -1,   100,
      31,   101,   102,    -1,     3,    -1,     3,    32,   113,    -1,
      62,    -1,    63,    -1,    64,    -1,    14,    -1,    12,    -1,
      21,    60,   113,    61,   106,    -1,    21,    60,   113,    61,
      58,   106,    59,    22,    58,   106,    59,    -1,    21,    60,
     113,    61,    58,   106,    59,    -1,    20,    60,   113,    61,
      58,   106,    59,    -1,    19,    58,   106,    59,    20,    60,
     113,    61,    29,    -1,    17,    60,    95,    29,   113,    29,
     113,    61,    58,   106,    59,    -1,    17,    60,    29,    29,
      29,    61,    61,    58,   106,    59,    -1,    17,    60,    95,
      29,    29,    61,    61,    58,   106,    59,    -1,    69,    -1,
      -1,    18,   113,    29,    -1,    16,    29,    -1,    23,    60,
     113,    61,    58,   109,    59,    -1,   110,    -1,   109,   110,
      -1,   111,    -1,   112,    -1,    46,   113,    34,    69,    -1,
      47,    34,    69,    -1,   113,    35,   113,    -1,   113,    33,
     113,    -1,   113,    36,   113,    -1,   113,    37,   113,    -1,
     113,    38,   113,    -1,   113,    48,   113,    -1,   113,    49,
     113,    -1,   113,    50,   113,    -1,   113,    51,   113,    -1,
     113,    52,   113,    -1,   113,    53,   113,    -1,   113,    54,
     113,    -1,   113,    55,   113,    -1,    56,   113,    -1,    60,
     113,    61,    -1,   114,    -1,   113,    35,    35,    -1,   113,
      33,    33,    -1,    33,   113,    -1,    35,    35,   113,    -1,
       3,    -1,     6,    -1,     7,    -1,     4,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    64,    65,    67,    69,    70,    71,    73,
      74,    80,    80,    91,    91,    99,    99,   107,   107,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   130,   130,
     131,   131,   132,   132,   133,   133,   136,   137,   139,   139,
     141,   142,   143,   146,   147,   149,   150,   151,   154,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   183,   184,   185,   187,   188,   198,   199,   201,
     203,   204,   206,   207,   212,   216,   230,   231,   232,   233,
     234,   237,   236,   243,   250,   251,   251,   257,   258,   262,
     264,   267,   271,   274,   279,   280,   281,   284,   285,   286,
     287,   288,   291,   292,   294,   295,   297,   300,   301,   303,
     304,   306,   309,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   336,   350,   351,   352,   353
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
  "$@1", "$@2", "$@3", "$@4", "class_body", "function_decl", "$@5", "$@6",
  "$@7", "$@8", "static_func", "main_method", "$@9", "parm", "func_body",
  "modifier", "assignment", "statement", "array_declaration",
  "array_intialization", "arrayvalues", "system_out_println",
  "expr_or_string", "increament_decreament", "declaration",
  "object_creation", "parametr", "fuction_call", "$@10",
  "var_declarations", "$@11", "var_declaration", "type_specifier",
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
      69,    71,    70,    72,    70,    73,    70,    74,    70,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    77,    76,
      78,    76,    79,    76,    80,    76,    81,    81,    83,    82,
      84,    84,    84,    85,    85,    86,    86,    86,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    90,    91,    91,    92,
      93,    93,    94,    94,    95,    96,    97,    97,    97,    97,
      97,    99,    98,    98,   100,   101,   100,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     0,     1,
       2,     0,     9,     0,     8,     0,     6,     0,     7,     1,
       2,     1,     2,     1,     2,     1,     2,     0,     0,    11,
       0,    10,     0,    10,     0,    11,     1,     0,     0,    14,
       2,     4,     0,     1,     0,     1,     1,     1,     3,     3,
       2,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       2,     1,     4,     4,     5,     6,     7,     1,     3,     8,
       1,     0,     3,     3,     2,     9,     1,     1,     3,     3,
       0,     0,     8,     5,     1,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     5,    11,     7,     7,     9,    11,
      10,    10,     1,     0,     3,     2,     7,     1,     2,     1,
       1,     4,     3,     3,     3,     3,     3,     3,     3,     3,
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
       0,     0,    36,    93,    92,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    45,     0,    89,    90,    91,    19,
      25,     0,    21,     0,    23,    37,     0,     9,     0,    61,
       0,     0,     0,    57,    58,     0,    52,    53,    54,    59,
       0,     0,    27,     0,     0,     0,     0,     0,     0,    80,
     105,     0,   133,   136,   134,   135,   137,     0,     0,     0,
       0,     0,   128,   103,     0,     0,     0,     0,     0,    20,
       9,    26,    16,    22,    32,    30,    24,     0,    51,    60,
       0,    56,    55,    50,   133,     0,    74,    84,     0,    27,
       0,     0,     0,    48,    73,    72,    81,     0,     0,     0,
      76,   128,     0,     0,     0,   131,     0,   126,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    28,     0,     0,     0,     0,    85,    49,
       0,    27,    18,     0,     0,     0,     0,     0,     0,     0,
       0,    87,   132,   127,   130,   114,   129,   113,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    10,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    88,    62,     0,    63,     0,    14,     0,     0,
      80,     0,    79,    83,    78,     0,     0,     0,     0,   103,
     103,    94,     0,     0,     0,    42,    42,     0,     0,     0,
       0,    64,    86,    12,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   109,   110,     0,
      71,     0,     0,     0,    42,    42,    68,    65,     0,     0,
      66,     0,     0,     0,     0,    97,    96,     0,     0,   106,
     108,     0,     0,    70,     0,     0,    40,     0,     0,     0,
       0,    82,   103,   103,     0,     0,     0,     0,   112,    38,
      69,     0,    44,    44,     0,     0,    75,     0,     0,   103,
      98,   103,   111,     0,    41,    43,     0,     0,    44,    44,
     100,   101,     0,     0,     0,    33,    31,     0,     0,    99,
      95,     0,    35,    29,    44,     0,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    39,    40,    19,    15,    17,    20,
      41,    42,   199,   151,   150,   198,    43,    44,   303,   251,
     306,    45,    46,    47,    48,    49,   200,    50,   272,    51,
      52,    53,   119,    54,   164,   106,   206,   107,    55,    56,
      57,   144,    58,    59,   245,   246,   247,   248,   120,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -189
static const yytype_int16 yypact[] =
{
       1,     8,   -22,    20,    67,     1,    43,  -189,    21,  -189,
      78,  -189,  -189,  -189,  -189,    53,    38,   234,    97,    75,
      48,   109,  -189,  -189,  -189,    85,    76,   286,    77,    89,
      91,    93,  -189,  -189,    52,   121,  -189,  -189,  -189,   234,
     234,   103,   234,    39,   234,   154,   137,  -189,   111,  -189,
     138,   139,   144,  -189,  -189,   266,  -189,  -189,  -189,  -189,
     117,   179,   234,   155,   286,   156,   153,   187,   347,   273,
    -189,    35,  -189,  -189,  -189,  -189,  -189,   286,   157,   286,
     286,   519,  -189,   160,   286,   286,   286,   192,   169,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,    45,  -189,  -189,
     140,  -189,  -189,  -189,   271,   159,   172,  -189,   546,   234,
     163,   166,   202,   631,  -189,  -189,  -189,   176,   189,   168,
     631,   -28,   203,   206,   215,   120,   286,  -189,   357,  -189,
     324,   331,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   160,   177,   384,   411,   438,   181,   201,
     242,   244,  -189,  -189,   286,   286,   112,   253,  -189,  -189,
     205,   234,  -189,   258,   207,   230,   223,   239,   286,   246,
     280,   250,   120,  -189,   341,   120,  -189,   120,  -189,  -189,
    -189,   332,   332,   332,   332,   158,   158,   639,   325,  -189,
     251,   227,    22,   233,   235,   293,   245,   254,   307,   308,
      -5,   631,   631,  -189,   276,  -189,   215,  -189,   259,   260,
     273,   286,  -189,  -189,   631,   262,   263,   573,   265,   160,
     160,  -189,    41,   277,   283,    10,    10,   292,   296,   286,
     342,  -189,  -189,  -189,   273,   311,   600,   320,   321,   286,
     286,   326,   327,   286,   349,   -38,  -189,  -189,  -189,   348,
     286,   -24,   385,    -3,    10,    10,   631,  -189,   335,   369,
    -189,   344,   345,   465,   492,  -189,   377,   608,   160,  -189,
    -189,   360,   343,   631,    10,   355,  -189,   356,    17,    29,
     386,  -189,   160,   160,   358,   394,   366,   160,   160,  -189,
    -189,   422,   160,   160,   368,   370,  -189,   371,   372,   160,
    -189,   160,   160,   424,  -189,   160,   381,   382,   160,   160,
    -189,  -189,   383,   391,   390,  -189,  -189,   393,   395,  -189,
    -189,   397,  -189,  -189,   160,   398,  -189
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,   448,  -189,  -189,   -82,    14,  -189,  -189,  -189,  -189,
     -27,  -189,  -189,  -189,  -189,  -189,   413,  -189,  -189,  -163,
    -154,  -189,  -189,   -39,  -189,  -189,  -189,  -189,  -189,  -189,
     396,  -189,  -145,  -189,  -189,  -189,  -189,   237,   -41,  -189,
    -189,  -188,  -189,  -189,  -189,   184,  -189,  -189,    -9,   -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int16 yytable[] =
{
      90,   143,    95,   168,   221,   117,   121,   274,   243,   244,
       1,     8,    89,    91,     7,    93,     2,    96,    81,     7,
      13,   269,    23,     9,    24,    21,   229,     3,   274,    10,
     124,   241,   242,   -77,    23,   111,    24,   275,    25,    26,
      27,    28,    29,    30,    94,    31,   108,    23,   274,    24,
     152,    23,     1,    24,   230,   113,   153,    23,   277,    24,
     274,    10,    87,   253,   122,   235,    35,    11,   125,     3,
     127,   128,    36,    37,    38,   145,   146,   147,   294,    14,
     220,    16,   160,    18,    36,    37,    38,   243,   244,   258,
     295,   278,   279,   204,   297,   298,   -17,    36,    37,    38,
      60,    36,    37,    38,   189,    61,    62,    36,    37,    38,
     143,   312,    63,   313,    70,    72,    73,   172,    74,    75,
      76,   175,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   208,    83,    71,   143,   143,   307,
      99,    64,    65,   100,    66,   201,   202,   121,    67,    84,
      68,    85,   203,    86,   317,   318,   132,   133,   134,   214,
      88,   217,    92,    21,    22,   125,    98,   101,   102,    69,
     325,   121,    23,   103,    24,   109,    25,    26,    27,    28,
      29,    30,   110,    31,   252,   252,   288,   112,   115,   114,
     116,   130,   126,   131,   132,   133,   134,   148,   154,   157,
     143,   143,   236,   158,    35,   302,   135,   136,   137,   138,
     305,   305,   149,   252,   252,   163,   165,   143,   171,   143,
     256,   161,    36,    37,    38,   162,   305,   305,   166,   167,
     263,   264,   169,   291,   267,   170,   190,    21,   194,   -37,
     195,   273,   305,     1,    22,   196,    23,   197,    24,   189,
      25,    26,    27,    28,    29,    30,   205,    31,    32,    33,
      34,   209,   211,   189,   207,   212,   189,   210,   213,   104,
      73,   218,    74,    75,    76,   215,    72,    73,    35,    74,
      75,    76,   155,    72,    73,   219,    74,    75,    76,    72,
      73,   222,    74,    75,    76,   223,    36,    37,    38,    77,
     -87,    78,   -87,   155,   224,   225,    77,   105,    78,   216,
     227,   228,   156,    77,   226,    78,   231,   118,   233,    77,
     234,    78,    79,   237,   238,   240,    80,    72,    73,    79,
      74,    75,    76,    80,    72,    73,    79,    74,    75,    76,
      80,   249,    79,   250,    72,    73,    80,    74,    75,    76,
      72,    73,   254,    74,    75,    76,   255,   174,   130,    78,
     131,   132,   133,   134,    77,   130,   176,   131,   132,   133,
     134,   257,   259,   135,   136,   137,   138,   139,   140,   141,
      79,   261,   262,   268,    80,   265,   266,    79,   276,   271,
     130,    80,   131,   132,   133,   134,   280,    79,   281,   286,
     289,    80,   282,   283,   290,   135,   136,   137,   138,   139,
     140,   141,   142,   292,   293,   296,   299,   130,   173,   131,
     132,   133,   134,   300,   301,   304,   308,   314,   309,   270,
     310,   311,   135,   136,   137,   138,   139,   140,   141,   142,
     315,   316,   319,   232,   130,   191,   131,   132,   133,   134,
     320,   321,   322,    12,   323,   324,     0,   326,    97,   135,
     136,   137,   138,   139,   140,   141,   142,   123,     0,     0,
       0,   130,   192,   131,   132,   133,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,     0,     0,     0,     0,   130,   193,
     131,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,     0,     0,   130,   284,   131,   132,   133,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   129,     0,
       0,     0,   130,   285,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
     138,   139,   140,   141,   142,   159,     0,     0,     0,   130,
       0,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   239,     0,     0,     0,   130,     0,   131,   132,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   260,
       0,     0,     0,   130,     0,   131,   132,   133,   134,     0,
       0,   130,   287,   131,   132,   133,   134,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   135,   136,   137,   138,
     139,   140,   141,   142,   130,     0,   131,   132,   133,   134,
       0,     0,   130,     0,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   135,   136,   137,
     138,   139,   140
};

static const yytype_int16 yycheck[] =
{
      39,    83,    43,    31,   192,    68,    69,    31,    46,    47,
       9,     3,    39,    40,     0,    42,    15,    44,    27,     5,
       6,    59,    12,    45,    14,     3,    31,    26,    31,     9,
      71,   219,   220,    61,    12,    62,    14,    61,    16,    17,
      18,    19,    20,    21,     5,    23,    55,    12,    31,    14,
       5,    12,     9,    14,    59,    64,    97,    12,    61,    14,
      31,     9,    10,   226,    29,   210,    44,     0,    77,    26,
      79,    80,    62,    63,    64,    84,    85,    86,    61,    58,
      58,     3,   109,    30,    62,    63,    64,    46,    47,   234,
      61,   254,   255,   156,   282,   283,    58,    62,    63,    64,
       3,    62,    63,    64,   143,    30,    58,    62,    63,    64,
     192,   299,     3,   301,    29,     3,     4,   126,     6,     7,
       8,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   161,    58,    60,   219,   220,   293,
      29,    32,    33,    32,    35,   154,   155,   210,    39,    60,
      41,    60,    40,    60,   308,   309,    36,    37,    38,   168,
      39,   170,    59,     3,    10,   174,    29,    29,    29,    60,
     324,   234,    12,    29,    14,    58,    16,    17,    18,    19,
      20,    21,     3,    23,   225,   226,   268,    32,    35,    33,
       3,    33,    35,    35,    36,    37,    38,     5,    58,    40,
     282,   283,   211,    31,    44,   287,    48,    49,    50,    51,
     292,   293,    43,   254,   255,    13,    40,   299,     3,   301,
     229,    58,    62,    63,    64,    59,   308,   309,    39,    61,
     239,   240,    29,   274,   243,    29,    59,     3,    57,     5,
      39,   250,   324,     9,    10,     3,    12,     3,    14,   288,
      16,    17,    18,    19,    20,    21,     3,    23,    24,    25,
      26,     3,    32,   302,    59,    42,   305,    60,    29,     3,
       4,    20,     6,     7,     8,    29,     3,     4,    44,     6,
       7,     8,    32,     3,     4,    58,     6,     7,     8,     3,
       4,    58,     6,     7,     8,    60,    62,    63,    64,    33,
      29,    35,    31,    32,    11,    60,    33,    41,    35,    29,
       3,     3,    41,    33,    60,    35,    40,    44,    59,    33,
      60,    35,    56,    61,    61,    60,    60,     3,     4,    56,
       6,     7,     8,    60,     3,     4,    56,     6,     7,     8,
      60,    64,    56,    60,     3,     4,    60,     6,     7,     8,
       3,     4,    60,     6,     7,     8,    60,    33,    33,    35,
      35,    36,    37,    38,    33,    33,    35,    35,    36,    37,
      38,    29,    61,    48,    49,    50,    51,    52,    53,    54,
      56,    61,    61,    34,    60,    59,    59,    56,     3,    41,
      33,    60,    35,    36,    37,    38,    61,    56,    29,    22,
      40,    60,    58,    58,    61,    48,    49,    50,    51,    52,
      53,    54,    55,    58,    58,    29,    58,    33,    61,    35,
      36,    37,    38,    29,    58,     3,    58,     3,    58,   245,
      59,    59,    48,    49,    50,    51,    52,    53,    54,    55,
      59,    59,    59,   206,    33,    61,    35,    36,    37,    38,
      59,    61,    59,     5,    59,    58,    -1,    59,    45,    48,
      49,    50,    51,    52,    53,    54,    55,    71,    -1,    -1,
      -1,    33,    61,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    33,    61,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    33,    61,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    29,    -1,
      -1,    -1,    33,    61,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    29,
      -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    33,    34,    35,    36,    37,    38,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    48,    49,    50,    51,
      52,    53,    54,    55,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    48,    49,    50,
      51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    15,    26,    66,    67,    68,    70,     3,    45,
       9,     0,    66,    70,    58,    72,     3,    73,    30,    71,
      74,     3,    10,    12,    14,    16,    17,    18,    19,    20,
      21,    23,    24,    25,    26,    44,    62,    63,    64,    69,
      70,    75,    76,    81,    82,    86,    87,    88,    89,    90,
      92,    94,    95,    96,    98,   103,   104,   105,   107,   108,
       3,    30,    58,     3,    32,    33,    35,    39,    41,    60,
      29,    60,     3,     4,     6,     7,     8,    33,    35,    56,
      60,   113,   114,    58,    60,    60,    60,    10,    39,    75,
      88,    75,    59,    75,     5,   103,    75,    81,    29,    29,
      32,    29,    29,    29,     3,    41,   100,   102,   113,    58,
       3,    75,    32,   113,    33,    35,     3,   114,    44,    97,
     113,   114,    29,    95,   103,   113,    35,   113,   113,    29,
      33,    35,    36,    37,    38,    48,    49,    50,    51,    52,
      53,    54,    55,    69,   106,   113,   113,   113,     5,    43,
      79,    78,     5,   103,    58,    32,    41,    40,    31,    29,
      75,    58,    59,    13,    99,    40,    39,    61,    31,    29,
      29,     3,   113,    61,    33,   113,    35,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,    88,
      59,    61,    61,    61,    57,    39,     3,     3,    80,    77,
      91,   113,   113,    40,   114,     3,   101,    59,    75,     3,
      60,    32,    42,    29,   113,    29,    29,   113,    20,    58,
      58,   106,    58,    60,    11,    60,    60,     3,     3,    31,
      59,    40,   102,    59,    60,    97,   113,    61,    61,    29,
      60,   106,   106,    46,    47,   109,   110,   111,   112,    64,
      60,    84,   103,    84,    60,    60,   113,    29,    97,    61,
      29,    61,    61,   113,   113,    59,    59,   113,    34,    59,
     110,    41,    93,   113,    31,    61,     3,    61,    84,    84,
      61,    29,    58,    58,    61,    61,    22,    34,    69,    40,
      61,   103,    58,    58,    61,    61,    29,   106,   106,    58,
      29,    58,    69,    83,     3,    69,    85,    85,    58,    58,
      59,    59,   106,   106,     3,    59,    59,    85,    85,    59,
      59,    61,    59,    59,    58,    85,    59
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

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "yacc2.y"
    {
             char *data_type = get_data_type((yyvsp[(2) - (2)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "yacc2.y"
    {
             char *data_type = get_data_type((yyvsp[(2) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 107 "yacc2.y"
    {
               char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count-1].data_type, "class");

                                            }
                }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 130 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(3) - (3)].strval));}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 131 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(2) - (2)].strval));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 132 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(2) - (2)].strval));}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 133 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, (yyvsp[(3) - (3)].strval));}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 139 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "String");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 154 "yacc2.y"
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

  case 66:

/* Line 1455 of yacc.c  */
#line 188 "yacc2.y"
    {  char* identifier =(yyvsp[(1) - (7)].strval);
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type((yyvsp[(1) - (7)].strval));
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment not allowed");                                            }
                                       
                                           }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 216 "yacc2.y"
    {  
                                        char *data_type = get_data_type((yyvsp[(1) - (9)].strval));
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                          strcpy(symbol_table[symbol_count-2].data_type, "class");

                                            }
                                                                                         
                
                                        strcpy(symbol_table[symbol_count-1].data_type, strcat((yyvsp[(1) - (9)].strval)," obj"));
                                                                                                                                                                                 
                                                                                          
                                        }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 237 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(3) - (3)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count-1].data_type, " func call");
                                            }
            }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 243 "yacc2.y"
    {   char *data_type = get_data_type((yyvsp[(1) - (5)].strval));
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count-1].data_type, " func call");
                                            }
            }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 251 "yacc2.y"
    {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 262 "yacc2.y"
    {strcpy(symbol_table[symbol_count].data_type, "int");
                    }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 264 "yacc2.y"
    { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 268 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 271 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "char");
                 }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 274 "yacc2.y"
    {
                    strcpy(symbol_table[symbol_count].data_type, "double");
                 }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 336 "yacc2.y"
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
#line 2102 "y.tab.c"
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
#line 357 "yacc2.y"


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


