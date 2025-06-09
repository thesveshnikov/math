#include "multiplication.h"

long double multiplication(void) {
    long double number_1, number_2;

    printf("Enter a number: ");
    scanf("%Lf", &number_1);

    printf("Enter another number: ");
    scanf("%Lf", &number_2);

    long double result = number_1 * number_2;

    printf("Multiplication: %.2Lf\n", result);

    return result;
}