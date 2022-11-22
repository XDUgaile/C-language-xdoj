#include <stdio.h>
#include <math.h> 
#include <string.h>
#include <stdlib.h> 

int main()
{
//	char a = 'A', b = 'Z', c = 'a', d = 'z';
//	printf("%d %d %d %d",a, b, c, d); //'A'+'Z'=155	'a'+'z'=219
	char a[7], b[7];
	scanf("%s", &a);
	int i;
	for(i=0;i<7;i++){
		if(a[i]>='a'&&a[i]<='z'){
			b[i] = 219-a[i];
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			b[i] = 155-a[i];
		}
	}
	printf("%s", b);
	return 0;
}
