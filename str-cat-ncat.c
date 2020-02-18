#include <stdio.h>
#include <string.h>
 
// strNcat kulanınca belirtilen sayı kadar karakter dest'e kopyalanır. eğer belirtilen karakterler kopyalanırken NULL karakteri ile kariılaşılırsa null karakterinden sonraki
// karakterler kopyalanmazlar.

// strcat belirtilen stringden dest stringine  null karakterini görünceye kadar null karakteri dahil olmak karakterleri üzere kopyalar. NULL karakteri belirtilen strigde yoksa 
// buluncaya kadar stringin dışına taşarak karakterleri kopyalar.


//?strncat dest stringine ekleyeceği yeri bulmak için dest[0] dan başlayıp NULL karakterini buluncaya kadar devam ediyor.
// Bu arama sırasında dest'in sınırları içerisinde NULL karakteri olmasa bile arama işlemine evam ediliyor.

// yukarı paragrafın aynısı strcat içinde geçerldir.

//strNcat kullanırken n sayısı dahilinde NULL karakteri olsa bile fazladan bir NULL karakteri sona eklenilir.


int main( ) 
{
	int i;


	char name[5];
	char word[9] = "abdullah";


	printf( "len word: %d\n", strlen( word ) );


	for( i = 0; i < 6; i++ ) name[i] = 'x';

	printf( "name=|%s|\n", name );

	
	name[0] = 'y';
	name[1] = 'u';
	name[2] = 's';
	name[3] = 'u';
	name[4] = 'f';
	name[5] = 'x';
	

	printf( "name=|%s|\n", name );

	strcat( name, word);
	printf( "nnnname=|%s|\n", name );
	//printf( "%c\n", name[10] );



}
