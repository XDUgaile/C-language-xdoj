#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[100], b[100]={NULL}, c[100]={NULL};
	scanf("%s",a);
	char sample = a[0];
	int i, j;
	int len = strlen(a);
	for(i=1,j=0;i<len;i++)//��������ĸ 
	{
		if(a[i]>sample){
			b[j] = a[i];
		//	printf("%c",b[j]);
			j++;
		}
	}//printf("%s",b);
	for(i=1,j=0;i<len;i++)//С������ĸ 
	{
		if(a[i]<=sample){
			c[j] = a[i];
			j++;
		}
	}//printf("%s\n",c);
	int t, k;
	int len2 = strlen(c); 
	for(i=0;i<len2-1;i++)//ѡ������ 
	{
		k=i;
		for(j=i+1;j<len2;j++)//ÿһ��ȷ��һ�� 
		{
			if(c[k]>c[j]){
				k=j;
			}
		}
		if(k!=i){
		t = c[i];
		c[i] = c[k];
		c[k] = t;
		}
	}//printf("%s\n",c);
	printf("%s%c%s", b, sample, c); 
	return 0;
}
