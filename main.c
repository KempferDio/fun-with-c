#include "stack.h"

int main() {
    stack *_stack = init_stack();

    push(_stack, 1);

    push(_stack, 2);

    push(_stack, 3);

    peek(_stack);
    pop(_stack);

    peek(_stack);
    pop(_stack);

    peek(_stack);
    pop(_stack);
    
    return 0;
}