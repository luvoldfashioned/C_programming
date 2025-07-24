#include <stdio.h>

extern int array[];
extern int current;

void print_array(void)
{
    int i;

    printf("(");
    for (i = 0; i <= current; i++)
        printf("%d%s", array[i], i == current ? "" : ",");
    printf(")\n");
}