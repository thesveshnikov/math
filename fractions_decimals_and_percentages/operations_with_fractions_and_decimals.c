#include "operations_with_fractions_and_decimals.h"
#include "head/math_utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void decimal_to_fraction(float decimal, int *numerator, int *denominator);

float input_to_decimal(const char *input, int *valid) {
    int num, den;
    float decimal = 0.0f;
    *valid = 1;

    if (strchr(input, '/') != NULL) {
        if (sscanf(input, "%d/%d", &num, &den) != 2 || den == 0) {
            printf("Invalid fraction.\n");
            *valid = 0;
            return 0.0f;
        }
        return (float)num / den;
    } else if (strchr(input, '%') != NULL) {
        float percent;
        if (sscanf(input, "%f%%", &percent) != 1) {
            printf("Invalid percentage format.\n");
            *valid = 0;
            return 0.0f;
        }
        return percent / 100.0f;
    } else {
        if (sscanf(input, "%f", &decimal) != 1) {
            printf("Invalid number format.\n");
            *valid = 0;
            return 0.0f;
        }
        return decimal;
    }
}

void perform_operation(float val1, float val2, char op, float *result) {
    switch (op) {
        case '+': *result = val1 + val2; break;
        case '-': *result = val1 - val2; break;
        case '*': *result = val1 * val2; break;
        case '/':
            if (val2 == 0) {
                printf("Error: Division by zero.\n");
                *result = 0.0f;
                return;
            }
            *result = val1 / val2;
            break;
        default:
            printf("Invalid operation.\n");
            *result = 0.0f;
    }
}

void operations_with_fractions_and_decimals(void) {
    char input1[100], input2[100], op;
    float val1, val2, result;
    int valid1, valid2;
    int num_result, den_result;

    printf("Enter the first value (fraction, decimal, or percentage): ");
    fgets(input1, sizeof(input1), stdin);
    input1[strcspn(input1, "\n")] = '\0';
    val1 = input_to_decimal(input1, &valid1);
    if (!valid1) return;

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);
    while (getchar() != '\n');

    printf("Enter the second value (fraction, decimal, or percentage): ");
    fgets(input2, sizeof(input2), stdin);
    input2[strcspn(input2, "\n")] = '\0';
    val2 = input_to_decimal(input2, &valid2);
    if (!valid2) return;

    perform_operation(val1, val2, op, &result);
    decimal_to_fraction(result, &num_result, &den_result);

    printf("\n=== Result ===\n");
    printf("Decimal: %.2f\n", result);
    printf("Percentage: %.2f%%\n", result * 100);
    printf("Fraction: %d/%d\n", num_result, den_result);
}