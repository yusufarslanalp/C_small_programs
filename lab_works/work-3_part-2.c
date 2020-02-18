#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
find_max(int new, int max);

int
calculate_exponential_number( int base, int exponent );

int
calculate_max_exp_number(void);



int
main(void)
{
	int max = calculate_max_exp_number();
	printf("max_number: %d\n",max);
	



}

int
find_max(int new, int max)
{
	if(new > max) max = new;
	return max;
}


int
calculate_exponential_number( int base, int exponent )
{
	int i, result = base;
	if(exponent >= 1)
	{
		for( i = 1; i < exponent; i++ )
		{
			result = result * base;
		}
		
		return result;
	}
	else return -1;		//exponen kısım pozitif olamadığında arza kodu olan -1 return edilir.
}


int
calculate_max_exp_number(void)
{
	int base, exponent, result, max_result, max = 1;
	printf("sayı tabanını giriniz: ");
	scanf("%d",&base);
	if( base < 0 ) return -1;
	while(base > 0)
	{
		printf("saynın üssünü giriniz: ");
		scanf("%d",&exponent);
		result = calculate_exponential_number( base, exponent );
		if(result == -1) return -2;
		max_result = find_max( result, max );
		printf("sayı tabanını giriniz: ");
		scanf("%d",&base);
	}
	return max_result;
}
