#include "least_common_multiple.h"
#include <stdio.h>

void least_common_multiple() {
    int number_1, number_2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &number_1, &number_2);

    for (i = 1; i <= number_1 && i <= number_2; ++i) {
        if (number_1 % i == 0 && number_2 % i == 0) {
            gcd = i;
        }
    }

    lcm = (number_1 * number_2) / gcd;

    printf("The LCM of %d and %d is %d.", number_1, number_2, lcm);
}