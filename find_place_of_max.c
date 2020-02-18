#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
*find_place_of_max_element(int array[], int array_size);

int
main(void)
{

	int array[7] = {1,3,7,9,2,3,2};
	int sze = 7;
	int *a;
	a = find_place_of_max_element(array, sze);
	printf("max_place: %p\n",a);
	printf("max: %d\n",*a);

}


int
*find_place_of_max_element(int array[], int array_size)
{
	int *max_place = 0, i =0,max = -9999;
	for(i = 0; i < array_size; i++)
	{
		if(array[i] > max) 
		{
			max_place = &array[i];
			max = array[i];
		}
	}
	return max_place;
	

}
