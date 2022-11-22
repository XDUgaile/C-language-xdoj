#include<stdio.h>

int main(){
	int factor = 1, n, i;
	scanf("%d", &n);
	int sum = 0;
	for(i=1;i<=n;i++){
		sum += factor * i * (i+1);
		factor*=-1;
	}
	printf("%d", sum);
	return 0;
} 
