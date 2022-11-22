#include<stdio.h>
#include<math.h> 
#include<string.h>

int fact(int x);

int main()
{
	int n;
	double t;
	scanf("%d",&n);
	fact(n);
	return 0;
}
int fact(int x)
{
	double sum = 0;
	int a[50]={0}, b[50]={0};
	a[0]=1, a[1]=2, a[2]=3;
	b[0]=1, b[1]=1, b[2]=2;
	int i;
	for(i=1;i<=x;i++)
	{
		if(i==1) {
			sum = 2;
		}
		if(i>1){ 
			a[i]=a[i-1]+a[i-2];//printf("a=%d\n",a[i]);
			b[i]=b[i-1]+b[i-2];//printf("b=%d\n",b[i]);
			sum +=	a[i]*1.0/b[i];	
		}
	}printf("%.2lf\n", sum);
	return sum;
}
