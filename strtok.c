#include <stdio.h>
#include <string.h>
int main()
{ 
	char arr[80] = "bu - yusufun strtok - fonksiyonunu anlatmasıdır.";
	char *token;	//token adında bir adres tanımlıyoruz.
	token = strtok(arr, "-"); //tokena arr adresini veriyoruz.-(tire) yi buluncaya kadar arr dan sonraki adresleri kontrol edip - yi bulunca - nin adresinr NULL koyuyoruz.
	while(token != NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL ,"-"); //son koyduğumuz NULL ın adresini token'a veriyouz.- görünceye kadar sonraki adresleri kontrol ediyorz.- gördüğümüz yere NULL koyuyoruz.
	}
	printf("%s\n",arr);
	int a;
	a=strlen(arr);
	printf("%d\n",a);
}
