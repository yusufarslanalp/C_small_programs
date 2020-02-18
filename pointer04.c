#include <stdio.h>

void
func(int *a, int *num);

void
other(int *num);

int
main(void)
{
	int a = 0;
	int num = 0;
	func(&a, &num);
	func(&a, &num);
	func(&a, &num);
	func(&a, &num);
	func(&a, &num);
	printf("a: %d\n",a);


}

void
func(int *a, int *num)
{
	*a += 1;
	other(num);
}

void
other(int *num)
{
	*num += 1;
	printf("num: %d\n",*num);
}
