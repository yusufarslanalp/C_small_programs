#include <stdio.h>

int
main(void)
{
	int *p;
	int array[] = {2,4,6,8};
	p = &array[2];
	printf("%d\n",*p);


}
