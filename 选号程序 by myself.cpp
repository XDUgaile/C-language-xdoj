#include<stdio.h>
#include<math.h> 
#include<string.h>
int issum(int sum,int num,int n)//算各位数之和 
{
	while(num!=0)
	{
		sum+=(num%10);
		num/=10;
		n++;
		
	} 
	return(sum);
//	printf("%d %d", sum, n);
}
int main()
{
	int x = 0;
	int i = 1;
	int sum = 0;
	int num = 0;
	int n = 0;
	int sum2 = 0;
	int t = 0;
	scanf("%d",&x);//总数 
	for(i=1; i<=x; i++)
	{
		scanf("%d",&num);
		sum = issum(sum,num,n);
		if(sum>sum2){
			t = num;
			sum2 = sum;
		} else if(sum == sum2){
			if(t>=num) 
			break;
			else if(t<num){
				t=num;
			}
		}
		sum = 0;//初始化sum 
	}
	printf("%d",t);
}
