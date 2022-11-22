#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int sum = 0;
	char a[100];
	scanf("%s",&a);
	int i, j;
	int len = strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]-48>=0&&a[i]-48<=9)//如果是数 
		{
			sum = sum*10+(a[i]-48);
		}
	}
//	printf("%d", sum);
int t;
	if(sum==0){
		printf("0");
	} else{
		for(i=1;i<=sqrt(sum);i++)
		{
			if(sum%i==0)
			{
				sum=sum/i;
			}
			
		}
	printf("%d",sum);
	}
	return 0;
}
