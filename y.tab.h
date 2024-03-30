
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
     COLON = 288,
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
#define COLON 288
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

/* Line 1676 of yacc.c  */
#line 35 "yacc2.y"

    char* strval;
    float floatval;
    int intval;
    char charval;



/* Line 1676 of yacc.c  */
#line 189 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


