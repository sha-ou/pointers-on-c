/*
 * =========================================================================
 *
 *       Filename:  03.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 10时52分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

char *mystrcpy(char *dst, const char *src, int size);

int main(void)
{
    char str1[3];
    char str2[] = "hello";
    mystrcpy(str1, str2, 3);
    printf(">>> %s\n", str1);
    return 0;
}

char *mystrcpy(char *dst, const char *src, int size)
{
    int i = 0;
    char *rtn = dst;

    for (i=0; src[i]&&(i<size); i++) *dst++=src[i];
    if (i>=size) rtn[size-1] = '\0';
    return rtn;
}
