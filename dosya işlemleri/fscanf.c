#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// fscanf(  ) fonksiyonu %d ile birlikte kullanıldığında belirtilen dosyadan bir adet tamsayı almaktdır ve 
// her çağırıldığında bir sonraki tam sayıyı almaktadır.


int
main(void)
{
	int numbers[100];
	int i = 0;
	int len_numbers;
	int num;

	FILE *fp;
	fp = fopen("input.txt","r");
	while( fscanf(fp, "%d", &num) == 1 ) //input dosyasındaki sayılar numbers array'ine yazılır.
	{
		numbers[i] = num;
		i++;
	}

	len_numbers = i;
	fclose(fp);
	for( i = 0; i < len_numbers; i++ ) printf( "%d ", numbers[i] );
	printf( "\n" );

	
}	


