%{
 #define yywrap() 1
#include <stdio.h>
%}

%{
#define YY_DECL int yylex()
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
"java"\.    {return JAVA_IMPORT; }
"System"    { return SYSTEM; }
"out"       { return OUT; }
"in"        { return IN; }
"int"       { return INT; }
"float"      { return FLOAT; }
"void"     {return VOID;} // Fixed typo here
"String"   {return STRING;} // Fixed typo here
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
'.'                  { return CHAR_CONST; }
{letter}({letter}|{digit})* { return IDENTIFIER; }
\/\/.*               { /* ignore single line comments */ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/  { /* ignore multi-line comments */ }
[\t]              ; /* ignore whitespace */
.                     { return DOT;}
\n                     { line_number++; return '\n';}
%%
int main() {
    FILE *fp;
    fp = fopen("input.java", "r");
    yyin = fp;
    yylex();
    fclose(fp);
    return 0;
}
