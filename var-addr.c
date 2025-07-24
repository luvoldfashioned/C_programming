#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	float f;
	int m[4][6];

	printf("address of i=%p\n", &i);
	printf("address of f=%p\n", &f);
	printf("address of m=%p\n", &m);
	printf("address of m[0][2]=%p\n", &m[0][2]);

	return EXIT_SUCCESS;
}