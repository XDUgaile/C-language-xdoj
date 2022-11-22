#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[100];
	gets(a);
	int len = strlen(a), max = 0, cnt = 0, i, j;
	for(i=0;i<len;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))	cnt++;
		else		cnt = 0;
		if(max<cnt) 	max = cnt;

	}
	printf("%d", max);
	return 0;
}
