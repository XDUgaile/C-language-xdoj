#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<stdlib.h>

int number(char a[]); 
int main()
{
	char a[1000];
	scanf("%s",&a);
	number(a);
	return 0;
}

int number(char a[])
{
	int i, t;
	int cnt1 = 0, cnt2 = 0;
	t = strlen(a);
	for(i=0;i<t;i++){
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
		{
			cnt1++;
		}
		if(a[i]>='0'&&a[i]<='9'){
			cnt2++;
		}
	}
	printf("%d,%d",cnt1, cnt2);
}

