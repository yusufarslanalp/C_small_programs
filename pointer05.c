// bu kod bir fonksiyonun parametresi pointer olmadığı müddetçe fonksiyonun dışındaki bi değerin fonksiyonun içinden değiştirilemeyeceğini göstermek maksadıyla yazıldı.


#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void function_2(int p)
{
	p = 5;
}

void function_1(int *p)
{
	function_2(*p);
}




int
main(void)
{
	int pointer = 0;
	function_1(&pointer);
	printf("pointer: %d\n", pointer);


}
