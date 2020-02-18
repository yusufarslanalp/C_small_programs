#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum {stop ,devam} loop;
void 
calculate_increasting_order(double *avarage, int *count, loop *lo);

int
main(void)
{
	double avarage, valid_avarage;
	int count , max_count;
	loop lo;
	lo = devam;
	while(lo == devam)
	{
		calculate_increasting_order(&avarage, &count, &lo);	

		if(count > max_count)
		{
			valid_avarage = avarage;
			max_count = count;
		}
		else if (count == max_count)
		{
			if(avarage > valid_avarage) valid_avarage = avarage;
		}





	}

	//printf("stop: %d\n",stop);
	printf("valid_avarage: %f   max_count: %d\n",valid_avarage, max_count);
	


}

void
calculate_increasting_order(double *avarage, int *count, loop *lo)
{
	double a, b, sum;
	
	scanf("%lf",&a);
	b = a;
	scanf("%lf",&a);
	sum = b;
	*count = 1;
	while(a>b)
	{	
		*count +=1;
		sum += a;
		b = a;
		scanf("%lf",&a);
	}
	*avarage = sum / *count;
	if(a <0) *lo = stop;
	else *lo = devam;
	
}
