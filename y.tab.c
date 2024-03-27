
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
#line 95 "y.tab.c"

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
#line 22 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 214 of yacc.c  */
#line 254 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 266 "y.tab.c"

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

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
      21,    28,    30,    32,    34,    35,    37,    40,    43,    44,
      53,    56,    57,    59,    60,    64,    67,    70,    72,    74,
      76,    78,    83,    91,    99,   107,   117,   127,   134,   137,
     139,   143,   145,   149,   151,   153,   155,   157,   159,   165,
     173,   183,   194,   200,   208,   216,   226,   238,   249,   260,
     262,   263,   267,   270,   274,   278,   282,   286,   290,   294,
     298,   302,   306,   310,   314,   318,   322,   325,   329,   331,
     335,   339,   342,   346,   348,   350,   352,   354
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    -1,    68,    -1,    61,    68,
      -1,    65,    -1,    62,    -1,    61,    62,    -1,    62,    61,
      -1,    63,     8,     3,    50,    64,    51,    -1,    21,    -1,
       9,    -1,    20,    -1,    -1,    61,    -1,    68,    65,    -1,
      65,    61,    -1,    -1,    73,     3,    52,    66,    53,    50,
      67,    51,    -1,    73,     3,    -1,    -1,    61,    -1,    -1,
      73,    78,    23,    -1,    78,    23,    -1,    70,    23,    -1,
      74,    -1,    75,    -1,    77,    -1,    69,    -1,     3,    25,
      78,    23,    -1,    37,    32,    58,    52,     4,    53,    23,
      -1,    37,    32,    58,    52,     4,    52,    23,    -1,    37,
      32,    58,    52,    78,    52,    23,    -1,    37,    32,    58,
      52,     4,    28,    78,    52,    23,    -1,    37,    32,    58,
      52,    78,    28,     4,    52,    23,    -1,    37,    32,    58,
      52,    52,    23,    -1,    73,    71,    -1,    72,    -1,    71,
      24,    72,    -1,     3,    -1,     3,    25,    78,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,     3,    -1,    16,
      52,    78,    53,    68,    -1,    16,    52,    78,    53,    68,
      17,    68,    -1,    16,    52,    78,    53,    50,    68,    51,
      17,    68,    -1,    16,    52,    78,    53,    50,    68,    51,
      50,    68,    51,    -1,    18,    52,    78,    53,    68,    -1,
      16,    52,    78,    53,    50,    68,    51,    -1,    15,    52,
      78,    53,    50,    76,    51,    -1,    14,    50,    76,    51,
      15,    52,    78,    53,    23,    -1,    12,    52,    70,    23,
      78,    23,    78,    53,    50,    76,    51,    -1,    12,    52,
      23,    23,    23,    53,    53,    50,    76,    51,    -1,    12,
      52,    70,    23,    23,    53,    53,    50,    76,    51,    -1,
      61,    -1,    -1,    13,    78,    23,    -1,    11,    23,    -1,
      78,    28,    78,    -1,    78,    26,    78,    -1,    78,    29,
      78,    -1,    78,    30,    78,    -1,    78,    31,    78,    -1,
      78,    41,    78,    -1,    78,    42,    78,    -1,    78,    43,
      78,    -1,    78,    44,    78,    -1,    78,    45,    78,    -1,
      78,    46,    78,    -1,    78,    47,    78,    -1,    78,    48,
      78,    -1,    49,    78,    -1,    52,    78,    53,    -1,    79,
      -1,    78,    28,    28,    -1,    78,    26,    26,    -1,    26,
      78,    -1,    28,    28,    78,    -1,     3,    -1,     5,    -1,
       6,    -1,     4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    51,    54,    55,    56,    57,    58,    59,
      63,    65,    66,    67,    68,    70,    71,    72,    73,    75,
      77,    78,    80,    81,    83,    84,    85,    86,    87,    88,
      89,    90,    94,    95,    96,    97,    98,    99,   101,   106,
     107,   110,   111,   115,   116,   117,   118,   119,   123,   124,
     125,   126,   127,   128,   131,   132,   133,   134,   135,   138,
     139,   141,   142,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   168,   169,   170,   171,   172
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
  "class_modifier", "class_body", "function_decl", "parm", "func_body",
  "statement", "out_put_statment", "declaration", "var_declarations",
  "var_declaration", "type_specifier", "selection_statement",
  "iteration_statement", "iteration_statement_body", "jump_statement",
  "expression", "primary_expression", 0
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
      62,    63,    63,    63,    63,    64,    64,    64,    64,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     2,     2,
       6,     1,     1,     1,     0,     1,     2,     2,     0,     8,
       2,     0,     1,     0,     3,     2,     2,     1,     1,     1,
       1,     4,     7,     7,     7,     9,     9,     6,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     5,     7,
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
       3,    83,    86,    84,    85,    87,    12,     0,     0,     0,
       0,     0,     0,     0,    13,    11,     0,     0,     0,     0,
       0,    43,    44,    45,    46,     0,     2,     7,     0,     6,
       4,    30,     0,     0,    27,    28,    29,     0,    78,     0,
      62,     0,    83,     0,    14,     0,     0,     0,    81,     0,
       0,    76,     0,     1,     8,     5,     0,     9,     0,    26,
      83,    38,    39,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,    61,    14,     0,     0,     0,     0,    82,
       0,    77,    83,     0,     0,    21,     0,    24,    80,    64,
      79,    63,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    31,     0,     0,    41,     0,     0,     0,
       0,     0,    14,    42,     0,     0,    40,     0,     0,     0,
       0,    14,     0,    48,    52,    86,     0,     0,    14,     0,
       6,     4,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,    10,    14,    16,
       0,    14,     0,     0,     0,     0,    54,    53,    49,     0,
      33,    32,    86,    34,     0,    14,     0,    14,    14,     0,
       0,     0,     0,     0,     0,    19,     0,     0,    14,    55,
      50,     0,    35,    36,    57,    58,     0,    51,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    84,    27,    28,   139,    29,   124,   176,    30,
      31,    32,    61,    62,    56,    34,    35,    85,    36,    37,
      38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
     202,    42,  -127,  -127,  -127,  -127,  -127,   -13,   -37,   262,
     -27,   -26,   -24,   -21,  -127,  -127,   262,    -3,     3,   262,
     262,  -127,  -127,  -127,  -127,    33,   202,   665,    32,  -127,
    -127,  -127,    19,   317,  -127,  -127,  -127,  1015,  -127,   262,
    -127,     1,  -127,  1024,   280,   262,   262,   262,    -9,   262,
      -8,  -127,   807,  -127,  -127,  -127,   372,   665,    40,  -127,
     -16,    29,  -127,  1050,  -127,   427,   482,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,  1059,  -127,
      31,    37,    66,  -127,   335,    28,   833,   859,   885,    -9,
      34,  -127,    53,    35,   262,     9,    66,  -127,    68,    -9,
    -127,    -9,  -127,  -127,  -127,   -12,   -12,   -12,   -12,   203,
     203,   721,   666,  -127,    64,    77,    63,    74,    43,   720,
     775,   537,   390,  1093,    39,    87,  -127,    45,    48,  1085,
      50,   280,   775,    89,  -127,   -15,   791,   963,   445,    56,
     665,     9,    54,  -127,    55,    57,   262,   262,    60,    61,
     775,   262,    91,    93,  -127,   592,    95,  -127,   500,  -127,
     116,   555,    71,    73,   911,   937,  -127,   -11,  -127,   988,
    -127,  -127,    76,  -127,    78,   610,    81,   280,   280,    75,
     111,   775,   775,   114,   115,  -127,    88,    94,   280,  -127,
    -127,    97,  -127,  -127,  -127,  -127,    98,  -127,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -127,  -127,     2,   -25,  -127,  -127,  -111,  -127,  -127,   -23,
    -127,   103,  -127,    58,     0,  -127,  -127,  -126,  -127,   127,
    -127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -61
