
#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"


bool analyzePlusExpression(char* leftOperand, char* rightOperand);
void addAssignmentValue(char* identifier, char* value);
bool check_same_or_not_type_For_ids(char *id1,char *id2);
void getValueOfid(char * identfier1,char* identfier2);

#endif