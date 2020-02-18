#include <stdio.h>

#define MAX_WEIGHT 99999
#define SHORTEST_DAMAGE 4
#define COMFORTABLE_DAMAGE 2
#define SAFEST_DAMAGE 6
#define TOTAL_LIFE 30 // can change for different tests 


typedef enum _tileType {BORDER, WALL, EMPTY, USED, START} TILE_TYPE;
typedef enum _pathType {DISTANCE, COMFORT, DANGER} PATH_TYPE;
typedef enum _printType {P_DISTANCE, P_COMFORT, P_DANGER, P_TRAP} PRINT_TYPE;



typedef struct _tiles{
	TILE_TYPE type;
	int distance;
	int dangerLevel;
	int comfortLevel;
	int trapDamage;
}TILES;


typedef struct _coord{
	int x;
	int y;
}Coord;


typedef struct _path{
	Coord coords[200];
	int size;
	int totalDistance;
	int totalDanger;
	int totalComfort;
	int totalDamage;
}Path;



int
step(Coord *current_coord, TILES map[][100], int *size_of_route, Coord route[]);

int
find_route(Coord *current_coord, TILES map[][100], int *size_of_route, Coord route[]);

void
compose_route(Coord route[], Coord take_coord, int *size_of_route );

int
is_stuck(TILES map[][100], Coord current_coord);

int
is_exit(TILES map[][100], Coord current_coord);

void
print_map(TILES map[][100], int lateral, int vertical);

void
compose_map(TILES map[][100], int lateral, int vertical);

int
main(void)
{
	TILES map[100][100];
	compose_map(map, 6, 6);
	Coord current_coord, route[200];
	current_coord.x = 4;
	current_coord.y = 2;
	int size_of_route = 0;
	//find_route(&current_coord, &(*map), &size_of_route, &(*route));
	step(&current_coord, &(*map), &size_of_route, &(*route));
	step(&current_coord, &(*map), &size_of_route, &(*route));
	step(&current_coord, &(*map), &size_of_route, &(*route));

	print_map(&(*map), 6, 6);

}

int
step(Coord *current_coord, TILES map[][100], int *size_of_route, Coord route[])
{
	if(map[((*current_coord).x)][((*current_coord).y)-1].type == EMPTY)
	{
		if(map[((*current_coord).x)][((*current_coord).y)].type == START)
		{
			(*current_coord).y += -1;
			compose_route(route, *current_coord, size_of_route);
		}

		else if(map[((*current_coord).x)][((*current_coord).y)].type == EMPTY)
		{
			map[((*current_coord).x)][((*current_coord).y)].type = USED;
			(*current_coord).y += -1;
			compose_route(route, *current_coord, size_of_route);
		}
	}

	else if(map[((*current_coord).x)-1][((*current_coord).y)].type == EMPTY)
	{
		if(map[((*current_coord).x)][((*current_coord).y)].type == START)
		{
			(*current_coord).x += -1;
			compose_route(route, *current_coord, size_of_route);
		}

		else if(map[((*current_coord).x)][((*current_coord).y)].type == EMPTY)
		{
			map[((*current_coord).x)][((*current_coord).y)].type = USED;
			(*current_coord).x += -1;
			compose_route(route, *current_coord, size_of_route);
		}
	}

	else if(map[((*current_coord).x)][((*current_coord).y)+1].type == EMPTY)
	{
		if(map[((*current_coord).x)][((*current_coord).y)].type == START)
		{
			(*current_coord).y += 1;
			compose_route(route, *current_coord, size_of_route);
		}

		else if(map[((*current_coord).x)][((*current_coord).y)].type == EMPTY)
		{
			map[((*current_coord).x)][((*current_coord).y)].type = USED;
			(*current_coord).y += 1;
			compose_route(route, *current_coord, size_of_route);
		}
	}

	else if(map[((*current_coord).x)+1][((*current_coord).y)].type == EMPTY)
	{
		if(map[((*current_coord).x)][((*current_coord).y)].type == START)
		{
			(*current_coord).x += 1;
			compose_route(route, *current_coord, size_of_route);
		}

		else if(map[((*current_coord).x)][((*current_coord).y)].type == EMPTY)
		{
			map[((*current_coord).x)][((*current_coord).y)].type = USED;
			(*current_coord).x += 1;
			compose_route(route, *current_coord, size_of_route);
		}
	}

}

void
compose_route(Coord route[], Coord take_coord, int *size_of_route )
{
	route[*size_of_route] = take_coord;
	*size_of_route += 1;
}


int
is_exit(TILES map[][100], Coord current_coord)
{
	if(map[current_coord.x][(current_coord.y)-1].type == BORDER || map[(current_coord.x)-1][current_coord.y].type == BORDER || map[current_coord.x][(current_coord.y)+1].type == BORDER || map[(current_coord.x)+1][current_coord.y].type == BORDER ) return 1; //exit'a ulaşıldığını gösterir. 

	else return -1;
}

int
is_stuck(TILES map[][100], Coord current_coord)
{
	int a, b;
	a = is_exit(map, current_coord);
	b = map[current_coord.x][(current_coord.y)-1].type == EMPTY || map[(current_coord.x)-1][current_coord.y].type == EMPTY || map[current_coord.x][(current_coord.y)+1].type == EMPTY || map[(current_coord.x)+1][current_coord.y].type == EMPTY; 

	if(a != 1 || b == 0) return 1; //sıkıştı.

	else return -1; //sıkışmadı.
}

void
print_map(TILES map[][100], int lateral, int vertical)
{
	int i, j;
	for(i = 0; i < vertical; i++)
	{
		for(j = 0; j < vertical; j++)
		{

			switch (map[i][j].type)
  			{
				case BORDER:
					printf("%c",'B');
					break;
				case WALL :
					printf("%c",'W');
					break;
				case EMPTY :
					printf("%c",'E');
					break;
				case USED :
					printf("%c",'.');
					break;
				case START :
					printf("%c",'S');
					break;
				default :
					break;
			}
			
		}
	printf("\n");
	}
}

void
compose_map(TILES map[][100], int lateral, int vertical)
{
	int i, j;
	TILE_TYPE array[6][6] = {{BORDER,BORDER,BORDER,BORDER,BORDER,BORDER},
					      	{BORDER, WALL,  EMPTY, WALL  ,WALL,  BORDER},
					      	{BORDER, WALL,  EMPTY, WALL  ,WALL,  BORDER},
							{BORDER, WALL,  EMPTY, WALL  ,WALL,  BORDER},
							{BORDER, WALL,  START, WALL  ,WALL,  BORDER},
					      	{BORDER,BORDER,BORDER,BORDER,BORDER,BORDER}};

	for(i = 0; i < vertical; i++)
	{
		for(j = 0; j < vertical; j++)
		{
			map[i][j].type = array[i][j]; 

		}
	}



}


int
find_route(Coord *current_coord, TILES map[][100], int *size_of_route, Coord route[])
{
	for(; is_exit(&(*map), *current_coord) != 1 && is_stuck(&(*map), *current_coord) != 1 ;)
	{
		step(&(*current_coord), &(*map), size_of_route, &(*route));
	}
}





