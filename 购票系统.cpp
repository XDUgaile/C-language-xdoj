#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n], yu[22];
	int p, i, j, k, cnt = 0;
	int flag = 0;
	for (i = 0; i < 21; i++)
		yu[i] = 5;//���ÿ����5��Ʊ 
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		flag = 0, cnt = 0;
		for (j = 1; j < 22; j++) {
			if (yu[j] >= a[i]) {//ʣ��ı���Ҫ�Ķ� 
				p = yu[j];
				for (k = 5 * j + 1 - p; k < 5 * j + 1 - p + a[i]; k++) {
					printf("%d ", k);
					yu[j]--;//ʣ��ļ��� 
				}
				printf("\n");
				flag = 1;//��־����������� 
			}
			if (flag == 1)
				break;
		}
		if (flag == 0) {//���û�����ŵģ���ֻ�ֿܷ��� 
			for (j = 1; j < 21; j++) {
				while (yu[j] != 0) {
					p = yu[j];
					printf("%d ", 5 * j + 1 - p);//ͨ�����ɵó� 
					yu[j]--;
					cnt++;
				}
				if (cnt == a[i])//���� 
					break;
			}
		}
	}
	return 0;
}
