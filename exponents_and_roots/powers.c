#include "powers.h"
#include <stdio.h>
#include <math.h>

void powers(void) {
    float number;
    int exponent;

    printf("Enter a number and exponent in the form base^exponent: ");
    if (scanf("%f^%d", &number, &exponent) == 2) {
        float result = pow(number, exponent);
        printf("%.2f^%d = %.2f\n", number, exponent, result);
    } else {
        printf("Invalid input format. Please use base^exponent.\n");
    }
}