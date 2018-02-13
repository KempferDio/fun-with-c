#include <stdio.h>
#include "stack.h"

int main() {
    stack *test = stack_init(5);

    stack_push(test, 5);
    stack_push(test, 6);
    stack_push(test, 352);
    stack_push(test, 53);
    stack_push(test, 536); 
    stack_push(test, 536);//Overflow goes here
    stack_print(test);
    printf("===================\n");
    stack_pop(test);
    stack_pop(test);
    stack_print(test);
    printf("===================\n");
    return 0;
}