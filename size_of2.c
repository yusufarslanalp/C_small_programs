#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//bu programdan anlaşılacağı üzere sizeof() fonksiuonu bir array'in size'ını bulabilir.Ancak sizeof()'a adres olarak bir array'in ilk adresini değilde sonraki adreslerden
//biri verilirse bu surumda sizeof() array'in geri kalan size'ını değil direk bir pointer'ın size'ını vericektir. 


int
main(void)
{
	int i;
	int array[20];
	double size = sizeof( (array ) ) / sizeof(int);
	printf( "size of array : %f\n", size );

	size = sizeof(( array + 1 )) / sizeof(int);
	printf( "(size of array - 1) = %f\n", size );
}

