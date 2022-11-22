#include<stdio.h>
int main()
{
	int a, b, c, d, max1, max2, max;
	
	scanf("%d %d %d %d",&a, &b, &c, &d);
	if(a>b) 	{
		max1=a;
	}else	{
		max1=b;
	}
	if(c>d) 	{
		max2=c;
	}else	{
		max2=d;
	}	if(max1>max2) 	{
		max=max1;
	}else	{
		max=max2;
	}
	printf("%d",max);
	return 0;

}
