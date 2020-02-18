// Eğer elinde herhangi bir struct'ın adresi varsa ve sen o adresten o adresin gösterdiği bir elemana ulaşmak istiyorsan -> iaretini kullanabilirsin.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int *a;
	int *b;
}data_ptrs;

int
main(void)
{

	data_ptrs *s_p;
	data_ptrs two_ptrs;

	int x;
	int y;
	
	s_p = &two_ptrs;

	(*s_p).a = &x;
	*((*s_p).a) = 3;


	s_p->b = &y;
	*(s_p->b) = 5;

	printf( "x:%d\n", x );
	printf( "y:%d\n", y );




}

