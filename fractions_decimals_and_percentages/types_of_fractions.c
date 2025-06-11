#include "types_of_fractions.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void types_of_fractions(void) {
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

    if (numerator < denominator) {
        printf("The fraction is proper.\n");
    } else {
        if (numerator % denominator == 0) {
            printf("The fraction is improper and apparent.\n");
        } else {
            printf("The fraction is improper.\n");
        }
    }

    printf("Fraction: %d/%d\n", numerator, denominator);
}