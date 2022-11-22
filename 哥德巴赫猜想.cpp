#include<stdio.h>
#include<math.h> 
#include<string.h>

int function(int x);

int main()
{
	int i, x;
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(function(i)&&function(x-i))
		{
			printf("%d %d",i,x-i);
			break;
		}
	}	
	return 0;
}

int function(int x)
{
	int i,flag=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0) flag = 0;
	}
	return flag;
}
