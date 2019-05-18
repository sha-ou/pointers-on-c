/*
 * =========================================================================
 *
 *       Filename:  page153.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 19时53分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int main(void)
{
    char msg1[] = "hello";
    char const *msg2  = "hello";
    printf("%p\n", msg1);
    printf("%p\n", msg2);
    return 0;
}
