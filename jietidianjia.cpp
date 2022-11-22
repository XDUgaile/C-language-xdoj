#include<stdio.h>
int main()
{
	float amount,money;
	scanf("%f",&amount);
	float a = 0.5;
	float b = 0.55;
	float c = 0.7;
	if(amount>210){
		money = (amount-210)*c+110;
		printf("%.2f",money);
	}
	if(amount<=210&&amount>110){
		money = (amount-110)*b+55;
		printf("%.2f",money);
	}
	if(amount<=110){
		money = amount*a;
		printf("%.2f",money);
	}
	return 0;
	
}
