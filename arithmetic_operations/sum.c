#include <stdio.h>
#include "sum.h"
#include "head/math_operations.h"

long double sum(void) {
    MathOperation operation;
    get_numbers(&operation);

    operation.result = operation.number1 + operation.number2;
    printf("Sum: %.2Lf\n", operation.result);

    return operation.result;
}