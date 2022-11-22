#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct file1
{
	int year;
	int month;
	int day;
	long int size;
}file[], t;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	file1 file[n], t;
	for(i=0;i<n;i++){
		scanf("%d/%d/%d %ld", &file[i].year, &file[i].month, &file[i].day, &file[i].size);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(file[j].year<file[j+1].year){
				t = file[j];
				file[j] = file[j+1];
				file[j+1] = t;
			}else if(file[j].year==file[j+1].year){//年份相等 
				if(file[j].month<file[j+1].month){//year same,but month not same
					t = file[j];
					file[j] = file[j+1];
					file[j+1] = t;	
				}else if(file[j].month==file[j+1].month){//year and month same
					if(file[j].day<file[j+1].day){//day not same
						t = file[j];
						file[j] = file[j+1];
						file[j+1] = t;	
					}else if(file[j].day==file[j+1].day)//year,month and day same,but size not same
						if(file[j].size<file[j+1].size){
							t = file[j];
							file[j] = file[j+1];
							file[j+1] = t;
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d/%d/%d %ld\n", file[i].year, file[i].month, file[i].day, file[i].size);
	}
	return 0;
}
