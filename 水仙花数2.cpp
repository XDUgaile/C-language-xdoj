#include<stdio.h>
#include<math.h>
int function(int a, int b)
{
	int sum = 0, i, j, t = 0;
	int arr[5] = {0};
	for(i=a;i<=b;i++){
		int num = i;
		int count = 0;
		for(j=0;num!=0;j++,count++){
			arr[j] = num%10;
			num/=10;
		}
		for(i=0;i<count;i++){
			sum = pow(arr[i], count);
		}
		if(sum == i&&count>=3){
			t++;
		}
	}
	return t;
} 
