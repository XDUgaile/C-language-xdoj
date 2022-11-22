#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct student{
	double score;
	int num;
	int sequence;
}stu1, t, stu2;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	student stu1[n], t, stu2[n];
	for(i=0;i<n;i++){
		scanf("%lf", &stu1[i].score); 	
		stu1[i].num = i+1;
	}
	for(i=0;i<n;i++){
		stu2[i].score = stu1[i].score;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(stu1[i].score>stu1[j].score){
				t = stu1[i];
				stu1[i] = stu1[j];
				stu1[j] = t;
			}
		}
	}
//	for(i=0;i<n;i++){
//		printf("%d\n", stu1[i].num);
//	}
	int k = 0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(stu1[j].score!=stu2[i].score){
				k++;
			}else{
				printf("%d", k+1);
				k=0;
				break;
			}	
		} 
		if(i!=n-1)	printf(" ");
	}
	return 0;
}
