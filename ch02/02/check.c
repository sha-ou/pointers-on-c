/*
 * =========================================================================
 *
 *       Filename:  check.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月22日 15时43分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE (1000)

int main( int argc, char *argv[] )
{
    FILE *fp = NULL;
    char line[MAXLINE];
    int  rdnum;
    int  left_n=0;
    int  right_n=0;
    int  i;

    if (1==argc) {
        fp = stdin;
        fgets(line, MAXLINE, fp);
        /* rdnum = fread(line, sizeof(char), MAXLINE, fp); */
        left_n = 0;
        right_n = 0;
        for ( i=0; i<rdnum; i++ ) {
            if ( '{' == line[i] ) left_n++;
            else if ( '}' == line[i] ) right_n++;
        }
        if (left_n == right_n) printf(">>> matched\n");
        else if ( left_n > right_n ) printf(">>> left > right\n");
        else printf(">>> left < right\n");
    }
    return 0;
}
