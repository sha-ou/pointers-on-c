/*
 * =========================================================================
 *
 *       Filename:  04.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 10时59分26秒
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

char *mystrcat(char *dst, const char *src, int size);

int main(void)
{
    char dst[8] = "hello";
    char src[] = "world";
    mystrcat(dst, src, 8);
    printf(">>> %s\n", dst);
    return 0;
}

char *mystrcat(char *dst, const char *src, int size)
{
    int clen = strlen(dst);
    int buff = size-clen;
    strncpy(dst+clen, src, buff);
    dst[size-1] = '\0';
    return dst;
}










