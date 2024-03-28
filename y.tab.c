
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
#line 98 "y.tab.c"

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
     IMPORT = 265,
     BREAK = 266,
     FOR = 267,
     RETURN = 268,
     DO = 269,
     WHILE = 270,
     IF = 271,
     ELSE = 272,
     SWITCH = 273,
     PRIVATE = 274,
     PROTECTED = 275,
     PUBLIC = 276,
     IMPLEMENTS = 277,
     SEMICOLON = 278,
     COMMA = 279,
     ASSIGN = 280,
     MINUS = 281,
     NEWLINE = 282,
     PLUS = 283,
     MULTIPLY = 284,
     DIVIDE = 285,
     MODULO = 286,
     DOT = 287,
     RBRACKET = 288,
     LBRACKET = 289,
     IN = 290,
     OUT = 291,
     SYSTEM = 292,
     JAVA_IMPORT = 293,
     CASE = 294,
     DEFAULT = 295,
     LESS_THAN = 296,
     LESS_EQUAL = 297,
     GREATER_THAN = 298,
     GREATER_EQUAL = 299,
     EQUALS = 300,
     NOT_EQUALS = 301,
     AND = 302,
     OR = 303,
     NOT = 304,
     LBRACE = 305,
     RBRACE = 306,
     LPAREN = 307,
     RPAREN = 308,
     INT = 309,
     FLOAT = 310,
     VOID = 311,
     STRING = 312
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
#define IMPORT 265
#define BREAK 266
#define FOR 267
#define RETURN 268
#define DO 269
#define WHILE 270
#define IF 271
#define ELSE 272
#define SWITCH 273
#define PRIVATE 274
#define PROTECTED 275
#define PUBLIC 276
#define IMPLEMENTS 277
#define SEMICOLON 278
#define COMMA 279
#define ASSIGN 280
#define MINUS 281
#define NEWLINE 282
#define PLUS 283
#define MULTIPLY 284
#define DIVIDE 285
#define MODULO 286
#define DOT 287
#define RBRACKET 288
#define LBRACKET 289
#define IN 290
#define OUT 291
#define SYSTEM 292
#define JAVA_IMPORT 293
#define CASE 294
#define DEFAULT 295
#define LESS_THAN 296
#define LESS_EQUAL 297
#define GREATER_THAN 298
#define GREATER_EQUAL 299
#define EQUALS 300
#define NOT_EQUALS 301
#define AND 302
#define OR 303
#define NOT 304
#define LBRACE 305
#define RBRACE 306
#define LPAREN 307
#define RPAREN 308
#define INT 309
#define FLOAT 310
#define VOID 311
#define STRING 312




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 214 of yacc.c  */
#line 257 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 269 "y.tab.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   738

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
       2,     2,    58,     2,     2,     2,     2,     2,     2,     2,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    15,    18,
      21,    28,    34,    36,    39,    42,    43,    53,    62,    71,
      81,    84,    85,    87,    88,    90,    92,    94,    96,   100,
     104,   107,   110,   112,   114,   116,   118,   121,   125,   129,
     137,   145,   153,   163,   173,   180,   183,   185,   189,   191,
     195,   197,   199,   201,   207,   215,   225,   236,   242,   250,
     258,   268,   280,   291,   302,   304,   305,   309,   312,   316,
     320,   324,   328,   332,   336,   340,   344,   348,   352,   356,
     360,   364,   367,   371,   373,   377,   381,   384,   388,   390,
     392,   394,   396
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    -1,    69,    -1,    61,    69,
      -1,    64,    -1,    62,    -1,    61,    62,    -1,    62,    61,
      -1,    21,     8,     3,    50,    63,    51,    -1,     8,     3,
      50,    63,    51,    -1,    61,    -1,    61,    64,    -1,    64,
      61,    -1,    -1,    67,    75,     3,    52,    65,    53,    50,
      66,    51,    -1,    75,     3,    52,    65,    53,    50,    66,
      51,    -1,    56,     3,    52,    65,    53,    50,    66,    51,
      -1,    67,    56,     3,    52,    65,    53,    50,    66,    51,
      -1,    75,     3,    -1,    -1,    61,    -1,    -1,    21,    -1,
      19,    -1,    20,    -1,     9,    -1,     3,    25,    80,    -1,
      75,    80,    23,    -1,    72,    23,    -1,    68,    23,    -1,
      76,    -1,    77,    -1,    79,    -1,    71,    -1,    70,    23,
      -1,     3,    28,    28,    -1,     3,    26,    26,    -1,    37,
      32,    58,    52,     4,    53,    23,    -1,    37,    32,    58,
      52,     4,    52,    23,    -1,    37,    32,    58,    52,    80,
      52,    23,    -1,    37,    32,    58,    52,     4,    28,    80,
      52,    23,    -1,    37,    32,    58,    52,    80,    28,     4,
      52,    23,    -1,    37,    32,    58,    52,    52,    23,    -1,
      75,    73,    -1,    74,    -1,    73,    24,    74,    -1,     3,
      -1,     3,    25,    80,    -1,    54,    -1,    55,    -1,    57,
      -1,    16,    52,    80,    53,    69,    -1,    16,    52,    80,
      53,    69,    17,    69,    -1,    16,    52,    80,    53,    50,
      69,    51,    17,    69,    -1,    16,    52,    80,    53,    50,
      69,    51,    50,    69,    51,    -1,    18,    52,    80,    53,
      69,    -1,    16,    52,    80,    53,    50,    69,    51,    -1,
      15,    52,    80,    53,    50,    78,    51,    -1,    14,    50,
      78,    51,    15,    52,    80,    53,    23,    -1,    12,    52,
      72,    23,    80,    23,    80,    53,    50,    78,    51,    -1,
      12,    52,    23,    23,    23,    53,    53,    50,    78,    51,
      -1,    12,    52,    72,    23,    23,    53,    53,    50,    78,
      51,    -1,    61,    -1,    -1,    13,    80,    23,    -1,    11,
      23,    -1,    80,    28,    80,    -1,    80,    26,    80,    -1,
      80,    29,    80,    -1,    80,    30,    80,    -1,    80,    31,
      80,    -1,    80,    41,    80,    -1,    80,    42,    80,    -1,
      80,    43,    80,    -1,    80,    44,    80,    -1,    80,    45,
      80,    -1,    80,    46,    80,    -1,    80,    47,    80,    -1,
      80,    48,    80,    -1,    49,    80,    -1,    52,    80,    53,
      -1,    81,    -1,    80,    28,    28,    -1,    80,    26,    26,
      -1,    26,    80,    -1,    28,    28,    80,    -1,     3,    -1,
       5,    -1,     6,    -1,     4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    54,    57,    58,    59,    60,    61,    62,
      66,    67,    70,    71,    72,    73,    77,    78,    79,    80,
      82,    83,    85,    86,    88,    89,    90,    91,    94,   108,
     109,   110,   111,   112,   113,   114,   115,   117,   118,   121,
     122,   123,   124,   125,   126,   128,   134,   135,   138,   139,
     143,   144,   145,   149,   150,   151,   152,   153,   154,   157,
     158,   159,   160,   161,   164,   165,   167,   168,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   194,   195,
     196,   197,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_CONST",
  "FLOAT_CONST", "INT_CONST", "CHAR_CONST", "CLASS", "STATIC", "IMPORT",
  "BREAK", "FOR", "RETURN", "DO", "WHILE", "IF", "ELSE", "SWITCH",
  "PRIVATE", "PROTECTED", "PUBLIC", "IMPLEMENTS", "SEMICOLON", "COMMA",
  "ASSIGN", "MINUS", "NEWLINE", "PLUS", "MULTIPLY", "DIVIDE", "MODULO",
  "DOT", "RBRACKET", "LBRACKET", "IN", "OUT", "SYSTEM", "JAVA_IMPORT",
  "CASE", "DEFAULT", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN",
  "GREATER_EQUAL", "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "LBRACE",
  "RBRACE", "LPAREN", "RPAREN", "INT", "FLOAT", "VOID", "STRING", "'p'",
  "$accept", "program", "statement_list", "class_declaration",
  "class_body", "function_decl", "parm", "func_body", "modifier",
  "assignment", "statement", "increament_decreament", "out_put_statment",
  "declaration", "var_declarations", "var_declaration", "type_specifier",
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
     305,   306,   307,   308,   309,   310,   311,   312,   112
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    72,    73,    73,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     2,     2,
       6,     5,     1,     2,     2,     0,     9,     8,     8,     9,
       2,     0,     1,     0,     1,     1,     1,     1,     3,     3,
       2,     2,     1,     1,     1,     1,     2,     3,     3,     7,
       7,     7,     9,     9,     6,     2,     1,     3,     1,     3,
       1,     1,     1,     5,     7,     9,    10,     5,     7,     7,
       9,    11,    10,    10,     1,     0,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     1,     3,     3,     2,     3,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    24,     0,    50,    51,     0,    52,     0,
       2,     7,     6,     0,     0,     4,     0,    35,     0,     0,
      32,    33,    34,     0,     0,     0,     0,    67,     0,    88,
      91,    89,    90,    92,     0,     0,     0,     0,     0,    83,
      65,     0,     0,     0,     0,     0,     0,     1,     0,     8,
       5,     0,     9,     0,     0,    31,    36,    30,    88,    45,
      46,     0,    28,    38,    37,    15,     0,     0,     0,    86,
       0,    81,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     0,    21,    88,     0,     0,     0,    21,
       0,    29,    12,     0,     6,     0,     0,    48,    87,    82,
      85,    69,    84,    68,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,    15,
       0,     0,     0,    21,    21,    49,     0,    47,    13,    11,
      14,     0,     0,     0,     0,    65,     0,    53,    57,     0,
      91,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    44,
       0,     0,    23,     0,     0,    23,     0,     0,     0,     0,
      59,    58,    54,     0,    40,    39,    91,    41,    22,     0,
      23,    23,     0,    65,    65,     0,     0,     0,     0,     0,
       0,    18,     0,     0,    17,     0,     0,    65,    60,    55,
       0,    42,    43,    19,    16,    62,    63,     0,    56,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    97,    21,   113,    22,   141,   199,    23,    24,
      25,    26,    27,    28,    69,    70,    29,    30,    31,    98,
      32,    71,    49
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
      15,    67,    10,  -150,    -3,   -30,   303,   -25,   -20,   -11,
      -2,  -150,  -150,    43,    33,  -150,  -150,    60,  -150,    77,
     194,    15,  -150,    32,    57,  -150,    80,  -150,    89,   330,
    -150,  -150,  -150,   303,    55,    85,    65,  -150,    19,  -150,
    -150,  -150,  -150,  -150,   303,    88,   303,   303,   619,  -150,
      15,   303,   303,   303,   114,    62,    69,  -150,    43,  -150,
    -150,   335,   194,   123,   124,  -150,  -150,  -150,    14,   104,
    -150,   628,   662,  -150,  -150,    15,   106,   107,   130,   -14,
     303,  -150,   411,  -150,   362,   367,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   194,   105,   437,
     463,   489,    84,   108,     3,    83,   109,   110,   303,     3,
     130,  -150,    15,   112,    15,   113,   264,   115,   -14,  -150,
       4,   -14,  -150,   -14,  -150,  -150,  -150,    70,    70,    70,
      70,   234,   234,   692,   685,   142,   117,   229,   243,    15,
     394,   111,   155,     3,     3,   662,   116,  -150,  -150,  -150,
     194,   118,   119,   654,   121,    15,   243,   148,  -150,   125,
      31,   298,   567,   120,  -150,   122,   128,   127,   131,   133,
     303,   303,   136,   139,   243,  -150,   303,   145,   168,  -150,
     399,   171,    15,   146,   149,    15,   153,   154,   515,   541,
    -150,    -5,  -150,   592,  -150,  -150,   143,  -150,   194,   160,
      15,    15,   162,    15,    15,   164,   193,   243,   243,   195,
     197,  -150,   166,   170,  -150,   172,   173,    15,  -150,  -150,
     174,  -150,  -150,  -150,  -150,  -150,  -150,   175,  -150,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,     0,   -18,    91,   -72,   -95,  -139,  -150,  -150,
     -15,  -150,  -150,   184,  -150,   126,   -19,  -150,  -150,  -149,
    -150,    58,  -150
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      20,    61,    59,   114,    64,    60,   172,    39,    40,    41,
      42,    43,   207,    36,   146,    86,    87,    88,     1,    78,
      37,    62,    38,     2,     3,    50,     4,     5,     6,     7,
       8,     9,    51,    10,    11,    12,    13,   -48,   -48,   108,
     148,    52,    76,    61,    59,   208,   202,    60,   165,   166,
      53,    54,    14,    46,   215,   216,    47,    15,    16,   176,
      18,   212,   213,    56,    48,    55,   109,   114,   227,    15,
      16,    17,    18,    15,    16,   112,    18,    57,    61,    59,
      65,    73,    60,   177,   178,   142,    15,    16,    63,    18,
     142,    72,    33,    34,    59,    35,    84,    60,    85,    86,
      87,    88,    79,    66,    81,    82,   -48,   -48,   108,    99,
     100,   101,    67,    74,   150,    75,    80,   102,    61,    61,
     103,   104,   157,   158,   142,   142,   106,   107,   110,   115,
     116,    61,    59,   117,   139,    60,   151,    61,   118,   112,
     108,   173,   121,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    61,   135,   154,   164,   192,
     140,   143,   144,   149,   163,   174,   145,   155,   194,   167,
     182,   168,   169,   171,   153,   183,   175,   185,    79,    61,
      59,   184,   198,    60,   186,   198,   187,   190,    61,    61,
     191,   195,   219,   220,   197,   210,   200,     1,   162,   201,
     198,   198,     2,   203,   204,     4,     5,     6,     7,     8,
       9,   211,    10,   214,   217,    58,   218,   223,   221,    82,
     222,   224,    77,   225,   226,   228,   229,     0,   188,   189,
     159,    14,     1,     0,   193,     0,   147,     0,   123,     0,
       4,     5,     6,     7,     8,     9,     1,    10,    15,    16,
       0,    18,     0,     0,     4,     5,     6,     7,     8,     9,
      84,    10,    85,    86,    87,    88,    14,    39,    40,    41,
      42,    43,     0,     0,     0,    89,    90,    91,    92,   156,
      14,     0,     0,    15,    16,     0,    18,   152,     0,     0,
      44,     0,    45,     0,     0,     0,     0,    15,    16,     0,
      18,    39,    40,    41,    42,    43,    39,    40,    41,    42,
      43,     0,     0,    46,     0,     0,    47,     0,     0,     0,
       0,   179,     0,     0,    44,     0,    45,     0,     0,    44,
       0,    45,     0,    68,    40,    41,    42,    43,   105,    40,
      41,    42,    43,     0,     0,     0,     0,    46,     0,     0,
      47,     0,    46,     0,     0,    47,    44,     0,    45,     0,
       0,    44,     0,    45,     0,    39,    40,    41,    42,    43,
      39,    40,    41,    42,    43,     0,     0,     0,     0,    46,
       0,     0,    47,     0,    46,     0,     0,    47,   120,     0,
      45,     0,     0,    44,     0,   122,     0,    39,   160,    41,
      42,    43,    39,   196,    41,    42,    43,     0,     0,     0,
       0,    46,     0,     0,    47,     0,    46,     0,     0,    47,
      44,     0,    45,     0,     0,    44,     0,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    85,
      86,    87,    88,    46,     0,     0,   161,     0,    46,     0,
       0,    47,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,     0,    84,   119,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,     0,    84,
     136,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,     0,     0,     0,    84,   137,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,     0,     0,
       0,    84,   138,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,     0,     0,     0,    84,   205,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,     0,    84,   206,   180,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,    84,   181,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,    95,
      96,     0,    83,     0,   209,    84,     0,    85,    86,    87,
      88,   111,     0,     0,    84,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,     0,    89,
      90,    91,    92,    93,    94,    95,    96,   170,     0,     0,
      84,     0,    85,    86,    87,    88,     0,     0,    84,     0,
      85,    86,    87,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    89,    90,    91,    92,    93,    94,    95,
      96,    84,     0,    85,    86,    87,    88,     0,    84,     0,
      85,    86,    87,    88,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    89,    90,    91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
       0,    20,    20,    75,    23,    20,   155,     3,     4,     5,
       6,     7,    17,     3,   109,    29,    30,    31,     3,    38,
      23,    21,    52,     8,     9,    50,    11,    12,    13,    14,
      15,    16,    52,    18,    19,    20,    21,    23,    24,    25,
     112,    52,    23,    62,    62,    50,   185,    62,   143,   144,
      52,     8,    37,    49,   203,   204,    52,    54,    55,    28,
      57,   200,   201,     3,     6,    32,    52,   139,   217,    54,
      55,    56,    57,    54,    55,    75,    57,     0,    97,    97,
      23,    26,    97,    52,    53,   104,    54,    55,    56,    57,
     109,    33,    25,    26,   112,    28,    26,   112,    28,    29,
      30,    31,    44,    23,    46,    47,    23,    24,    25,    51,
      52,    53,    23,    28,   114,    50,    28,     3,   137,   138,
      58,    52,   137,   138,   143,   144,     3,     3,    24,    23,
      23,   150,   150,     3,    50,   150,    23,   156,    80,   139,
      25,   156,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,   174,    51,    15,     3,   174,
      52,    52,    52,    51,    53,    17,   108,    50,    23,    53,
      50,    53,    53,    52,   116,    53,    51,    50,   120,   198,
     198,    53,   182,   198,    53,   185,    53,    51,   207,   208,
      51,    23,   207,   208,    23,    52,    50,     3,   140,    50,
     200,   201,     8,    50,    50,    11,    12,    13,    14,    15,
      16,    51,    18,    51,    50,    21,    23,    51,    23,   161,
      23,    51,    38,    51,    51,    51,    51,    -1,   170,   171,
     139,    37,     3,    -1,   176,    -1,   110,    -1,   180,    -1,
      11,    12,    13,    14,    15,    16,     3,    18,    54,    55,
      -1,    57,    -1,    -1,    11,    12,    13,    14,    15,    16,
      26,    18,    28,    29,    30,    31,    37,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    41,    42,    43,    44,    50,
      37,    -1,    -1,    54,    55,    -1,    57,    23,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    54,    55,    -1,
      57,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,    26,
      -1,    28,    -1,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    49,    -1,    -1,    52,    26,    -1,    28,    -1,
      -1,    26,    -1,    28,    -1,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    49,    -1,    -1,    52,    26,    -1,
      28,    -1,    -1,    26,    -1,    28,    -1,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    49,    -1,    -1,    52,
      26,    -1,    28,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    30,    31,    49,    -1,    -1,    52,    -1,    49,    -1,
      -1,    52,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    26,    53,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    26,
      53,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    26,    53,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    26,    53,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    26,    53,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    26,    53,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    26,    52,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    23,    -1,    52,    26,    -1,    28,    29,    30,
      31,    23,    -1,    -1,    26,    -1,    28,    29,    30,    31,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    23,    -1,    -1,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    41,    42,    43,    44,    45,    46,    47,
      48,    26,    -1,    28,    29,    30,    31,    -1,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    41,    42,    43,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    37,    54,    55,    56,    57,    60,
      61,    62,    64,    67,    68,    69,    70,    71,    72,    75,
      76,    77,    79,    25,    26,    28,     3,    23,    52,     3,
       4,     5,     6,     7,    26,    28,    49,    52,    80,    81,
      50,    52,    52,    52,     8,    32,     3,     0,    21,    62,
      69,    75,    61,    56,    75,    23,    23,    23,     3,    73,
      74,    80,    80,    26,    28,    50,    23,    72,    75,    80,
      28,    80,    80,    23,    26,    28,    29,    30,    31,    41,
      42,    43,    44,    45,    46,    47,    48,    61,    78,    80,
      80,    80,     3,    58,    52,     3,     3,     3,    25,    52,
      24,    23,    61,    63,    64,    23,    23,     3,    80,    53,
      26,    80,    28,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    51,    53,    53,    53,    50,
      52,    65,    75,    52,    52,    80,    65,    74,    64,    51,
      61,    23,    23,    80,    15,    50,    50,    69,    69,    63,
       4,    52,    80,    53,     3,    65,    65,    53,    53,    53,
      23,    52,    78,    69,    17,    51,    28,    52,    53,    23,
      28,    52,    50,    53,    53,    50,    53,    53,    80,    80,
      51,    51,    69,    80,    23,    23,     4,    23,    61,    66,
      50,    50,    66,    50,    50,    53,    53,    17,    50,    52,
      52,    51,    66,    66,    51,    78,    78,    50,    23,    69,
      69,    23,    23,    51,    51,    51,    51,    78,    51,    51
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
#line 53 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 94 "yacc2.y"
    {  char *identifier = (yyvsp[(1) - (3)].strval);
                                         // Check if the identifier exists in the symbol table
                                        int token = search_symbol_table(identifier);
                                       if (token != -1) {
                                          // Identifier exists, perform the assignment
                                       printf("Assignment to identifier '%s' is allowed.\n", identifier);
                                            }
                                             else {
                                              // Identifier does not exist, print an error message
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment not allowed");
                                            // You can also choose to exit parsing or handle the error differently
                                           } }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 110 "yacc2.y"
    { printf("Assignment statement parsed.\n"); }
    break;



/* Line 1455 of yacc.c  */
#line 1794 "y.tab.c"
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
#line 202 "yacc2.y"


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

    return 0;
}


