#include<stdio.h>
int main()
{
	int amount, a, b, c, d, e, f;
	scanf("%d",&amount);
	a=amount/100;
	b=(amount%100)/50;
	c=(amount%50)/20;
	d=(amount-100*a-50*b-20*c)/10;
	e=(amount-100*a-50*b-20*c-10*d)/5;
	f=(amount-100*a-50*b-20*c-10*d-e*5);
	printf("%d %d %d %d %d %d ", a, b, c, d, e, f);
	return 0;
}
