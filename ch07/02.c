/*
 * =========================================================================
 *
 *       Filename:  02.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 14时26分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int gcd(int m, int n);

int main( int argc, char *argv[] )
{
    int m, n;
    
    while ( EOF!=scanf("%d %d", &m, &n) ) {
        printf("%d\n", gcd(m, n));
    }

    return 0;
}

int gcd(int m, int n)
{
    int r;
    int temp;

    if ( m<=0 || n<=0 ) return 0;

    if ( m<n ) {
        temp = m;
        m = n;
        n = temp;
    }

    r = m%n;
    if ( 0==r ) return n;
    else return gcd(n, r);
}



