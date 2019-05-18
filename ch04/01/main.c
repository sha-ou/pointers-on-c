/*
 * =========================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/04/19 21:02:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <math.h>

int mysqrt(float a, float *sq, float eps, int *times);
int main(int argc, char *argv[])
{
    int   times = 0;
    float a = 0.0;
    float sq = 0.0;
    float eps = 1e-5;
    const char *ps = ">>> ";

    printf("%s Input: ", ps);
    while (EOF!=scanf("%f", &a)) {
        if (0==mysqrt(a, &sq, eps, &times)) {
            printf("%s sqrt = %f %d times convergence\n", ps, sq, times);
            printf("%s Input: ", ps);
        } else {
            printf("%s sqrt = %f %d times not convergence\n", ps, sq, times);
            printf("%s Input: ", ps);
        }
    }
    return 0;
}

int mysqrt(float a, float *sq, float eps, int *times)
{
    int i = 0;
    float lsq = 1.0;
    float lastsq = 0.0;

    while (abs(lsq-lastsq)>eps && i++<100) {
        lastsq = lsq;
        lsq = (lastsq + a/lastsq)/2.0;
    }
    
    *sq = lsq;
    *times = i;

    if (abs(lastsq-lsq)<eps) return 0;
    if (i>=100) return 1;
}
