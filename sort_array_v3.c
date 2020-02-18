#include <stdio.h>
#include <string.h>

void
sort_array( int array[], int size );

int
find_placeof_max( int array[], int size );



int
main(void)
{
	int array[] = {2,5,7,9,7,3,5};
	sort_array( array, 7 );
	for( int i = 0; i < 7; i++ ) printf("%d\n", array[i] );



}



void
sort_array( int array[], int size )
{

	int i, placeof_max, temp;
	int stop = size;

	for( i = 0; i < stop - 1; i++ )
	{
		placeof_max = find_placeof_max( (array + i), size );
		temp = array[i];
		array[i] = array[ i + placeof_max ];
		array[ placeof_max + i ] = temp;
		size--;

	}

}



int
find_placeof_max( int array[], int size )
{
	int max = array[0];
	int placeof_max = 0;
	int i = 0;

	for(i = 1; i < size; i++)
	{
		if( array[i] > max )
		{
			placeof_max = i;
			max = array[i];

		}
	}
	return placeof_max;
}




