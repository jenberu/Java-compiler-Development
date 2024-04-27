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
void semantic_error(const char *msg);
extern int scope_id;

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
                                            
                              //int token = search_symbol_table(identifier);
                             if(check_class_redeclaration(identifier)) {
                                semantic_error("the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
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
                  semantic_error("unknown class ,the extended class is not defiend\n");

                             } 
                                       
                }  LBRACE{ scope_id++;} class_body RBRACE 
                  | CLASS IDENTIFIER {
                                          char* identifier=$2;
                                      char *data_type = get_data_type($2);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                     if(check_class_redeclaration(identifier)) {
                                semantic_error("the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
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
                  semantic_error(" unknown class ,the extended class is not defiend\n");

                             } 
                }LBRACE { scope_id++;} class_body RBRACE
                 | CLASS IDENTIFIER LBRACE { scope_id++;
                                    char* identifier=$2;
                             char *data_type = get_data_type($2);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                                         if(check_class_redeclaration(identifier)) {
                                semantic_error("the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             }  
                }class_body RBRACE
                | PUBLIC CLASS IDENTIFIER {char *identifier=$3;
                                        char *data_type = get_data_type($3);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                            strcpy(symbol_table[symbol_count].data_type, "class");

                                            }
                              if(check_class_redeclaration(identifier)) {
                                semantic_error(" the class is already defined ,class the with same name not allowod in java\n");
                             }
                             else {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                }
 LBRACE { scope_id++;} class_body RBRACE
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

function_decl:modifier static_func type_specifier  IDENTIFIER { char* identifier=$4;
                                 if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name not allowod in java\n");

                                   }
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                         set_is_function_attribute($4);} LPAREN parm RPAREN LBRACE { scope_id++; push_scope("local");}  func_body RBRACE   {pop_scope();
                                
                             } 
             |static_func type_specifier IDENTIFIER { char* identifier=$3;
                if(check_function_redeclaration(identifier)){
                                semantic_error(" the function is already defined ,function the with same name not allowod in java\n");

                                   }
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
        set_is_function_attribute($3);} LPAREN parm RPAREN LBRACE { scope_id++; push_scope("local");}  func_body RBRACE  {pop_scope();
               
    }  
             |static_func VOID IDENTIFIER{ char* identifier=$3;
                                   if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name not allowod in java\n");

                                   }
                                strcpy(symbol_table[symbol_count].data_type, "void");
            
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                         set_is_function_attribute($3);} LPAREN parm RPAREN LBRACE {scope_id++; push_scope("local");}  func_body RBRACE {  pop_scope();
                                  }
             |modifier static_func VOID  IDENTIFIER {char* identifier=$4;
                                if(check_function_redeclaration(identifier)){
                                semantic_error("the function is already defined ,function the with same name not allowod in java\n");

                                   }
                                strcpy(symbol_table[symbol_count].data_type, "void");
                              int token = search_symbol_table(identifier);
                             if (token == -1) {
                           add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                             } 
                      set_is_function_attribute($4);} LPAREN parm RPAREN LBRACE { scope_id++; push_scope("local");}  func_body RBRACE {pop_scope();
                                }

             ;   
static_func:  STATIC
              |
              ;
main_method : PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET IDENTIFIER {
  strcpy(symbol_table[symbol_count].data_type, "String");add_to_symbol_table($9, IDENTIFIER, line_number ,false);
} RPAREN LBRACE  { scope_id++; push_scope("local"); } func_body RBRACE{pop_scope();}
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
assignment : IDENTIFIER ASSIGN IDENTIFIER {  char* identifier =$1;
                                          char* identifier1 =$3;

                        
                                        char *data_type1 = get_data_type($1);
                                         char *data_type2 = get_data_type($3);
                                        int result =strcmp(data_type1,"UNKNOWN");
                                        int result1 =strcmp(data_type2,"UNKNOWN");
                                           
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment before declaration is not allowed");
                                            }
                                             if (result1==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier1);
                                         semantic_error("usage before declaration is not allowed");
                                            }
                                        
                                        if(!check_same_or_not_type_For_ids($1,$3)){

                                        semantic_error("oprandes  in differnt type can not be assined\n");
                                                 }
                                              else
                                                 getValueOfid($1,$3);
                                    

                                       }
              |IDENTIFIER ASSIGN STRING_CONST{
                              char* identifier =$1;
                   
                               char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment before declaration is not allowed");
                                            }
                                      
                                          else if(!check_constant_type_For_String($1)){
                                                 printf("Error: Identifier '%s' is not String type.\n", $1);
                                                
                                               semantic_error(" oprades are in differnt type can not be assined\n");
                                                 }
                                              else
                                                 addAssignmentValue($1,$3);

                                                 } 
              |IDENTIFIER ASSIGN INT_CONST {  char* identifier =$1;
                      //            if (!analyze_variable_declaration(identifier)) {
                      //     printf("Error: Identifier '%s'is already declared \n", identifier);
                      //     semantic_error("Identifier with same scope can not be redclare");
                          
                      // }


                      
                    
                          //    else {

                          //   add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                          //  } 
                                         // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment of int const  before declaration is not allowed");
                                            }
                                            
                                    else if(!check_constant_type_For_int($1)){
                                      printf("Error: Identifier '%s' is not int type.\n", $1);

                                      semantic_error("Error type incopatable\n");

                                                 }
                                                 else  addAssignmentValue($1,$3);
                                                 } 
              |IDENTIFIER ASSIGN FLOAT_CONST {  char* identifier =$1;
                    //           if (!analyze_variable_declaration(identifier)) {
                    //       printf("Error: Identifier '%s'is already declared \n", identifier);
                    //       semantic_error("Identifier with same scope can not be redclare");
                          
                    //   }
                    //          else  {

                    // add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                    //        } 
                   // Check if the identifier exists in the symbol table
                                        char *data_type = get_data_type($1);
                                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier);
                                         semantic_error("Assignment before declaration is not allowed");
                                            }

                                            if(!check_constant_type_For_Float($1)){
                                                 printf("Error: Identifier '%s' is not float type.\n", $1);

                                                 semantic_error(" the data type of ID is not float type\n");

                                                 }
                                                 else addAssignmentValue($1,$3);
                                                 }        
                                        
                                           ;
