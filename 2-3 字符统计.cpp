#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	char str[100];
	gets(str);
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int i, len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i]>='a'&&str[i]<='z'){
			num1++;	
			continue;
		}
		if(str[i]>='A'&&str[i]<='Z'){
			num1++; 
			continue;	
		}	
		if(str[i]>='0'&&str[i]<='9'){
			num2++; 
			continue;
		}	
		num3++; 
	}
	printf("%d %d %d", num1, num2, num3);
	return 0;
}
