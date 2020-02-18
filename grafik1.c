#include <stdio.h>

void
drawFunction(int xAxis,int yAxis,int functionNumber);



int
main(void)
{
drawFunction(13,29,4);



}
void
drawFunction(int xAxis,int yAxis,int functionNumber)
{
	int total_stars,
		result,
		high_of_stars,
		number_of_space,
		M,
		i,
		j,
		k,
		l,
		n;
	result = fTheFunction(xAxis,functionNumber);
	M = result/xAxis;
	total_stars = (yAxis-1)/M;
	number_of_space = total_stars-1;
	high_of_stars = total_stars*M;

	for(i=yAxis-1-high_of_stars;i>=1;i--)
	{
		printf("I\n");
	}
	
	for(j=number_of_space;j>=0;j--)
	{
		

		for(k=j;k>=1;k--)printf(" ");
		/*if (j!=number_of_space)*/
			printf("*");

		if(j>0){for(l=M-1;l>=1;l--)printf("\nI");}


	}
	

	for(n=xAxis;n>=1;n--)printf("-");

}




                        
int fTheFunction(int x, int functionNumber)
{
	
	int result;

	switch(functionNumber)
	{

		case 1:
		result = 2 * x;
		break;
		
		case 2:
		result = 3 * x;
		break;
		
		case 3:
		result = 4 * x;
		break;
		
		case 4:
		result = 5 * x;
		break;
		
		case 5:
		result = 6 * x;
		break;
		
	}
	return result;
	
}
