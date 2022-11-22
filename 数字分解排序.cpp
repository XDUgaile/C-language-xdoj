#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int sort(int array[], int n);

int main()
{
	int number = 0;
	scanf("%d", &number);
	int a[9] = {0};
	int i, j, t, k,q;
	t = number;
	for(i=0;t!=0;i++)
	{
		a[i] = t%10;
		t/=10;
		k=i;
	}
//	printf("%d", k); 
	k++;
	sort(a,k); 
	for(i=0;i<k;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

int sort(int array[], int n)
{
	int i, j, k, t;
	for(i=0;i<n-1;i++)
	{	
		k=i;
		for(j=i+1;j<n;j++)	{
			if(array[j]>array[k])	k=j;
		}
			t = array[k];
			array[k] = array[i];
			array[i] = t;		
	} 
}
