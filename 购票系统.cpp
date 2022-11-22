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
		yu[i] = 5;//起初每排余5张票 
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		flag = 0, cnt = 0;
		for (j = 1; j < 22; j++) {
			if (yu[j] >= a[i]) {//剩余的比需要的多 
				p = yu[j];
				for (k = 5 * j + 1 - p; k < 5 * j + 1 - p + a[i]; k++) {
					printf("%d ", k);
					yu[j]--;//剩余的减少 
				}
				printf("\n");
				flag = 1;//标志着买了连这的 
			}
			if (flag == 1)
				break;
		}
		if (flag == 0) {//如果没买到连着的，就只能分开买 
			for (j = 1; j < 21; j++) {
				while (yu[j] != 0) {
					p = yu[j];
					printf("%d ", 5 * j + 1 - p);//通过归纳得出 
					yu[j]--;
					cnt++;
				}
				if (cnt == a[i])//买够了 
					break;
			}
		}
	}
	return 0;
}
