#include "head/math_utils.h"
#include "simplifying_fractions.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void simplifying_fractions(void) {
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

    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    printf("Simplified fraction: %d/%d\n", numerator, denominator);
}