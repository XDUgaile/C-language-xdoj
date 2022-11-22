#include<stdio.h>
#include<math.h> 
#include<string.h>

int trans(int x);

int main()
{
	int num, t;
	scanf("%x",&num);
	trans(num);
	return 0;
}
int trans(int x)
{
	printf("%u",x);
}
