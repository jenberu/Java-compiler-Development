%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include "symbol_table.h"
int line_number = 1;
char* token_strings[] = {
    "IDENTIFIER", "STRING_CONST", "FLOAT_CONST", "INT_CONST", "CHAR_CONST", 
    "CLASS", "STATIC", "IMPORT", "BREAK", "FOR", "RETURN", "DO", "WHILE", "IF", "ELSE",
    "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC", "IMPLEMENTS", "SYSTEM", "SEMICOLON", "COMMA",
    "ASSIGN", "MINUS", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "LBRACKET", "RBRACKET",
    "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL",
    "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "INT", "FLOAT", "VOID", "STRING"
    
};
%}

/* Define token types */


%%


"main"                  { return MAIN; }
"class"                 { return CLASS; }
"extends"               { return EXTENDS; }
"java\.".*              { return JAVA_IMPORT; }
"static"                {return STATIC; }
"import"                { return IMPORT; }
"break"                 { return BREAK; }
"for"                   { return FOR; }
"return"                { return RETURN; }
"do"                    { return DO; }
"while"                 { return WHILE; }
"if"                    { return IF; }
"else"                  { return ELSE; }
"switch"                { return SWITCH; }
"default"               { return DEFAULT; }
"private"               { return PRIVATE; }
"protected"             { return PROTECTED; }
"public"                { return PUBLIC; }
"implements"            { return IMPLEMENTS; }
"System"                { return SYSTEM; }
"println"               { return PRINTLN; }
"out"                   { return OUT; }
"this"                  { return THIS; }
"new"                   { return NEW; }
"case"                  { return CASE; }
";"                     { return SEMICOLON; }
","                     { return COMMA; }
"="                     { return ASSIGN; }
"-"                     { return MINUS; }
"+"                     { return PLUS; }
"*"                     { return MULTIPLY; }
"/"                     { return DIVIDE; }
"%"                     { return MODULO; }
"."                     { return DOT; }
"["                     { return LBRACKET; }
"]"                     { return RBRACKET; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"{"                     { return LBRACE; }
"}"                     {return RBRACE; }
"<"                     { return LESS_THAN; }
"<="                    { return LESS_EQUAL; }
">"                     { return GREATER_THAN; }
">="                    { return GREATER_EQUAL; }
"=="                    { return EQUALS; }
"!="                    { return NOT_EQUALS; }
"&&"                    { return AND; }
"||"                    { return OR; }
"!"                     { return NOT; }
":"                     { return COLON; }
"in"                    { return IN; }
"int"                   { return INT; }
"float"                 { return FLOAT; }
 "void"                  { //yylval.strval = strdup(yytext);
//                        strcpy(symbol_table[symbol_count].data_type, "keyword");
//                         add_to_symbol_table(yytext, KEYWORD, line_number ,false);
                          return VOID; 
}
"char"                  { return CHAR; }
"double"                { return DOUBLE; }
"String"                { 
                        return STRING; }
[a-zA-Z_][a-zA-Z0-9_]*  {
                            yylval.strval = strdup(yytext);
                            int index = search_symbol_table(yytext);
                            if (index == -1) {
                                return IDENTIFIER;
                            } else {
                                return index;
                            }
                        }

"//".*                  ; /* Single-line comment */
"/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/"  ; /* Multi-line comment */
[0-9]+\.[0-9]+          { yylval.strval = strdup(yytext); return FLOAT_CONST; }
[0-9]+                  { yylval.strval = strdup(yytext); return INT_CONST; }
\"[^"]*\"               { yylval.strval = strdup(yytext); return STRING_CONST; }
'.'                     { yylval.strval = strdup(yytext);  return CHAR_CONST; }
[\t\r ]+                ; /* Skip whitespace */
\n                      { line_number++; }

%%

int yywrap() {
    return 1; // Indicate that there are no more input files to process
}
