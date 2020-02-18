#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main(void)
{
	int array[10] = { 5,9,7,5,3,1,2,0,4,5 };
	int i = 0, j = 0, size = 10, temp = 0;

	for( i = 1; i < size; i++ )
	{
		for( j = i; j >= 1; --j )
		{
			if( array[j] < array[j -1] )
			{
				temp = array[j - 1];
				array[j -1] = array[j];
				array[j] = temp;
			}

			else break;
		}

	}




	for( i = 0; i < size; ++i ) printf( "%d ", array[i] );
	printf( "\nsonuççç\n" );
}
