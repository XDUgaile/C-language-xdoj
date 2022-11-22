#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
 	int a[100][100], i, j, m, n;
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++){	//遍历输入数组 
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	} 
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}

	int min1[m], min2[n];
	
	for(i=0;i<m;i++){	//遍历行找最小值 
		min1[i] = a[i][0];
		for(j=1;j<n;j++){
			if(a[i][j]<min1[i]){
				min1[i] = a[i][j];
			}
		}	//printf("%d\n", min1[i]); 
	} 

	for(j=0;j<n;j++){	//遍历列找最小 
		min2[j] = a[0][j];	
		for(i=1;i<m;i++){
			if(a[i][j]<min2[j]){
				min2[j] = a[i][j];
			}
		}	//printf("%d\n", min2[j]);
	} 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==min1[i]&&a[i][j]==min2[j]){
				printf("%d %d %d\n", i, j, a[i][j]);
			}
		}
	}
	return 0;
}
