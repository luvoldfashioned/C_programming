#include <stdio.h>

#define setprint(from, to, len)\
{		\
	int i;				\
	int count=0;		\
	printf("{");		\
	for (i = from; i <= to; i++)\
	{	\
		count = count + 1;	 \
		(count%len==0) ? printf("%d,\n",i) : (i == to) ? printf("%d", i) : printf("%d,", i);\
	}	\
	printf("}\n"); \
}\


int main(void)
{
	printf("setprint(100,129,10)\n");
	setprint(100, 129, 10);
	printf("\n");

	printf("setprint(105,150,12)\n");
	setprint(105, 150, 12);
	printf("\n");

	printf("setprint(120,130,13)\n");
	setprint(120, 130, 13);

	return 0;
}