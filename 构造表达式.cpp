#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int num(); 
int Op(); 
void calculate(); 
void search(int pos); 

int n;
char op[9];
int idx;
int cnt;
//����ȫ�ֱ�����ֵĬ��Ϊ0�� 
int main()
{
	scanf("%d", &n);
	search(0);
	printf("%d\n",cnt);
	return 0;
}

int num()
{
	//�˴���idx+1��idx+2ָ�����ǲ������������ߵ����� 
	int d = idx+1;
	while(op[idx]==' '&&idx<n-1)
	{
		d=d*10+(idx+2);
		idx++;
	} 
	return d;
}

int Op() 
{
	//�������ֵ�ں���������г䵱�˷��� 
	if(idx>=n-1){
		return 0;
	}
	if(op[idx]=='+'){
		idx++;
		return 1;
	} 
	if(op[idx]=='-'){
		idx++; 
		return -1; 
	}
	return 0;
}

void calculate()
{
	int sum = 0;
	int flag;
	idx = 0;
	sum = num();
//	printf("%d\n",sum); 
	while(1)
	{
		flag = Op();
		if(flag == 0){
			break; 
		}else{
			sum += flag*num(); 
		}
	}
	if(sum==0){
		cnt++;
	}
}

void search(int pos)
{
	if(pos==n-1){
		//���������Ϳ��Խ������� 
		calculate();
	}
	else{
		op[pos]=' ';
		search(pos+1);
		op[pos]='+';
		search(pos+1);
		op[pos]='-';
		search(pos+1);
	}
}
