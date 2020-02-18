#include <stdio.h>



int
main(void)
{

	int max,num=0,x=1;
	scanf("%d",&max);
	if(max<0) 
	{
		x=-1;

	}
	else
	{
		for(;num>-1;)
		{		
			scanf("%d",&num);		

			if(max<num) max=num;
		}
		printf("max:%d\n",max);
	}
}

