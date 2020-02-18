#include <stdio.h>
int
main(void)


{
	int i, maxspace, space, j,k,l,m,f,x;
	scanf("%d",&i);
	x=i;
	maxspace = (i-1)/2;
	for(;i>=1;i=i-2)
	{
		
		for(space = maxspace-(i-1)/2;space>=1;space--)
		{
		 printf(" ");
		}

		for(j=i;1<=j;j--)
		{
		 printf("*");

		}
		printf("\n");
	}
	
	for(f=3;f<=x;f=f+2)
	{
		for(l=(x-f)/2;l>=1;l--)
		{
		 	printf(" ");
 		}
		
		for(m=f;m>=1;m--)
		{
		 	printf("*");
		}

	 printf("\n");
	}




}
