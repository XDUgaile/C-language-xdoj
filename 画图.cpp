#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h> 
int main()
{
	int a[101][101]={0}, i, j, t, num, sum = 0;
	int x1, x2, y1, y2;
	scanf("%d", &num);
	for(t=0;t<num;t++){
		scanf("%d %d", &x1, &y1);
		scanf("%d %d", &x2, &y2);
		
		for(i=x1;i<x2;i++)
		{
			for(j=y1;j<y2;j++)
			{
				a[i][j]=1;
			}
		}
	}
	for(i=0;i<101;i++){
		for(j=0;j<101;j++){
			if(a[i][j]==1){
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
