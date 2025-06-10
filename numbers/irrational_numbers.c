#include "irrational_numbers.h"
#include <stdio.h>
#include <math.h>

void irrational_numbers(void) {
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
        printf("The number is probably not irrational.\n");
        printf("Approximate rational form: %lld/%d\n", numerator, denominator);
    } else {
        printf("The number is probably irrational.\n");
    }
}
