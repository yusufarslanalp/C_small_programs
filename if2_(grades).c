#include <stdio.h> 

void
grade(float point);

double
main()
{	
	float point;	
	grade(point);
	
}
void
grade(float point)
{
	
	scanf("%f",&point);

	if (80<=point && point<=100)
		printf("A\n");
	
	else if(60<=point && point<=80)
		printf("B\n");

	else if(40<=point && point<=60)
		printf("C\n");

	else if(20<=point && point<=40)
		printf("D\n");

	else if(0<=point && point<=20)
		printf("F\n");

	else  printf("wrong format\n");
}
