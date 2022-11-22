#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

typedef struct window{
	int x1, x2, y1, y2;
	int num;
}w[10], t; 

int main()
{
	window w[10], t;//结构声明 
	int n, m, c[10][2]={0};
	scanf("%d %d", &n, &m);
	int i, j, k;
	int flag = 0;
	for(i=n-1;i>=0;i--)
	{
		scanf("%d %d %d %d", &w[i].x1, &w[i].y1, &w[i].x2, &w[i].y2);//赋值给(x1,y1) (x2,y2) ;
		w[i].num = n-i;	
	}
	for(i=0;i<m;i++)
	{
		scanf("%d %d", &c[i][0], &c[i][1]);
	}
	for(i=0;i<m;i++)
	{
		flag = 0;//flag初始化 
		for(j=0;j<n;j++)
		{
			if((c[i][0]>=w[j].x1&&c[i][0]<=w[j].x2)&&
			(c[i][1]>=w[j].y1&&c[i][1]<=w[j].y2))
			{
				flag = 1;//if flag==1 则证明点在此窗口内 
				printf("%d\n",w[j].num);
				t = w[j];//为了使此窗口移动至顶层，其他窗口依次下移 
				for(k=j;k!=0;k--){
					w[k] =w[k-1];
				}
				w[0] = t;
				break;
			}
		}
		if(flag == 0){
			printf("IGNORED\n");
		}
	}
	return 0;
}
