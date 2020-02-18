#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void
sort_array(int array[], int array_size);

int
*find_place_of_max_element(int array[], int array_size);


void
change_value(int *a, int *b);

int
main(void)
{
	int i, array[7] = {1,3,5,9,5,3,6};
	sort_array(array, 7);
	for(i = 0; i < 7; i++) printf("%d\n",array[i]);



}

void
sort_array(int array[], int array_size)
{
	int i, *place;
	for(i = 0; i < array_size - 1; i++)
	{
		place = find_place_of_max_element(array + i, array_size - i);
		change_value(place, (array + i));
	}



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

void
change_value(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