statement :expression SEMICOLON     
          |declaration SEMICOLON
          |assignment SEMICOLON 
          |selection_statement
          |iteration_statement
          |jump_statement
          |increament_decreament SEMICOLON
          |system_out_println SEMICOLON
          |object_creation
          |fuction_call
          |switch_statement
          |array_declaration SEMICOLON
          |array_intialization
          |IDENTIFIER ASSIGN expression SEMICOLON
          |type_specifier IDENTIFIER ASSIGN expression SEMICOLON{ char* identifier =$2;

                      if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                          
                     } 
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
                                         semantic_error("Assignment not allowed");                                            }
                                       
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
                        strcpy(symbol_table[symbol_count].data_type, " func call");
                                            }
            } LPAREN parametr RPAREN SEMICOLON 
            |IDENTIFIER LPAREN parametr RPAREN SEMICOLON  {   char *data_type = get_data_type($1);
                        int result =strcmp(data_type,"UNKNOWN");
                                       if (result==0) {
                        strcpy(symbol_table[symbol_count].data_type, " func call");
                                            }
            }
           ;
declaration : type_specifier  var_declarations 
                     
                  
            
             
            ;
var_declarations : var_declaration
                 | var_declarations COMMA {
                                        strcpy(symbol_table[symbol_count].data_type, symbol_table[symbol_count-1].data_type);
                                            }
                                            var_declaration
                 ;

var_declaration :  IDENTIFIER  { char* identifier =$1;

                      if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                      } 
                                          
                     } 
                     |IDENTIFIER ASSIGN IDENTIFIER  { char* identifier =$1;
                                                     char* identifier1 =$3;


                      if (!analyze_variable_declaration(identifier)) {
                          printf("Error: Identifier  '%s'is already declared \n", identifier);
                          semantic_error("Identifier with same scope can not be redclare");
                          
                      }
                      else  {

                        add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);
                          addAssignmentValue($1,$3);


                      } 
                     

                        
                                         char *data_type2 = get_data_type($3);
                                        int result1 =strcmp(data_type2,"UNKNOWN");
                                           
                                        if (result1==0) {
                                         printf("Error: Identifier '%s' not declared.\n", identifier1);
                                         semantic_error("usage before declaration is not allowed");
                                            }
                                        
                                        if(!check_same_or_not_type_For_ids($1,$3)){

                                        semantic_error("oprandes  in differnt type can not be assined\n");
                                                 }
                                              else
                                                 getValueOfid($1,$3);
                                          
                     } 
                     |IDENTIFIER ASSIGN INT_CONST {
                                    char* identifier =$1;
                                     add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                      if(!check_constant_type_For_int($1)){
                                      printf("Error: Identifier '%s' is not int type.\n", $1);

                                      semantic_error("type incopatable\n");

                                                 }
                                                 else  addAssignmentValue($1,$3);
                                                 }
                    |IDENTIFIER ASSIGN STRING_CONST{
                      char* identifier =$1;
                                              add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                     if(!check_constant_type_For_String($1)){
                                          printf("Error: Identifier '%s' is not String type.\n", $1);

                                                
                                               semantic_error("type incpatable Identifier is not String type\n");
                                                 }
                                              else
                                                 addAssignmentValue($1,$3);}       
                   |IDENTIFIER ASSIGN FLOAT_CONST{ 
                    char* identifier =$1;
                                      add_to_symbol_table(identifier, IDENTIFIER, line_number ,false);

                                     if(!check_constant_type_For_Float($1)){
                                                printf("Error: Identifier '%s' is not Float type.\n", $1);

                                                 semantic_error(" the Identifier is not float type\n");

                                                 }
                                                 else addAssignmentValue($1,$3);}                                                    
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
                                       semantic_error("Operands  are not of the same type\n");} }
           | expression MULTIPLY expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("Operands  are not of the same type\n");} }
           | expression DIVIDE expression{ 
                                             if(strcmp($3,"0")==0){
                                               
                                            semantic_error("Can not be diveded by zero\n");}

                                        else if(!analyzePlusExpression($1,$3)){
                                       semantic_error("Operands  are not of the same type\n");} }
           | expression MODULO expression {if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
           | expression LESS_THAN expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
           | expression LESS_EQUAL expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
           | expression GREATER_THAN expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
           | expression GREATER_EQUAL expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
           | expression EQUALS expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
           | expression NOT_EQUALS expression{if(!analyzePlusExpression($1,$3)){
                                       semantic_error("comparation with differnt type is impossible\n");} }
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
void semantic_error(const char *msg) {
    fprintf(stderr, "Semantic error at line %d: %s\n",line_number, msg);
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

