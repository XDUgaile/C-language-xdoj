#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct people
{
	char name[10];
	int year;
	int month;
	int day;
}men[100000], temp;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	int t = n;
	people men[n], temp;
	for(i=0;i<n;i++){
		scanf("%s %d/%d/%d", &men[i].name, &men[i].year, &men[i].month, &men[i].day);
	}
	for(i=0;i<t;i++){
		if(men[i].year>2021){		//��δ���� 
			n--;
			men[i].year = -1;
			continue;	
		}
		else if((men[i].year==2021)&&(men[i].month>1)){	//��δ���� 
			n--;
			men[i].year = -1;	
			continue;	
		}
		else if((men[i].year==2021)&&(men[i].month==1)&&(men[i].day>9)){	//��δ���� 
			n--;
			men[i].year = -1;	
			continue;	
		}
		else if(men[i].year<1821){		//�������200������������ 
			n--;
			men[i].year = -1;	
			continue;	
		}
		else if((men[i].year==1821)&&(men[i].month==1)&&(men[i].day<9)){ //�������200������������ 
			n--;
			men[i].year = -1;	
			continue;	
		} 
	}
	for(i=0;i<t-1;i++){
		for(j=0;j<t-i-1;j++){
			if(men[i].year<men[i+1].year){	//��ݴ������С 
				temp = men[i];
				men[i] = men[i+1];
				men[i+1] = temp;
			}
		}
	}
	if(n>0){
		printf("%d\n", n);
		printf("%s\n", men[n-1].name);		//�����ϵ� 
		printf("%s\n", men[0].name);		//������� 
	}
	else{
		printf("0");
	}
	return 0;
}
