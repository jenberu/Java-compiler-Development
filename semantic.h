
#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"


bool analyzePlusExpression(char* leftOperand, char* rightOperand);
void addAssignmentValue(char* identifier, char* value);
bool check_same_or_not_type_For_ids(char *id1,char *id2);
void getValueOfid(char * identfier1,char* identfier2);
bool check_function_redeclaration(char* func_name);
bool check_class_redeclaration(char* class_name);
 bool check_main_mathed();
 bool check_value_of_id(char * identifier);
#endif