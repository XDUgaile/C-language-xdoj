#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	char a[100]={0};
	char b[100]={0};
	int len,max=0;
	while(1){
		gets(a);//gets���Զ���ո� 
		if(strcmp(a,"***end***")==0)break;
		len=strlen(a);
		if(len>max){
			max = len;
			strcpy(b,a);//��a���Ƶ�b�� 
		} 
	}
	printf("%d\n%s\n",max,b);
	
	return 0;
}
