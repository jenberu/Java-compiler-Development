
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
     NEG = 258,
     NEQ = 259,
     EQ = 260,
     AND = 261,
     OR = 262,
     IMPORT = 263,
     CLASS = 264,
     STATIC = 265,
     IMPLEMENTS = 266,
     DEFAULT = 267,
     CASE = 268,
     BREAK = 269,
     FOR = 270,
     RETURN = 271,
     DO = 272,
     WHILE = 273,
     IF = 274,
     ELSE = 275,
     SWITCH = 276,
     PRIVATE = 277,
     PROTECTED = 278,
     PUBLIC = 279,
     JAVA_IMPORT = 280,
     SYSTEM = 281,
     OUT = 282,
     IN = 283,
     INT = 284,
     FLOAT = 285,
     VOID = 286,
     STRING = 287,
     CONTINUE = 288,
     LBRACE = 289,
     RBRACE = 290,
     LBRACKET = 291,
     RBRACKET = 292,
     LPAREN = 293,
     RPAREN = 294,
     DOT = 295,
     SEMICOLON = 296,
     COLON = 297,
     COMMA = 298,
     ASSIGN = 299,
     MINUS = 300,
     PLUS = 301,
     MULTIPLY = 302,
     DIVIDE = 303,
     MODULO = 304,
     LESS_THAN = 305,
     LESS_EQUAL = 306,
     GREATER_THAN = 307,
     GREATER_EQUAL = 308,
     EQUALS = 309,
     NOT_EQUALS = 310,
     NOT = 311,
     FLOAT_CONST = 312,
     INT_CONST = 313,
     STRING_CONST = 314,
     CHAR_CONST = 315,
     IDENTIFIER = 316
   };
#endif
/* Tokens.  */
#define NEG 258
#define NEQ 259
#define EQ 260
#define AND 261
#define OR 262
#define IMPORT 263
#define CLASS 264
#define STATIC 265
#define IMPLEMENTS 266
#define DEFAULT 267
#define CASE 268
#define BREAK 269
#define FOR 270
#define RETURN 271
#define DO 272
#define WHILE 273
#define IF 274
#define ELSE 275
#define SWITCH 276
#define PRIVATE 277
#define PROTECTED 278
#define PUBLIC 279
#define JAVA_IMPORT 280
#define SYSTEM 281
#define OUT 282
#define IN 283
#define INT 284
#define FLOAT 285
#define VOID 286
#define STRING 287
#define CONTINUE 288
#define LBRACE 289
#define RBRACE 290
#define LBRACKET 291
#define RBRACKET 292
#define LPAREN 293
#define RPAREN 294
#define DOT 295
#define SEMICOLON 296
#define COLON 297
#define COMMA 298
#define ASSIGN 299
#define MINUS 300
#define PLUS 301
#define MULTIPLY 302
#define DIVIDE 303
#define MODULO 304
#define LESS_THAN 305
#define LESS_EQUAL 306
#define GREATER_THAN 307
#define GREATER_EQUAL 308
#define EQUALS 309
#define NOT_EQUALS 310
#define NOT 311
#define FLOAT_CONST 312
#define INT_CONST 313
#define STRING_CONST 314
#define CHAR_CONST 315
#define IDENTIFIER 316




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


