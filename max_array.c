#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
find_max_element(int array[], int *array_size);

int
main(void)
{

	int array[7] = {1,3,7,9,2,3,2};
	int sze = 7;
	printf("max: %d\n",find_max_element(array, &sze));


}


int
find_max_element(int array[], int *array_size)
{
	int max = -9999, i;
	for(i = 0; i < *array_size; i++)
	{
		if(array[i] > max) max = array[i];
	}
	return max;
	

}
