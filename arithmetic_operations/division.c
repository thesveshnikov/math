#include <stdio.h>
#include "division.h"
#include "./head/math_operations.h"

long double division(void) {
    MathOperation operation;
    get_numbers(&operation);

    if (operation.number2 == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }

    operation.result = operation.number1 / operation.number2;
    printf("Division: %.2Lf\n", operation.result);

    return operation.result;
}