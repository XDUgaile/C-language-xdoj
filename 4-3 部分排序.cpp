#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int n, m, k, i, j, t;
	scanf("%d %d %d", &n, &k, &m);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	} 
	if(k){		//表示从大到小排序
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(a[j]<a[j+1]) {
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
			}
		}
	} 
	else {		//表示从小到大排序
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]) {
					t = a[j+1];
					a[j+1] = a[j];
					a[j] = t;
				}
			}
		}	
	}
	if(n>m){
		for(i=0;i<m;i++){
			printf("%d ", a[i]);
		}
	}
	else{
		for(i=0;i<n;i++){
			printf("%d ", a[i]);
		}
	}
	return 0;
}
