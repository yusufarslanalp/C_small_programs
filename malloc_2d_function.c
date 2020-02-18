#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void
foo( int ***array, int row_num, int column_num )
{
	int i = 0;

	*array = ( int** )malloc( sizeof( int* ) * row_num );
	for( i = 0; i < row_num; ++i ) (*array)[i] = ( int* )malloc( sizeof( int ) * column_num );
}


void
free_array( int ***array, int row_num )
{
	int i = 0;
	for( i = 0; i < row_num; ++i ) free( (*array)[i] );
	free( *array );
}


int
main(void)
{
	int **array;
	int i = 0, j = 0, k = 1; 
	int row_num = 5, column_num = 5;


	foo( &array, row_num , column_num );
	for( i = 0; i < row_num; ++i ) for( j = 0; j < column_num; j++ ) array[i][j] = k++;

	for( i = 0; i < row_num; ++i ) for( j = 0; j < column_num; j++ ) printf( "%d\n", array[i][j] );

	free_array( &array, row_num );



}







