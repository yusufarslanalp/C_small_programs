#include <stdio.h>

int
main(void)
{
	char array[200];
	double sayi = 122.214;
	sprintf(array,"%.3f",sayi);
	puts(array);
}
