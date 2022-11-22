#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int a1[2][3], a2[3][2], a3[2][2]={0};
	int i, j, k;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a1[i][j]);			
		}
	} 
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a2[i][j]);			
		}
	} 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				a3[i][j] += a1[i][k]*a2[k][j]; 
			}
		//	printf("%d ",a3[i][j]);	
		}
	//	printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",a3[j][i]);
		}
		printf("\n");
	}
	return 0;
}
