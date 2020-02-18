#include <stdio.h>
#include <string.h>




int
main(void)
{
	char array[10][50];
	int i = 0;
	int size;
	FILE *fp;
	fp = fopen("input_yusuf.txt","r");
	
	while( EOF != fscanf( fp, "%s", *(array + i)  ) ) i++;
	fclose( fp );

	size = i;
	fp = fopen( "output_yusuf.txt", "w+" );
	for( i = 0; i < size; i++ ) fprintf( fp, "%s\n", array[i] );

}

