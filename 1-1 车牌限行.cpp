#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int day, smog, number;
	scanf("%d %d %d", &day, &smog, &number);
	int flag1 = 0, flag2 = 0, flag3 = 0;
	int t = number%10;
	if(day>=6){								//��ĩ���޺� 
		printf("%d no", t);
	}else{									//�����޺� 
		if(smog<200)  						//����ֵС��200�����޺� 
			printf("%d yes", t);
		else if(smog>=200&&smog<400) {		//����ֵ���ڵ���200С��400ʱ�������� 
			if((t==day)||(t==day-5)||(t==day+5))	
				printf("%d yes", t);		//�����������or�Ӽ�5��β��һ�������޺� 
			else
				printf("%d no", t);			//������ 
		}else if(smog>=400){				// ����ֵ���ڵ���400ʱ���޵�˫�� 
			if((t%2==0)&&(day%2==0))		//β����˫����������ż������ ���޺� 
				printf("%d yes", t);
			else if((t%2==1)&&(day%2==0))	//β���ǵ�����ż������ ������ 
				printf("%d no", t); 
			else if((t%2==0)&&(day%2==1))	//β����ż�����������ڣ�����		
				printf("%d, no", t);
			else if((t%2==1)&&(day%2==1))	//β���ǵ������������ڣ��޺�			
				printf("%d, yes", t);			
		}
	}
	return 0;
}
