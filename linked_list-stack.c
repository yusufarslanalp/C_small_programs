#include <stdio.h>
#include <stdlib.h>
 
typedef struct node_s{
	int a;
	struct node_s * next_node;

}node_t;

int
push( node_t **root, int num )
{
	node_t *temp;

	if( *root == NULL )
	{
		*root = ( node_t * )malloc( sizeof( node_t ) );
		(*root) -> next_node = NULL;
		(*root) -> a = num;
		return 0;
	}

	temp = *root;
	
	while( temp -> next_node != NULL )
	{
		temp = temp -> next_node;		
	}

	temp -> next_node = ( node_t* )malloc( sizeof( node_t ) );
	temp -> next_node -> next_node = NULL;
	temp -> next_node -> a = num;
}

int
pop( node_t **root )
{
	int num;
	node_t *temp;
	temp = *root;

	if( *root == NULL )
	{
		printf( "linked list boş\n" );
		return 0;
	}

	if( temp -> next_node == NULL )
	{
		num = temp -> a;
		free( temp );
		*root = NULL;
		return num;
	}

	while( temp -> next_node -> next_node != NULL )
	{
		temp = temp -> next_node;
	}

	num = temp -> next_node -> a;
	free( temp -> next_node );
	temp -> next_node = NULL;
	return num;
}


int main( ) 
{
	node_t *root = NULL;
	node_t *iter;
	int num;
	
	scanf( "%d", &num );
	while( num != -10 )
	{
		push( &root, num );
		scanf( "%d", &num );
	}


	iter = root;
	while( iter != NULL )
	{
		printf( "%d ", iter -> a );
		iter = iter -> next_node;
	}
	printf( "\n" );

	printf( "%d\n", pop( &root ) );
	printf( "%d\n", pop( &root ) );
	printf( "%d\n", pop( &root ) );
}






