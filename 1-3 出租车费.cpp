#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
	int fee, time;
	double km, money;  
	scanf("%d %lf", &time, &km);
	if(time<=6||time>=23){			//ҹ�� 
		if(km<=3){					//3km���� 
			money = 9+1; 
		}
		else if(km>3&&km<=12){		//3-12km 
			money = 2.3*(km-3) + 9 + 1;
		}
		else{						//����12km 
			money = 2.3*9+(km-12)*2.3*1.5+10;
		}
	} 
	else{							//�ռ� 
		if(km<=3){					//3km���� 
			money = 9; 
		}
		else if(km>3&&km<=12){		//3-12km 
			money = 2*(km-3) + 9;
		}
		else{						//����12km 
			money = 2*9+(km-12)*3+9;
		}
	}
	printf("%.1lf", money); 
	return 0;
}
