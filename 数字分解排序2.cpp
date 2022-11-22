#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int num;
	scanf("%d",&num);
	int i, a[10], j, n = 0, t;
	for(i=0;num!=0;i++, n++){
		a[i] = num%10;
		num/=10;	
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
 
	return 0;
}
