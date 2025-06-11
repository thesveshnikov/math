#include <stdio.h>
#include "subtraction.h"
#include "./head/math_operations.h"

long double subtraction(void) {
    MathOperation operation;
    get_numbers(&operation);

    operation.result = operation.number1 - operation.number2;
    printf("Subtraction: %.2Lf\n", operation.result);

    return operation.result;
}