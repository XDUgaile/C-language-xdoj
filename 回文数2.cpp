#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int a[10], i, sum = 0, num1, j, t = 0,num2;
	int flag = 1;
	scanf("%d", &num1);
	num2 = num1;
	for(i=0;num1!=0;i++){
		a[i] = num1%10;
		sum += a[i];
		num1 /= 10;
	}
	for(j=0;j<i;j++){
		t = a[j] + t*10;
	}
	if(t == num2){
		printf("%d", sum);
	}
	else{
		printf("no");
	}
	return 0;
}
