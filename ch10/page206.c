/*
 * =========================================================================
 *
 *       Filename:  page206.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2019年05月08日 10时24分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  kugua (), 
 *   Organization:  
 *
 * =========================================================================
 */
#include <stdio.h>
#include <stddef.h>

struct A {
    int a;
    char b;
    char c;
};

struct B {
    char a;
    int b;
    char c;
};

void printA(void);
void printB(void);

int main(void)
{
    printA();
    printB();
    return 0;
}


void printA(void)
{
    printf(">>> A\n");
    printf(">>> offsetof a = %d\t sizeof a = %d\n", offsetof(struct A, a), sizeof(int));
    printf(">>> offsetof b = %d\t sizeof b = %d\n", offsetof(struct A, b), sizeof(char));
    printf(">>> offsetof c = %d\t sizeof c = %d\n", offsetof(struct A, c), sizeof(char));
    printf(">>> sizeof struct A = %d\n", sizeof(struct A));
}

void printB(void)
{
    printf(">>> B\n");
    printf(">>> offsetof a = %d\t sizeof a = %d\n", offsetof(struct B, a), sizeof(int));
    printf(">>> offsetof b = %d\t sizeof b = %d\n", offsetof(struct B, b), sizeof(char));
    printf(">>> offsetof c = %d\t sizeof c = %d\n", offsetof(struct B, c), sizeof(char));
    printf(">>> sizeof struct B = %d\n", sizeof(struct B));
}















