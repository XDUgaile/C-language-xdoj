#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int n, m, c;
	scanf("%d %d %d", &n, &m, &c);
	char a[21][21];//��֤������һ������ĩβ'\0' 
	int i, j;
	for(i=0;i<n;i++)
	{
		scanf("%s", a[i]);//���ַ�������ʽ���� 
	}
	int cnt = 0;
	for(i=0,j=c-1;i>=0&&i<n&&j>=0&&j<m;){
		if(a[i][j]==1)//if��1֤������ѭ�� 
		{
			printf("loop %d",cnt);
			goto exit;//��һ���ھ�goto��ĩβ 
		}
		else if(a[i][j]=='W'){	a[i][j]=1;		j--;	cnt++;}	
		else if(a[i][j]=='S'){	a[i][j]=1;		i++;	cnt++;} 
		else if(a[i][j]=='E'){	a[i][j]=1;		j++;	cnt++;} 
		else if(a[i][j]=='N'){	a[i][j]=1;		i--;	cnt++;} 
	} 
	printf("out %d",cnt);
exit:
	return 0;
}
