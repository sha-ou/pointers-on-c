/*
 * =========================================================================
 *
 *       Filename:  09.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 14时01分43秒
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

int count_chars(const char *str, const char *chars);

int main(void)
{
    char str[] = "hello";
    char chars[] = "he";
    printf(">>> %d\n", count_chars(str, chars));
    return 0;
}

int count_chars(const char *str, const char *chars)
{
    int count = 0;
    const char *ptr = chars;
    for (;*str;str++) {
        ptr = chars;
        for (;*ptr;ptr++) {
            if (*ptr==*str) count++;
        }
    }
    return count;
}





