/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月30日 20时51分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

#define DELTA (13)

char secret(char ch, int delta);

int main(int argc, char *argv[])
{
    char ch;

    while (EOF!=(ch=getc(stdin))) 
        putc(secret(ch, DELTA), stdout);

    return 0;
}

char secret(char ch, int delta)
{
    if ( ch>='A' && ch<='Z' )
        return (ch-'A'+delta)%26 + 'A';
    else if ( ch>='a' && ch<='z' )
        return (ch-'a'+delta)%26 + 'a';
    else
        return ch;
}


