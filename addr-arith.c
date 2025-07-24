#include <stdio.h>
#include <stdlib.h>

int a[3][4] = {
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12},
};

int main(void)
{
    printf("&a[0][0]=%p, &a[0][1]=%p, &a[0][1]-&a[0][0]=%lu\n",
        &a[0][0], &a[0][1], &a[0][1] - &a[0][0]);

    printf("&a[0][0]=%p, &a[1][0]=%p, &a[1][0]-&a[0][0]=%lu\n",
        &a[0][0], &a[1][0], &a[1][0] - &a[0][0]);

    printf("a+1=%p, a+2=%p, (a+2)-(a+1)=%lu\n",
        a + 1, a + 2, (a + 2) - (a + 1));

    return EXIT_SUCCESS;
}