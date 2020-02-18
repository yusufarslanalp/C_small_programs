#include <stdio.h>			//bu program arrayde belirtilen sayılara göre gelime arrayindeki sayıları sıralar.
#include <string.h>
#include <stdlib.h>

void
sort_words(char words[][50], int array[], int array_size);

int
*find_place_of_max_element(int array[], int array_size);


void
change_words(char *a, char *b);

void
change_value(int *a, int *b);

int
main(void)
{
	int i, array[7] = {1,3,5,9,5,3,6}; ///kelime sıralamasını belirleyrn array.
	char words[7][50] = {{"yusuf"},{"abdullah"},{"arslanalp"},{"151044046"},{"gtü"},{"üni"},{"gebze"}};
	sort_words(words, array, 7);

	for(i=0; i < 7; i++) printf("%s\n",words[i]);





}

void
sort_words(char words[][50], int array[], int array_size)
{
	int i, *place, place_at_array;
	for(i = 0; i < array_size ; i++)
	{
		place = find_place_of_max_element((array + i), array_size - i);
		//printf("num: %d\n",*place);
		change_value(place, (array + i));

		place_at_array = place - array;
		//printf("place_at_array[]: %d\n",place_at_array);
		change_words(words[place_at_array], words[i]);
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
change_words(char *a, char *b)
{
	char temp[50];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

void
change_value(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
