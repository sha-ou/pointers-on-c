#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *p = NULL;
    int *pp = NULL;
    int n = 0;
    int len = 0;

    scanf("%d", &n);
    p = (int *)malloc(n*sizeof(int));
    pp = p;
    p[0] = n;

    while (EOF!=(scanf("%d", &n))) {
        len = ++pp-p+1;
        if (len > p[0]){
	        printf(">>> N error\n");
	        printf(">>> Input N: %d\n", p[0]);
	        printf(">>> Real  N: %ld\n", (pp-p)+1);
            free(p);
	        exit(1);
        }
        *pp = n;
    }
    
    printf(">>> %p\n", p);
    printf(">>> %p\n", pp);
    printf(">>> %ld\n", (pp-p)+1);


    free(p);

    return 0;
}
