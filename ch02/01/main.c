/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月22日 15时40分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include "negate.h"
#include "increment.h"

void pri_increment( int num );
void pri_negate( int num );
int main( int argc, char *argv[] )
{
    pri_increment(10);
    pri_increment(-10);
    pri_increment(0);
    pri_negate(10);
    pri_negate(-10);
    pri_negate(0);
    return 0;
}

void pri_increment( int num )
{
    printf(">>> increment(%d) = %d\n", num, increment(num));
}

void pri_negate( int num )
{
    printf(">>> negate(%d) = %d\n", num, negate(num));
}
