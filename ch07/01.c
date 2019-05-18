/*
 * =========================================================================
 *
 *       Filename:  01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 14时21分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int hermite(int n, int x);

int main(int argc, char *argv[])
{
    int n, x;
    while ( EOF!=scanf("%d %d", &n, &x) ) {
        printf("%d\n", hermite(n, x));
    }
    return 0;
}

int hermite(int n, int x)
{
    if ( n<=0 ) return 1;
    if ( n==1 ) return 2*x;
    if ( n>=2 ) return 2*x*hermite(n-1, x) - 2*(n-1)*hermite(n-2, x);
}
