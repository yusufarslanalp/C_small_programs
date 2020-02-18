#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void
change_value(int *a, int *b);
int
main(void)
{

	int x = 3, y = 5;
	change_value(&x, &y);
	printf("x: %d y: %d\n",x,y);

}

void
change_value(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

