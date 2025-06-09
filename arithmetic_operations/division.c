#include <stdio.h>
#include "division.h"

long double division(void) {
    long double number_1, number_2;

    printf("Enter a number: ");
    scanf("%Lf", &number_1);

    printf("Enter another number: ");
    scanf("%Lf", &number_2);

    long double result = number_1 / number_2;

    printf("Divisions: %.2Lf\n", result);

    return result;
}