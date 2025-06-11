#include "head/stack_operations.h"
#include <stdio.h>

void parentheses_and_brackets(void) {
    char expr[MAX], postfix[2*MAX];

    printf("Enter the expression: ");
    fgets(expr, sizeof(expr), stdin);

    infixToPostfix(expr, postfix);
    int result = evaluatePostfix(postfix);

    printf("Result: %d\n", result);
}