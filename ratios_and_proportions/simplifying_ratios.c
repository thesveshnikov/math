#include "head/math_utils.h"
#include <stdio.h>
#include "simplifying_ratios.h"

void simplifying_ratios() {
    int a, b;

    printf("Enter two integers for the ratio: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return;
    }

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }

    int g = gcd(a, b);
    printf("Simplified ratio: %d:%d\n", a / g, b / g);
}