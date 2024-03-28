
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 25 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 1676 of yacc.c  */
#line 175 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


