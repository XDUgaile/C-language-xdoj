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
	for(i=0;i<m;i++)//ÿ�����
	{
		for(j=0;j<m;j++)
		{
			line[i]+=data[i][j];
		 } 
	 }
	for(j=0;j<m;j++)//ÿ�����
	{
		for(i=0;i<m;i++)
		{
			column[j]+=data[i][j];
		 } 
	 }
	for(i=0;i<m;i++)//���Խ������
	{
		sum1+=data[i][i];	  
	}
	for(i=m-1,j=0;j<m;i--,j++)//���Խ������
	{
		sum2+=data[i][j];
	}
	for(i=0;i<m;i++)//��ÿ��Ԫ�غ���������a 
	{
		a[i] = line[i];
	}
	for(j=0;j<m;j++)//��ÿ��Ԫ�غ���������a 
	{
		a[i] = column[j];
		i++;
	}
	a[2*m] = sum1;//�����Խ���Ԫ�غ���������a 
	a[2*m+1] = sum2;//�����Խ���Ԫ�غ���������a 
/*	for (int i = 0; i < 2*m+1; i++){
		printf("%d ", a[i]);	
	}*/
	for (int i = 0; i < 2*m+1; i++)      //ð������
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
