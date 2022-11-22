#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int data[20][20]={0};
	int a[50];
	int m, i, j, t;
	int line[20]={0}, column[20] = {0};
	int sum1 = 0, sum2 = 0;
	scanf("%d",&m);
	for(i = 0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	for(i=0;i<m;i++)//每行求和
	{
		for(j=0;j<m;j++)
		{
			line[i]+=data[i][j];
		 } 
	 }
	for(j=0;j<m;j++)//每列求和
	{
		for(i=0;i<m;i++)
		{
			column[j]+=data[i][j];
		 } 
	 }
	for(i=0;i<m;i++)//主对角线求和
	{
		sum1+=data[i][i];	  
	}
	for(i=m-1,j=0;j<m;i--,j++)//辅对角线求和
	{
		sum2+=data[i][j];
	}
	for(i=0;i<m;i++)//将每行元素和填入数组a 
	{
		a[i] = line[i];
	}
	for(j=0;j<m;j++)//将每列元素和填入数组a 
	{
		a[i] = column[j];
		i++;
	}
	a[2*m] = sum1;//将主对角线元素和填入数组a 
	a[2*m+1] = sum2;//将辅对角线元素和填入数组a 
/*	for (int i = 0; i < 2*m+1; i++){
		printf("%d ", a[i]);	
	}*/
	for (int i = 0; i < 2*m+1; i++)      //冒泡排序
		for (int j = 0; j < 2*m +1- i; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	for (int i = 0; i < 2*m+2; i++){
		printf("%d ", a[i]);	
	}
	printf("\n");
	return 0;
}
