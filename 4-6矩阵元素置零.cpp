#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int i, j, m, n, p, q;
	scanf("%d %d", &m, &n);
	int a[m][n], b[m][n] = {0};	//��������ά���飬a�������룬b�������������b��ʼ��Ϊ0 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0){
				for(p=0;p<m;p++){
					b[p][j] = -1;		//����Ҫ��ĸ�����ֵ-1������ 
				}
				for(q=0;q<n;q++){
					b[i][q] = -1;
				}
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i][j]==0){			//ֵΪ0��������a�е�����ֵ��ȥ 
				b[i][j] = a[i][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i][j]==-1){		//ֵΪ-1�����0ֵ 
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
