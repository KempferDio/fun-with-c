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

stack* stack_init();
void stack_push(stack *_stack, int value);
int stack_peek(stack *_stack);
int stack_pop(stack *_stack);
void stack_print(stack *_stack);

#endif // STACK_H