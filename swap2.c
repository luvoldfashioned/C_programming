#include <stdio.h>
#include <stdlib.h>

void swap2(int *px, int *py)
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	int a, b;

	a = 10;
	b = 20;
	printf("swap2: a=%d, b=%d => ", a, b);
	swap2(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return EXIT_SUCCESS;
}