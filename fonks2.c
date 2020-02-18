#include <stdio.h>
#define PI 3.14

double
area_of_circle(double radius);

double
radius_of_circle(double circumference);

int
main(void)
{
	
	double radius,circumference;
	
    printf("enter the circle that you whant to know it's area:");
	scanf("%lf",&circumference);
	printf("the are of the circle that you vant to know is:%f",radius_of_circle(circumference));
}
double
area_of_circle(double radius)
{
	return(radius * radius * PI);
}
double
radius_of_circle(double circumference)
{
	double radius;
	radius = circumference/(2*PI);
	return(area_of_circle(radius));
}
