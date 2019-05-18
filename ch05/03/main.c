/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月30日 21时03分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

unsigned int reverse_bits(unsigned int value);

int main( int argc, char *argv[] )
{
    unsigned int value = 0;

    while (EOF!=scanf("%d", &value)) {
        printf("%u\n", reverse_bits(value));
    }

    return 0;
}

unsigned int reverse_bits(unsigned int value)
{
    int i = 0;
    unsigned int result = 0;

    for ( i=0; i<=sizeof(value)*8-1; i++ ) {
        result <<= 1;
        result |= ((value >> i) & 0x01);
        printf(">>> %u\n", result);
    }

    return result;
}














