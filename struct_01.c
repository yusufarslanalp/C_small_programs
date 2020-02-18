#include <stdio.h>
#include <string.h>

typedef struct
{
	int x;
	int y;
	int z;
	int t;	
}four_number_t;


// koddan anlaşılacağı üzere iki struct birbirine assign edilebilmektedir.

int
main(void)
{
	four_number_t st1 = { 0, 1, 2, 3 };
	printf( "st1.x: %d\nst1.y: %d\nst1.z: %d\nst1.t: %d\n\n", st1.x, st1.y, st1.z, st1.t );

	four_number_t st2 = { 20, 21, 22, 23 };
	printf( "st2.x: %d\nst2.y: %d\nst2.z: %d\nst2.t: %d\n\n", st2.x, st2.y, st2.z, st2.t );

	st1 = st2;
	printf( "st1.x: %d\nst1.y: %d\nst1.z: %d\nst1.t: %d\n", st1.x, st1.y, st1.z, st1.t );

	/*	Aşağıdaki kod hata vermektedir çünkü struct'larda hızlı doldurma işlemi sadece initialization kısmında gerçekleşebiir.( char array' lerdede aynı durum geçerlidir. )
	four_number_t st3;
	st3 = { 1, 1, 1, 1 };
	printf( "st1.x: %d\nst1.y: %d\nst1.z: %d\nst1.t: %d\n", st1.x, st1.y, st1.z, st1.t );
	*/


}
