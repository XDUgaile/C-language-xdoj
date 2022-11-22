#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h> 
int main()
{
	int m, n, i, j, a[100][100], flag = 1, max[100], min[100];
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	
	for(i=0;i<m;i++){//遍历行，找到每行最小的数并记录 
		min[i]=a[i][0];
		for(j=0;j<n;j++){
			if(a[i][j]<min[i]){
				min[i]=a[i][j];
			}
		}
	}
	
	for(j=0;j<n;j++){//遍历列，找到每列最大的数并记录 
		max[j]=a[0][j];
		for(i=0;i<m;i++){
			if(a[i][j]>max[j]){
				max[j]=a[i][j];
			}
		}
	} 
	for(i=0;i<m;i++){//if a[i][j]既是i行最小又是j列最大，则是马鞍点 
		for(j=0;j<n;j++){
			if(a[i][j]==max[j]&&a[i][j]==min[i]){
				printf("%d %d %d", i, j, a[i][j]);
				flag = 0;
			}
		}
	} 
	if(flag) printf("no");
	return 0;
}
