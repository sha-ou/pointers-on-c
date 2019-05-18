/*
 * =========================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 22时40分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

void print(const char *str);
int add(int a, int b);

int main(void)
{
    return 0;
}


int add(int a, int b)
{
    return a+b;
}

void print(const char *str)
{
    printf(">>> %s", str);
}
