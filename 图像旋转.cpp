#include<stdio.h>
#include<math.h> 
#include<string.h>
//放的顺序不同 
int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int a[m][n]={0};
	for(j=n-1;j>-1;j--)
	{
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i][j]);
//			printf("%d ",a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}
