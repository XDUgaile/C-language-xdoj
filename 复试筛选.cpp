#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct 
{
	char num[20];
	int allscore;
	int english;
}student;

int main()
{	
	student l[200], t;
 	int m, n, i, j;
	scanf("%d %d",&m, &n);
	for(i=0;i<m;i++){
		scanf("%s %d %d",&l[i].num,&l[i].allscore,&l[i].english);
	}	
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(l[j].allscore < l[j+1].allscore){
				t = l[j];
				l[j] = l[j+1];
				l[j+1] = t; 
			}else if(l[j].allscore == l[j+1].allscore){
				if(l[j].english < l[j+1].english){
				t=l[j];
				l[j] = l[j+1];
				l[j+1] = t; 
				}else if(l[j].english == l[j+1].english){
					if(l[j].num > l[j+1].num){
						t = l[j];
						l[j] = l[j+1];
						l[j+1] = t; 	
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %d %d",l[i].num,l[i].allscore,l[i].english);
		if(i!=n-1)	printf("\n");
	}
	return 0;
	
}