static const yytype_int16 yytable[] =
{
      33,    54,    26,    55,    79,   148,   181,   -41,   -41,    94,
      40,   140,    79,   151,    65,    41,    66,    67,    68,    69,
      67,    68,    69,    44,    80,    49,    45,    33,    46,    57,
     159,    47,    54,    53,    55,    50,    95,   152,   153,   182,
      58,    82,    59,    93,    33,   -47,   -47,   -47,   -47,   -47,
      90,   186,   187,    96,   114,    21,    22,    23,    24,    54,
     115,    55,   196,    21,    22,    23,    24,    39,   -47,   116,
     -47,    42,     2,     3,     4,     5,   -41,   -41,    94,   117,
      42,     2,     3,     4,     5,   122,   121,   127,    94,   130,
     143,   -47,   142,   131,   -47,   125,   133,   134,   144,   141,
     128,   145,   147,    16,   161,    17,   150,   157,   162,   149,
     163,   166,   167,    54,   170,    55,   171,    19,   173,   174,
      20,   177,    33,   178,   138,   188,    19,   168,   184,    20,
      95,    33,   185,    54,   189,    55,    43,   192,   193,   194,
      33,   160,   158,    48,    81,   195,    51,    52,   197,   198,
      54,     0,    55,     0,   126,     0,     0,     0,   190,   191,
      63,    33,     0,   175,     0,     0,    78,     0,     0,     0,
       0,     0,    86,    87,    88,     0,    89,    33,    33,     0,
       0,     0,     0,    63,     0,     0,     0,     0,    33,     0,
       0,     0,    99,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     1,     2,     3,     4,     5,
     -14,     6,     0,     7,     8,     9,    10,    11,    12,     0,
      13,   123,    14,    15,     0,    48,     0,     0,    16,    65,
      17,    66,    67,    68,    69,     0,     0,     0,     0,    18,
       0,     0,   129,     0,    70,    71,    72,    73,   137,     0,
       0,    19,     0,     0,    20,     0,    21,    22,    23,    24,
       0,     0,     0,    52,     0,    42,     2,     3,     4,     5,
       0,     0,     0,   164,   165,     0,     0,     0,   169,     0,
       0,     0,   101,     1,     2,     3,     4,     5,    16,     6,
      17,     7,     8,     9,    10,    11,    12,     0,    13,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,     0,
       0,    19,     0,     0,    20,     0,     0,    18,     0,     0,
      60,     2,     3,     4,     5,     0,     0,     0,     0,    19,
       0,   -60,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,    16,     6,    17,     7,     8,     9,    10,
      11,    12,     0,    13,     0,    14,    15,     0,     0,     0,
       0,    16,     0,    17,     0,     0,    19,     0,     0,    20,
       0,     0,    18,     0,     0,    92,     2,     3,     4,     5,
       0,     0,     0,     0,    19,     0,   -59,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,    16,     6,
      17,     7,     8,     9,    10,    11,    12,     0,    13,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,     0,
       0,    19,     0,     0,    20,     0,     0,    18,     0,     0,
      42,     2,     3,     4,     5,     0,     0,     0,     0,    19,
       0,   -18,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,    98,     6,    17,     7,     8,     9,    10,
      11,    12,     0,    13,     0,    14,    15,     0,     0,     0,
       0,    16,     0,    17,     0,     0,    19,     0,     0,    20,
       0,     0,    18,     0,     0,    42,     2,     3,     4,     5,
       0,     0,     0,     0,    19,     0,   -15,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,    16,     6,
     100,     7,     8,     9,    10,    11,    12,     0,    13,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,     0,
       0,    19,     0,     0,    20,     0,     0,    18,     0,     0,
      42,   135,     3,     4,     5,     0,     0,     0,     0,    19,
       0,   -17,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,    16,     6,    17,     7,     8,     9,    10,
      11,    12,     0,    13,     0,    14,    15,     0,     0,     0,
       0,    16,     0,    17,     0,     0,    19,     0,     0,   136,
       0,     0,    18,     0,     0,    42,   172,     3,     4,     5,
       0,     0,     0,     0,    19,     0,   -23,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,    16,     6,
     100,     7,     8,     9,    10,    11,    12,     0,    13,     0,
      14,    15,     0,     0,     0,     0,    16,     0,    17,     0,
       0,    19,     0,     0,    20,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,   -22,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,     0,     6,     0,     7,     8,     9,    10,
      11,    12,     0,    13,     0,    14,    15,     0,     0,     0,
       0,    16,    65,    17,    66,    67,    68,    69,     0,     0,
       0,     0,    18,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    19,     0,     0,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,     0,     0,
       0,     7,     8,     9,    10,    11,    12,     0,    13,     0,
       0,     0,     0,     0,     0,     0,    16,    65,    17,    66,
      67,    68,    69,     0,     0,     0,     0,    18,     0,     0,
       0,     0,    70,    71,    72,    73,    74,    75,     0,    19,
     132,     0,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,     0,     0,     0,     7,     8,     9,    10,
      11,    12,     0,    13,    42,     2,     3,     4,     5,     0,
       0,    16,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,   154,     0,     0,    16,     0,    17,
       0,     0,     0,     0,    19,     0,     0,    20,     0,    21,
      22,    23,    24,    65,     0,    66,    67,    68,    69,     0,
      19,     0,     0,    20,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,    65,
      91,    66,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,    65,   118,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,    65,   119,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,    65,   120,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    65,   179,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,    65,
     180,   155,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,    65,   156,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    64,     0,
     183,    65,     0,    66,    67,    68,    69,    83,     0,     0,
      65,     0,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    97,     0,     0,    65,     0,    66,    67,
      68,    69,   113,     0,     0,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      70,    71,    72,    73,    74,    75,    76,    77,   146,     0,
       0,    65,     0,    66,    67,    68,    69,     0,     0,    65,
       0,    66,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,    76,    77,    70,    71,    72,    73,    74,    75,
      76,    77
};

