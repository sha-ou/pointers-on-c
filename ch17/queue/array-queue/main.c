#include <stdio.h>
#include "queue.h"

int main(void)
{
    queue_elemt i = 0;
    while (is_full()!=TRUE) {
        insert(i++);
    }
    while (is_empty()!=TRUE) {
        printf(">>> %d\n", first());
        delete();
    }
    return 0;
}
