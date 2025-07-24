#include <stdio.h>

void strcopy(char* dest, char* src, int start, int size)
{
	*dest = *(src + start);
}

int main(void)
{
	char str1[26] = "abcdefghijklmnopqrstuvwxyz";
	char str2[26];

	printf("strcopy(str2,str1,5, 5)\n");
	strcopy(str2, str1, 5, 5);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	printf("\n");

	printf("strcopy(str2,str1,10,10)\n");
	strcopy(str2, str1, 10, 10);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	printf("\n");

	printf("strcopy(str2,str1,15,7)\n");
	strcopy(str2, str1, 15, 7);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);

	return 0;
}