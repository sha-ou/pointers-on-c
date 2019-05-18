/*
 * =========================================================================
 *
 *       Filename:  p03.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 14时18分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int rtn(void);

int main(int argc, char *argv[])
{
    float a = rtn();
    printf(">>> %d\n", a);
    return 0;
}

int rtn(void)
{
    return 3.14;
}

