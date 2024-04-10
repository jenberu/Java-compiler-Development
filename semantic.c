#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"
extern int symbol_count;
extern int line_number;



bool analyzePlusExpression(char* leftOperand, char* rightOperand) {
    // Ensure that both operands are declared identifiers
    bool leftOperandFound = false;
    bool rightOperandFound = false;
    char *leftOperandType = NULL;
    char *rightOperandType = NULL;

    // Check if the left operand is an identifier
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(leftOperand, symbol_table[i].name) == 0) {
            leftOperandFound = true;
            leftOperandType = symbol_table[i].data_type;
            break; // No need to continue searching
        }
    }

    // Check if the right operand is an identifier
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(rightOperand, symbol_table[i].name) == 0) {
            rightOperandFound = true;
            rightOperandType = symbol_table[i].data_type;
            break; // No need to continue searching
        }
    }

    // If neither operand is found, it may be a constant integer
    if (!leftOperandFound) {
        // Check if the left operand is a constant integer
        char* endptr;
        strtol(leftOperand, &endptr, 10); // Convert to integer
        if (*endptr == '\0') {
            leftOperandFound = true;
            leftOperandType = "int";
        }
    }

    if (!rightOperandFound) {
        // Check if the right operand is a constant integer
        char* endptr;
        strtol(rightOperand, &endptr, 10); // Convert to integer
        if (*endptr == '\0') {
            rightOperandFound = true;
            rightOperandType = "int";
        }
    }

    // Check if both operands are found
    if (!leftOperandFound) {
        printf("Semantic error: Identifier '%s' is not declared\n", leftOperand);
        return false;
    }

    if (!rightOperandFound) {
        printf("Semantic error: Identifier '%s' is not declared\n", rightOperand);
        return false;
    }

    // Check if both operands are integers
    if (strcmp(leftOperandType, "int") != 0 || strcmp(rightOperandType, "int") != 0) {
        printf("Semantic error: Operands '%s' and '%s' are not numbers\n", leftOperand, rightOperand);
        return false;
    }

    // Perform other semantic analysis specific to addition operation if needed

    return true;
}

void addAssignmentValue(char* identifier, char* value) {

    int index = -1;
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(identifier, symbol_table[i].name) == 0 && strcmp(get_current_scope(),symbol_table[i].scope)==0) {
            index = i;
            break;
        }
    }
strcpy(symbol_table[index].value,value);

    

    
}
bool check_same_or_not_type_For_ids(char *id1,char *id2){
    if(strcmp(get_data_type(id1),get_data_type(id2))==0)
    return true;
 else
 return false;
}
 void getValueOfid(char * identfier1,char* identfier2){
     for (int i = 0; i < symbol_count; i++) {
        if (strcmp(identfier2, symbol_table[i].name) ==0) {
           addAssignmentValue(identfier1,symbol_table[i].value);
            break;
        }
    }
   
 }
