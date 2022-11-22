#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int n, a[100][100];
	int i, j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	i = 0;//值经过for循环后发生变化 
	j = 0;
	int state = 1, count = 0;//state用来表示扫描路径的情况；count用于被约束扫描的数字个数 
	for(count = 0;count<n*n;count++)//如遇转折点，state值发生变化，否则state不变，行进方向保持不变 
	{
		switch(state)//扫描规律(右-->左下-->下-->右上-->右-->左下-->右-->右上-->下-->左下-->右) 
		{
			case 1://向右 
				printf("%d ",a[i][j++]);		
//				printf("i=%d j=%d\n", i, j);
				if(i==0) state = 3;
				else if(i=n-1) state = 4;
				break;
			case 2://向下 
				printf("%d ",a[i++][j]);		
//				printf("i=%d j=%d\n", i, j);
				if(j==0) state = 4;
				else if(j==n-1) state = 3; 
				break;
			case 3://向左下 
		  		printf("%d ",a[i++][j--]);		
//				printf("i=%d j=%d\n", i, j);
				if(j==0) state = 2;
				if(i==n-1) state = 1; 
				break;
			case 4://向右上 
				printf("%d ",a[i--][j++]);	
//				printf("i=%d j=%d\n", i, j);
				if(i==0) state = 1;
				if(j==n-1) state = 2; 
				break;
		}
	}
	return 0;
}
