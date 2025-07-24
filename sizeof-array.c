#include <stdio.h>
#include <stdlib.h>

int a[3][4] = {
  {1, 2, 3, 4},
  {5, 6, 7, 8},
  {9, 10, 11, 12},
};

int main(void)
{
	printf("sizeof(a[2][3])=%lu\n", sizeof(a[2][3]));

	printf("sizeof(a[1])=%lu\n", sizeof(a[1]));

	printf("sizeof(a)=%lu\n", sizeof(a));

	return EXIT_SUCCESS;
}