#include "natural_numbers.h"
#include <stdio.h>

void natural_numbers(void) {
    long int sequence_size;

    printf("Enter the size of the sequence: ");
    if (scanf("%ld", &sequence_size) != 1 || sequence_size < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return;
    }

    for (long int i = 1; i <= sequence_size; i++) {
        if (i < sequence_size) {
            printf("%ld, ", i);
        } else {
            printf("%ld\n", i);
        }
    }
}