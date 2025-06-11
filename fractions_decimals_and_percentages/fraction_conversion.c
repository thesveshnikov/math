#include "fraction_conversion.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void fraction_conversion(void) {
    char input[200];
    int numerator = 0, denominator = 0;
    int i = 0;

    printf("Enter a fraction: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    while (isdigit(input[i])) {
        numerator = numerator * 10 + (input[i] - '0');
        i++;
    }

    if (input[i] == '/') {
        i++;
        while (isdigit(input[i])) {
            denominator = denominator * 10 + (input[i] - '0');
            i++;
        }
    } else {
        printf("Invalid format. Use numerator/denominator.\n");
        return;
    }

    if (denominator == 0) {
        printf("Invalid fraction. Denominator cannot be zero.\n");
        return;
    }

    float conversion_to_decimal = (float)numerator / denominator;

    printf("Fraction: %d/%d\n", numerator, denominator);
    printf("Fraction converted to decimal: %.2f\n", conversion_to_decimal);
}