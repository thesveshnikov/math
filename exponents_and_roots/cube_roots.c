#include "cube_roots.h"
#include <stdio.h>
#include <math.h>

void cube_roots(void) {
    double value;

    printf("Send a number: ");
    scanf("%lf", &value);

    double result = cbrt(value);

    printf("The Cube Root of %.2f is %.2f\n", value, result);
}