#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int n, m, c;
	scanf("%d %d %d", &n, &m, &c);
	char a[21][21];//保证列数多一以满足末尾'\0' 
	int i, j;
	for(i=0;i<n;i++)
	{
		scanf("%s", a[i]);//以字符串的形式输入 
	}
	int cnt = 0;
	for(i=0,j=c-1;i>=0&&i<n&&j>=0&&j<m;){
		if(a[i][j]==1)//if有1证明进入循环 
		{
			printf("loop %d",cnt);
			goto exit;//单一出口就goto到末尾 
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
