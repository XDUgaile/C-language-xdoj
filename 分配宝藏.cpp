#include <stdio.h>
#define K 201
#define W 20001

int max(int a, int b);
int dp[K][W];//k�Ǽ����� w�Ǽ�ֵ 

int main() {
	int k[201], sum = 0;//k[]Ϊÿ���ļ�ֵ/����
	int n, i, j, suma;//��a��������b�� 
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &k[i]);
		sum += k[i];
	}
	for (i = 1; i <= n; i++) {
		if (k[i] >= sum / 2) {//����һ����������������һ�������ֵ�����ܼ�ֵ��һ�룬�ǾͰ������a 
			suma = sum / 2;
			break;
		}
		for (j = 1; j <= sum / 2; j++) { //jΪ��������
			if (k[i] > j) {//�����ֵ/��������ʣ�౳���������Ǿ���һ�������������� 
				dp[i][j] = dp[i - 1][j]; 
			} else {//�������װ��ȥ���Ƚ�װ���װǰ�ļ�ֵ��װ���ֵҪ����װ�ı����ֵ 
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - k[i]] + k[i]);
			}
		}
	}
	suma = dp[n][sum / 2];//�൱��ֻ��һ������Ϊ����ܼ�ֵ�İ� 
	//printf("%d", dp[n][sum / 2]);
	printf("%d", sum - 2 * suma);
	return 0;
}

int max(int a, int b) {
	int t;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	return b;
}

