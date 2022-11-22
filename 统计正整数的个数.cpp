#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int i, j, sum = 1, n, t;
	scanf("%d",&n);
	int a[n]={0};
	int count[n]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)//比较的轮数 
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
	/* for(i=0;i<n;i++)
	printf("%d ",a[i]);
	*/
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++){
			if(a[i]==a[j+i])
			sum++;
		}
		count[i] = sum;
		sum = 1;
	} 
	for(i=0;i<n;){
		printf("%d:%d\n",a[i],count[i]);
		i = i + count[i];//去重 
	}
	return 0;
}





















