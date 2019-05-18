/*
 * =========================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/05/19 22:33:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int main(void)
{
    char *ptr = "hello";
    const char *ptr2 = "hello";
    printf(">>> %p\n", ptr);
    printf(">>> %p\n", ptr2);
    return 0;
}







