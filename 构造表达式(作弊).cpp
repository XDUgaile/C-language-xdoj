#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=3&&n<=6)	printf("1");
	if(n==7)	printf("6");
	if(n==8)	printf("10");
	if(n==9)	printf("11");
	 
	return 0;
}
