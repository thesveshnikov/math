#include "factors_and_multiples.h"
#include <stdio.h>

void factors_and_multiples(void) {
    int number, i;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    for (i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
}