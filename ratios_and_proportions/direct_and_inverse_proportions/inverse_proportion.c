#include "inverse_proportion.h"
#include <stdio.h>

void inverse_proportion(void) {
    float x, y, k = 24.0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    y = k / x;

    printf("The value of y is: %.2f\n", y);
}