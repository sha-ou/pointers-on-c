#include <stdio.h>
#include "stack.h"

int main(void)
{
    stackelemt i = 0;

    while (is_full()!=TRUE) {
        push(i++);
    }

    while (is_empty()!=TRUE) {
        printf(">>> %d\n", top());
        pop();
    }
    return 0;
}
