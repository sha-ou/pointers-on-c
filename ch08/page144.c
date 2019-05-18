/*
 * =========================================================================
 *
 *       Filename:  page144.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 19时18分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int main( int argc, char *argv[] )
{
    int i;
    char array[10];

    for ( i=0;i<10;i++ ) array[i]='a'+i;

    printf("%c", 2[array]);
    return 0;
}










