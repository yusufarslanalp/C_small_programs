#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int
yrand(int min, int max);

int
main(void)
{
	printf( "%d\n", yrand( 2, 7 ) );

}


int
yrand(int min, int max)
{
	srand(time(NULL)); 
	int r = rand()%(max+1);	
	while(r<min)
	{
			r = rand()%(max+1);	
	}
	return r;
}
