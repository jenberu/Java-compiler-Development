%{
#include "y.tab.h"
#include <string.h>
int line_number = 1;

const char* token_strings[] = {
    "IDENTIFIER", "STRING_CONST", "FLOAT_CONST", "INT_CONST", "CHAR_CONST", 
    "CLASS", "STATIC", "IMPORT", "BREAK", "FOR", "RETURN", "DO", "WHILE", "IF", "ELSE",
    "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC", "IMPLEMENTS", "SYSTEM", "SEMICOLON", "COMMA",
    "ASSIGN", "MINUS", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "LBRACKET", "RBRACKET",
    "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL",
    "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "INT", "FLOAT", "VOID", "STRING"
    
};
struct symbol_entry {
    char name[50];
    char type_string[50]; 
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
void displaySymbolTable() {
    printf("Symbol Table:\n");
    printf("--------------\n");
    printf("%-20s %-10s\n", "Name", "Type");
    printf("--------------\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("%-20s %-10d\n", symbol_table[i].name, symbol_table[i].type);
    }
    printf("--------------\n");
}


%}

%%

"class"                 { return CLASS; }
"static"                { return STATIC; }
"import"                { return IMPORT; }
"break"                 { return BREAK; }
"for"                   { return FOR; }
"return"                { return RETURN; }
"do"                    { return DO; }
"while"                 { return WHILE; }
"if"                    { return IF; }
"else"                  { return ELSE; }
"switch"                { return SWITCH; }
"private"               { return PRIVATE; }
"protected"             { return PROTECTED; }
"public"                { return PUBLIC; }
"implements"            { return IMPLEMENTS; }
"System"                {return SYSTEM; }
";"                     { return SEMICOLON; }
","                     { return COMMA; }
"="                     { return ASSIGN; }
"-"                     { return MINUS; }
"+"                     { return PLUS; }
"*"                     { return MULTIPLY; }
"/"                     { return DIVIDE; }
"%"                     { return MODULO; }
"."                    { return DOT; }
"["                     { return LBRACKET; }
"]"                     { return RBRACKET; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"{"                     { return LBRACE; }
"}"                     { return RBRACE; }
"<"                     { return LESS_THAN; }
"<="                    { return LESS_EQUAL; }
">"                     { return GREATER_THAN; }
">="                    { return GREATER_EQUAL; }
"=="                    { return EQUALS; }
"!="                    { return NOT_EQUALS; }
"&&"                    { return AND; }
"||"                    { return OR; }
"!"                     { return NOT; }
"int"                   { return INT; }
"float"                 { return FLOAT; }
"void"                  { return VOID; }
"string"                { return STRING; }
[a-zA-Z_][a-zA-Z0-9_]*  {  yylval.strval = strdup(yytext); 
                        int index = search_symbol_table(yytext);
                         if (index == -1) {
                        add_to_symbol_table(yytext, IDENTIFIER);
                       return IDENTIFIER; // Return IDENTIFIER token
                        }
                     else {
                        return symbol_table[index].type; // Return type of the identifier
                        }
                       
                         }


[0-9]+\.[0-9]+          { yylval.floatval = atof(yytext); return FLOAT_CONST; }
[0-9]+                  { yylval.intval = atoi(yytext); return INT_CONST; }
\"[^"]*\"               { yylval.strval = strdup(yytext); return STRING_CONST; }
'.'                     { yylval.charval = yytext[1]; return CHAR_CONST; }
[\t\r ]+                ; // skip whitespace
\n                      { line_number++;  }

%%

int yywrap() {
     displaySymbolTable(); // Call displaySymbolTable at the end of processing

    return 1; // Indicate that there are no more input files to process
}


