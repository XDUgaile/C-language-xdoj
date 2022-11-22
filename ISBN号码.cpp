#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	char a[10];//定义一个字符类型数组，用于储存ISBN号码 
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[0], &a[1], &a[2], &a[3], &a[4],
									&a[5], &a[6], &a[7], &a[8], &a[9]);//主要'-'的输入，a small tip. 
	int sum = 0, t;
	int i;
	char ch;//如果不正确，就用ch替换a[9] 
	for(i=0;i<9;i++)
	{
		sum+=(a[i]-48)*(i+1);//字符类型转换为整型，并计算sum 
	}
	t = sum%11;//整数取余 
	if(t==10){
		ch = 'X';
	} else{
		ch = t + 48;//整型转换为字符类型 
	}
	if(a[9]==ch){
		printf("Right\n");//判断识别码是否正确 
	}else{
		printf("%c-%c%c%c-%c%c%c%c%c-%c",a[0], a[1], a[2], a[3], a[4],
									  	 a[5], a[6], a[7], a[8], ch) ; 
	}//有误则用ch替换a[9] 
	return 0;
}
