#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    time_t tvalue;

    tvalue = time(NULL);
    printf("%s", ctime(&tvalue));

    return 0;
}
