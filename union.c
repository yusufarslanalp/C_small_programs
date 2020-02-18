#include <stdio.h>
#include <string.h>
 
// Union içerisinde tanımlanan data tiplerinden en büyüğünün hafızası kadar hafızaya sahip bir data tipidir.
// Bu data tipi tanımlandıktan sonra içerisindeki datalardan herhangi birinine atama yapılabilir.
// Atama yapılan data hangisi olursa olsun union içerisindeki datalarda herhangi birinin adı ile çağırılarak kullanılabilir.

union Data {
   int i;
   char ch;
};
 
int main( ) 
{
	union Data my_data;
	my_data.i = 65;
	printf( "my_data.ch:%c\n", my_data.ch );
	   



}
