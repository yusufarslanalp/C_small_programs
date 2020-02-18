#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strncpy bir kopyalama adresi, bir yapıştırma adresi birde kopyalama sayısı alır.
// strncp herhangi bir NULL ekleme işlemi yapmaz.
// sadece belirtilen miktarda karakteri kopyalar ve yapıştırılacak yere yapıştırır.



int
main(void)
{
	char arr1[4] = "xxxx";
	char arr2[3] = "yy\0";

	strncpy( arr1, arr2, 2);

	printf( "arr1:%s\n", arr1 );
	printf( "arr1[3]:%d\n", arr1[3] );




}

