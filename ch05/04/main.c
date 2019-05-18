/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年04月30日 21时55分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

#define N (10)

void set_bit(char bit_array[], unsigned int bit_num);
void clear_bit(char bit_array[], unsigned int bit_num);
void assign_bit(char bit_array[], unsigned int bit_num);
int  test_bit(char bit_array[], unsigned int bit_num);

int main(int argc, char *argv[])
{
    char bits[N] = {0};
    int i = 0;

    set_bit(bits, 3);
    set_bit(bits, 5);
    clear_bit(bits, 2);
    assign_bit(bits, 1);
    
    for (i=0;i<N;i++)
        printf("%d ", bits[i]);

    return 0;
}

void set_bit(char bit_array[], unsigned int bit_num)
{
    bit_array[bit_num] = 1;
}

void clear_bit(char bit_array[], unsigned int bit_num)
{
    bit_array[bit_num] = 0;
}

void assign_bit(char bit_array[], unsigned int bit_num)
{
    if (bit_array[bit_num]==0) bit_array[bit_num] = 1;
    else bit_array[bit_num] = 0;
}

int  test_bit(char bit_array[], unsigned int bit_num)
{
    return bit_array[bit_num];
}

