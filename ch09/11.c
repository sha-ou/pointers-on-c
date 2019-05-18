/*
 * =========================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 14时14分40秒
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
#include <stdlib.h>

int main(void)
{
    const char whitespace[] = " \n\r\f\t\v";
    char buff[101];
    int count;
    char *word = NULL;

    count = 0;
    while( NULL!=fgets(buff, 100, stdin) ) {
        for (
                word = strtok(buff, whitespace);
                word != NULL;
                word = strtok(NULL, whitespace)
            ) {
            if (strcmp(word, "the")==0) count++;
        }
        if (strchr(buff, '\n')!=NULL) {
            printf(">>> %d\n", count);
            count = 0;
        }
    }

    return 0;
}
