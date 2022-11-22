/*�����������������1-ѡ��������Ȼ���Ǵ�ѡ���ĵ�n����n�� 1
�����߽��бȽϣ������С��
���Ǳ��⻹��һ��˼·��
�����ܾ��룬Ȼ����1��ָ������룬�������
���������1��ָ����ľ�����бȽϣ������С�� */ 
#include<stdio.h>
#include<math.h>
typedef struct
{
	int num;
	int x;
	int y;
}Node;
double GetDistance(Node n1,Node n2)
{
	double d;
	int dx,dy;
	dx = n1.x-n2.x;
	dy = n1.y-n2.y;
	d = sqrt(dx*dx + dy*dy);
	return d;
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
	
	double sum = 0;
	for(i=1;i<n;i++)
	{
		sum += GetDistance(nd[i],nd[i+1]);
	}
	sum += GetDistance(nd[n],nd[1]);
	
	while(1)
	{
		scanf("%d %d",&a,&b);
		if(a==0 && b==0)
			break;
		if(a>b)
		{
			int temp;
			temp = a;
			a = b;
			b = temp;
		}
		int i;
		double dis=0,dis1;
		for(i=a;i<b;i++)
		{
			dis += GetDistance(nd[i],nd[i+1]);
		}
		
		dis1 = sum-dis;
		if(dis<dis1)
			printf("%.2f\n",dis);
		else
			printf("%.2f\n",dis1);
	}
	return 0;
}
