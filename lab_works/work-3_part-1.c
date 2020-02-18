#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find_min(int new, int min)
{
	if(new < min) min = new;
	return min;
}

int find_max(int new, int max)
{
	if(new > max) max = new;
	return max;
}

int get_min_max(int *min, int * max)
{
	int new = 0, status = 0;
	scanf("%d",&new);
	if(new < 1)
	{
		status = -1;
		return status;
	}
	*min = new;
	*max = new;
	while( new > 0 )
	{
		*min = find_min(new, *min);
		*max = find_max(new, *max);
		scanf("%d",&new);
	}
	return status;


}

int
main(void)
{
	int new, min, max;
	get_min_max( &min, &max);
	printf("min: %d\nmax: %d\n",min,max);
	




}
