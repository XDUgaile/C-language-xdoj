#include<stdio.h>
#include<math.h> 
#include<string.h>

int isprime(int i);

int main()
{
	int x, i;
	scanf("%d",&x);
	isprime(x);
	return 0;
}

int isprime(int i)
{
	int ret = 1;
	int j;
	for(j=2;j<i;j++)
	{
		if(i % j == 0){
			ret = 0;
			break;
		}
	}
	if(ret==0){
		printf("no");
	}else{
		printf("yes");
	}
}
