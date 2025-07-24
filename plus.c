#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc > 1)
		printf("%d + %d = %d", argv[1], argv[2], argv[1] + argv[2]);
	else
		printf("arguments error!");

		return EXIT_SUCCESS;
}