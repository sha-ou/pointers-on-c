/*
 * =========================================================================
 *
 *       Filename:  07.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 11时13分02秒
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

const char *mystrchr(const char *str, int ch);

int main(void)
{
    char str[] = "hello";
    printf(">>> %d\n", mystrchr(str, '0')-str);
    return 0;
}

const char *mystrchr(const char *str, int ch)
{
    /* char *ptr = str + strlen(str); */
    int i = strlen(str);
    for (;i>=0;i--) {
        if (str[i]==ch) return &str[i];
    }
    /* for (;ptr>=str;ptr--) { */
        /* if (*ptr==ch) return ptr; */
    /* } */
    return NULL;
}











