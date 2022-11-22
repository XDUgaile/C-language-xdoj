#include<stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if(score>=90)
		printf("A");
	if(score>=80&&score<90)
		printf("B");
	if(score>=70&&score<80)
		printf("C");
	if(score>=60&&score<70)
		printf("D");
	if(score<60)
		printf("E");
	return 0;
}
