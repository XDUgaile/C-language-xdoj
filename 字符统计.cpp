#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h> 
int main()
{
	char c;
	int n,count = 0;
	char str[100];
	scanf("%c %d",&c, &n);
	scanf("%s",&str);
	if(n==1)//大小写不一致 
	{
		char *p = strchr(str,c);//搜索字符 
		for( ;p!=NULL;count++)
		{
			 p = strchr(p+1,c);//未搜索到输出NULL 
		}
		printf("%d\n",count);
	}
	if(n==0)//大小写视为一致 
	{
		if(c>='A'&&c<='Z')//字符串全变大写 
		{
			strupr(str);
		}
		else if(c>='a'&&c<='z')//字符串全变小写 
		{
			strlwr(str);
		} 
		char *p1 = strchr(str,c);
		for( ;p1!=NULL;count++)
		{
			 p1 = strchr(p1+1,c);
		}
		printf("%d\n",count);
	}
	return 0;
}
