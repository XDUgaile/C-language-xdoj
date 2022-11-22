#include<stdio.h>
int main()
{
	int a, b, min, max;
	
	scanf("%d %d", &a, &b);
	if(a>b){
		min=b;max=a;
	}else{
		min=a;max=b;
	}
	
	int ret = 0;
	int i;
	for ( i = 1; i < min; i++){
		if( a%i ==0 && b%i ==0){
			ret = i;
		}
	}
	
	int t = max;
	int acg = 0;
	for ( t; ; t++){
		if( t%a ==0 && t%b ==0){
			acg = t;
			break; 
		}
	}
//	printf("%d和%d的最大公约数是%d.\n", a, b, ret);	
	printf("%d %d", ret, acg);
	return 0;
}
