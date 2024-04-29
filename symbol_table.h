#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include <stdbool.h>

struct symbol_entry {
    char name[50];
    char data_type[20];
    int token_type;
    int location;
    bool is_function; 
    char value[30];
    char scope[30];
    int scope_id;

};
struct func_parameter{
    char funcname[30];
    char parm1[30];
    char parm2[30];
    char parm3[30];
    char parm_type[30];
};
extern struct func_parameter fun_parm[100];
extern int  parm_count;
extern struct symbol_entry symbol_table[100];
extern int symbol_count;
extern int scope_id;
void push_scope(char *scope);
void pop_scope();
char *get_current_scope();
void add_value_for_id(char *val);
void add_to_symbol_table(char *name, int token, int location ,bool is_function);
int search_symbol_table(char *name);
char* get_data_type(char* token_name);
void displaySymbolTable();
void displayparameter();
void set_is_function_attribute(char *name);
bool check_constant_type_For_String(char *name);
bool check_constant_type_For_int(char *name);
bool check_constant_type_For_Float(char *name);
bool analyze_variable_declaration(const char* name) ;
bool is_declared(const char* name);
bool check_scope( int scopeid);
void add_parm_for_function(char *val);
void add_parm2_for_function(char *fun_name,char *parm_type,char* parm1,char* parm2);
 void add_parm1_for_function(char* parm1);
  void add_parm3_for_function(char *fun_name,char *parm_type,char* parm1,char* parm2,char* parm3);
  bool check_parmconstant_type_For_int(char *name);
  bool check_parmconstant_type_For_string(char *name);
  bool check_parmconstant_type_For_float(char *name);
#endif /* SYMBOL_TABLE_H */
