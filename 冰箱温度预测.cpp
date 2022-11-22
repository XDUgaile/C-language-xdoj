#include<stdio.h>
int main()
{
	int h, m;
	double t;
	scanf("%d %d",&h, &m);
	t = h + m/60.0;
	printf("%.2lf",(4*t*t)/(t+2)-20);
	 
	return 0;
}
