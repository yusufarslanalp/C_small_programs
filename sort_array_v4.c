#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main(void)
{
	int array[10] = { 4,6,9,2,5,7,8,1,3,0 };
	int i = 0, j = 0, size = 10, temp = 0, place_of_min = 0;


	for( i = 0; i < size; ++i )
	{
		place_of_min = i;
		for( j = i; j < size; ++j )
		{
			if( array[j] < array[place_of_min] )
			{
				place_of_min = j;
			}	
		}
		temp = array[i];
		array[i] = array[ place_of_min ];
		array[ place_of_min ] = temp;
	}

	for( i = 0; i < size; ++i ) printf( "%d ", array[i] );
	printf( "\n" );
}
