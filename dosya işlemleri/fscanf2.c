#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>




int
main(void)
{
	char word[100];

	FILE *fp;
	fp = fopen("metin.txt","r");
	while( fscanf(fp, "%s", word) == 1 ) 
	{
		printf( "%s\n", word );
	}


	fclose(fp);


	
}	


