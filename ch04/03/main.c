/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/04/19 21:27:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>


int istran(float a, float b, float c);
int whichtran(float a, float b, float c);

int main(int argc, char *argv[])
{
    float a, b, c;
    const char *ps = ">>>";
    
    printf("%s Input: ", ps);
    while (EOF!=scanf("%f %f %f", &a, &b, &c)) {
        if (0==istran(a, b, c)) {
            switch (whichtran(a, b, c)) {
                case 3:
                    printf("%s three eq\n", ps);
                    break;
                case 2:
                    printf("%s two eq\n", ps);
                    break;
                case 1:
                    printf("%s no eq\n", ps);
                    break;
            }
        } else {
            printf("%s Not a tran\n", ps);
        }
        printf("%s Input: ", ps);
    }

    return 0;
}

int istran(float a, float b, float c)
{
    if ( (a+b>c)&&(b+c>a)&&(c+a>b) ) return 0;
    else return 1;
}

int whichtran(float a, float b, float c)
{
    int result = 0b000;

    if (a==b) result |= 0b100;
    if (b==c) result |= 0b010;
    if (c==a) result |= 0b001;

    if (0b000==result) return 1;
    else if (0b111==result) return 3;
    else return 2;
}



