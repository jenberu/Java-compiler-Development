%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int line_number;
extern int yylex();
extern FILE *yyin;
void yyerror(const char *s);

// Define YYSTYPE struct for semantic values
typedef struct {
    char* strval;
    float floatval;
    int intval;
    char charval;
} YYSTYPE;

#define YYSTYPE_IS_DECLARED
%}

%union {
    char* strval;
    float floatval;
    int intval;
    char charval;
}

%token <strval> IDENTIFIER STRING_CONST
%token <floatval> FLOAT_CONST
%token <intval> INT_CONST
%token <charval> CHAR_CONST

%token  CLASS STATIC  IMPORT BREAK FOR RETURN DO WHILE IF ELSE SWITCH PRIVATE PROTECTED PUBLIC IMPLEMENTS 
%token  SEMICOLON COMMA ASSIGN MINUS NEWLINE PLUS MULTIPLY DIVIDE MODULO DOT RBRACKET LBRACKET IN OUT SYSTEM JAVA_IMPORT CASE DEFAULT
%token  LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL EQUALS NOT_EQUALS AND OR NOT    
%token  LBRACE RBRACE LPAREN RPAREN 
%token  INT FLOAT VOID STRING

%left OR
%left AND
%left EQUALS NOT_EQUALS
%left LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT

%%

program : statement_list { printf("Parsing completed !\n");}
        | /* empty */
        ;

statement_list :statement
               |statement_list statement
               |function_decl
               |class_declaration
               |statement_list class_declaration
               |class_declaration statement_list
               
               
               ;
class_declaration: class_modifier CLASS IDENTIFIER LBRACE class_body RBRACE
                 ;
class_modifier: PUBLIC
               |STATIC
               |PROTECTED
               |
               ;
class_body:statement_list
           |statement function_decl
           |function_decl statement_list
           |
          ;
function_decl: type_specifier IDENTIFIER LPAREN parm RPAREN LBRACE  func_body RBRACE   
             ;     
parm: type_specifier IDENTIFIER
      | 
      ;
func_body: statement_list
           |
           ;
statement :type_specifier expression SEMICOLON
          | expression SEMICOLON
          | declaration SEMICOLON
          | selection_statement
          | iteration_statement
          | jump_statement
          |out_put_statment
          |IDENTIFIER ASSIGN expression SEMICOLON
         

          ;
out_put_statment:SYSTEM DOT 'println' LPAREN STRING_CONST RPAREN SEMICOLON
                 |SYSTEM DOT 'println' LPAREN STRING_CONST LPAREN SEMICOLON
                 |SYSTEM DOT 'println' LPAREN expression LPAREN SEMICOLON
                 |SYSTEM DOT 'println' LPAREN STRING_CONST PLUS expression LPAREN SEMICOLON
                 |SYSTEM DOT 'println' LPAREN expression PLUS STRING_CONST LPAREN SEMICOLON
                 |SYSTEM DOT 'println' LPAREN  LPAREN SEMICOLON

declaration : type_specifier var_declarations
            
             
            ;

var_declarations : var_declaration
                 | var_declarations COMMA var_declaration
                 ;

var_declaration :  IDENTIFIER
                |  IDENTIFIER ASSIGN expression
                
                ;

type_specifier : INT
               | FLOAT
               | VOID
               | STRING
               | IDENTIFIER
                
               ;

selection_statement : IF LPAREN expression RPAREN statement
                    | IF LPAREN expression RPAREN statement ELSE statement
                    |IF LPAREN expression RPAREN LBRACE statement RBRACE ELSE statement
                    |IF LPAREN expression RPAREN LBRACE statement RBRACE LBRACE statement RBRACE
                    | SWITCH LPAREN expression RPAREN statement
                    |IF LPAREN expression RPAREN LBRACE statement RBRACE
                    ;

iteration_statement : WHILE LPAREN expression RPAREN LBRACE iteration_statement_body RBRACE
                    | DO LBRACE iteration_statement_body RBRACE WHILE LPAREN expression RPAREN SEMICOLON 
                    | FOR LPAREN declaration SEMICOLON expression SEMICOLON expression RPAREN LBRACE iteration_statement_body RBRACE
                    | FOR LPAREN  SEMICOLON SEMICOLON SEMICOLON RPAREN RPAREN LBRACE iteration_statement_body RBRACE
                    | FOR LPAREN declaration SEMICOLON SEMICOLON RPAREN RPAREN LBRACE iteration_statement_body RBRACE
                    ;
             
iteration_statement_body:statement_list
                         |

jump_statement : RETURN expression SEMICOLON
               | BREAK SEMICOLON
               ;

expression : expression PLUS expression
           | expression MINUS expression
           | expression MULTIPLY expression
           | expression DIVIDE expression
           | expression MODULO expression
           | expression LESS_THAN expression
           | expression LESS_EQUAL expression
           | expression GREATER_THAN expression
           | expression GREATER_EQUAL expression
           | expression EQUALS expression
           | expression NOT_EQUALS expression
           | expression AND expression
           | expression OR expression
           | NOT expression
           | LPAREN expression RPAREN
           | primary_expression
           | expression PLUS PLUS
           | expression MINUS MINUS
           |MINUS expression
           |PLUS PLUS expression
           
           ;

primary_expression : IDENTIFIER
                    | FLOAT_CONST
                    | INT_CONST
                    | STRING_CONST
                    | CHAR_CONST
                    
                    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        printf("Error opening input file.\n");
        return 1;
    }

    yyin = input_file;

   if (yyparse() == 0) {
        printf("Your input java code is correct\n");
    }

    fclose(input_file);

    return 0;
}

