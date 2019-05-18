/*
 * =========================================================================
 *
 *       Filename:  08.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 12时39分37秒
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

const char *mystrnchr(char const *str, int ch, int which);

int main(void)
{
    /* char str[] = "hello"; */
    char str[] = "ello";
    printf(">>> %d\n", mystrnchr(str, 'l', 1)-str+1);
    printf(">>> %d\n", mystrnchr(str, 'l', 2)-str+1);
    return 0;
}

const char *mystrnchr(char const *str, int ch, int which)
{
    const char *ptr = NULL;

    ptr = strchr(str, ch);
    while (--which && NULL!=ptr) {
        ptr = strchr(ptr+1, ch);
    }
    return ptr;
}



