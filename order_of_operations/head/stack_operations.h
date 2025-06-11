#ifndef STACK_OPERATIONS_H
#define STACK_OPERATIONS_H

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void push(Stack* s, int val);
int pop(Stack* s);
int precedence(char op);
void infixToPostfix(const char* expr, char* output);
int evaluatePostfix(const char* expr);

#endif