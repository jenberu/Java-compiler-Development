%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
#include "semantic.h"




extern int symbol_count;

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
%type <strval> type_specifier expression primary_expression var_declarations  
%token <strval> IDENTIFIER STRING_CONST VOID FLOAT_CONST CHAR_CONST INT_CONST

%token <strval> MAIN  CLASS STATIC PRINTLN DOUBLE NEW CHAR IMPORT BREAK FOR RETURN DO WHILE IF ELSE SWITCH PRIVATE PROTECTED PUBLIC IMPLEMENTS THIS
%token  SEMICOLON KEYWORD EXTENDS COMMA ASSIGN MINUS COLON PLUS MULTIPLY DIVIDE MODULO DOT RBRACKET LBRACKET   
%token  LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL EQUALS NOT_EQUALS AND OR NOT    
%token   LBRACE RBRACE LPAREN RPAREN 
%token <strval> INT FLOAT  STRING IN OUT SYSTEM JAVA_IMPORT DEFAULT CASE

%left OR
%left AND
%left EQUALS NOT_EQUALS
%left LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT

%%
start:program 
    |import_statment start
    |import_statment 
     ;
import_statment:IMPORT JAVA_IMPORT 
     ;
program :class_declaration { printf("Parsing completed !\n");}
        |program class_declaration
        |/* empty */
        ;
statement_list :statement
               |statement_list statement
              
               
               
               
               ;
               
class_declaration: PUBLIC CLASS IDENTIFIER {
                                            char* identifier =$3;
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($3);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                            
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                                            
                                            
                                       
                } EXTENDS IDENTIFIER{char* identifier =$6;
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($6);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                  int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                                       
                }  LBRACE class_body RBRACE 
                  | CLASS IDENTIFIER {
                                          char* identifier=$2;
                                      char *data_type = get_data_type($2);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                    int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }EXTENDS IDENTIFIER  {
                                          char* identifier=$5;
                                      char *data_type = get_data_type($5);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                    int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }LBRACE class_body RBRACE
                 | CLASS IDENTIFIER LBRACE {
                                    char* identifier=$2;
                             char *data_type = get_data_type($2);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                            int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }class_body RBRACE
                | PUBLIC CLASS IDENTIFIER {char *identifier=$3;
                                        char *data_type = get_data_type($3);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                                int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }
LBRACE class_body RBRACE
                 ;

class_body:statement_list 
           |statement_list class_body
           |function_decl
           |function_decl class_body
           |main_method 
           |main_method class_body
           |class_declaration 
           |class_declaration class_body
           |
          ;

function_decl:modifier static_func type_specifier  IDENTIFIER LPAREN parm RPAREN LBRACE {push_scope("local");}  func_body RBRACE   {pop_scope();
                                push_scope("local");
                                 char* identifier=$4;
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                         set_is_function_attribute($4);
                             } 
             |static_func type_specifier IDENTIFIER LPAREN parm RPAREN LBRACE {push_scope("local");}  func_body RBRACE  {pop_scope();
                char* identifier=$3;
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
        set_is_function_attribute($3);
    }  
             |static_func VOID IDENTIFIER LPAREN parm RPAREN LBRACE {push_scope("local");}  func_body RBRACE {  pop_scope();
                                   char* identifier=$3;
                                strcpy(symbol_table[symbol_count].data_type, "void");
            
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                         set_is_function_attribute($3);}
             |modifier static_func VOID  IDENTIFIER LPAREN parm RPAREN LBRACE {push_scope("local");}  func_body RBRACE {pop_scope();
                                char* identifier=$4;
                                strcpy(symbol_table[symbol_count].data_type, "void");
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                      set_is_function_attribute($4);}

             ;   
static_func:  STATIC
              |
              ;
main_method : PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET {
  strcpy(symbol_table[symbol_count].data_type, "String");} IDENTIFIER RPAREN LBRACE  {push_scope("local"); } func_body RBRACE{pop_scope();}
  ;
parm: type_specifier IDENTIFIER
      |parm COMMA type_specifier IDENTIFIER
      |
      ;

func_body: statement_list
           |
           ;
modifier: PUBLIC  
         |PRIVATE 
         |PROTECTED
         
         
         ; 
