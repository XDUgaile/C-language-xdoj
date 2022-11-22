#include<stdio.h>
#include<math.h> 
#include<string.h>

int numberplus(int num);

int main()
{
	int x;
	scanf("%d",&x);
	numberplus(x);
	if(x>9)
	{
		x=numberplus(x);
	}
	printf("%d\n",x);
	return 0;
}
int numberplus(int num)
{
	return 1+(num-1)%9; 
}
