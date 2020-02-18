#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




int
main(void)
{
	int *p;
	int i;
	int array[] = {1,2,3,4,5,6,7,8};
	int experiment[4];
	for(i=0;i<4;i++)
	{
		printf( "before memcpy exeriment[%d]: %d\n", i, experiment[i] );
	}
	printf("\n");

	memcpy(experiment,array,sizeof(experiment));

	for(i=0;i<4;i++)
	{
		printf( "after memcpy exeriment[%d]: %d\n", i, experiment[i] );
	}

}

