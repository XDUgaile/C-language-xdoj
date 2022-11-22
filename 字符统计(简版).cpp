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
	int t1=0, t2=0, t3=0, t4=0, t5=0;
	for(i=0;i<len;i++)
	{
		if(string[i]>='A'&&string[i]<='Z')		t1++;
		else if(string[i]>='a'&&string[i]<='z')	t2++;
		else if(string[i]==' ')					t3++;
		else if(string[i]>='0'&&string[i]<='9')	t4++;
		else									t5++;
	}
	printf("%d %d %d %d %d", t1, t2, t3, t4, t5);
	return 0;
}
