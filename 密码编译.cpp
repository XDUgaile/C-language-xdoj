#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	char a[8], b[8];
	int i;
	scanf("%s",a);
	for(i=0;i<8;i++)
	{
		b[i] = a[i];
	}
	for(i=0;i<7;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			b[i] = 219-a[i];
		}else if(a[i]>='A'&&a[i]<='Z')
		{
			b[i] = 155-a[i]; 
		} 
	}
	for(i=0;i<7;i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}
