#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

void copystr(char *str, int m, char *copy);

int main()
{
	char a[51]={NULL}, b[51]={NULL};
	gets(a);
	int m, len=strlen(a);
	scanf("%d",&m);
	if(m>len)	printf("error");
	else	copystr(a,m,b);
	puts(b);
	return 0;
}

void copystr(char *str, int m, char *copy)
{
	int len = strlen(str); 
	char *p = str+m-1;
	char *i = copy;
	while(p<str+len)
	{
		*i = *p;//i��Ӧ����copy��p��Ӧ����str 
		i++,p++;
	}
}
