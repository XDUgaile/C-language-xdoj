#include<stdio.h>
int main()
{
	int year, month, day=31;
	scanf("%d %d", &year, &month);
	
	if(month == 4||month == 6||month == 9||month == 11)
	day=30;
	if(month == 2)
	day=28 + (year % 4 == 0 && year % 100 != 0|| year % 400 == 0);
	
	printf("%d",day);
	return 0;
}
