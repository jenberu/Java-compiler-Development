%{
#include "y.tab.h"
#include <string.h>
int line_number = 1;

 
struct symbol_entry {
    char name[50];
    char data_type[20];
     int token_type;
    // Add more attributes as needed
};

// Symbol table declaration
struct symbol_entry symbol_table[100];
int symbol_count = 0; // Counter to track the number of entries in symbol table

// Function to search for an identifier in the symbol table
char* token_strings[] = {
    "IDENTIFIER", "STRING_CONST", "FLOAT_CONST", "INT_CONST", "CHAR_CONST", 
    "CLASS", "STATIC", "IMPORT", "BREAK", "FOR", "RETURN", "DO", "WHILE", "IF", "ELSE",
    "SWITCH", "PRIVATE", "PROTECTED", "PUBLIC", "IMPLEMENTS", "SYSTEM", "SEMICOLON", "COMMA",
    "ASSIGN", "MINUS", "PLUS", "MULTIPLY", "DIVIDE", "MODULO", "DOT", "LBRACKET", "RBRACKET",
    "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LESS_THAN", "LESS_EQUAL", "GREATER_THAN", "GREATER_EQUAL",
    "EQUALS", "NOT_EQUALS", "AND", "OR", "NOT", "INT", "FLOAT", "VOID", "STRING"
    
};
int search_symbol_table(char *name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0)
            return symbol_table[i].token_type; // Return token if found
    }
    return -1; // Return -1 if not found
}


// Function to add an entry to the symbol table
void add_to_symbol_table(char *name, int token) {
    strcpy(symbol_table[symbol_count].name, name);
    symbol_table[symbol_count].token_type = token;

    symbol_count++;
}
void displaySymbolTable() {
    
    printf("Symbol Table:\n");
    printf("------------------------------------------------\n");
     printf("%-20s | %-15s | %-10s\n", "Name", "Data Type", "Token Type");
     printf("--------------\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("%-20s | %-15s | %-10s\n", symbol_table[i].name, symbol_table[i].data_type, token_strings[0]);

    }
    printf("------------------------------------------------\n");
}
// Function to search for an identifier in the symbol table and return its token name
char* get_data_type(char* token_name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, token_name) == 0) {
            if (strlen(symbol_table[i].data_type) > 0) {
                return symbol_table[i].data_type;
            } else {
                return "UNKNOWN"; // Or return NULL or an empty string
            }
        }
    }
    return "UNKNOWN"; // Return if token name is not found in symbol table
}



%}

%%
"main"                  { return MAIN; }
"class"                 { return CLASS; }
"java\.".*               {return JAVA_IMPORT ; }
"static"                { return STATIC; }
"extends"                { return EXTENDS; }
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
"protected"              { return PROTECTED; }
"public"                 { return PUBLIC; }
"implements"             { return IMPLEMENTS; }
"System"                 {return SYSTEM; }
"println"                {return PRINTLN;}
"out"                    {return OUT;}
"this"                   {return THIS;}
"new"                   {return NEW;}
";"                     { return SEMICOLON; }
","                     { return COMMA; }
"="                     { return ASSIGN; }
"-"                     { return MINUS; }
"+"                     { return PLUS; }
"*"                     { return MULTIPLY; }
"/"                     { return DIVIDE; }
"%"                     { return MODULO; }
"."                      { return DOT; }
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
"int"                   {  return INT; }
"float"                 {  return FLOAT; }
"void"                  {  return VOID; }
"char"                  {  return CHAR; }
"double"                  {  return DOUBLE; }
"String"                {  return STRING; }
[a-zA-Z_][a-zA-Z0-9_]*  {  yylval.strval = strdup(yytext); 
                        int index = search_symbol_table(yytext);
                         if (index == -1) {
                        add_to_symbol_table(yytext, IDENTIFIER);
                       return IDENTIFIER; // Return IDENTIFIER token
                        }
                     else {
                        return index; // Return type of the identifier
                        }
                       
                         }

"//".*                  ;
"/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/"    ;
[0-9]+\.[0-9]+          { yylval.floatval = atof(yytext); return FLOAT_CONST; }
[0-9]+                  { yylval.intval = atoi(yytext); return INT_CONST; }
\"[^"]*\"               { yylval.strval = strdup(yytext); return STRING_CONST; }
'.'                     { yylval.charval = yytext[1]; return CHAR_CONST; }
[\t\r ]+                ; // skip whitespace
\n                      { line_number++;  }

%%

int yywrap() {
     
   // Call displaySymbolTable at the end of processing

    return 1; // Indicate that there are no more input files to process
}


