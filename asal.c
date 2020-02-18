#include <stdio.h>
int
main(void)
{
	int x,
		i,
		a;

	x=1;
	scanf("%d",&a);
 

	if(a>1)
	{
		for (i=2;i<a;i++)
		{
			if(a%i==0)
			{ 
				i=a;
				x=0;
			}
		}
	}
	else x=0;
	if (x==1) printf("girdiğiniz sayı asal");
	else printf("girdiğiniz sayı asal değil");
}
