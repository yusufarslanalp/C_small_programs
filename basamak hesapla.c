#include <stdio.h>
#include <string.h>
int
calculate_int_digits(char array[]);

int
main(void)
{
	int x;
	char stringa[] = "abchdh.aa";
	x=calculate_int_digits(stringa);
	printf("%d",x);

}

int
calculate_int_digits(char array[])
{
	int i,size;
	size=strlen(array);
	for(i=0;i<size;i++)
	{
		if(array[i]=='.')break;
		


	}
	return i;

}
