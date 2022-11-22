#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
//输出的顺序不同 
int main()
{
	int m, n, i, j, k;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(k=0;k<j;k++){
		for(i=n-1;i>=0;i--){
			printf("%d ",a[i][k]);
		}
		printf("\n");
	}
	return 0;
}
