#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
typedef struct number{
	int num;
	int cnt;
}num[1001], t; //����һ���ṹ 
int main()
{
	number num[1001], t;
	int n, i, j, k;
	scanf("%d", &n);
	for(i=0;i<1001;i++){ 
		num[i].cnt = 0;//��ʼ��ÿ�������ִ���Ϊ0 
		num[i].num = i;
	}
	for(i=0;i<n;i++){
		scanf("%d", &k);
		num[k].cnt++;//�������������һ 
	}
	for(i=1000;i>0;i--){//iΪ���ֵĴ��������Ϊ1000��ֱ�ӽ��������� 
		for(j=0;j<1001;j++){//��0��ʼ������Ӧ��ֵ 
			if(num[j].cnt==i){//������ֵĴ���Ϊi������� 
				printf("%d %d\n", num[j], i);
			}
		}
	}
	return 0;
}
