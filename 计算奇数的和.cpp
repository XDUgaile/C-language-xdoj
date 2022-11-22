#include<stdio.h>
int main()
{
	int number;
	int sum = 0;
	int count = 0;
	 
	scanf("%d", &number);
	while ( number != 0 ){
		if(number%2){
		sum += number;
//		count ++;
}
		scanf("%d", &number );
	}
	
	printf("%d\n", sum);
	return 0;
}
