#include "list_stack.h"

list_stack* init_stack() {
    list_stack *newStack = malloc(sizeof(list_stack));
    newStack->data = 0;
    newStack->next = NULL;
    return newStack;
}

int pop(list_stack *_stack) {
    list_stack *current;
    current = _stack;
    int data = 0;

    while(current->next->next != NULL) {
        current = current->next;
    }
    data = current->data;
    free(current->next);
    current->next = NULL;
    return data;
}

//TODO: push without garbage
void push(list_stack *_stack, int value) {
    list_stack *current;
    current = _stack;

    while(current->next != NULL) {
        current = current->next;
    }

    current->data = value;
    current->next = malloc(sizeof(list_stack));
    current->next->next = NULL; 
}

int peek(list_stack *_stack) {
    list_stack *current;
    current = _stack;
    while(current->next->next != NULL) {
        current = current->next;
    }
    return current->data;
}