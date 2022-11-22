#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a<='Z'&&a>='A')
	printf("%c",a+32);
	else if(a<='z'&&a>='a')
	printf("%c",a-32);	
	else
	printf("%c",a);
	return 0;
}
