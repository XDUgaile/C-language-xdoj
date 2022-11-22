#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int i, j, t, n;
	int sum = 0;
	scanf("%d",&n);
	int a[10]={0};
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		//	printf("%d ",a[i]);	
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(a[i]>a[i+j]){
				t = a[i];
				a[i]=a[i+j];
				a[i+j]=t;
			}
		}
	}
/*	for(i=0;i<n;i++)
	printf("%d ",a[i]);
*/
	for(i=0;i<n-2;i++){
		a[i]=a[i+1];
//		printf("%d ",a[i]);
	}
//	for(i=0;i<n;i++)
//	printf("%d ",a[i]);
	for(i=0;i<n-2;i++){
		sum+=a[i];
	} 
	printf("%.2lf",sum*1.0/(n-2));
	return 0;
}
