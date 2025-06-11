#include <stdio.h>
#include <math.h>
#include "calculate_remainder.h"
#include "./head/math_operations.h"

long double calculate_remainder(void) {
    MathOperation operation;
    get_numbers(&operation);

    operation.result = fmodl(operation.number1, operation.number2);
    printf("Remainder: %.2Lf\n", operation.result);

    return operation.result;
}