#include <stdio.h>
#include <stdlib.h>

struct student {
	char* name;
	int number;
	char major;
} s[10];

int main(void)
{
	int i;

	printf("sizeof(struct student)=%d\n", sizeof(struct student));
	printf("sizeof(s)=%d\n",sizeof(s));

	for (i = 0; i < 10; i++) {
		printf("&s[%d]=%p\n", i, &s[i]);
	}

	printf("&s[1]-&s[0]=%d\n", &s[1] - &s[0]);

	return EXIT_SUCCESS;
}