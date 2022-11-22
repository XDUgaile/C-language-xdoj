#include<stdio.h>
typedef struct
{
	char face[3];
	char suit[8];
}Card;

int main()
{
	int N;
	Card cards_start[55],cards_end[55];
	int i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%s %s",&cards_start[i].face,&cards_start[i].suit);
	}
	int K,pos[55];
	scanf("%d",&K);
	for(i=1;i<=N;i++)
		scanf("%d",&pos[i]);
		
	for(int step=0;step<K;step++)
	{
		for(i=1;i<=N;i++)
			cards_end[pos[i]] = cards_start[i];		//把洗好的放到一边 
			
		for(i=1;i<=N;i++)
			cards_start[i] = cards_end[i];			//把洗好的返还回去，以便下次继续用副本数组 
	}
	
	for(i=1;i<=N;i++)
		printf("%s %s\n",cards_start[i].face,cards_start[i].suit);
	return 0;
} 


