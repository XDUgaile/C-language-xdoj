#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h> 
int main()
{
	int n, i, j;
	int t;
	char a;
	scanf("%c",&a);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" %c", a);
		}
		printf("\n");
	}
	return 0;
}
