#include <stdio.h>
#include <string.h>
int
calculate_int_digits(char array[]);

int
main(void)
{
	int x;
	char array[200];
	double sayi = 122.214;
	sprintf(array,"%f",sayi);
	printf("%s\n",array);
	x=calculate_int_digits(array);
	printf("%d\n",x);
	
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
