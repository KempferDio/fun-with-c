/*
    Something like stack with list properties
    Without max size. It's allocating memory everytime when an object
    is pushed onto stack 
*/

#ifndef LIST_STACK_H
#define LIST_STACK_H
#include <stdio.h>
#include <stdlib.h>

typedef struct list_stack {
    int data;
    struct list_stack *next;
} list_stack;

list_stack* init_stack();
int pop(list_stack *_stack);              //Returns top value and delete it from the stack
void push(list_stack *_stack, int value); //Pushes value in the top of stack
int peek(list_stack *_stack);             //Returs top value from the stack

#endif // LIST_STACK_H