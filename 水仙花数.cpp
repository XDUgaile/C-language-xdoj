#include<stdio.h>
#include<math.h> 
#include<string.h>

int function(int a, int b);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b); 
	function(a, b);
	return 0;
}

int function(int a, int b)
{
	int num, count, sum = 0, t = 0;
	int arr[5]={0};
	int i, j;
	for(i=a;i<=b;i++)
	{
		num = i;
		sum = 0;
		count = 0;
		for(j=0;num!=0;j++,count++)
		{
			arr[j] = num%10;
			num /= 10;
//			printf("arr[]=%d num=%d\n", arr[j],num);
		}
		for(j=0;j<count;j++)
		{
			sum += pow(arr[j],count);
//			printf("sum=%d\n",sum);
		}
		if(sum==i&&i>99){
			t++;		
			printf("i=%d\n",i);
		}

	}
	printf("%d", t);
	return 0;
}
