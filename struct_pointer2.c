#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int a;
	int b;
}data_t;

int
main(void)
{
	data_t *p;
	data_t two_nums;

	two_nums.a = 5;
	two_nums.b = 10;

	p = &two_nums;

	int y;

	// "y = *p.b;" ifadesi: "error: request for member ‘b’ in something not a structure or union  y = *p.b;"
	//hatasını verecektir çünkü ilk yapılacak işlem "p.b" işlemidir. p bir strukt değil adres olduğu için kod hata verir.

	y = (*p).b; //bu şekilde çalışır.
	printf( "y:%d\n", y );





}

