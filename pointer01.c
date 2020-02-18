#include <stdio.h>

int
main(void)
{
int a,
	*p;

a=10;
p=&a;

printf("p: %p\n",p);  /*p nin işaret ettiği yerin adresini hegzadesimal basar.*/
printf("*p: %d\n",*p); /*pnin işaret ettiği yerde ne varsa onu basar.*/
printf("annın adresi: %u\n",&a); /*a nın adresini basar.(warning veriyor.)*/
printf("p nin kendisi: %u\n",p);  /*p nin adresini basar.(warning veriyor.)*/



}
