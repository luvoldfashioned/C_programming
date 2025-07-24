#include <stdio.h>
#include <stdlib.h>

#define SUM(from, to)						\
{											\
	int i, sum=0;							\
											\
	for (i = from; i <= to; i++) {			\
		sum = sum + i;						\
	}										\
	printf("%d\n", sum);					\
}

int main(void)
{
	SUM(1, 10);
	SUM(1, 100);
	SUM(-100, 100);
	SUM(-100, 0);

	return EXIT_SUCCESS;
}