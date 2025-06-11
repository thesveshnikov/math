#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

typedef struct {
    long double number1;
    long double number2;
    long double result;
} MathOperation;

void get_numbers(MathOperation *op);

#endif