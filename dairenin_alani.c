

#include <stdio.h>
#define PI 3.14
int
main(void)
{
	double r,
		   dairenin_alani;     

	printf("daiernin yari capini giriniz");	
	scanf("%lf",&r);	
	dairenin_alani = PI*r*r;
    printf("daiernin alani%f cm2'dir\n",dairenin_alani);

return (0);
}
