#include<stdio.h>
#include<math.h> 
#include<string.h>

int english(char x[], int len);
 
int main()
{
	char a[1000];
	int t = 0;
	int len;
	gets(a);
	len = strlen(a);
	t = english(a,len);
	printf("%d", t);
	return 0;
} 

int english(char x[],int len)
{
	int sum = 0;
	int i;
	for(i=0;i<len;i++)
	{
		if((x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z'))
		{
			sum++;
		}
	}
	return sum;
}
