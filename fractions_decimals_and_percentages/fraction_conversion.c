#include "fraction_conversion.h"
#include "head/math_utils.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void decimal_to_fraction(float decimal, int *numerator, int *denominator) {
    int denom = 1000000;
    int numer = (int)(decimal * denom + 0.5);
    int divisor = gcd(numer, denom);
    *numerator = numer / divisor;
    *denominator = denom / divisor;
}

void fraction_conversion(void) {
    char input[200];
    int numerator = 0, denominator = 0;
    float decimal = 0.0;

    printf("Enter a value (fraction, decimal, or percentage): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    if (strchr(input, '/') != NULL) {
        if (sscanf(input, "%d/%d", &numerator, &denominator) != 2 || denominator == 0) {
            printf("Invalid fraction. Use the format numerator/denominator and denominator ≠ 0.\n");
            return;
        }
        decimal = (float)numerator / denominator;
        printf("Input as fraction: %d/%d\n", numerator, denominator);
        printf("As decimal: %.6f\n", decimal);
        printf("As percentage: %.2f%%\n", decimal * 100);
    }
    else if (strchr(input, '%') != NULL) {
        float percent;
        if (sscanf(input, "%f%%", &percent) != 1) {
            printf("Invalid percentage format. Use the format ##%%.\n");
            return;
        }
        decimal = percent / 100.0;
        decimal_to_fraction(decimal, &numerator, &denominator);
        printf("Input as percentage: %.2f%%\n", percent);
        printf("As decimal: %.6f\n", decimal);
        printf("As fraction: %d/%d\n", numerator, denominator);
    }
    else {
        if (sscanf(input, "%f", &decimal) != 1) {
            printf("Invalid number format.\n");
            return;
        }
        decimal_to_fraction(decimal, &numerator, &denominator);
        printf("Input as decimal: %.6f\n", decimal);
        printf("As percentage: %.2f%%\n", decimal * 100);
        printf("As fraction: %d/%d\n", numerator, denominator);
    }
}