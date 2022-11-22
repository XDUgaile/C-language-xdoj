#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int i, j, num,len;
	char a[50],b[100];//char类型，是以ASCII码作为值赋给变量 
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			if(a[i+1]>='0'&&a[i+1]<='9')//1.字母后面是十位数 
			{
				num = (a[i]-48)*10+a[i+1]-48;
				for(j=0;j<num-1;j++)//输出少一个 ，最后补齐 
				{
					printf("%c",a[i-1]);
				}
				i++;
			}else{//2.字母后面是个位数 
				num = a[i]-48;
				for(j=0;j<num-1;j++)//输出少一个 ，最后补齐 
				{
					printf("%c",a[i-1]);
				}
			}
			
		}else{
			printf("%c",a[i]);//1.字母后没跟数字，直接输出；2.字母后跟了数字，先输出字母，目的是为了补齐个数。 
		} 
	}
	return 0;
}
