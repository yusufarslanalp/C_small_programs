#include <stdio.h>


int
main(void)
{  
	int bir,iki;
	for(bir=1;bir<=5;bir++)
	{
		printf("%d: ",bir);
		for(iki=1;iki<=7;iki++)
		{	
			printf("%d",iki);
			if(bir == 3 && iki == 4)
			{	
				printf("\n");	
				break;				
			}		
		}
		if(bir == 3 && iki == 4) break;
		printf("\n");
	}
}
