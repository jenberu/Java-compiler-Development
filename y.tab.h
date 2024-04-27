
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

/* Line 1676 of yacc.c  */
#line 31 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 1676 of yacc.c  */
#line 191 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


