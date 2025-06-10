#include "integers.h"
#include <stdio.h>

void integers(void) {
    long int StartOfSequence;
    long int EndOfSequence;

    printf("Enter where the sequence begins: ");
    if (scanf("%ld", &StartOfSequence) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }

    printf("Enter where the sequence ends: ");
    if (scanf("%ld", &EndOfSequence) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }

    if (StartOfSequence > EndOfSequence) {
        printf("Error: %ld is greater than %ld.\n", StartOfSequence, EndOfSequence);
    } else if (StartOfSequence == EndOfSequence) {
        printf("Error: %ld is equal to %ld.\n", StartOfSequence, EndOfSequence);
    } else {
        for (long int i = StartOfSequence; i <= EndOfSequence; i++) {
            printf("%ld ", i);
        }
        printf("\n");
    }
}