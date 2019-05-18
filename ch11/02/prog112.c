#include <stdio.h>
#include <malloc.h>

#define DELTA (100)

int *readints(void)
{
    int *array=NULL;
    int size;
    int count;
    int value;

    size = DELTA;
    array = malloc((size+1)*sizeof(int));
    if (array==NULL) return NULL;

    count = 0;
    while(scanf("%d", &value)==1) {
        count++;
        if (count>size) {
            size += DELTA;
            array = realloc(array, (size+1)*sizeof(int));
            if (array==NULL) return NULL;
        }
        array[count]=value;
    }

    if (count<size) {
        array = realloc(array, (count+1)*sizeof(int));
        if (array==NULL) return NULL;
    }

    array[0] = count;

    return array;
}
