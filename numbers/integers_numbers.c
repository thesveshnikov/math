#include "integers_numbers.h"
#include <stdio.h>

void integers(void) {
    int StartOfSequence;
    int EndOfSequence;

    printf("Enter where the sequence begins: ");
    scanf("%d", &StartOfSequence);

    printf("Enter where the sequence ends: ");
    scanf("%d", &EndOfSequence);

    if (StartOfSequence > EndOfSequence) {
        printf("Error: %d is greater than %d.\n", StartOfSequence, EndOfSequence);
    } else if (StartOfSequence == EndOfSequence) {
        printf("Error: %d is equal to %d.\n", StartOfSequence, EndOfSequence);
    } else {
        for (int i = StartOfSequence; i <= EndOfSequence; i++) {
            printf("%d ", i);
        }
    }
}