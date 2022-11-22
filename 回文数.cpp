#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int count[10]={0};
	int x, i, n,sum1=0, sum2=0,t;
	scanf("%d", &x);
	t=x;
	for(i=1;x!=0;i++){
		count[i]=x%10;
		x/=10;
		n=i;
//		printf("%d %d\n", x, count[i]);
	} 

//	printf("n=%d",n);
	for(i=1;i<=n;i++){
		sum1 = sum1*10+count[i];
//		printf("sum1=%d ",sum1);	
	}
	if(t==sum1)
	{
//		printf("yes");
		for(i=1;i<=n;i++)
		{
			sum2 += count[i];
		}
		printf("%d", sum2);
	}else{
		printf("no");
	}
	return 0;
}