assignment : IDENTIFIER ASSIGN expression {  char* identifier =$1;

                           int token = search_symbol_table(identifier);
                              if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      }
                             else  {

                    add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                           } 
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment before declaration is not allowed");
                                            }
                                        
                                        
                                    

                                       }
              |IDENTIFIER ASSIGN STRING_CONST{
                              char* identifier =$1;
                               int token = search_symbol_table(identifier);
                             if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      }
                             else  {

                    add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                           } 
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment before declaration is not allowed");
                                            }
                                      
                                          else if(!check_constant_type_For_String($1)){
                                                
                                                
                                               yyerror("Semantic error: oprades are in differnt type can not be assined\n");
                                                 }
                                              else
                                                 addAssignmentValue($1,$3);

                                                 } 
              |IDENTIFIER ASSIGN INT_CONST {  char* identifier =$1;
                                            int token = search_symbol_table(identifier);
                   if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      }
                             else  {

                    add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                           } 
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment before declaration is not allowed");
                                            }
                                            
                                            else if(!check_constant_type_For_int($1)){
                                                 yyerror("Semantic error: oprades are in differnt type\n");

                                                 }
                                                 else  addAssignmentValue($1,$3);
                                                 } 
              |IDENTIFIER ASSIGN FLOAT_CONST {  char* identifier =$1;
                                                int token = search_symbol_table(identifier);
                              if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      }
                             else  {

                    add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                           } 
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment before declaration is not allowed");
                                            }

                                            if(!check_constant_type_For_Float($1)){
                                                 yyerror("Semantic error: oprades are in differnt type\n");

                                                 }
                                                 else addAssignmentValue($1,$3);
                                                 }        
                                        
                                           ;
statement :type_specifier expression SEMICOLON     
          | declaration SEMICOLON
          | assignment SEMICOLON 
          | selection_statement
          | iteration_statement
          | jump_statement
          |increament_decreament SEMICOLON
          |system_out_println SEMICOLON
          |object_creation
          |fuction_call
          |switch_statement
          |array_declaration SEMICOLON
          |array_intialization
          ;
array_declaration : type_specifier IDENTIFIER LBRACKET RBRACKET  // Array declaration without size
                    |type_specifier LBRACKET RBRACKET IDENTIFIER 
                  | type_specifier IDENTIFIER LBRACKET primary_expression RBRACKET  // Array declaration with size
                  ;
array_intialization:array_declaration ASSIGN LBRACE arrayvalues RBRACE SEMICOLON
                    |IDENTIFIER LBRACKET primary_expression  RBRACKET  ASSIGN expression SEMICOLON  {  char* identifier =$1;
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($1);
                                         int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                        printf("Error: Identifier '%s' not declared.\n", identifier);
                                         yyerror("Assignment not allowed");                                            }
                                       
                                           } 
                     ;
arrayvalues:expression
           |arrayvalues COMMA expression
           ;
system_out_println : SYSTEM DOT OUT DOT PRINTLN LPAREN expr_or_string RPAREN
                     ;
expr_or_string : expression
               | 
               ;
increament_decreament:IDENTIFIER PLUS PLUS 
                      |IDENTIFIER MINUS MINUS            

          ;



object_creation: IDENTIFIER IDENTIFIER ASSIGN NEW IDENTIFIER  LPAREN parametr RPAREN SEMICOLON {  
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                          strcpy(symbol_table[symbol_count-2].data_type, "class");

                                            }
                                                                                         
                
                                        strcpy(symbol_table[symbol_count-1].data_type, strcat($1," obj"));
                                                                                                                                                                                 
                                                                                          
                                        }
                                                                ;
parametr:expression
         |primary_expression
         |primary_expression COMMA expression
         |SYSTEM DOT IN
         |
                ;
fuction_call: IDENTIFIER DOT  IDENTIFIER  
           {   char *data_type = get_data_type($3);
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count-1].data_type, " func call");
                                            }
            } LPAREN parametr RPAREN SEMICOLON 
            |IDENTIFIER LPAREN parametr RPAREN SEMICOLON  {   char *data_type = get_data_type($1);
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count-1].data_type, " func call");
                                            }
            }
           ;
declaration : type_specifier var_declarations 
                     
                  
            
             
            ;
