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
"import"|"class"|"static"|"implements"|"default"|"case"|"break"|"for"|"return"|"do"|"while"|"if"|"else"|"switch" { printf("\nKeyword : %s", yytext); }
"private"|"protected"|"public" { printf("\nAccess specifier : %s", yytext); }
"java\.".*  { printf("\nImported Class : %s", yytext); }
"System" { printf("\nClass : %s", yytext); }
"out"|"in" { printf("\nObject : %s", yytext); }
"{"|"}"|"["|"]"|"("|")" { printf("\nParenthesis : %s", yytext); }
"int"|"char"|"float"|"double"|"String"|"boolean"|"void" { printf("\nData Type : %s", yytext); }
"." { printf("\nDot Operator : %s", yytext); }
"//".* { printf("\nSingle Line comment : %s", yytext); }
"/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/" { printf("\nMulti Line Comment : %s", yytext); }
{digit}*\.{digit}+ { printf("\nFloat Constant : %s", yytext); }
{digit}+     { printf("\nInteger Constant : %s", yytext); }
\".*\" { printf("\nString Constant : %s", yytext); }
'.'  { printf("\nCharacter Constant : %s", yytext); }
{letter}({letter}|{digit})* { printf("\nIdentifier : %s", yytext); }
{letter}({letter}|{digit})*\([^)]*\) { printf("\nFunction : %s", yytext); }
[,;] { printf("\nDelimiter : %s", yytext); }
[\t\n]          ;
"=" { printf("\nAssignment Operator : %s", yytext); }
"-"|"+"|"*"|"/"|"%" { printf("\nArithmetic Operator : %s", yytext); }
"<"|">"|"<="|">="|"=="|"!=" { printf("\nRelational Operator : %s", yytext); }
"||"|"&&" { printf("\nLogical Operator : %s", yytext); }
%%

int main() {
    FILE *fp;
    fp = fopen("input.java", "r");
    yyin = fp;
    yylex();
    fclose(fp);
    return 0;
}
