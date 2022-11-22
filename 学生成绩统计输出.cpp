#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct student
{
	int num;
	char name[10];
	double aver;
	int score1;
	int score2;
	int score3;
}stu[], t;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	student stu[n], t;
	for(i=0;i<n;i++){
		scanf("%d %s %d %d %d", &stu[i].num, &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
		stu[i].aver = (stu[i].score1+stu[i].score2+stu[i].score3)*1.0/3;
	//	printf("%.1lf", stu[i].aver);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(stu[j].aver<stu[j+1].aver){
				t = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = t;
				
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %s %.1lf\n", stu[i].num, stu[i].name, stu[i].aver);
	}
	return 0;
}

