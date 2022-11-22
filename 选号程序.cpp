#include<stdio.h>
#include<math.h> 
int main()
{
	int n;
	scanf("%d", &n);
	int a[1000], b[1000], j, t1, t2, sum[1000]={0};
	int i = 0;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		while(a[i]>=10){
			sum[i]+=a[i]%10;
			a[i]=a[i]/10;
		}sum[i]+=a[i];
	}
	for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(sum[j]<sum[j+1]){
					t1 = sum[j];
					sum[j] = sum[j+1];
					sum[j+1] = t1;
					t2 = b[j];
					b[j] = b[j+1];
					b[j+1] = t2;
				}
	}
}
	for(i=1;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(sum[j]==sum[j+1]&&b[j]>b[j+1]){
				t2=b[j];
				b[j]=b[j+1];
				b[j+1]=t2;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d\n", b[i],sum[i]);
	} 
	return 0;
}
