#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[10], b[10], c[10];
	int len1, len2;
	int x = 0, i, y;
	scanf("%s", &a);
	if(a[0]>='0')//�����һ������������� 
	{
		len1 = strlen(a);	
		for(i=0;i<len1;i++){
			x = x*10+(a[i]-48);
		}
	}else{
	{
		scanf("%s %s", &b, &c);//����������������� 
		len1 = strlen(b);	
		len2 = strlen(c);
		for(i=0;i<len1;i++){
			x = x*10+(b[i]-48);
		}
		for(i=0;i<len2;i++){
			y = y*10+(c[i]-48);
		}
	}
	switch(a[0])
	{
		case'+':printf("%d",x+y);break;
		case'-':printf("%d",x-y);break;
		case'*':printf("%d",x*y);break;
		case'/':printf("%d",x/y);break;
		case'%':printf("%d",x%y);break;
	}
	return 0;
}
	scanf("%s",&b);// ����ڶ�������������� 
	if(b[0]>='0'){
		len2 = strlen(b);
		for(i=0;i<len2;i++)
		{
			y = y*10+(b[i]-48);
		}
	}else{
		scanf("%s",&c);//���������һ�������� 
		len2 = strlen(c);
		for(i=0;i<len2;i++)
		{
			y = y*10+(c[i]-48);
		}
		switch(b[0])
	{
		case'+':printf("%d",x+y);break;
		case'-':printf("%d",x-y);break;
		case'*':printf("%d",x*y);break;
		case'/':printf("%d",x/y);break;
		case'%':printf("%d",x%y);break;

	}
		return 0;
	}
	scanf("%s",&c);//���ǰ�����������֣�������һ���Ƿ��� 
	switch(c[0])
	{
		case'+':printf("%d",x+y);break;
		case'-':printf("%d",x-y);break;
		case'*':printf("%d",x*y);break;
		case'/':printf("%d",x/y);break;
		case'%':printf("%d",x%y);break;
	}
	return 0;
}

