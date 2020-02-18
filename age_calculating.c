#include <stdio.h> 


int
theAge(int day,int month,int year,int today,int this_month,int this_year);
int
daysLeft(int day,int month, int today,int this_month);


int
main(void)
{	
	int day,month,year,today,this_month,this_year;
	
	printf("enter your year of  birthday");
	scanf("%d",&year);
	printf("enter your month of  birthday");
	scanf("%d",&month);
	printf("enter your day of  birthday");
	scanf("%d",&day);
	printf("enter year of  today");
	scanf("%d",&this_year);
	printf("enter  month of  today");
	scanf("%d",&this_month);
	printf("enter day of  today");
	scanf("%d",&today);
	
	printf("your age is: %d\n",theAge(day,month,year,today,this_month,this_year));
	
	printf("left days for your bithday is: %d\n",daysLeft(day,month,today,this_month));
	
}


int
theAge(int day,int month,int year,int today,int this_month,int this_year)
{


	int day_for_year;	
	int day_for_mounth;
	int day_for_day;
	int total_day;
	day_for_year = (this_year - year)*365;
	day_for_mounth = (this_month - month)*30;
	day_for_day = today - day;
	total_day = day_for_year + day_for_mounth + day_for_day;
	return (total_day/365);



}


int
daysLeft(int day,int month, int today,int this_month)
{
	int total_day_for_today;
	int total_day_for_birthday;	
	total_day_for_today = today + (this_month * 30);
	total_day_for_birthday = day + (month * 30);
	return (((total_day_for_birthday - total_day_for_today) + 365)%365);






}

