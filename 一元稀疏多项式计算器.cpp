#include <stdio.h>

typedef struct function {
	int xi;
	int zhi;
} first[], second[], temp;

int main() {
	int n, m, t;
	scanf("%d %d %d", &n, &m, &t);
	function first[n * m], second[m], temp;
	int i, j;
	int cnt = 0, flag = 0, abc = 0;
	for (i = 0; i < n * m; i++) {//��ʼ��
		first[i].xi = NULL;
		first[i].zhi = NULL;
	}
	for (i = 0; i < n; i++) {
		scanf("%d %d", &first[i].xi, &first[i].zhi);
	}
	for (j = 0; j < m; j++) {
		scanf("%d %d", &second[j].xi, &second[j].zhi);
		flag = 0;
		for (i = 0; i < n; i++) {
			if (first[i].zhi == second[j].zhi) {//�����ָ��һ���ľͰ�ϵ�����
				if (t == 0) {//t=0�Ǽӷ�
					first[i].xi += second[j].xi;
				} else {//t=1�Ǽ���
					first[i].xi -= second[j].xi;
				}
				flag = 1; //��־
				break;
			}
		}
		if (flag == 0) { //���û��ָ��һ���ģ��Ͱ�second�ӵ�first����
			if (t == 1) {
				first[n + j + 1].xi = -1 * second[j].xi;//ϵ����ԭ�����෴��
				first[n + j + 1].zhi = second[j].zhi;
			} else {
				first[n + j + 1] = second[j];
			}
			cnt++;//��ô�Ͷ����һ��
		}
//		printf("%d %d\n",first[i].xi,first[i].zhi);
	}
	//ð��
//	printf("%d",cnt);
	for (i = 0; i < n + m; i++) {
		for (j = 0; j < n + m - i - 1; j++) {
			if (first[j].zhi > first[j + 1].zhi) {
				temp = first[j];
				first[j] = first[j + 1];
				first[j + 1] = temp;
			}
		}
	}

	//���
//	for (i = 0; i <= n + m; i++) {
//		printf("%d %d\n", first[i].xi, first[i].zhi);
//	}
	//��һ�������
	if (first[0].xi != 0 && first[0].zhi == 0) {//��һ��Ϊ����
		printf("%d", first[0].xi);
		abc = 1;//abc=1��֤����һ������ˣ��Ϳ��Լӡ�+����
	} else if (first[0].xi != 0 && first[0].zhi != 0 && first[0].zhi != 1 && first[0].zhi != -1) { //�������
		printf("%dx^%d", first[0].xi, first[0].zhi);
		abc = 1;
	} else if (first[0].xi != 0 && first[0].zhi == 1) {//ָ����1�����
		printf("%x", first[0].xi);
		abc = 1;
	} else if (first[0].xi != 0 && first[0].zhi == -1) {//ָ����-1�����
		printf("-x^-1", first[0].xi);
		abc = 1;
	}
	//�ӵڶ�����
	for (i = 1; i <= n + m; i++) {
		if (first[i].xi == 0)//ϵ����0�����
			continue;
		else if (first[i].xi > 0 && first[i].zhi != 0 && abc == 1)//ϵ������0��ָ����Ϊ0�ҵ�һ�������
			printf("+");
		abc = 1;
		if (first[i].xi != 1 && first[i].xi != -1 && first[i].zhi != 1 && first[i].zhi != 0)//�������
			printf("%dx^%d", first[i].xi, first[i].zhi);
		else if (first[i].xi == 1 && first[i].zhi != 1 && first[i].zhi != 0 )//ϵ����1��ָ����Ϊ0��1
			printf("x^%d", first[i].zhi);
		else if (first[i].xi == -1 && first[i].zhi != 1 && first[i].zhi != 0)//ϵ����-1��ָ����Ϊ0��1
			printf("-x^%d", first[i].zhi);
		else if (first[i].xi != 1 && first[i].xi != -1 && first[i].zhi == 1)//ϵ����Ϊ1��-1��ָ��Ϊ1
			printf("%dx", first[i].xi, first[i].zhi);
		else if (first[i].xi == 1 && first[i].zhi == 1)//ϵ����1��ָ����1
			printf("x", first[i].zhi);
		else if (first[i].xi == -1 && first[i].zhi == 1)//ϵ����-1��ָ����1
			printf("-x", first[i].zhi);
		else if (first[i].zhi == 0)//ָ����0����ֱ�����ϵ��
			printf("%d", first[i].xi);
	}
	return 0;
}
