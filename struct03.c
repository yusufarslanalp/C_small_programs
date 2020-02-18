#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>
#include <string.h>


struct yusuf{
	int a;			//s1 ve s9 structları oluşturulur. ve içleri doldurulabilirdir.


} s1, s9;



int
main(void)
{


	struct yusuf y1;	//struct tanımı yukarıdaki gibi yapıldığı için bu satırdaki struct key word'ünü kullanmadan program çalışmaz. 
	y1.a = 7;
	printf( "y1.a: %d\n", y1.a );

	s1.a = 3;
	printf( "s1.a: %d\n", s1.a );

	s9.a = 99;
	printf( "s9.a: %d\n", s9.a );





}




