#include <stdio.h>
#include <math.h>

void rational_numbers(void) {
    long double num;
    printf("Enter a number: ");
    scanf("%Lf", &num);

    double precision = 1e-12;
    int denominator = 1;
    int isRational = 0;

    while (denominator < 10000000) {
        double numerator = num * denominator;
        if (fabs(numerator - round(numerator)) < precision) {
            isRational = 1;
            break;
        }
        denominator++;
    }

    if (isRational) {
        printf("The number is probably rational.\n");
    } else {
        printf("The number is probably not rational.\n");
    }
}