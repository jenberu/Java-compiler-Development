
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

/* Line 1676 of yacc.c  */
#line 35 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 1676 of yacc.c  */
#line 185 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


