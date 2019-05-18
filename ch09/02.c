/*
 * =========================================================================
 *
 *       Filename:  02.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 10时48分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <stddef.h>

#define N (4)

ssize_t mystrlen(const char *buff, int size);
int main(void)
{
    char buff[N] = {'a','b','c','d'};
    printf(">>> %d\n", mystrlen(buff, N));
    printf(">>> %p\n", buff);
    return 0;
}

ssize_t mystrlen(const char *buff, int size)
{
    ssize_t len = 0;
    for (len=0; len<size; len++) {
        if (buff[len]=='\0') break;
    }
    return len;
}











