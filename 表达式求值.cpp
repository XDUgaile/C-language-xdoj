#include<stdio.h>
int main()
{char a[100];
 int b[2]={0,0},c,i,j=0,flag=0;
 char d;
 gets(a);
 	for(i=0;a[i]!='\0';i++)
 	{   if(a[i]>='0'&&a[i]<='9')
 		{b[j]=a[i]-'0'+b[j]*10;
		 flag=1;
		 }
	 else if(a[i]==' ')
	 	{if(flag){
	 		j++;
	 	}
		 flag=0;
		 continue;
	 }
	 else{d=a[i];
	 if(flag){
	 	j++;
	}
	flag=0;
	}
	}
//	if(b[0]<b[1])
//	{c=b[0];
//	b[0]=b[1];
//	b[1]=c;
//	}
	switch(d)
		{case '+':printf("%d",b[0]+b[1]);break;
		 case '-':printf("%d",b[0]-b[1]);break;
		 case '*':printf("%d",b[0]*b[1]);break;
		 case '/':printf("%d",b[0]/b[1]);break;
		 case '%':printf("%d",b[0]%b[1]);break;
		}
		return 0;
     
}
