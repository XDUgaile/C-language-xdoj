#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int year, month, day, num = 0;
	int i;
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31,30, 31, 30 ,31,};
	scanf("%d %d %d", &year, &month, &day);
	if((year%4==0)&&(year%100!=0)||(year%400==0)){			//ÅĞ¶ÏÈòÄê 
			a[1]++;
	} 
	for(i=0;i<month-1; i++){
		num += a[i];
	}
	num+=day;
	printf("%d", num);
	return 0;
}
