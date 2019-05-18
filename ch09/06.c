/*
 * =========================================================================
 *
 *       Filename:  06.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 11时04分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <string.h>


char *mystrcpyend(char *dst, const char *src);

int main(void)
{
    char str1[5] = {0};
    char str[] = "he";
    char *len = mystrcpyend(str1, str);
    printf(">>> %d\n", len-str1);
    return 0;
}

char *mystrcpyend(char *dst, const char *src)
{
    char *pend = dst;
    for (;*src;) *pend++=*src++;
    *pend=*src;
    return pend;
}
