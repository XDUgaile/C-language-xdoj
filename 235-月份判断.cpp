#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 
int main()
{
	int num;
	const char *month[]={"January","February","March","April","May","June","July","Augest","September","Octorber","November","December"};
	scanf("%d", &num);
	if(num>=1&&num<=12)
	printf("%s",month[num-1]);
	else	printf("wrong");
	return 0;
}
