/*
    Simple stack
*/
#ifndef STACK_H
#define STACK_H
#define MAX_STACK_SIZE 64


#include <stdlib.h>
#include <stdio.h>

typedef struct stack {
    int data[MAX_STACK_SIZE];
    int counter;
} stack;

stack* init_stack();
void push(stack *_stack, int value);
int peek(stack *_stack);
int pop(stack *_stack);
void print_stack(stack *_stack);

#endif // STACK_H