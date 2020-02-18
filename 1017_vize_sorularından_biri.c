#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




int
main(void)
{	
	int i, j, len, num_of_digits[11];
	char digits[50];
	double num = 122.214;
	sprintf(digits,"%g",num);
	len = strlen(digits);
	for(j=0; j < 10; j++) num_of_digits[j] = 0;
	printf("nmofdgt0:  %d\n",num_of_digits[0]);
	printf("len: %d\n",len);
	puts(digits);
	for(i = 0; i < len; i++)
	{
		printf("i: %d\n",i);
		switch (digits[i])
		{
		case '0' :
			num_of_digits[0] +=1;	
			break;
		case '1' :
			num_of_digits[1] +=1;
			break;
		case '2' :
			num_of_digits[2] +=1;
			break;
		case '3' :
			num_of_digits[3] +=1;
			break;
		case '4' :
			num_of_digits[4] +=1;
			break;
		case '5' :
			num_of_digits[5] +=1;
			break;
		case '6' :
			num_of_digits[6] +=1;
			break;
		case '7' :
			num_of_digits[7] +=1;
			break;
		case '8' :
			num_of_digits[8] +=1;
			break;
		case '9' :
			num_of_digits[9] +=1;
			break;


		}

	}

	printf("0 1 2 3 4 5 6 7 8 9\n");
	printf("%d %d %d %d %d %d %d %d %d %d\n",num_of_digits[0],num_of_digits[1],num_of_digits[2],num_of_digits[3],num_of_digits[4],num_of_digits[5],num_of_digits[6],num_of_digits[7],num_of_digits[8],num_of_digits[9]);





}

