#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int a[100][100]={0};//用来记录原始数据 
	int b[100][100]={0};//用来消除 
	int m, n, i, j;
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j] = a[i][j];
			
		}
	}
//	消除行 
	for(i=0;i<n;i++){
		for(j=1;j<m-1;j++)
		{
			if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j-1]){
				b[i][j-1]=0;
				b[i][j]=0;
				b[i][j+1]=0;
			} 
		}
	} 
//	消除列
	for(j=0;j<m;j++){
		for(i=1;i<n-1;i++)
		{
			if(a[i-1][j]==a[i][j]&&a[i][j]==a[i+1][j])
			{
				b[i][j]=0;
				b[i-1][j]=0;
				b[i+1][j]=0;
			}
		}
	} 
//	遍历输出
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	} 
 
	return 0;
}
