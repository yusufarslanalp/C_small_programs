#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void
print_string( char array[] );

int
main(void)
{
	char name[25] = "yusuf abdullah arslanalp";
	print_string( name );



}

void
print_string( char array[] )
{
	if( array[0] == '\0' ) printf("\n");

	else
	{
		printf( "%c", array[0] );
		print_string( &array[1] );
	}
}


