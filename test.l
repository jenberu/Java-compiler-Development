%{
#define yywrap() 1
#include <stdio.h>
%}

/* Regular expressions for tokens */
DIGIT       [0-9]
LETTER      [a-zA-Z]
ID          {LETTER}({LETTER}|{DIGIT})*
INTEGER     {DIGIT}+
FNUM        ({DIGIT}+\.({DIGIT}*)?|\.{DIGIT}+)([eE][+-]?{DIGIT}+)?
Function     {LETTER}({LETTER}|{DIGIT})*\([^)]*\)
STRING      \"([^"\\]|\\.)*\"
PLUS        "+"
MINUS       "-"
MULTIPLY    "*"
DIVIDE      "/"
MODULO      "%"
ASSIGN      "="
EQUALS      "=="
NOT_EQUALS  "!="
LESS_THAN   "<"
LESS_EQUAL  "<="
GREATER_THAN   ">"
GREATER_EQUAL  ">="
AND         "&&"
OR          "||"
NOT         "!"
SEMICOLON   ";"
COMMA       ","
LPAREN      "("
RPAREN      ")"
LBRACE      "{"
RBRACE      "}"
LBRACKET    "["
RBRACKET    "]"
%%
"if"        { printf("IF: %s\n", yytext); }
"else"      { printf("ELSE: %s\n", yytext); }
"while"     { printf("WHILE: %s\n", yytext); }
"class"     { printf("CLASS: %s\n", yytext); }
"return"    { printf("RETURN: %s\n", yytext); }
"int"       { printf("INTEGER: %s\n", yytext); }
"float"     { printf("FLOAT: %s\n", yytext); }
"boolean"   { printf("BOOLEAN: %s\n", yytext); }
"void"      { printf("VOID: %s\n", yytext); }
"String"      { printf("String Data type: %s\n", yytext); }
"import"    { printf("Import keyword:%s\n",yytext); }
"static"    { printf("Static keyword:%s\n",yytext);}
"implements" { printf("Implements keyword:%s\n",yytext); }
"default"   { printf("Default keyword:%s\n",yytext); }
"case"      { printf("Case keyword:%s\n",yytext);}
"break"     { printf("Break keyword:%s\n",yytext); }
"for"       { printf("For keyword:%s\n",yytext); }
"do"        { printf("Do keyword:%s\n",yytext);}
"switch"    { printf("Switch keyword:%s\n",yytext); }

"private"   { printf("Access specifier: private:%s\n",yytext); }
"protected" { printf("Access specifier: protected:%s\n",yytext); }
"public"    { printf("Access specifier: public:%s\n",yytext); }

"java\.".*  { printf("Imported Java class: %s\n", yytext); }

"System"    { printf("System class:%s\n",yytext); }
"out"       { printf("Out object:%s\n",yytext); }
"in"        { printf("In object:%s\n",yytext); }
"." { printf("Dot Operator : %s\n", yytext); }
'.'  { printf("Character Constant : %s\n", yytext); }
 
 
{Function}  { printf("Function : %s\n", yytext); }

{ID}        { printf("IDENTIFIER: %s\n", yytext); }
{INTEGER}   { printf("INTEGER: %s\n", yytext); }
{FNUM}      { printf("FLOAT: %s\n", yytext); }
{STRING}    { printf("STRING: %s\n", yytext); }
{PLUS}      { printf("PLUS:%s\n",yytext); }
{MINUS}     { printf("MINUS:%s\n",yytext); }
{MULTIPLY}  { printf("MULTIPLY:%s\n",yytext);}
{DIVIDE}    { printf("DIVIDE:%s\n",yytext); }
{MODULO}    { printf("MODULO:%s\n",yytext); }
{ASSIGN}    { printf("ASSIGN:%s\n",yytext); }
{EQUALS}    { printf("EQUALS:%s\n",yytext); }
{NOT_EQUALS} { printf("NOT_EQUALS:%s\n",yytext); }
{LESS_EQUAL} { printf("LESS_EQUAL:%s\n",yytext);}
{GREATER_EQUAL} { printf("GREATER_EQUAL:%s\n",yytext);}
{LESS_THAN} { printf("LESS_THAN:%s\n",yytext);}
{GREATER_THAN} { printf("GREATER_THAN:%s\n",yytext);}
{AND}       { printf("AND Oprator:%s\n",yytext); }
{OR}        { printf("OR Oprator:%s\n",yytext);}
{NOT}       { printf("NOT Oprator:%s\n",yytext); }
{SEMICOLON} { printf("SEMICOLON:%s\n",yytext); }
{COMMA}     { printf("COMMA:%s\n",yytext);}
{LPAREN}    { printf("LPAREN:%s\n",yytext); }
{RPAREN}    { printf("RPAREN:%s\n",yytext); }
{LBRACE}    { printf("LBRACE:%s\n",yytext); }
{RBRACE}    { printf("RBRACE:%s\n",yytext);}
{LBRACKET}  { printf("LBRACKET:%s\n",yytext);}
{RBRACKET}  { printf("RBRACKET:%s\n",yytext);}





[ \t\n]          ; /* Skip whitespace and newlines */


%%

int main() {
   
     FILE *fp;
    fp = fopen("input.java", "r");

    if (!fp) {
        printf("Error: Unable to open input file.\n");
        return 1;
    }

    yyin = fp;
    yylex();

    fclose(fp);
    return 0;
}
