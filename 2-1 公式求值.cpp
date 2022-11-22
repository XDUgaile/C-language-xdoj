#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int a, n, sum = 0, t, cnt = 0;
	scanf("%d %d", &a, &n);
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			t = pow(10,j);
			cnt += a*t;	 
		}
		sum += cnt;
		cnt = 0;		//³õÊ¼»¯ 
	}
	printf("%d", sum);
	return 0;
}
