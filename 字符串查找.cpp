#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h> 

int english(char a[]);

int main()
{
	char a[1000];
	scanf("%s",&a);
	english(a);
	return 0;
}

int english(char a[])
{
	int i, t;
	int count = 0;
	t = strlen(a);
	for(i=0;i<t;i++){
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
		{
			count++;
		}
	}
	printf("%d", count);
}
