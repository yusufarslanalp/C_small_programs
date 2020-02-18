//*** STRCPY ***///

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strcpy bir kopyalama adresi birde kopyalanacak adres alır. kopyalanacak adresten başlayıp NULL görenekadarki karakterleri kopyalar ve yapıştırma yerine koyar.
// strcpy kopyalama yapılacak dizinin boyutundan ve kopyalamanın yapıştırılacağı dizinin boyutundan haberdar değildir.
// strcpy sadece kopyalama yapılacak adresten başlayıp NULL görenekadar olan karakterleri kopyalar ve yapıştırma yapılacak adresten itibaren karekterleri yapıştırır.
// strcpy kopyalama işlemini yaparken son kopyaladığı eleman NULL karakteridir. Yapıştırma işleminde son kopyalamış olduğu NULL karakterini sonkarakter olarak yapıştırır.
// extra NULL karakteri eklemez. Sadece kopyalamış olduğu NULL karakterini yapıştırır.



int
main(void)
{
	char arr1[3] = "xxx";
	char arr2[2] = "y\0";

	strcpy( arr1, arr2 );

	printf( "%s\n", arr1 );
	printf( "%c\n", arr1[2] );




}

