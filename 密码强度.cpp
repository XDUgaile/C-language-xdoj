#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int len, n1=0, n2=0, n3=0, n4=0, n5=0;
	int sum = 0;
	int count, i;
	char a[50];
	gets(a); 
	len = strlen(a);
	if(len == 0){
		printf("0\n");
	} else{
		if(len>8) n5++;
		for(i=0;i<len;i++)
		{
			if(a[i]>='0'&&a[i]<='9'&&n1==0) n1++;
			if(a[i]>='A'&&a[i]<='Z'&&n2==0) n2++;
			if(a[i]>='a'&&a[i]<='z'&&n3==0) n3++;
			if((a[i]<'0'||(a[i]>'9'&&a[i]<'A')||(a[i]>'Z'&&a[i]<'a')||a[i]>'z')&&n4==0) n4++;
		}
		sum = n1+n2+n3+n4+n5;
		printf("%d\n",sum);
	}
	return 0;
}
