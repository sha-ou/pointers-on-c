/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月30日 20时32分20秒
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

#define N (256)

void deblank(char string[]);

int main(int argc, char *argv[])
{
    char string[N];

    while (NULL!=fgets(string, N, stdin)) {
        printf(">>> %s", string);
        deblank(string);
        printf(">>> %s", string);
    }
    return 0;
}

void deblank(char string[])
{
    int i = 0;
    int j = 0;

    for (i=0; string[i]!='\0'; ) {
        if (string[i]==' ' && string[i+1]==' ') {
            for (j=i+1; string[j]!='\0'; j++) {
                string[j] = string[j+1];
            }
            continue;
        }
        i++;
    }
}









