#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node_s{
	int a;
	struct node_s * next_node;

}node_t;

int
main(void)
{
	int number_of_nodes = 0;
	node_t *root;
	node_t *iter;
	int num;
	int i;

	root = NULL;


	printf( "linked list'e eklemek istediğiniz bir sayı girin\n-1 girerseniz liste tamamlanıcaktır.\nSayı: " );
	scanf( "%d", &num );
	if( num != -1 )
	{
		root = ( node_t *)malloc( sizeof( node_t ) );
		iter = root;
		root -> a = num;
		root -> next_node = NULL;
		number_of_nodes += 1; 

		printf( "sayı girin: " );
		scanf( "%d", &num );


		while( num != -1 )
		{
			iter -> next_node = ( node_t *)malloc( sizeof( node_t ) );
			iter -> next_node -> a = num;
			iter -> next_node -> next_node = NULL;
			iter = iter -> next_node;
			number_of_nodes += 1; 

			printf( "sayı girin: " );
			scanf( "%d", &num );		
		}

		iter = root;
	}

	while( iter != NULL )
	{
		printf( "%d\n", iter -> a );
		iter = iter -> next_node;
	}




}







