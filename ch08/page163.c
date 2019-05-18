/*
 * =========================================================================
 *
 *       Filename:  page163.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 20时20分14秒
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

int main(void)
{
    int i;
    const char *kwargs[] = {
        "hello",
        "world",
        "i",
        "am",
        "ironman"
    };
    printf("%d\n", sizeof(kwargs));
    
    for (i=0; i<5;i++) 
        printf("%d\n", sizeof(kwargs[i]));

    printf(">>>>>>>>>>>>>>>>>>>>\n");
    for (i=0; i<5;i++) 
        printf("%d\n", strlen(kwargs[i]));

    return 0;
}
