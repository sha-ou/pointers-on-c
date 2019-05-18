/*
 * =========================================================================
 *
 *       Filename:  01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月07日 10时23分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N (128)
#define CNTRL  (0)
#define SPACE  (1)
#define DIGIT  (2)
#define LOWER  (3)
#define UPPER  (4)
#define PUNCT  (5)
#define TYPES  (6)

int main(void)
{
    char buff[N] = {0};
    int counts[TYPES] = {0};
    int len = 0;
    int i;

    while ( NULL!=fgets(buff, N, stdin) ) {
        len += strlen(buff);
        for (i=0;buff[i];i++) {
            if (iscntrl(buff[i])) counts[CNTRL]++;
            if (isspace(buff[i])) counts[SPACE]++;
            if (isdigit(buff[i])) counts[DIGIT]++;
            if (islower(buff[i])) counts[LOWER]++;
            if (isupper(buff[i])) counts[UPPER]++;
            if (ispunct(buff[i])) counts[PUNCT]++;
        }
        if (NULL!=strchr(buff, '\n')) {
            printf(">>> All char: %d\n", len);
            printf(">>> cntrl: %f%%\n", (float)counts[CNTRL]/(float)len);
            printf(">>> space: %f%%\n", (float)counts[SPACE]/(float)len);
            printf(">>> digit: %f%%\n", (float)counts[DIGIT]/(float)len);
            printf(">>> lower: %f%%\n", (float)counts[LOWER]/(float)len);
            printf(">>> upper: %f%%\n", (float)counts[UPPER]/(float)len);
            printf(">>> punct: %f%%\n", (float)counts[PUNCT]/(float)len);
        }
    }

    return 0;
}



