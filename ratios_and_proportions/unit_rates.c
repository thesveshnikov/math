#include "unit_rates.h"
#include <stdio.h>

void unit_rates() {
    long double number_1, number_2, unit_rate;

    printf("Enter a number: ");
    scanf("%Lf", &number_1);

    printf("Enter another number: ");
    scanf("%Lf", &number_2);

    if (number_2 == 0.0L) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }

    unit_rate = number_1 / number_2;

    printf("The rate is %.2Lf%%\n", unit_rate);
}