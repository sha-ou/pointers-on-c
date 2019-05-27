#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "stack.h"

int main(void)
{
    stack_elemt i = 0;

    while (is_full()!=TRUE) {
        push(i++);
    }

    while (is_empty()!=TRUE) {
        printf(">>> %d\n", top());
        pop();
    }

    destroy_stack();

    return 0;
}
