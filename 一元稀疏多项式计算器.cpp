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
	for (i = 0; i < n * m; i++) {//初始化
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
			if (first[i].zhi == second[j].zhi) {//如果有指数一样的就把系数相加
				if (t == 0) {//t=0是加法
					first[i].xi += second[j].xi;
				} else {//t=1是减法
					first[i].xi -= second[j].xi;
				}
				flag = 1; //标志
				break;
			}
		}
		if (flag == 0) { //如果没有指数一样的，就把second加到first后面
			if (t == 1) {
				first[n + j + 1].xi = -1 * second[j].xi;//系数是原来的相反数
				first[n + j + 1].zhi = second[j].zhi;
			} else {
				first[n + j + 1] = second[j];
			}
			cnt++;//那么就多出了一项
		}
//		printf("%d %d\n",first[i].xi,first[i].zhi);
	}
	//冒泡
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

	//输出
//	for (i = 0; i <= n + m; i++) {
//		printf("%d %d\n", first[i].xi, first[i].zhi);
//	}
	//第一项单独计算
	if (first[0].xi != 0 && first[0].zhi == 0) {//第一项为数字
		printf("%d", first[0].xi);
		abc = 1;//abc=1就证明第一项输出了，就可以加‘+’了
	} else if (first[0].xi != 0 && first[0].zhi != 0 && first[0].zhi != 1 && first[0].zhi != -1) { //常规情况
		printf("%dx^%d", first[0].xi, first[0].zhi);
		abc = 1;
	} else if (first[0].xi != 0 && first[0].zhi == 1) {//指数是1的情况
		printf("%x", first[0].xi);
		abc = 1;
	} else if (first[0].xi != 0 && first[0].zhi == -1) {//指数是-1的情况
		printf("-x^-1", first[0].xi);
		abc = 1;
	}
	//从第二项起
	for (i = 1; i <= n + m; i++) {
		if (first[i].xi == 0)//系数是0不输出
			continue;
		else if (first[i].xi > 0 && first[i].zhi != 0 && abc == 1)//系数大于0，指数不为0且第一项已输出
			printf("+");
		abc = 1;
		if (first[i].xi != 1 && first[i].xi != -1 && first[i].zhi != 1 && first[i].zhi != 0)//常规情况
			printf("%dx^%d", first[i].xi, first[i].zhi);
		else if (first[i].xi == 1 && first[i].zhi != 1 && first[i].zhi != 0 )//系数是1，指数不为0，1
			printf("x^%d", first[i].zhi);
		else if (first[i].xi == -1 && first[i].zhi != 1 && first[i].zhi != 0)//系数是-1，指数不为0，1
			printf("-x^%d", first[i].zhi);
		else if (first[i].xi != 1 && first[i].xi != -1 && first[i].zhi == 1)//系数不为1，-1，指数为1
			printf("%dx", first[i].xi, first[i].zhi);
		else if (first[i].xi == 1 && first[i].zhi == 1)//系数是1，指数是1
			printf("x", first[i].zhi);
		else if (first[i].xi == -1 && first[i].zhi == 1)//系数是-1，指数是1
			printf("-x", first[i].zhi);
		else if (first[i].zhi == 0)//指数是0，就直接输出系数
			printf("%d", first[i].xi);
	}
	return 0;
}
