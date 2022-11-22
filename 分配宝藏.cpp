#include <stdio.h>
#define K 201
#define W 20001

int max(int a, int b);
int dp[K][W];//k是件数， w是价值 

int main() {
	int k[201], sum = 0;//k[]为每件的价值/重量
	int n, i, j, suma;//令a总是少与b的 
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &k[i]);
		sum += k[i];
	}
	for (i = 1; i <= n; i++) {
		if (k[i] >= sum / 2) {//这是一个特殊情况，如果有一个宝物价值大于总价值的一半，那就把这个给a 
			suma = sum / 2;
			break;
		}
		for (j = 1; j <= sum / 2; j++) { //j为背包容量
			if (k[i] > j) {//宝物价值/重量大于剩余背包容量，那就少一件，但容量不变 
				dp[i][j] = dp[i - 1][j]; 
			} else {//如果可以装进去，比较装后和装前的价值，装后价值要加上装的宝物价值 
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - k[i]] + k[i]);
			}
		}
	}
	suma = dp[n][sum / 2];//相当于只有一个容量为半个总价值的包 
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

