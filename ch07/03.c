/*
 * =========================================================================
 *
 *       Filename:  03.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 15时12分39秒
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

#define N (10)

int ascii2integer(const char *string);

int main(int argc, char *argv[])
{
    char str[N];

    while ( EOF!=scanf("%s", str) ) {
        printf("%d\n", ascii2integer(str));
    }

    return 0;
}

int ascii2integer(const char *string)
{
    int num = 0;
    int i = 0;

    for (i=0; string[i]; i++) {
        if (string[i]>='0' && string[i]<='9') num = num*10 + string[i]-'0';
        else return 0;
    }

    return num;
}
