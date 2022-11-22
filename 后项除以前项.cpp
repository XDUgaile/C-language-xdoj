#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int i;
	int a[10]={0};
	int b[10]={0};
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<9;i++){
		b[i] = a[i+1]/a[i];
	}
	for(i=0;i<9;i++)
	printf("%d ",b[i]); 
	return 0;
}
