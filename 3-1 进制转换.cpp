#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int i;
	int k[40]={0};	//����Ӧ32λ 
	for(i=0;a!=0;i++){
		k[i] = a%b;
		a /= b;
	}
	for(i--;i>=0;i--){ //����һ��ѭ����i��ֵ���һλ�������ȵü�һ����Ȼ�ͻ���һ��0�ڿ�ͷ 
		printf("%d", k[i]);
	}
	return 0;
}
