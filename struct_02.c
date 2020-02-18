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
scan_long_lat(long_lat_t *ptr_st)
{
	scanf("%d %d %c", &(*ptr_st).degrees, &(*ptr_st).minutes, &(*ptr_st).diarection);
	
}


void
scan_long_lat_v2(long_lat_t *ptr_st)
{

	scanf( "%d %d %c", &ptr_st->degrees, &ptr_st->minutes, &ptr_st->diarection );
}


int
main(void)
{ 
	long_lat_t tr, gk;
	long_lat_t array[2];

	scan_long_lat(&tr);
	scan_long_lat(&gk);

	array[0] = tr;
	array[1] = gk;
	printf("turkey is at the %d degrees %d minutes %c logitude\n",array[0].degrees, array[0].minutes, array[0].diarection);
	printf("greekkk is at the %d degrees %d minutes %c logitude\n\n",array[1].degrees, array[1].minutes, array[1].diarection);

	printf( "***Bu fonksiyon (*struct_variable).element ifadesi ile struct_variable->element ifadesinin birbirine denk olduğunu gösterir.***\n" );
	scan_long_lat_v2(&tr);
	scan_long_lat_v2(&gk);

	array[0] = tr;
	array[1] = gk;
	printf("turkey is at the %d degrees %d minutes %c logitude\n",array[0].degrees, array[0].minutes, array[0].diarection);
	printf("greekkk is at the %d degrees %d minutes %c logitude\n",array[1].degrees, array[1].minutes, array[1].diarection);
}




