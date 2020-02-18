#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Bu program kullanıcı negatif bir sayı girinceye kadar kulanıcıdan sayı almakta kullanıcı negatif sayı girince kullanıcıdan aldığı tüm sayıları ekrana basmaktadır.
// Bu program malloc kullanılarak yazılmıştır ve kullanıcı sayı gidikçe malloc ile arry'in boyutu büyültülmektedir.

int
main(void)
{ 
	int i, j, num, k;
	int * numbers;
	numbers = ( int * )malloc( 5 * sizeof(int) );

	i = 0;
	scanf( "%d", &num );
	if( num >= 0 )
	{
		numbers[i] = num;
		
		while( num >= 0 )
		{
			i++;
			if( i % 5 == 0 )
			{
				k = ((i / 5) + 1) * sizeof( int ) * 5;
				numbers = ( int * )realloc( numbers , k );
			}
			scanf( "%d", &num );
			numbers[i] = num;
		}
	}

	else printf( "hiç pozitif sayı girilmedi\n" );

	if( i > 0 ) for( j = 0; j < i; j++ ) printf( "numbers[%d]: %d\n", j, numbers[j] );
	free( numbers );


}




