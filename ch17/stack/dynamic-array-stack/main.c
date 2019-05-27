#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "stack.h"

int main(void)
{
    stackelemt i = 0;
    
    create_stack(5);

    while (is_full()!=TRUE) {
        push(i);
        i++;
    }

    while (is_empty()!=TRUE) {
        printf(">>> %d\n", top());
        pop();
    }

    destroy_stack();

    return 0;
}
