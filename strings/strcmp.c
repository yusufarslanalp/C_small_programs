#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main(void)
{
	int a;
	char ar1[] = "ali";
	char ar2[] = "agi";
	char ar3[] = "ali";
	if(strcmp(ar1,ar3)==0) printf("correct\n"); //strcmp fonksiyonunun return değeri 0 a eşirse karşılaştırılan iki string eşittir.
	//a = strcmp(ar1,ar2);						//ama eğer iki string eşit değilse foksiyon herhangi bir integer return edebilir.
	//printf("%d\n",a);
}
