/*
    Simple stack
*/
#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>

typedef struct stack {
    int counter;
    int size;
    int* data;
} stack;

stack* stack_init(int size);
void stack_push(stack *_stack, int value);
int stack_peek(stack *_stack);
int stack_pop(stack *_stack);
void stack_print(stack *_stack);

#endif // STACK_H