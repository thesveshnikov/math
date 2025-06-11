#include "multiplication_and_division.h"
#include "./head/stack_operations.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void multiplication_and_division(void) {
    char expr[MAX], postfix[2 * MAX];
    int result;

    printf("Enter expression: ");
    fgets(expr, sizeof(expr), stdin);

    infixToPostfix(expr, postfix);

    Stack s;
    s.top = -1;

    for (int i = 0; postfix[i] != '\0';) {
        if (isspace(postfix[i])) {
            i++;
        } else if (isdigit(postfix[i])) {
            int num = 0;
            while (isdigit(postfix[i])) {
                num = num * 10 + (postfix[i++] - '0');
            }
            push(&s, num);
        } else if (postfix[i] == '*' || postfix[i] == '/') {
            int b = pop(&s);
            int a = pop(&s);
            if (postfix[i] == '/') {
                if (b == 0) {
                    fprintf(stderr, "Error: division by zero\n");
                    return;
                }
                push(&s, a / b);
            } else {
                push(&s, a * b);
            }
            i++;
        } else {
            fprintf(stderr, "Error: unsupported operator '%c'\n", postfix[i]);
            return;
        }
    }

    result = pop(&s);
    printf("Result: %d\n", result);
}