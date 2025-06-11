#include <stdio.h>
#include "multiplication.h"
#include "./head/math_operations.h"

long double multiplication(void) {
    MathOperation operation;
    get_numbers(&operation);

    operation.result = operation.number1 * operation.number2;
    printf("Multiplication: %.2Lf\n", operation.result);

    return operation.result;
}