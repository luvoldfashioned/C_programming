#include <stdio.h>
#include <stdlib.h>

struct student {
	char* name;
	int number;
	char major;
};

typedef struct student STUDENT;

void init_student(STUDENT* s, char* name, int number, char major)
{
	s->name = name;
	s->number = number;
	s->major = major;
}

void print_student(STUDENT* s)
{
	printf("name=%s, ", s->name);
	printf("number=%d, ", s->number);
	printf("major=%d\n", s->major);
}

int main(void)
{
	STUDENT s1, s2, s3;

	init_student(&s1, "Chulsoo Kim", 1000, 77);
	init_student(&s2, "Younghee Lee", 2000, 77);
	init_student(&s3, "Christina Park", 3000, 88);

	print_student(&s1);
	print_student(&s2);
	print_student(&s3);

	return EXIT_SUCCESS;
}