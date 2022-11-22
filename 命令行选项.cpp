#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[255], b[255]={NULL}, k = NULL;
	gets(a);
	int i, j, t, n = 0;
	int len1 = strlen(a);
	for(i=0,j=0;i<len1;i++){
		if(a[i]=='-'){
			i++;
			b[j]=a[i];
			j++;
			n = j;
		}
	} 
	int len2 = strlen(b);
	for(i=0;i<len1-1;i++){//Ã°ÅÝÅÅÐò 
		for(j=0;j<len2-i-1;j++){
			if(b[j]>b[j+1]){
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t; 
			}
		}
	}
	for(i=0;i<len2;i++){	
		if(k == b[i]){
			continue;
		}	
		else {
			printf("-%c ",b[i]);
		}
		if(b[i]==b[i+1]){
			k = b[i];
		} 
	}
	if(n==0)	printf("no");
	return 0;
}
