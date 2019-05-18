/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月30日 20时44分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

char tolower(char ch);

int main(int argc, char *argv[])
{
    char ch;

    while ( EOF!=(ch=getc(stdin)) ) {
        putc(tolower(ch), stdout);
    }

    return 0;
}

char tolower(char ch)
{
    if ( ch<='Z' && ch>='A' ) return ch - 'A' + 'a';
    else return ch;
}



