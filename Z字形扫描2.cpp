#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int n, i, j, state = 1;
	scanf("%d", &n);
	int a[n][n];
	for(i=0;i<n;i++){			//遍历读入数组 
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int cnt = 0;
	for(cnt = 0,state = 1, i=0, j=0;cnt<n*n;cnt++){
	 	switch(state)
		{
			case 1:	//right
				printf("%d ", a[i][j++]);
				if(i==0)	state = 3;
				else if(i==n-1)	 state  = 4;
				break;
			case 2:	//down 
				printf("%d ", a[i++][j]);
				if(j==0)	state = 4;
				else if(j==n-1)	 state  = 3;
				break;
			case 3:	//left down 
				printf("%d ", a[i++][j--]);
				if(j==0)	state = 2;
				if(i==n-1)	 state  = 1;
				break;
			case 4:	//right up
				printf("%d ", a[i--][j++]);
				if(i==0)	state = 1;
				if(j==n-1)	 state  = 2;
				break;
		}
	}
	return 0;
}
