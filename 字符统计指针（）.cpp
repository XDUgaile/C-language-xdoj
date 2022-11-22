#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char string[100];
	gets(string);
	int len = strlen(string); 
	int i;
	char *p = string; 
	int t1=0, t2=0, t3=0, t4=0, t5=0;
	for(i=0,p = string;i<len;i++,p++)
	{
		if(*p>='A'&&*p<='Z')	    t1++;
		else if(*p>='a'&&*p<='z')	t2++;
		else if(*p==' ')			t3++;
		else if(*p>='0'&&*p<='9')	t4++;
		else						t5++;
	}
	printf("%d %d %d %d %d", t1, t2, t3, t4, t5);
	return 0;
}
