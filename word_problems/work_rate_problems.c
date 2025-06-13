#include "work_rate_problems.h"
#include <stdio.h>

void work_rate_problems(void) {
    float time_tim, time_linda;

    printf("Enter the time (in hours) it takes Tim to mow the lawn: ");
    scanf("%f", &time_tim);

    printf("Enter the time (in hours) it takes Linda to mow the lawn: ");
    scanf("%f", &time_linda);

    if (time_tim <= 0 || time_linda <= 0) {
        printf("Error: Time must be greater than zero.\n");
        return;
    }

    float rate_tim = 1 / time_tim;
    float rate_linda = 1 / time_linda;

    float combined_rate = rate_tim + rate_linda;

    float time_together = 1 / combined_rate;

    printf("Time taken by Tim and Linda to mow the lawn together: %.2f hours\n", time_together);
}