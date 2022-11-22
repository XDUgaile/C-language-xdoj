#include<stdio.h>
#include<math.h> 
#include<string.h>

int factorial(int x);

int main()
{
	int m, n;
	int t1, t2, t3;
	double sum = 0;
	scanf("%d %d", &m, &n);
	t1 = factorial(m);
	t2 = factorial(n);
	t3 = factorial(m-n);
	sum = t1/t2/t3;
	printf("%.2lf",sum);
	return 0;
}

int factorial(int x)
{
	int i;
	int fact = 1;
	for(i=1;i<=x;i++)
	{
		fact *= i;
//		printf("#%d\n",fact);
	}
//	printf("%d\n",fact); 
	return fact;
}
