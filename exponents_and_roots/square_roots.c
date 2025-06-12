#include "square_roots.h"
#include <stdio.h>
#include <math.h>

void square_roots(void) {
    double value;
    double result = sqrt(value);

    printf("Send a number: ");
    scanf("%lf", &value);

    printf("The Square Root of %.2f is %.2f\n", value, result);
}