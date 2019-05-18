/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/04/19 23:27:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

signed char checksum(const char *str);
int main(int argc, char *argv[])
{
    int i = 0;
    if (1==argc) {
        fprintf(stderr, "Usage: ./checksum str [str...]\n");
        exit(1);
    }
    for (i=1; i<argc; i++) {
        printf(">> %s\t%d\n", argv[i], checksum(argv[i]));
    }
    return 0;
}

signed char checksum(const char *str)
{
    signed char sum = -1;
    int len = strlen(str);
    int i = 0;

    for (i=0; i<len; i++) {
        sum += str[i];
        printf(">>> %c\t%d\t%d\n", str[i], str[i], sum);
    }
    return sum;
}










