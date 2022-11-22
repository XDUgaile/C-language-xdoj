#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	double result;
	char s1[100], s2[100],s3;
	int i, j, num = 0, max = 0;
	gets(s1);
	gets(s2);
	strupr(s1);
//	printf("%s",s1);
	strupr(s2);	
//	printf("%s",s2);
	int len1=strlen(s1); 
	int len2=strlen(s2); 
	int t1,t2;
	for(i=0;i<len1;i++)
		for(j=0;j<len2;j++)
		{
			if(s2[j]==s1[i]){
				t1=i,t2=j;
				for( ;s2[t2]==s1[t1]&&s2[t2]!='\0'&&s1[t1]!='\0';t1++,t2++)
				{
					num++;
				}
				if(num>max){
					max = num;
				}
				num = 0;
			}
		}
	result = 2.0*max/(len1+len2);
//	printf("%d %d\n",max,num);
	printf("%.3lf",result);
	return 0;
}

