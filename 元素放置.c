#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

void place(int *p, int a, int b);

int main()
{
	int a[50]={0}, m, n, i, j, t;
	int *p;
	scanf("%d %d", &m, &n);
	for(i=0;i<m*n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m*n-1;i++){//冒泡 
		for(j=0;j<m*n-i-1;j++){
			if(a[j]>a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		} 
	}
/*	for(i=0;i<m*n;i++){
		printf("%d\n",a[i]);
	}*/
	p = a;
	place(p, m, n);
	return 0;
}
void place(int *p, int a, int b)
{
	int i, j, t, flag=1;
	for(i=0;i<a;i++){
		if(flag==1){//flag=1,那就是奇数行，从右到左 
			flag=0;
			for(j=b*(i+1)-1;j>=b*i;j--){
				printf("%3d",*(p+j));
			}if(a-i!=1)	printf("\n");
		}
		else {
			flag = 1;
			for(j=b*i;j<b*(i+1);j++){//flag=0，偶数行，从左到右 
				printf("%3d",*(p+j));
			}if(a-i!=1)	printf("\n");
		}
	}
}
