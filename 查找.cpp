#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int i, n, k, a[100], flag = 0;
	scanf("%d %d", &n, &k) ;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(k==a[i]){
			printf("%d ",i);
			flag = 1;
		}
	}
	if(flag == 0){
		printf("-1");
	}
	return 0;
}
