/*
 * =========================================================================
 *
 *       Filename:  page180.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/05/19 23:04:30
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str1 = "hello";
    char str2[] = "hello";
    printf(">>> str1=%p\n", str1);
    printf(">>> str2=%p\n", str2);
    printf(">>> e in str1=%p\n", strchr(str1, 'e'));
    printf(">>> e in str2=%p\n", strchr(str2, 'e'));
    return 0;
}




