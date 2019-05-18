/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/04/19 16:50:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int main (void)
{
    char *str1 = "hello world";
    char *str2 = "hello world";
    printf(">>> str1 : %p\n", str1);
    printf(">>> str2 : %p\n", str2);
    printf(">>> \n");
    printf(">>> str1 : %s\n", str1);
    printf(">>> str2 : %s\n", str2);
    printf(">>> \n");
    str1[0] = 'H';
    printf(">>> str1 : %s\n", str1);
    printf(">>> str2 : %s\n", str2);
    return 0;
}
