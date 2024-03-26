%{
#include "y.tab.h"
#include <stdio.h>
#include <string.h>
int line_number = 1;
// Structure to represent symbol table entry
struct symbol_entry {
    char name[50];
    int type;
    int token;
    // Add more attributes as needed
};

// Symbol table declaration
struct symbol_entry symbol_table[100];
int symbol_count = 0; // Counter to track the number of entries in symbol table

// Function to search for an identifier in the symbol table
int search_symbol_table(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0)
            return symbol_table[i].token; // Return token if found
    }
    return -1; // Return -1 if not found
}


// Function to add an entry to the symbol table
void add_to_symbol_table(char *name, int type) {
    strcpy(symbol_table[symbol_count].name, name);
    symbol_table[symbol_count].type = type;
    symbol_count++;
}
%}

letter [A-Za-z]
digit [0-9]

%%

"import"    {return IMPORT; }
"class"     { return CLASS; }
"static"    { return STATIC; }
"implements" { return IMPLEMENTS; }
"default"   { return DEFAULT; }
"case"      {  return CASE; }
"break"     { return BREAK; }
"for"       { return FOR; }
"return"    { return RETURN; }
"do"        { return DO; }
"while"     { return WHILE; }
"if"        { return IF; }
"else"      { return ELSE; }
"switch"    {return SWITCH; }
"private"   { return PRIVATE; }
"protected" { return PROTECTED; }
"public"    { return PUBLIC; }
"java\.".*     {return JAVA_IMPORT; }
"System"    { return SYSTEM; }
"out"       { return OUT; }
"in"        { return IN; }
"int"       { return INT; }
"float"      { return FLOAT; }
"void"     {return VOID;} 
"String"   {return STRING;} 
"{"       { return LBRACE; }
"}"       { return RBRACE; }
"["       { return LBRACKET; }
"]"       { return RBRACKET; }
"("       { return LPAREN; }
")"       { return RPAREN; }
"."       { return DOT; }
";"       { return SEMICOLON; }
","       { return COMMA; }
"="       { return ASSIGN; }
"-"       { return MINUS; }
"+"       { return PLUS; }
"*"       { return MULTIPLY; }
"/"       { return DIVIDE; }
"%"       { return MODULO; }
"<"       { return LESS_THAN; }
"<="      { return LESS_EQUAL; }
">"       { return GREATER_THAN; }
">="      { return GREATER_EQUAL; }
"=="      { return EQUALS; }
"!="      { return NOT_EQUALS; }
"&&"      { return AND; }
"||"      { return OR; }
"!"       { return NOT; }
{digit}+\.{digit}+   { return FLOAT_CONST; }
{digit}+             { return INT_CONST; }
\"([^"\\]|\\.)*\"    { return STRING_CONST; }
\'.\'                  { return CHAR_CONST; }
{letter}({letter}|{digit})* {
    // Check if identifier already exists in the symbol table
    int index = search_symbol_table(yytext);
    if (index == -1) {
        add_to_symbol_table(yytext, IDENTIFIER);
        return IDENTIFIER; // Return IDENTIFIER token
    }
     else {
        return symbol_table[index].type; // Return type of the identifier
    }
}
\/\/.*               { /* ignore single line comments */ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/  { /* ignore multi-line comments */ }
[\t]              ; /* ignore whitespace */
 .                 { return DOT;}
 "\n"                  { line_number++; return '\n';}

%%

int yywrap() {
    // Always indicate to Flex that there is no additional input
    return 1;
}
