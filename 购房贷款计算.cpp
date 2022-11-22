#include<stdio.h>
#include<math.h>
int main()
{
	double p, d, m, r;
	scanf("%lf %lf %lf", &d, &p, &r);
//	d=300000; p=6000; r=0.01;
	m = (log(p)-log(p-d*r))/log(1+r);
	printf("%.2lf", m);
	return 0;
}
