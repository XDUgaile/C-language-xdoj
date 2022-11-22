#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct student{
	int number;
	int score1;
	int score2;
	int score3;
	char name[10];
	double average;
}stu[101], t;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	student stu[101];
	student t;
	for(i=0;i<n;i++) {
		scanf("%d %s %d %d %d", &stu[i].number, &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
		stu[i].average = stu[i].score1 + stu[i].score2 + stu[i].score3;
		stu[i].average /= 3;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(stu[j].average<stu[i].average){
				t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}else if(stu[j].average==stu[i].average){
				if(stu[i].number>stu[j].number){
					   	t = stu[i];
					stu[i] = stu[j];
					stu[j] = t;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %s %.1lf\n", stu[i].number, stu[i].name, stu[i].average);
	}
	return 0;
}
