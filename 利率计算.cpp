#include<stdio.h>
#include<math.h>
int main()
{
	double r, p, n;
	scanf("%lf %lf", &r, &n);
	p = pow(1+r,n);
	printf("%.2lf", p);
	return 0;
}
