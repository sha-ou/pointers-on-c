/*
 * =========================================================================
 *
 *       Filename:  04.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 15时34分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <stdarg.h>

int max_list(int no, ...);

int main(int argc, char *argv[])
{
    printf("%d\n", max_list(0, 1, 2, 3, 4, 5, -1));
    return 0;
}

int max_list(int no, ...)
{
    va_list var_arg;
    int max = 0;
    int citem = 0;

    va_start(var_arg, no);

    while(1) {
        citem = va_arg(var_arg, int);
        if ( citem==-1 ) break;
        if ( max<citem ) max = citem;
    }

    va_end(var_arg);

    return max;
}
