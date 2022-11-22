#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int len(char *str);

int main()
{
	char str[100000];
	gets(str);
	printf("%d", len(str)); 
	return 0;
}
int len(char *str)
{
	char *p = str;
	while(*p!='\0')	p++;
	return (p-str);//char每个占一个字节，相减得出长度 
}
