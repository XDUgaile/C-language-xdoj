#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i;
	int k[40]={0};	//最多对应32位 
	for(i=0;a!=0;i++){
		k[i] = a%b;
		a /= b;
	}
	for(i--;i>=0;i--){ //经过一轮循环后，i的值会多一位，所以先得减一，不然就会多出一个0在开头 
		printf("%d", k[i]);
	}
	return 0;
}
