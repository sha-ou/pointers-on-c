/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/04/19 21:42:53
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

#define N (10)

void copy_n(char dst[], const char src[], int n);

int main(int argc, char *argv[])
{
    char ptr[100];
    char dst[N];

    while (EOF!=scanf("%s", ptr)) {
        copy_n(dst, ptr, N);
        printf("%s\n", ptr);
        printf("%s\n", dst);
    }
}

void copy_n(char dst[], const char src[], int n)
{
    int i;
    int l = strlen(src);

    for (i=0; i<n && src[i]!='\0'; i++)
        dst[i] = src[i];
    if (i>=n) dst[n-1] = '\0';
    else 
        for (;i<n;i++)
            dst[i] = src[i];
}
