#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[50], b[50];
	scanf("%s", a);
	int len = strlen(a);
	int i, j;
	int flag = 1;//if flag is 0，which is ture；if not，which is false 
	
	for(i=0;i<len;i++){
		b[i] = a[i];//如果是回文则正反输入结果一样 
	}
	for(i=0,j=len-1;i<len,j>-1;i++,j--){
		if(a[i]!=b[j])	flag = 0;//一个从前往后，一个从后往前，如果有一个不同，则不是回文 
	}
	
	if(flag == 0)	printf("no");
	else	printf("yes");
	return 0;
}
