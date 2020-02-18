#include <stdio.h>

int
main(void)
{
	char array[20] = "122.214";
	double num;
	sscanf( array, "%lf", &num );
	printf("num: %f\n", num);
}
