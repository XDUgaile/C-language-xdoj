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
	i = 0;//ֵ����forѭ�������仯 
	j = 0;
	int state = 1, count = 0;//state������ʾɨ��·���������count���ڱ�Լ��ɨ������ָ��� 
	for(count = 0;count<n*n;count++)//����ת�۵㣬stateֵ�����仯������state���䣬�н����򱣳ֲ��� 
	{
		switch(state)//ɨ�����(��-->����-->��-->����-->��-->����-->��-->����-->��-->����-->��) 
		{
			case 1://���� 
				printf("%d ",a[i][j++]);		
//				printf("i=%d j=%d\n", i, j);
				if(i==0) state = 3;
				else if(i=n-1) state = 4;
				break;
			case 2://���� 
				printf("%d ",a[i++][j]);		
//				printf("i=%d j=%d\n", i, j);
				if(j==0) state = 4;
				else if(j==n-1) state = 3; 
				break;
			case 3://������ 
		  		printf("%d ",a[i++][j--]);		
//				printf("i=%d j=%d\n", i, j);
				if(j==0) state = 2;
				if(i==n-1) state = 1; 
				break;
			case 4://������ 
				printf("%d ",a[i--][j++]);	
//				printf("i=%d j=%d\n", i, j);
				if(i==0) state = 1;
				if(j==n-1) state = 2; 
				break;
		}
	}
	return 0;
}
