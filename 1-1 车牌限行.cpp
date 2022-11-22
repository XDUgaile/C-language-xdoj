#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int day, smog, number;
	scanf("%d %d %d", &day, &smog, &number);
	int flag1 = 0, flag2 = 0, flag3 = 0;
	int t = number%10;
	if(day>=6){								//周末不限号 
		printf("%d no", t);
	}else{									//周内限号 
		if(smog<200)  						//雾霾值小于200，不限号 
			printf("%d yes", t);
		else if(smog>=200&&smog<400) {		//雾霾值大于等于200小于400时，限俩号 
			if((t==day)||(t==day-5)||(t==day+5))	
				printf("%d yes", t);		//如果天数本身or加减5和尾数一样，则限号 
			else
				printf("%d no", t);			//否则不限 
		}else if(smog>=400){				// 雾霾值大于等于400时，限单双号 
			if((t%2==0)&&(day%2==0))		//尾数是双数，并且是偶数星期 ，限号 
				printf("%d yes", t);
			else if((t%2==1)&&(day%2==0))	//尾数是单数，偶数星期 ，不限 
				printf("%d no", t); 
			else if((t%2==0)&&(day%2==1))	//尾数是偶数，单数星期，不限		
				printf("%d, no", t);
			else if((t%2==1)&&(day%2==1))	//尾数是单数，单数星期，限号			
				printf("%d, yes", t);			
		}
	}
	return 0;
}
