#include <stdio.h>
#include <math.h>

void rational_numbers(void) {
    long double num;
    printf("Enter a number: ");
    scanf("%Lf", &num);

    double precision = 1e-12;
    int denominator = 1;
    int isRational = 0;
    long long numerator = 0;

    while (denominator < 10000000) {
        double temp_numerator = num * denominator;
        if (fabs(temp_numerator - round(temp_numerator)) < precision) {
            isRational = 1;
            numerator = llround(temp_numerator);
            break;
        }
        denominator++;
    }

    if (isRational) {
        printf("The number is probably rational.\n");
        printf("Approximate fractional representation: %lld/%d\n", numerator, denominator);
    } else {
        printf("The number is probably not rational.\n");
    }
}