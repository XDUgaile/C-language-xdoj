#include<stdio.h>
#include<math.h> 
int main()
{
	int a, b, c, n;
	scanf("%d", &n);
	for(a = 0;a<10;a++){
		for(b = 0;b<10;b++){
			for(c = 0;c<10;c++){
				if(a*101+b*20+c*101==n){
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}
/*
Ö½ÀÏ»¢Ìâ¡£
Éèa=x b=y c=z;
n=abc+cba=>n=101a+20b+101c;
*/ 
