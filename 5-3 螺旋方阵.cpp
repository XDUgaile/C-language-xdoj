#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int n, i, j, x = 0, y = 0, k = 1;
	scanf("%d", &n);
	int a[n][n], c = n-1;
	for(i=0;i<n/2;i++){
		for(j=0;j<c;j++)	a[x][y++]=k++;//	printf("%d\n",a[x][y]);
		for(j=0;j<c;j++)	a[x++][y]=k++;//	printf("%d\n",a[x][y]);
		for(j=0;j<c;j++)	a[x][y--]=k++;//	printf("%d\n",a[x][y]);
		for(j=0;j<c;j++)	a[x--][y]=k++;//	printf("%d\n",a[x][y]);
		x++;y++;c-=2;
	}
	if(n%2)	a[n/2][n/2] = k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
