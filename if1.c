#include <stdio.h>

int
main(void)
{

     int number;
     printf("please enter a number");
     scanf("%d",&number);
     if (number>100) printf("the number which you entered is more than hundred\n");
     else if (number<100) printf("the number which you entered is less than hundred\n");
     else printf("the number which you entered is equal to hundred\n");
return (0);
}
