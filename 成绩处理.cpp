#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

double aver(double s);
int fals(double *p,int m);
int well(double *p1, int num);

int main()
{
	double stu[5][4], sum = 0, average = 0;
	int i, j, fail, number;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			scanf("%lf", &stu[i][j]);
		}
	}
	for(i=0;i<5;i++)
	sum += stu[i][0];
	average = aver(sum);
	fail = fals(*stu,20);
	number = well(*stu,20);
	printf("%.1lf %d %d", average, fail, number);
	return 0;
}

double aver(double s)
{
	return(s/5);
}
int fals(double *p,int m)
{
	int i = 0, n = 0, c = 0, flag = 0;
	double *p_end;
	p_end = p+m;
	for(;p<p_end;p++){
		i++;
		if(*p<60)	n++;
		if(n>=2&&flag==0){
			flag = 1;
			c++;
		}
		if(i%4==0){
			n=0;
			flag=0;
		}
	} 
	return (c);
}
int well(double *p1, int num)
{
	double allscore = 0, average;;
	int i = 0,cnt = 0, f=0;
	double *p1_end;
	p1_end=p1+num;
	for(;p1<p1_end;p1++){
		i++;
		if(*p1<85) f=1;
		allscore += *p1;
		if(i%4==0){
			average = allscore/4;
			if((average >= 90)||(f==0))	cnt++;
			f=0;
			allscore = 0;
		}
	}
	return (cnt);
}
