#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>
#include <string.h>


int
foo( void )
{
	static int count;
	count++;
	return count;




}



int
main(void)
{
	printf( "%d\n", foo() );
	printf( "%d\n", foo() );
	printf( "%d\n", foo() );


}




