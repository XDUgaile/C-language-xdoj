#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int i, j, num,len;
	char a[50],b[100];//char���ͣ�����ASCII����Ϊֵ�������� 
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			if(a[i+1]>='0'&&a[i+1]<='9')//1.��ĸ������ʮλ�� 
			{
				num = (a[i]-48)*10+a[i+1]-48;
				for(j=0;j<num-1;j++)//�����һ�� ������� 
				{
					printf("%c",a[i-1]);
				}
				i++;
			}else{//2.��ĸ�����Ǹ�λ�� 
				num = a[i]-48;
				for(j=0;j<num-1;j++)//�����һ�� ������� 
				{
					printf("%c",a[i-1]);
				}
			}
			
		}else{
			printf("%c",a[i]);//1.��ĸ��û�����֣�ֱ�������2.��ĸ��������֣��������ĸ��Ŀ����Ϊ�˲�������� 
		} 
	}
	return 0;
}
