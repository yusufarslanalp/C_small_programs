#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//koddan anlaşılacağı gbi mallocate her kullanıldığında heap den belirtilen sayı kadar bayt talep eder.
//adresin aynı kalmasını isteyip boyutu değiştirmek için reallocate kullanılır.
//malloc sadece heap'ten belirtilen bayt kadar alan ayırır ancak ayırdığ alan için herhangi bir tip belirlemesi yapmaz.
//bu yüzden malooc ifadesinin önünde bir type cast* ifadesi bulunur.
//calloc mallocla birebir aynı işi yapar fakat heap te ayırdığı yerlerin tümünü sıfıra eşitler.

int
main(void)
{
	char *str;
	int * k;
	int i;
	printf("str: %u\n",str);

	str = (char *) malloc(6);
	printf("malloc'tan sonra str[0]: %c\n",*str);
	strcpy(str,"yusuf\0");
	printf("print(str): %s\n",str);
	printf("malloc'tan sonra str: %u\n",str);

	str = (char *)realloc( str, 15 );	
	strcat( str, " abdullah" );
	printf("str: %s\n",str);
	printf("realloc'tan sonra str: %u\n",str);

	k = ( int* )calloc( 5, sizeof( int ) );
	for( i = 0; i < 5; i++ ) printf( "k[%d]: %d\n",i,k[i] );


}
