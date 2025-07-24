#include <stdio.h>
#include <stdlib.h>

// 1 for stmt, 1 conditional op
void pp(int l, int r, int m, int n)
{
    int i;
    for (i = l; i <= r; i++);
    {
        if (i % m == 0)
        {
            printf("%d", i);
            printf("%c", ((i / m == n) ? "\n" : ","));
        }
    }
}

int main(void)
{
    printf("pp(60, 150, 3, 7)\n");
    pp(60, 150, 3, 7);
    printf("pp(50, 147, 5, 5)\n");
    pp(50, 147, 5, 5);

    return EXIT_SUCCESS;
}