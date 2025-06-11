#include "stack_operations.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void push(Stack* s, int val) {
    s->data[++(s->top)] = val;
}

int pop(Stack* s) {
    return s->data[(s->top)--];
}

int precedence(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

void infixToPostfix(const char* expr, char* output) {
    char stack[MAX];
    int top = -1, j = 0;

    for (int i = 0; expr[i] != '\0'; i++) {
        if (isspace(expr[i])) continue;

        if (isdigit(expr[i])) {
            while (isdigit(expr[i])) {
                output[j++] = expr[i++];
            }
            output[j++] = ' ';
            i--;
        } else if (strchr("+-*/", expr[i])) {
            while (top >= 0 && precedence(stack[top]) >= precedence(expr[i])) {
                output[j++] = stack[top--];
                output[j++] = ' ';
            }
            stack[++top] = expr[i];
        }
    }

    while (top >= 0) {
        output[j++] = stack[top--];
        output[j++] = ' ';
    }

    output[j] = '\0';
}

int evaluatePostfix(const char* expr) {
    Stack s;
    s.top = -1;

    for (int i = 0; expr[i] != '\0';) {
        if (isspace(expr[i])) {
            i++;
        } else if (isdigit(expr[i])) {
            int num = 0;
            while (isdigit(expr[i])) {
                num = num * 10 + (expr[i++] - '0');
            }
            push(&s, num);
        } else if (strchr("+-*/", expr[i])) {
            int b = pop(&s);
            int a = pop(&s);
            switch (expr[i]) {
                case '+': push(&s, a + b); break;
                case '-': push(&s, a - b); break;
                case '*': push(&s, a * b); break;
                case '/':
                    if (b == 0) {
                        fprintf(stderr, "Error: division by zero\n");
                        exit(1);
                    }
                    push(&s, a / b);
                    break;
            }
            i++;
        }
    }

    return pop(&s);
}