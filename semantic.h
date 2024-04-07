
#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"


bool analyzePlusExpression(char* leftOperand, char* rightOperand);
void addAssignmentValue(char* identifier, char* value);

#endif