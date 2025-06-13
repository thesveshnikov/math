#include "direct_proportion.h"
#include <stdio.h>

void direct_proportion() {
    float x, y, k = 2.0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    y = k * x;

    printf("The value of y is: %.2f\n", y);

    return 0;
}