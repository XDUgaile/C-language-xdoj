#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	char a[10];//����һ���ַ��������飬���ڴ���ISBN���� 
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[0], &a[1], &a[2], &a[3], &a[4],
									&a[5], &a[6], &a[7], &a[8], &a[9]);//��Ҫ'-'�����룬a small tip. 
	int sum = 0, t;
	int i;
	char ch;//�������ȷ������ch�滻a[9] 
	for(i=0;i<9;i++)
	{
		sum+=(a[i]-48)*(i+1);//�ַ�����ת��Ϊ���ͣ�������sum 
	}
	t = sum%11;//����ȡ�� 
	if(t==10){
		ch = 'X';
	} else{
		ch = t + 48;//����ת��Ϊ�ַ����� 
	}
	if(a[9]==ch){
		printf("Right\n");//�ж�ʶ�����Ƿ���ȷ 
	}else{
		printf("%c-%c%c%c-%c%c%c%c%c-%c",a[0], a[1], a[2], a[3], a[4],
									  	 a[5], a[6], a[7], a[8], ch) ; 
	}//��������ch�滻a[9] 
	return 0;
}
