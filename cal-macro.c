#include <stdio.h>
#include <stdlib.h>

#define CAL(from, to, init, op, str)						\
{															\
	int i = 0;												\
	float result = init;									\
	printf("%d"str,init);									\
															\
	for (i = from; i <= to; i++) {							\
		(i==to) ? printf("%d",i) : printf("%d"str ,i);		\
		result = result op i;								\
	}														\
	printf("=%f\n",result);									\
}

int main(void)
{
	CAL(1, 10, 0, +, "+");
	CAL(10, 20, 10, +, "+");
	CAL(1, 10, 0, -, "-");
	CAL(10, 20, 100, -, "-");
	CAL(1, 10, 1, *, "*");
	CAL(1, 10, 100, / , "/");

	return EXIT_SUCCESS;
}