#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h>
void isprime(int x); 
int main()
{
	int n, i, t;
	int a[50]={0};
	a[0]=1,a[1]=1;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
//		printf("%d\n",a[i]);
		t = a[i];
	}

//	printf("%d",t);
	isprime(t);
	return 0;
}
void isprime(int x)
{
	
	int i, j;
	int ret = 1;
	for(i=2;i<x;i++)
	{
		if(x%i==0){
			ret = 0;
			break;
		}
	}
	if(ret == 1){
		printf("Yes");
	}else{
		printf("%d",x);
	}
	
}
