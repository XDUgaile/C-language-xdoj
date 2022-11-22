#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i, p, sum = 0;
	int t1=0, t2=0, t3=0, t4=0, t5=0, t6=0;//记得初始化 
	for(i=0;i<n;i++){
		scanf("%d",&p);
		if(p>=0&&p<=50) t1++;
		else if(p>=51&&p<=100) t2++;
		else if(p>=101&&p<=150) t3++;
		else if(p>=151&&p<=200) t4++;
		else if(p>=201&&p<=300) t5++;
		else if(p>300) t6++;
		sum+=p;
	}
	double t = sum*1.0/n;
	printf("%.2lf\n",t);
	printf("%d %d %d %d %d %d", t1,t2,t3,t4,t5,t6);
	return 0;
}
