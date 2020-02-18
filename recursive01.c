#include <stdio.h>

int
max_element_of_array(int array[],int size);

void
sort_array(int array[],int size);

int
main(void)
{
	int array[] = {3,5,7,2,9,1,6,4},i;
	sort_array(array,8);
	for(i=0;i<8;i++) printf("%d\n",array[i]);
}

int
max_element_of_array(int array[],int size)
{
	int i, max_element=-9999, max_element_number;
	for(i=0; i < size; i++)
	{
		if(max_element < array[i])
		{
			max_element = array[i];
			max_element_number = i;
		}
	}
	return max_element_number;
}

void
sort_array(int array[],int size)
{
	int temp,mx_elmnt;
	if(size==1) ;
	else
	{
		mx_elmnt = max_element_of_array(array,size);
		temp = array[size-1];
		array[size-1] = array[mx_elmnt];
		array[mx_elmnt] = temp;
		size = size-1;
		sort_array(array,size);
	}	
}
