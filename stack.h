/*
    Something like stack with list properties
    Without max size. It's allocating memory everytime when an object
    is pushed onto stack 
*/

#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int data;
    struct stack *next;
} stack;

stack* init_stack();
int pop(stack *_stack); //Returns top value and delete it from the stack
void push(stack *_stack, int value); //Pushes value in the top of stack
int peek(stack *_stack); //Returs top value from the stack

#endif // STACK_H