#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[50]={NULL}, b[50]={NULL};
	int m;
	gets(a);
	int len = strlen(a);
	scanf("%d", &m);
	int i, j; 
	if(len>=m)
	for(i=m-1,j=0;i<len;i++,j++){
		b[j] = a[i];
	}else{
		printf("error");
	}
	printf("%s", b);
	return 0;
}
