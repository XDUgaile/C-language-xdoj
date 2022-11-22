#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char str1[100], str2[100], str3[100];
	gets(str1);
	gets(str2);
	gets(str3);
	int sum=1;
	int i;
	int len1=strlen(str1);
	int len2=strlen(str2);
	int len3=strlen(str3);
	for(i=0;i<len1;i++){
		if(str1[i]==' ') sum++;
	}
	for(i=0;i<len2;i++){
		if(str2[i]==' ') sum++;
	}
	for(i=0;i<len3;i++){
		if(str3[i]==' ') sum++;
	}
	
	printf("%d", sum);
	return 0;
}
