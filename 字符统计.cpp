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
	if(n==1)//��Сд��һ�� 
	{
		char *p = strchr(str,c);//�����ַ� 
		for( ;p!=NULL;count++)
		{
			 p = strchr(p+1,c);//δ���������NULL 
		}
		printf("%d\n",count);
	}
	if(n==0)//��Сд��Ϊһ�� 
	{
		if(c>='A'&&c<='Z')//�ַ���ȫ���д 
		{
			strupr(str);
		}
		else if(c>='a'&&c<='z')//�ַ���ȫ��Сд 
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
