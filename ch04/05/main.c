/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/04/19 23:20:41
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

#define N (128)

int main(int argc, char *argv[])
{
    char str[N];
    char spy[N];

    while (fgets(str, N, stdin)!=NULL) {
        if (0==strcmp(spy, str)) continue;
        printf("%s\n", str);
        if (strcpy(spy, str)==NULL) break;
    }

    return 0;
}








