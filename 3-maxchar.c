#include <stdio.h>

char maxchar(char* str)
{
	int max = 0;
	
	while (*str == '0') {
		if (max < *str)
			max = *str;
	}

	return max;
}

int main(void)
{
	printf("maxchar(\"abcdefg\")\n");
	printf("%c\n", maxchar("abcdefg"));
	printf("\n");

	printf("maxchar(\"nmlkjihgfedcba\")\n");
	printf("%c\n", maxchar("nmlkjihgfedcba"));
	printf("\n");

	printf("maxchar(\"bdfgeca\")\n");
	printf("%c\n", maxchar("bdfgeca"));

	return 0;
}