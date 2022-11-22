#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int t1=0, t2=0, t3=0;
	char a[100];
	gets(a);
	int i;
	int len = strlen(a);
	for(i=0;i<len;i++){
		if(t1<0||t2<0||t3<0)	goto exit;
		switch(a[i])
		{
			case'(':	t1++;	break;
			case')':	t1--;	break;
			case'[':	t2++;	break;
			case']':	t2--;	break;
			case'{':	t3++;	break;
			case'}':	t3--;	break;
			default:break;
		} 
	} if((t1==0)&&(t2==0)&&(t3==0)){
		printf("yes");
	}else{
exit:	printf("no");
	}
		return 0;
}
