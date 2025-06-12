#ifndef EXPONENT_LAWS_H
#define EXPONENT_LAWS_H

typedef struct {
    double base;
    int exponent;
} Exponent;

double apply_power(Exponent e);
double multiply_same_base(Exponent e1, Exponent e2);
double divide_same_base(Exponent e1, Exponent e2);
double power_of_power(Exponent e, int newExponent);
double power_of_product(double a, double b, int exponent);
double power_of_quotient(double a, double b, int exponent);
double zero_exponent(double base);
double negative_exponent(double base, int exponent);
void exponent_laws();

#endif // EXPONENT_LAWS_H