var_declarations : var_declaration
                 | var_declarations COMMA {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
                                            var_declaration
                 ;

var_declaration :  IDENTIFIER  { char* identifier =$1;
                 printf("Variable declaration: %s\n", $1);

                      int token = search_symbol_table(identifier);
                      if (token != -1) {
                          printf("Error: Identifier '%s' already exists in the symbol table with token type %d.\n", identifier, token);
                          yyerror("Identifier already declared");
                          
                      }
                      else  {
                     printf("Identifier '%s' added to symbol table with token type %d.\n", identifier, IDENTIFIER);

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                          
                     } 
                  |assignment 
                   ;
type_specifier : INT {strcpy(symbol_table[symbol_count].data_type, "int");
                    } 
               | FLOAT { 
                         strcpy(symbol_table[symbol_count].data_type, "float");
                            } 
               | STRING
                      {
                    strcpy(symbol_table[symbol_count].data_type, "String");
                 } 
                 |CHAR  {
                    strcpy(symbol_table[symbol_count].data_type, "char");
                 } 
                 |DOUBLE {
                    strcpy(symbol_table[symbol_count].data_type, "double");
                 }
              ;

selection_statement :IF LPAREN expression RPAREN iteration_or_selection_statement_body
                    |IF LPAREN expression RPAREN LBRACE iteration_or_selection_statement_body RBRACE ELSE LBRACE iteration_or_selection_statement_body RBRACE
                    |IF LPAREN expression RPAREN LBRACE iteration_or_selection_statement_body RBRACE
                    ;

iteration_statement : WHILE LPAREN expression RPAREN LBRACE iteration_or_selection_statement_body RBRACE
                    | DO LBRACE iteration_or_selection_statement_body RBRACE WHILE LPAREN expression RPAREN SEMICOLON 
                    | FOR LPAREN declaration SEMICOLON expression SEMICOLON expression RPAREN LBRACE iteration_or_selection_statement_body RBRACE
                    | FOR LPAREN  SEMICOLON SEMICOLON SEMICOLON RPAREN RPAREN LBRACE iteration_or_selection_statement_body RBRACE
                    | FOR LPAREN declaration SEMICOLON SEMICOLON RPAREN RPAREN LBRACE iteration_or_selection_statement_body RBRACE
                    ;
             
iteration_or_selection_statement_body:statement_list
                                     |

jump_statement : RETURN expression SEMICOLON
               | BREAK SEMICOLON
               ;
switch_statement : SWITCH LPAREN expression RPAREN LBRACE switch_block_statements RBRACE 
                  ;

switch_block_statements : switch_block_statement 
                          |switch_block_statements switch_block_statement
                          ;
switch_block_statement : switch_case_statement
                          | default_case_statement 
                         ;
switch_case_statement : CASE expression COLON statement_list
                          ;

default_case_statement : DEFAULT COLON statement_list ;


;
expression : expression PLUS expression {
                                       if(!analyzePlusExpression($1,$3)){
                                      exit(EXIT_FAILURE);
                                      } }
           | expression MINUS expression {if(!analyzePlusExpression($1,$3)){
                                       yyerror("Semantic error: Operands  are not of the same type\n");} }
           | expression MULTIPLY expression{if(!analyzePlusExpression($1,$3)){
                                       yyerror("Semantic error: Operands  are not of the same type\n");} }
           | expression DIVIDE expression{if(!analyzePlusExpression($1,$3)){
                                       yyerror("Semantic error: Operands  are not of the same type\n");} }
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

primary_expression : IDENTIFIER {  
                                      //    // Check if the identifier exists in the symbol table
                                      //   char *data_type = get_data_type();
                                      //    int result =strcmp(data_type,"UNKNOWN");
                                      //  if (result!=0) {
                                      //     // Identifier exists, perform the assignment
                                      //       }
                                      //   else {
                                      //         // Identifier does not exist, print an error message
                                      //    printf("Error: Identifier '%s' not declared.\n", identifier);
                                      //    yyerror("Assignment not allowed");
                                      //       // You can also choose to exit parsing or handle the error differently
                                      //      } 
                                      char* identifier =$1;
         
                      int token = search_symbol_table(identifier);
                      if (token == -1) {
                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                           } 
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
   
 displaySymbolTable();
    return 0;
}

