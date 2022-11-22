#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	if(a + b > c && a + c > b && b + c > a ){
		printf("%d",a + b + c);
	}else{
		printf("No");
	}
	return 0;
}
