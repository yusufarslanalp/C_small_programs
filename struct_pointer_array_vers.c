#include <stdio.h>
#include <string.h>

typedef struct 
{
	int degrees;
	int minutes;
	char diarection;

}long_lat_t;


typedef struct
{
	long_lat_t longitude,
			   latitude;

}location_t ;

void
scan_long_lat(long_lat_t array[])
{
	scanf("%d %d %c", &(*array).degrees, &(*array).minutes, &(*array).diarection);
	
}


int
main(void)
{ 
	long_lat_t tr[3];
	scan_long_lat(tr);
	printf("turkey is at the %d degrees %d minutes %c logitude\n",tr[0].degrees, tr[0].minutes, tr[0].diarection);

}
