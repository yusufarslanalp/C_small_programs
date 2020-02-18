#include <stdio.h>
#define PI 3.14
double daire_cevresi(double r);
int
main(void)
{	
	double r;
	printf("dairenin yari capini giriniz");	
	scanf("%lf",&r);
	printf("dairenin alani %fdir\n",daire_cevresi(r));

return (0);
}
double
daire_cevresi(double r)
{
	double kare;
	kare = r*r;
	return(kare*PI);




}
