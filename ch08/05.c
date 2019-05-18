/*
 * =========================================================================
 *
 *       Filename:  05.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 21时04分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z);
void print_matrix(int *m1, int x, int y);

int main(void)
{
    int m1[][2] = {
        {2, -6},
        {3,  5},
        {1, -1},
    };
    int m2[][4] = {
        { 4, -2, -4, -5},
        {-7, -3,  6,  7},
    };
    int r[3][4];

    matrix_multiply(&m1[0][0], &m2[0][0], &r[0][0], 3, 2, 4);
    print_matrix(&r[0][0], 3, 4);

    return 0;
}

void print_matrix(int *m1, int x, int y)
{
    int i, j;

    for (i=0;i<x;i++) {
        for (j=0;j<y;j++) {
            printf("%-3d\t", *(m1+i*x+j));
        }
        printf("\n");
    }
}

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z)
{
    int i,j,k;

    for (i=0;i<x;i++) {
        for (j=0;j<z;j++) {
            *(r+i*x+j) = 0;
            for (k=0;k<y;k++) {
                *(r+i*x+j) += *(m1+i*x+k) * *(m2+k*y+j);
            }
        }
    }
}

