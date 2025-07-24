#include <stdio.h>#include <stdio.h>
#include <stdlib.h>

int matrix[4][6];

void init(int a[][6], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < 6; j++)
			a[i][j] = i + j;
}

void print(int a[][6], int n)
{
	int i, j;

	printf("{");
	for (i = 0; i < n; i++) {
		printf("{");
		for (j = 0; j < 6; j++)
			printf("%d%s", a[i][j], (j == 5) ? "" : ",");
		printf("}%s", (i == n - 1) ? "" : ",");
	}
	printf("};\n");
}

int main(void)
{
	printf("matrix[4][6]=");

	init(matrix, 4);
	print(matrix, 4);

	return EXIT_SUCCESS;
}