static const yytype_int16 yycheck[] =
{
       0,    26,     0,    26,     3,   131,    17,    23,    24,    25,
      23,   122,     3,    28,    26,    52,    28,    29,    30,    31,
      29,    30,    31,    50,    23,    28,    52,    27,    52,    27,
     141,    52,    57,     0,    57,    32,    52,    52,    53,    50,
       8,    41,    23,     3,    44,     3,     4,     5,     6,     7,
      58,   177,   178,    24,    23,    54,    55,    56,    57,    84,
      23,    84,   188,    54,    55,    56,    57,    25,    26,     3,
      28,     3,     4,     5,     6,     7,    23,    24,    25,    51,
       3,     4,     5,     6,     7,    50,    52,    23,    25,    15,
       3,    49,    53,    50,    52,    95,   119,   120,    53,   122,
      23,    53,    52,    26,    50,    28,    17,    51,    53,   132,
      53,    51,    51,   138,    23,   138,    23,    49,    23,     3,
      52,    50,   122,    50,   122,    50,    49,   150,    52,    52,
      52,   131,    51,   158,    23,   158,     9,    23,    23,    51,
     140,   141,   140,    16,    41,    51,    19,    20,    51,    51,
     175,    -1,   175,    -1,    96,    -1,    -1,    -1,   181,   182,
      33,   161,    -1,   161,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,   177,   178,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,   188,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    94,    20,    21,    -1,    98,    -1,    -1,    26,    26,
      28,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    37,
      -1,    -1,   115,    -1,    41,    42,    43,    44,   121,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,   136,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,   146,   147,    -1,    -1,    -1,   151,    -1,
      -1,    -1,   155,     3,     4,     5,     6,     7,    26,     9,
      28,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    -1,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    26,     9,    28,    11,    12,    13,    14,
      15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    -1,    54,
      55,    56,    57,     3,     4,     5,     6,     7,    26,     9,
      28,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    -1,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    26,     9,    28,    11,    12,    13,    14,
      15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    -1,    54,
      55,    56,    57,     3,     4,     5,     6,     7,    26,     9,
      28,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    -1,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    26,     9,    28,    11,    12,    13,    14,
      15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    37,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    -1,    54,
      55,    56,    57,     3,     4,     5,     6,     7,    26,     9,
      28,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    -1,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    -1,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    26,    28,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    49,    -1,    -1,    52,    -1,    54,
      55,    56,    57,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    26,    28,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    -1,    49,
      50,    -1,    52,    -1,    54,    55,    56,    57,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,     3,     4,     5,     6,     7,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    23,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    26,    -1,    28,    29,    30,    31,    -1,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    41,    42,
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
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    26,
      53,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    26,    52,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    23,    -1,
      52,    26,    -1,    28,    29,    30,    31,    23,    -1,    -1,
      26,    -1,    28,    29,    30,    31,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    23,    -1,    -1,    26,    -1,    28,    29,
      30,    31,    23,    -1,    -1,    26,    -1,    28,    29,    30,
      31,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    23,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    -1,    -1,    26,
      -1,    28,    29,    30,    31,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    41,    42,    43,    44,    45,    46,
      47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    11,    12,    13,
      14,    15,    16,    18,    20,    21,    26,    28,    37,    49,
      52,    54,    55,    56,    57,    60,    61,    62,    63,    65,
      68,    69,    70,    73,    74,    75,    77,    78,    79,    25,
      23,    52,     3,    78,    50,    52,    52,    52,    78,    28,
      32,    78,    78,     0,    62,    68,    73,    61,     8,    23,
       3,    71,    72,    78,    23,    26,    28,    29,    30,    31,
      41,    42,    43,    44,    45,    46,    47,    48,    78,     3,
      23,    70,    73,    23,    61,    76,    78,    78,    78,    78,
      58,    53,     3,     3,    25,    52,    24,    23,    26,    78,
      28,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    23,    23,    23,     3,    51,    53,    53,
      53,    52,    50,    78,    66,    73,    72,    23,    23,    78,
      15,    50,    50,    68,    68,     4,    52,    78,    61,    64,
      65,    68,    53,     3,    53,    53,    23,    52,    76,    68,
      17,    28,    52,    53,    23,    28,    52,    51,    61,    65,
      73,    50,    53,    53,    78,    78,    51,    51,    68,    78,
      23,    23,     4,    23,     3,    61,    67,    50,    50,    53,
      53,    17,    50,    52,    52,    51,    76,    76,    50,    23,
      68,    68,    23,    23,    51,    51,    76,    51,    51
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
#line 50 "yacc2.y"
    { printf("Parsing completed !\n");}
    break;



/* Line 1455 of yacc.c  */
#line 1830 "y.tab.c"
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
#line 176 "yacc2.y"


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


