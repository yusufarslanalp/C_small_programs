#include <stdio.h> 												

int
main(void)
{	int operation_num;
	printf("enter the number of operation that you want to do\n" );
	printf("1: addition\n");
	printf("2: subtraction\n");
	printf("3: multiplication\n");
	printf("4: division\n");
	scanf("%d",&operation_num);
	switch (operation_num)
  {
	int first_num,
		second_num;
	case 1 :
		printf("enter the first number that you want to add:");
		scanf("%d",&first_num);
		printf("enter the second number:");
		scanf("%d",&second_num);
		printf("the result of additon operation is: %d\n",first_num + second_num);
		break;
	case 2 :
		printf("enter the first number that you want to subtract:");
		scanf("%d",&first_num);
		printf("enter the second number:");
		scanf("%d",&second_num);
		printf("the result of subtraction operation is: %d\n",first_num - second_num);
		break;

	case 3 :
		printf("enter the first number that you want to multiply:");
		scanf("%d",&first_num);
		printf("enter the second number:");
		scanf("%d",&second_num);
		printf("the result of multiplication operation is: %d\n",first_num * second_num);
		break;

	case 4 :
		printf("enter the first number that you want to divide:");
		scanf("%d",&first_num);
		printf("enter the second number:");
		scanf("%d",&second_num);
		printf("the result of division operation is: %d\n",first_num / second_num);
		break;

	default :
		printf("invalid command");
		break;

  }
}
/*switch parametreye verdiğimiz değerdeki case e gider.break kullanmazsak C break görenekadar tüm caselerdeki durumları okur.default case ler harcindeki tüm durumlar i.in okunacak değerdir.case değerlerine sadece int değer konulur.case değerlerinde aralık kullanılamaz. */
