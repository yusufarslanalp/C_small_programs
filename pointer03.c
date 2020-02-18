#include <stdio.h>

//BU PROGRAM FONKSİYONDA Kİ BİR ADRESİ DIŞARI ÇIKARTMAK İÇİN YAZILDI.


int *deney(void);

int
main(void)
{
	int *ptr;
	ptr = deney();
	printf("out of function: %u\n",ptr);
	printf("%d\n",*ptr);



}
int *deney(void)
{
	int *p;
	int array[] = {2,4,6,8};
	 p = &array[2];

	printf("in function: %u\n",p);
	return p;


    
}
