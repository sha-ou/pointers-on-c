/*
 * =========================================================================
 *
 *       Filename:  page176.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/05/19 22:41:00
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
    const char *str1 = "12345";
    const char *str2 = "1234";
    int str1_len = (int)strlen(str1);
    int str2_len = (int)strlen(str2);
    if (str1_len<str2_len) printf(">>> 01 true\n");
    else printf(">>> 01 false\n");
    if (str2_len-str1_len>0) printf(">>> 02 true\n");
    else printf(">>> 02 false\n");
    return 0;
}
