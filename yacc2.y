%left '+' '-'
%left '*' '/'
%left NEG
%left '<' 
%left '>' 

%left EQ NEQ
%left AND
%left OR

%{
#include <stdio.h>
extern int line_number;
extern int yylex();
extern FILE *yyin;
void yyerror(const char *s);
%}

// Token definitions
%token  IMPORT CLASS STATIC IMPLEMENTS DEFAULT CASE BREAK FOR RETURN DO WHILE IF ELSE SWITCH PRIVATE PROTECTED PUBLIC JAVA_IMPORT SYSTEM OUT IN INT FLOAT VOID STRING CONTINUE
%token  LBRACE RBRACE LBRACKET RBRACKET LPAREN RPAREN DOT SEMICOLON COLON COMMA ASSIGN MINUS PLUS MULTIPLY DIVIDE MODULO LESS_THAN LESS_EQUAL GREATER_THAN GREATER_EQUAL EQUALS NOT_EQUALS  NOT
%token  FLOAT_CONST INT_CONST STRING_CONST CHAR_CONST IDENTIFIER

%%

program : compilation_unit   { printf("Parsing completed successfully!\n"); return 0;}
        ;

compilation_unit : type_declaration_list
                 ;

type_declaration_list : /* empty */
                       | type_declaration_list type_declaration
                       ;

type_declaration : class_declaration
                 
                 ;

class_declaration : modifier CLASS IDENTIFIER class_body 
                   ;


class_body : LBRACE class_body_declarations RBRACE
           ;

class_body_declarations : /* empty */
                        | class_body_declarations class_body_declaration
                        ;

class_body_declaration : field_declaration
                       | method_declaration
                       ;

field_declaration : data_type variable_declarators SEMICOLON
                   ;

variable_declarators : variable_declarator
                     | variable_declarators COMMA variable_declarator
                     ;

variable_declarator : IDENTIFIER
                    | IDENTIFIER ASSIGN variable_initializer
                    ;

variable_initializer : expression
                     ;

method_declaration : method_header method_body
                    ;

method_header : modifier data_type IDENTIFIER LPAREN parameter_list RPAREN
              | data_type IDENTIFIER LPAREN parameter_list RPAREN
              
              ;

modifier : PUBLIC
         | PRIVATE
         | PROTECTED
         | STATIC
         ;

parameter_list : /* empty */
               | formal_parameter
               | parameter_list COMMA formal_parameter
               ;

formal_parameter : data_type IDENTIFIER
                 ;

method_body : block
            ;

block : LBRACE block_statements RBRACE
      ;

block_statements : /* empty */
                 | block_statements block_statement
                 ;

block_statement : local_variable_declaration_statement
                | statement
                ;

local_variable_declaration_statement : data_type variable_declarators SEMICOLON
data_type: INT
           |VOID
           |STRING
           |FLOAT
           |IDENTIFIER;

                                      ;

statement : expression_statement
          | if_statement
          | while_statement
          | for_statement
          | return_statement
          ;

expression_statement : SEMICOLON
                     | expression SEMICOLON
                     ;

if_statement : IF LPAREN expression RPAREN statement
             | IF LPAREN expression RPAREN statement ELSE statement
             ;

while_statement : WHILE LPAREN expression RPAREN statement
                ;

for_statement : FOR LPAREN for_init SEMICOLON expression SEMICOLON for_update RPAREN statement
              ;

for_init : /* empty */
         | local_variable_declaration_statement
         | expression_statement
         ;

for_update : /* empty */
           | expression_statement
           ;

return_statement : RETURN expression SEMICOLON
                 | RETURN SEMICOLON
                 ;

expression : assignment_expression
           ;

assignment_expression : conditional_expression
                       | unary_expression ASSIGN assignment_expression
                       ;

conditional_expression : conditional_or_expression
                        | conditional_or_expression '?' expression ':' conditional_expression
                        ;

conditional_or_expression : conditional_and_expression
                           | conditional_or_expression OR conditional_and_expression
                           ;

conditional_and_expression : inclusive_or_expression
                            | conditional_and_expression AND inclusive_or_expression
                            ;

inclusive_or_expression : exclusive_or_expression
                        | inclusive_or_expression '|' exclusive_or_expression
                        ;

exclusive_or_expression : and_expression
                        | exclusive_or_expression '^' and_expression
                        ;

and_expression : equality_expression
               | and_expression '&' equality_expression
               ;

equality_expression : relational_expression
                    | equality_expression EQUALS relational_expression
                    | equality_expression NOT_EQUALS relational_expression
                    ;

relational_expression : additive_expression
                       | relational_expression LESS_THAN additive_expression
                       | relational_expression LESS_EQUAL additive_expression
                       | relational_expression GREATER_THAN additive_expression
                       | relational_expression GREATER_EQUAL additive_expression
                       ;

additive_expression : multiplicative_expression
                     | additive_expression PLUS multiplicative_expression
                     | additive_expression MINUS multiplicative_expression
                     ;

multiplicative_expression : unary_expression
                           | multiplicative_expression MULTIPLY unary_expression
                           | multiplicative_expression DIVIDE unary_expression
                           | multiplicative_expression MODULO unary_expression
                           ;

unary_expression : postfix_expression
                 | MINUS unary_expression
                 | PLUS unary_expression
                 | NOT unary_expression
                 ;

postfix_expression : primary_expression
                   | postfix_expression LPAREN argument_list RPAREN
                   | postfix_expression DOT IDENTIFIER
                   | postfix_expression DOT IDENTIFIER LPAREN argument_list RPAREN
                   | postfix_expression LBRACKET expression RBRACKET
                  
                   ;

primary_expression : IDENTIFIER
                   | INT_CONST
                   | FLOAT_CONST
                   | STRING_CONST
                   | CHAR_CONST
                   | LPAREN expression RPAREN
                   ;

argument_list : /* empty */
              | expression
              | argument_list COMMA expression
              ;

class_instance_creation_expression : IDENTIFIER LPAREN argument_list RPAREN
                                   ;


%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax error at line %d: %s\n", line_number, s);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Error: Cannot open input file %s\n", argv[
  1]);
        return 1;
    }

    int parse_result = yyparse();
    if (parse_result == 0) {
        printf("Compilation completed without syntax errors.\n");
    }

    fclose(yyin);
    return 0;
}
