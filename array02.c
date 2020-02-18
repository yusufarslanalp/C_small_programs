#include <stdio.h>

void Arr(int array[],int size);

int
main(void)
{
int i;
int size=5;
int array[10];
Arr(array,size);
for(i=0;i<size;i++)
{
printf("%d\n",array[i]);


}



}

void Arr(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	array[i]=3;

	}



}
