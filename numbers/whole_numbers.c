#include "whole_numbers.h"
#include <stdio.h>

void whole_numbers(void) {
    long int sequence_size;

    printf("Enter the size of the sequence: ");
    if (scanf("%ld", &sequence_size) != 1 || sequence_size < 0) {
        printf("Invalid input. Please enter a whole number.\n");
        return;
    }

    for (long int i = 0; i <= sequence_size; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%ld", i);
    }
    printf("\n");
}