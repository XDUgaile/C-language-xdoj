#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
typedef struct number{
	int num;
	int cnt;
}num[1001], t; //建立一个结构 
int main()
{
	number num[1001], t;
	int n, i, j, k;
	scanf("%d", &n);
	for(i=0;i<1001;i++){ 
		num[i].cnt = 0;//初始化每个数出现次数为0 
		num[i].num = i;
	}
	for(i=0;i<n;i++){
		scanf("%d", &k);
		num[k].cnt++;//输入的数次数加一 
	}
	for(i=1000;i>0;i--){//i为出现的次数，最大为1000，直接进行了排序 
		for(j=0;j<1001;j++){//从0开始搜索对应的值 
			if(num[j].cnt==i){//如果出现的次数为i，就输出 
				printf("%d %d\n", num[j], i);
			}
		}
	}
	return 0;
}
