#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("./page206.c", "r");
    const char *fpp = "hello world";
    if (NULL==fp) {
        printf(">>> Error\n");
        return 1;
    } else {
        printf(">>> True\n");
        /* printf(">>> %s\n", fpp); */
    }
    return 0;
}
