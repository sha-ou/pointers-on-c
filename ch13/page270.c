#include <stdio.h>

void mystery(int n);
int main(void)
{
    int i;
    for (i=0;i<=100;i++) {
        mystery(i);
    }
    return 0;
}

void mystery(int n)
{
    n += 5;
    n /= 10;
    printf("%s\n", "**********"+10-n);
}
