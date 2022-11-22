#include<stdio.h>
int main()
{
	int a, b, i, t, n=0;
	scanf("%d %d", &a, &b);
	for(i=a;i<=b;i++){
		for(t=1;t<i;t++){
			if (i%t==0){
				n+=t; 
			}
		}
		if(n==i)
		printf("%d\n",n);
		n = 0;
	}
	return 0;
}
