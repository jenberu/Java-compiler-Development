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
void set_is_function_attribute(char *name);
bool check_constant_type_For_String(char *name);
bool check_constant_type_For_int(char *name);
bool check_constant_type_For_Float(char *name);
bool analyze_variable_declaration(const char* name) ;
bool is_declared(const char* name);
bool check_scope(  char* scope);
#endif /* SYMBOL_TABLE_H */
