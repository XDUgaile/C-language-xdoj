#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int i, j, m, n, p, q;
	scanf("%d %d", &m, &n);
	int a[m][n], b[m][n] = {0};	//做两个二维数组，a用来读入，b用来输出，并给b初始化为0 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				for(p=0;p<m;p++){
					b[p][j] = -1;		//满足要求的赋特殊值-1以区别 
				}
				for(q=0;q<n;q++){
					b[i][q] = -1;
				}
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i][j]==0){			//值为0的正常将a中的数赋值过去 
				b[i][j] = a[i][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i][j]==-1){		//值为-1的最后赋0值 
				b[i][j] = 0;
			}
		}
	}
	for(i=0;i<m;i++){w
		for(j=0;j<n;j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
