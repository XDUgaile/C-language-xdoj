#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

double fact(int x);
int main()
{
	double  x1, x2 = 1, i, factor = 1;
	double sum = 0, t = 1;
	
	scanf("%lf", &x1);
	for(i=1;t>=0.00001||t<=-0.00001;i+=2){
		for(int j=0;j<i;j++){
			x2*=x1;
		}
		t = x2*1.0/fact(i)*factor;
		printf("%lf\n", t);
		factor *= -1;
		sum+=t;
		x2 = 1;
	} 
	printf("%lf", sum);
	return 0;
}
double fact(int x)
{
	double i;
	double result = 1;
	for(i=x;i!=1;i--){
		result *= i;
	}
	printf("r=%lf\n", result);
	return result;
}
