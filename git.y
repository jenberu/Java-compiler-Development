%{
    #include <stdio.h>
    #include <string.h>
    #include "defs.h"
    #include "translator.c"
    #include "symtab.h"
    #include "semantic.h"

    #define YYSTYPE char*

    int yyparse(void);
    int yylex(void);
    int yyerror(char *s);


    int class_id = -1;
    int designator_class_id = -1;
    extern int line;
    int level = 0;
    char* type;
    extern FILE * yyin;
    int error_count = 0;
    FILE *fp;
    int function_index = -1;
    char* function_type;
    char* glob_designator = NULL;
    int par_num = 0;
    char* ex_type = NULL;
    int if_or_while = 0;
    int arg_num = 0;
    int function_call_index = -1;
    int glob_designator_id=-1;
    char* to_assign_type=NULL;
    int to_assign_id=-1;
    int return_called=0;
%}

%token _TYPE
%token _IF
%token _ELSE
%token _RETURN
%token _ID
%token _INT_NUMBER
%token _UNSIGNED_NUMBER
%token _LPAREN
%token _RPAREN
%token _COMMA
%token _LBRACKET
%token _RBRACKET
%token _ASSIGN
%token _SEMICOLON
%token _PLUS
%token _MINUS
%token _TIMES
%token _DIV
%token _MOD
%token _RELOP
%token _INCLUDE
%token _CHAR
%token _REAL
%token _STRING
%token _VOJD
%token _WHILE
%token _SCANF
%token _APERSANT
%token _PRINTF
%token _ARRAY_VALUE
%token _SWITCH
%token _COLON
%token _BREAK
%token _RSQUARE_BRACKET
%token _AND
%token _OR
%token _NOT
%token _NOTB
%token _ORB
%token _PLUS_PLUS
%token _MINUS_MINUS
%token _PROGRAM
%token _NEW
%token _READ
%token _CLASS
%token _CONST
%token _EXTENDS
%token _FALSE
%token _TRUE
%token _DOT
%token _POINT_ID
%token _LSQUARE_BRACKET
%token _NULL
%token _START_METHOD_DECL

%%
program
    : _PROGRAM _ID 
      allDeclarations _LBRACKET methodDeclarations _RBRACKET
    ;

allDeclarations
    : allDeclarations allDeclaration
    |
    ;


allDeclaration
    : classDeclaration 
    | varDeclaration 
    | constDeclaration 
    ;

varDeclarations
    : varDeclarations  varDeclaration
    | 
    ;


varDeclaration
    : type var_enumeration _SEMICOLON
    ;

classVarDeclarationsAndMethods
    : varDeclarations varDeclaration methodDeclarations
    |
    ;

constDeclaration
    : _CONST type clist _SEMICOLON
    ;

clist
    : _ID _ASSIGN constvalue
    | clist _COMMA _ID _ASSIGN constvalue 
    ;

type
    : _TYPE
    | _ID
    ;

classDeclaration
    : _CLASS _ID _EXTENDS _ID
    _LBRACKET varDeclarations methodDeclarations
    _RBRACKET
    | _CLASS _ID _LBRACKET 
    varDeclarations methodDeclarations  _RBRACKET
    ;

methodDeclarations
    : _START_METHOD_DECL
    formParams 
    _RPAREN  varDeclarations _LBRACKET statements _RBRACKET
    methodDeclarations
    |
    ;

formParams
    : arguments
    |
    ;

arguments
    :   type arrayOrId 
    |   arguments _COMMA type arrayOrId 
    ;

methodType
    : type
    | _VOJD
    ;

var_enumeration
    : var_enumeration _COMMA arrayOrId 
    | arrayOrId 
    ;

arrayOrId
    : _ID 
    | _ARRAY_VALUE _RSQUARE_BRACKET 

designator
    : _ID 
      designatorExt
    | _ARRAY_VALUE 
      expression _RSQUARE_BRACKET designatorExt
    ;

designatorExt
    : _POINT_ID
    | _LSQUARE_BRACKET expression _RSQUARE_BRACKET
    | designatorExt _POINT_ID
    | designatorExt _LSQUARE_BRACKET expression _RSQUARE_BRACKET 
    |
    ;

statement
    : designator _ASSIGN
      expression _SEMICOLON 
    | designator 
     _LPAREN actParams {arg_num = 0;} _RPAREN _SEMICOLON

    | designator _PLUS_PLUS _SEMICOLON 
    | designator _MINUS_MINUS _SEMICOLON 
    | _IF _LPAREN condition _RPAREN  statement  //resen
    | _IF _LPAREN condition _RPAREN  statement _ELSE statement  //resen
    | _WHILE _LPAREN condition _RPAREN statement  //resen
    | _BREAK 
     _SEMICOLON
    | _RETURN _SEMICOLON 
    | _RETURN expression
      
      _SEMICOLON
    | _READ _LPAREN designator _RPAREN _SEMICOLON
    | _PRINTF _LPAREN expression  _RPAREN _SEMICOLON
    | _PRINTF _LPAREN expression _COMMA _INT_NUMBER _RPAREN _SEMICOLON
    | _LBRACKET
      statements _RBRACKET
    ;

statements
    : statements statement
    |
    ;

condition
    : conditionTerm  orConditionTerms
    ;

orConditionTerms
    : _OR conditionTerm
    | orConditionTerms _OR conditionTerm
    |
    ;

conditionTerm
    : conditionFactor andConditionFactors
    ;


andConditionFactors
    : _AND conditionFactor
    | andConditionFactors _AND conditionFactor
    |
    ;

conditionFactor
    : expression 
    | expression _RELOP expression
    ;


expression
    : _MINUS term addopTerms
    | term addopTerms 
    ;

term
    : factor mulopFactors 
    ;

mulopFactors
    : mulop factor 
    | mulopFactors mulop factor 
    | 
    ;

mulop
    : _DIV
    | _MOD
    | _TIMES
    ;

addop
    : _PLUS
    | _MINUS
    ;


addopTerms
    : addop term 
    | addopTerms addop term 
    | 
    ;


factor
    : designator 
    | designator
    _LPAREN actParams _RPAREN 
    | num 
    | _NEW type 
    | _NEW _TYPE 
      _LSQUARE_BRACKET expression _RSQUARE_BRACKET
    | _NEW _ARRAY_VALUE 
      expression 
      _RSQUARE_BRACKET
    | _LPAREN expression _RPAREN 
    ;

num
    : _INT_NUMBER      
    | _UNSIGNED_NUMBER 
    | _CHAR            
    | _STRING
    | _NULL            
    ;

constvalue
    : num
    | _TRUE  
    ;


actParams
      :
      expression 
    | actParams _COMMA expression 
    |
    ;


%%

int yyerror(char *s) {
    fprintf(stderr, "\nERROR (%d): %s", line, s);
    error_count++;
    return 0;
}

int main(int argc, char *argv[]) {
    yyin = fopen(argv[1], "r");
    yyparse();
    return error_count;
}