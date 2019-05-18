/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/04/19 21:18:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <math.h>

int isprime(int a);
int main(int argc, char *argv[])
{
    int i = 0;

    for (i=1; i<=100; i++) {
        if (0==isprime(i)) printf("%d\t", i);
    }

    putchar('\n');

    return 0;
}

int isprime(int a)
{
    int i = 0;
    int sq = 0;
    if (a==1 || a==2) return 0;
    sq = (int)sqrt(a) + 1;
    for (i=2; i<sq; i++) {
        if (0==a%i) return 1;
    }
    return 0;
}

