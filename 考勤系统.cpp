#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct student{
	int num;
	int h1, h2;
	int min1, min2;
	int sum;
}stu[101], t;

int timer(int hour1,int minute1,int hour2, int minute2);

int main()
{
	student stu[101];
	student t;
	int i, j, k, n;
	int cnt = 0;
	scanf("%d", &n);
	for(i=0;i<101;i++)
	{
		stu[i].num = 0;
		stu[i].sum = 0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d", &k);
		if(stu[k].num==0)	cnt++;
		stu[k].num = k;
		
		scanf("%d:%d %d:%d", &stu[k].h1, &stu[k].min1, &stu[k].h2, &stu[k].min2);
		stu[k].sum += timer(stu[k].h1,stu[k].min1,stu[k].h2,stu[k].min2);
	}
	for(i=0;i<101;i++)
	{
		for(j=0;j<100;j++)
		{
			if(stu[j].sum<stu[j+1].sum||(stu[j].sum==stu[j+1].sum&&stu[j].num>stu[j+1].num))
			{
				t = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = t;
			}
		}
	}
	for(i=0;i<cnt;i++){
		printf("%d %d\n", stu[i].num, stu[i].sum);
	}
	return 0;
}

int timer(int hour1,int minute1,int hour2, int minute2)
{
	int count = 0, h = 0, min = 0;
	h = hour2 - hour1;
	min = minute2 - minute1;
	count = h*60 + min;
	return count;
}
