#include "prime_and_composite_numbers.h"
#include <stdio.h>
#include <math.h>

void prime_and_composite_numbers() {
    int number, divisor, divisorCount = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a Prime number.\n", number);
        return;
    }

    for (divisor = 2; divisor <= sqrt(number); divisor++) {
        if (number % divisor == 0) {
            divisorCount++;
            break;
        }
    }

    if (divisorCount == 0) {
        printf("%d is a Prime number.\n", number);
    } else {
        printf("%d is not a Prime number.\n", number);
    }
}