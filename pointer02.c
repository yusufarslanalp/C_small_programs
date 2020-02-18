#include <stdio.h>
#define PI 3.14
void
radius_of_circle(double circumference,double *radius);

double
area_of_circle(double radius,double *area_circle);

int
main(void)
{
	
	double circumference,rds,areeea_circle;
	scanf("%lf",&circumference);
	radius_of_circle(circumference,&rds);
	area_of_circle(rds,&areeea_circle);
	printf("%f\n",areeea_circle);
}


void
radius_of_circle(double circumference,double *radius)
{

	*radius = circumference/(2*PI);

}
double
area_of_circle(double radius,double *area_circle)
{
	*area_circle=radius * radius * PI;
}
