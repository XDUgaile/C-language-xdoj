#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int N, a[10]={0}, t;
	int i, j, len;
	scanf("%d", &N);
	for(i=0;N!=0;i++){
		a[i]=N%10;;
		N/=10;
		t=i;
	}
	int cnt[10]={0};
	for(i=0;i<=t;i++){
		switch(a[i])
		{ 
		case 0 : cnt[0]++; break;
		case 1 : cnt[1]++; break;
		case 2 : cnt[2]++; break;
		case 3 : cnt[3]++; break;
		case 4 : cnt[4]++; break;
		case 5 : cnt[5]++; break;
		case 6 : cnt[6]++; break;
		case 7 : cnt[7]++; break;
		case 8 : cnt[8]++; break;
		case 9 : cnt[9]++; break;
	 	} 
	}
	for(i=0;i<=9;i++){
		if(cnt[i]!=0)
			printf("%d:%d\n",i, cnt[i]);
	}
	return 0;
}
