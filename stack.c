#include "stack.h"

stack* init_stack() {
    stack *newStack = malloc(sizeof(stack));
    newStack->data = 0;
    newStack->next = NULL;
    return newStack;
}

int pop(stack *_stack) {
    stack *current;
    current = _stack;
    int data = 0;

    while(current->next->next != NULL) {
        current = current->next;
        printf("Popping...");
    }
    data = current->data;
    printf("Pop data: %d\n", data);
    free(current->next);
    current->next = NULL;
    return data;
}

void push(stack *_stack, int value) {
    stack *current;
    current = _stack;

    while(current->next != NULL) {
        current = current->next;
        printf("Pushing...");
    }

    current->data = value;
    current->next = malloc(sizeof(stack));
    current->next->next = NULL;
    printf("Pushing complete\n");   
}

int peek(stack *_stack) {
    stack *current;
    current = _stack;
    while(current->next->next != NULL) {
        current = current->next;
        printf("Peeking... ");
    }
    printf("Peek complete: %d\n", current->data);
    return current->data;
}