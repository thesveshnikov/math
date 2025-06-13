#include "greatest_common_divisor.h"
#include <stdio.h>

void greatest_common_divisor(void) {
    int number_1, number_2, hcf = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &number_1, &number_2);

    while (number_1 != number_2) {
        if (number_1 > number_2)
            number_1 -= number_2;
        else
            number_2 -= number_1;
    }

    printf("The HCF: %d", number_1);
}