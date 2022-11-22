#include<stdio.h>
#include<math.h>
typedef struct
{
	int num;
	int x;
	int y;
}Node;
double GetDistance(Node n1,Node n2)		//��������� 
{
	double d;
	int dx,dy;
	dx = n1.x-n2.x;
	dy = n1.y-n2.y;
	d = sqrt(dx*dx + dy*dy);
	return d;
}
double GetSum(Node nd[],int n,int i)	//������ 
{
	double sum = 0;
	int j;
	for(j=1;j<n;j++)
		sum += GetDistance(nd[j],nd[i]);	//��ÿ���㵽�õ���ܾ��� 
	return sum;
}
int main()
{
	int n,a,b;
	scanf("%d",&n);
	int i;
	Node nd[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&nd[i].num,&nd[i].x,&nd[i].y);
	}
	
	double curD,minD=0;
	int minIndex = 1;
	minD = GetSum(nd,n+1,1);			//��1���sum 
	
	for(i=2;i<=n;i++)					//��֮����sum 
	{
		curD = GetSum(nd,n+1,i);		//�Ƚϴ�С 
		if(curD <= minD)
		{
			minD = curD;
			minIndex = i;
		}
	}
	
	printf("%d %.2f\n",minIndex,minD);
	return 0;
}
