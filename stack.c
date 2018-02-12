#include "stack.h"


stack* init_stack() {
    stack *temp = malloc(sizeof(stack));
    temp->counter = 0;
}

void push(stack *_stack, int value) {
    if(_stack->counter >= MAX_STACK_SIZE) {
        printf("Stack is full\n");
        return;
    }
    _stack->data[_stack->counter] = value;
    _stack->counter++;
    printf("Success pushing\n");
}

int peek(stack *_stack) {
    return _stack->data[_stack->counter];
}

int pop(stack *_stack) {
    int temp;
    temp = _stack->data[_stack->counter];
    _stack->counter = _stack->counter - 1;
    return temp;
}

void print_stack(stack *_stack) {
    for(int i = 0; i <= _stack->counter - 1; i++) {
        printf("Element number %d is %d\n", i, _stack->data[i]);
    }
}