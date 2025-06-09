#include <stdio.h>
#include <math.h>
#include "calculate_remainder.h"

long double calculate_remainder(void) {
    long double number_1, number_2;

    printf("Enter a number: ");
    scanf("%Lf", &number_1);

    printf("Enter another number: ");
    scanf("%Lf", &number_2);

    long double result = fmodl(number_1, number_2);

    printf("Remainder: %.2Lf\n", result);

    return result;
}