int function(int a, int b)
{
	int num1 = 153, num2 = 370, num3 = 371, num4 = 407, num5 = 1634, num6 = 8208, num7 = 9474, 
	num8 = 54748, num9 = 92727, num10 = 93084, num11 = 548834;
	int i, t = 0;
	for(i=a;i<=b;i++){
		if((i==num1)||(i==num2)||(i==num3)||(i==num4)||(i==num5)||(i==num6)
		||(i==num7)||(i==num8)||(i==num9)||(i==num10)||(i==num11)){
			t++;
		}
	}
	return t;
}
