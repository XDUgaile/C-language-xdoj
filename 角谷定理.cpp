#include<stdio.h>
int main()
{
	int count = 0;
	int number;
	scanf("%d",&number);
	while(number != 1){
		if(number % 2 == 0){
			number = number / 2;
		}else {
			number = 3 * number + 1;
		}
		count++;
	}
	printf("%d",count);
	return 0;
}
