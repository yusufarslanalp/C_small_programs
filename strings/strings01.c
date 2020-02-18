#include <stdio.h>
#include <string.h>

/* str array'i aşağıda görüldüğü gibi initialize edilirken gereken boşluk bırekılırsa( 20 lik arraye 19 karakter yazılması ) C dili null karakterini otomatik olarak stringin sonuna ekliyicektir.

!! ancak str[20] arrayinde initialize edilirken 20 sayısı yazılmasada str const olmadı ve str[] arrayindeki değerleri değiştirebildik. Genede işi garantiye almak herzaman iyidir. !!

***Görüldüğü üzere x karakterleriyle dolu str arry'ine scanf'le string alındığında scanf gereken yere otomatik olarak null karakterini yerleştirdi.***

Görüldüğü üzere str aray'i x karakterleriyle dolu olmasına rağmen strcpy fonksiyonu gereken yere null karakterini eklemiştir.

*/



int
main(void)
{
	char str[20] = "xxxxxxxxxxxxxxxxxxx"; //19 adet x karakteri var. son karakter null karakteri için boş bırakıldı.
	printf( "str[19]: %d\n", str[19] );

	printf( "str adresinine girmek istediğiniz stringi yazın: " );
	scanf("%s",str);
	printf("str:%s\n",str);

//********************************************************************************************************************//

	strcpy( str, "abdullah" );
	printf("strcpy den sonta str :%s\n",str);
	printf( "str[8](int): %d\n", str[8] );
	printf( "str[9]: %c\n", str[9] );


//********************************************************************************************************************//

	char string[] = "yusuf";
	string[2] = 'u';
	printf( "string: %s\n", string );

//********************************************************************************************************************//

	char *c = "ali";
	printf( "c: %s\n", c );
	//c[0] = 'i'; Soldaki ifade const bir değeri değiştirmek istediğimiz için core dump hatası veriyor.
	

}
