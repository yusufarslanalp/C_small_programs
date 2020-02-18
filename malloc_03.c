#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>




int
main(void)
{
	int i, j, k = 0;

	int **array;
	array = (int**)malloc( sizeof( int* ) * 4 );
	for( i = 0; i < 4; ++i )
	{
		array[i] = (int*)malloc( (int)sizeof(int) * 4  );
	}

	for( i = 0; i < 4; ++i ) for( j = 0; j < 4; ++j ) array[i][j] = ++k;

	for( i = 0; i < 4; ++i ) for( j = 0; j < 4; ++j ) printf( "array[%d][%d]: %d\n", i, j, array[i][j] );

	for( i = 0; i < 4; ++i ) free( array[i] );
	free( array );
}


