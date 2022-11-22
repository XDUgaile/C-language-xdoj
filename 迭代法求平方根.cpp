#include<stdio.h>
#include<math.h> 
int main()
{
	double x=1.0, x1;
	int a;
	scanf("%d", &a);
	do{
		x1 = x;
		x=0.5*(x1+a/x1);
	} while(fabs(x-x1)>0.00001);
	printf("%.5lf", x);
	return 0;
}
