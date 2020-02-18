#include <stdio.h>

int
main(void)
{
	int array[5],i,toplam;	/*5 arrayin alabileceği max eleman sayısı.int array elemanlarının türüdür.*/
	for(i=0;i<5;i++)
		{
			scanf("%d",&array[i]);		
		}	

	for(i=0;i<5;i++)
		{
			toplam +=array[i];
		}
		
		printf("%d",toplam);


}
