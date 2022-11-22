#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct student{
	char name[20];
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int sum;
}stu[100], t;

int main()
{
	int n, i, j;
	scanf("%d",&n);
	student stu[n], t;	
	for(i=0;i<n;i++){
		scanf("%s %d %d %d %d %d %d", &stu[i].name, &stu[i].num1, &stu[i].num2, &stu[i].num3, &stu[i].num4, &stu[i].num5, &stu[i].num6);
		stu[i].sum = stu[i].num1 + stu[i].num2 + stu[i].num3 + stu[i].num4 + stu[i].num5 + stu[i].num6;	
	}
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			if(stu[i].sum<stu[j].sum){		//比较总分 
				t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
			else if(stu[i].sum == stu[j].sum){	//总分相等比较附加题 
				if(stu[i].num6<stu[j].num6){
					t = stu[i];
					stu[i] = stu[j];
					stu[j] = t;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %d %d\n", stu[i].name, stu[i].sum, stu[i].num6);
	}
	return 0;
}
