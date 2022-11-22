#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

void sort(int x[], int n);
void print(int x[], int n);

int main()
{
	int sum = 0;
	char a[100];
	scanf("%s",&a);
	int i, j;
	int len = strlen(a);
	int b[10]={0}, n=0;
	int flag=0;
	for(i=0,j=0;i<len;i++)
	{
		if(a[i]-48>=0&&a[i]-48<=9)//如果是数 
		{
			sum = sum*10+(a[i]-48);
			flag=1;
		}
		if(flag==1&&(a[i+1]-48<0||a[i+1]-48>9))//前面是数，后面是字母 
		{
			b[j]=sum;//printf("#%d",sum);
			sum = 0;
			n = j;
			j++;
			flag = 0;
		}
	}
//	printf("%d %d", n, j); 
	sort(b,n+1);
	print(b,n+1);
	return 0;
}

void sort(int x[], int n)//选择排序 
{
	int i, j, k, t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(x[k]<x[j]){
				k=j;
			}
			if(k!=i){
				t=x[i],x[i]=x[k],x[k]=t;
			}
		
	}
}
void print(int x[], int n)
{ 
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
}
