#include <stdio.h>
typedef enum {MIN,MAX,SUM} operation;

int arrOp(int arr[], int size, operation op);
int sum(int arr[], int size);
int max(int arr[], int size);
int min(int arr[], int size);

int
main(void)
{
int array[] = {1,2,3,4,5,6,7,-99,200};
int size = 9;


printf("max: %d\n",arrOp(array,size,MAX));
printf("min: %d\n",arrOp(array,size,MIN));
printf("sum: %d\n",arrOp(array,size,SUM));

}

int min(int arr[], int size) {
	int min = 99999, i;
	for(i=0;i<size;++i)
		if(arr[i] < min)
			min = arr[i];
	return min;
}


int max(int arr[], int size) {
	int max = -9999, i;
	for(i=0;i<size;++i)
		if(arr[i] > max)
			max = arr[i];
	return max;
}


int sum(int arr[], int size) {
	int sum = 0, i;
	for(i=0;i<size;++i)
		sum += arr[i];
	return sum;
}


int arrOp(int arr[], int size, operation op) {
	if(size < 1) 
		return -3456;
	switch (op) {
		case MAX:
			return max(arr,size);
		case MIN:
			return min(arr,size);
		case SUM:
			return sum(arr,size);
		default:
			return -9876;
	}
}
