#include <stdio.h>
#include "math_operations.h"

void get_numbers(MathOperation *op) {
    printf("Enter first number: ");
    scanf("%Lf", &op->number1);
    
    printf("Enter second number: ");
    scanf("%Lf", &op->number2);
}