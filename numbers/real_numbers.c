#include <stdio.h>
#include "real_numbers.h"

void real_numbers(void) {
    long double StartOfSequence;
    long double EndOfSequence;

    printf("Enter where the sequence begins: ");
    if (scanf("%Lf", &StartOfSequence) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }

    printf("Enter where the sequence ends: ");
    if (scanf("%Lf", &EndOfSequence) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }

    if (StartOfSequence > EndOfSequence) {
        printf("Error: %.2Lf is greater than %.2Lf.\n", StartOfSequence, EndOfSequence);
    } else if (StartOfSequence == EndOfSequence) {
        printf("Error: %.2Lf is equal to %.2Lf.\n", StartOfSequence, EndOfSequence);
    } else {
        for (long int i = (long int)StartOfSequence; i <= (long int)EndOfSequence; i++) {
            printf("%ld ", i);
        }
        printf("\n");
    }
}