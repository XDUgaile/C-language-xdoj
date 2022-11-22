#include<stdio.h>
int main()
{	
	int x;
	int n = 0;
	scanf("%d",&x);
	int min = 0x7ffffff;
	int max = 0;
	
	do
{
	
	min = min > x % 10 ? x % 10 : min;
	max = max < x % 10 ? x % 10 : max;
		x /= 10;
		n++;
}	while ( x!=0 );

	printf("%d %d %d", n, max, min);
	return 0;
}
