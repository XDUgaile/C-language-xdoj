#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char str[100];
	scanf("%s",str);
	int a[100]={-1};
	int i, j, k, t;
	int len = strlen(str);
	for(i=0,j=0;i<len;i++){
		if(str[i]>='0'&&str[i]<='9'){
			a[j]=a[j]*10+((int)str[i]-48);
		}else{
			j++;
		}
	}
	k = j;
	for(i=0;i<len-1;i++){
		for(j=0;j<k-1-i;j++){
			if(a[j+1]>a[j]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	} 
	for(i=0;i<k;i++){
		printf("%d", a[i]);
		if(i!=k-1) printf("\n");
	}
	return 0;
}
