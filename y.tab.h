
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

/* Line 1676 of yacc.c  */
#line 36 "yacc2.y"

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


