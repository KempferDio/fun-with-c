#include "stack.h"


stack* stack_init() {
    stack *temp = malloc(sizeof(stack));
    temp->counter = 0;
}

void stack_push(stack *_stack, int value) {
    if(_stack == NULL) {
        printf("ERROR::STACK_IS_NULL");
        return;
    }

    if(_stack->counter >= MAX_STACK_SIZE) {
        printf("Stack is full\n");
        return;
    }
    _stack->data[_stack->counter] = value;
    _stack->counter++;
    printf("Success pushing\n");
}

int stack_peek(stack *_stack) {
    if(_stack == NULL) {
        printf("ERROR::STACK_IS_NULL");
        return -1;
    }

    return _stack->data[_stack->counter];
}

int stack_pop(stack *_stack) {
    if(_stack == NULL) {
        printf("ERROR::STACK_IS_NULL");
        return -1;
    }

    int temp;
    temp = _stack->data[_stack->counter];
    _stack->counter = _stack->counter - 1;
    return temp;
}

void stack_print(stack *_stack) {
    if(_stack == NULL) {
        printf("ERROR::STACK_IS_NULL");
        return;
    }

    for(int i = _stack->counter - 1; i >= 0; i--) {
        printf("Element number %d is %d\n", i, _stack->data[i]);
    }
}