/*
 * =========================================================================
 *
 *       Filename:  03.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月06日 20时38分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>

int identity_matrix(int matrix[][5]);

int main(void)
{
    int matrix[5][5] {
        {1,},
        {0,1,},
        {0,0,1,},
        {0,0,0,1,},
        {0,0,0,0,1,},
    };
    printf("%d\n", identity_matrix(matrix));
    return 0;
}

int identity_matrix(int matrix[][5])
{
    int i,j;

    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            if (!((i==j)&&(matrix[i][j]==1) || 
                 (i!=j)&&(matrix[i][j]==0)) )
                return 0;
        }
    }
    return 1;
}
