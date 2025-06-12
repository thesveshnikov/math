#include <stdio.h>
#include <math.h>
#include "exponent_laws.h"

double apply_power(Exponent e) {
    return pow(e.base, e.exponent);
}

double multiply_same_base(Exponent e1, Exponent e2) {
    if (e1.base != e2.base) {
        printf("Error: Bases must be the same for multiplication of powers.\n");
        return 0.0;
    }
    return pow(e1.base, e1.exponent + e2.exponent);
}

double divide_same_base(Exponent e1, Exponent e2) {
    if (e1.base != e2.base) {
        printf("Error: Bases must be the same for division of powers.\n");
        return 0.0;
    }
    return pow(e1.base, e1.exponent - e2.exponent);
}

double power_of_power(Exponent e, int newExponent) {
    return pow(e.base, e.exponent * newExponent);
}

double power_of_product(double a, double b, int exponent) {
    return pow(a, exponent) * pow(b, exponent);
}

double power_of_quotient(double a, double b, int exponent) {
    if (b == 0) {
        printf("Error: Division by zero in power_of_quotient.\n");
        return 0.0;
    }
    return pow(a, exponent) / pow(b, exponent);
}

double zero_exponent(double base) {
    return pow(base, 0);
}

double negative_exponent(double base, int exponent) {
    return pow(base, exponent);
}

void exponent_laws() {
    Exponent e1, e2, e3, e4;
    int newExponent;
    double a, b;
    int exponent;

    printf("Enter base and exponent for the first exponent: ");
    scanf("%lf %d", &e1.base, &e1.exponent);

    printf("Enter base and exponent for the second exponent (same base for multiplication/division): ");
    scanf("%lf %d", &e2.base, &e2.exponent);

    printf("Enter new exponent to raise the first exponent to: ");
    scanf("%d", &newExponent);

    printf("Enter two numbers to multiply, and the exponent: ");
    scanf("%lf %lf %d", &a, &b, &exponent);

    double numerator, denominator;
    int quotientExponent;
    printf("Enter numerator, denominator, and exponent for quotient: ");
    scanf("%lf %lf %d", &numerator, &denominator, &quotientExponent);

    printf("Enter a base for zero exponent: ");
    scanf("%lf", &e3.base);
    e3.exponent = 0;

    printf("Enter a base and negative exponent: ");
    scanf("%lf %d", &e4.base, &e4.exponent);

    printf("\nResults:\n");
    printf("1. Simple power: %.2f^%d = %.2f\n", e1.base, e1.exponent, apply_power(e1));
    printf("2. Product of powers with same base: %.2f^(%d+%d) = %.2f\n", e1.base, e1.exponent, e2.exponent, multiply_same_base(e1, e2));
    printf("3. Division of powers with same base: %.2f^(%d-%d) = %.2f\n", e2.base, e2.exponent, e1.exponent, divide_same_base(e2, e1));
    printf("4. Power of a power: (%.2f^%d)^%d = %.2f\n", e1.base, e1.exponent, newExponent, power_of_power(e1, newExponent));
    printf("5. Power of a product: (%.2f * %.2f)^%d = %.2f\n", a, b, exponent, power_of_product(a, b, exponent));
    printf("6. Power of a quotient: (%.2f / %.2f)^%d = %.2f\n", numerator, denominator, quotientExponent, power_of_quotient(numerator, denominator, quotientExponent));
    printf("7. Zero exponent: %.2f^0 = %.2f\n", e3.base, zero_exponent(e3.base));
    printf("8. Negative exponent: %.2f^%d = %.5f\n", e4.base, e4.exponent, negative_exponent(e4.base, e4.exponent));
}