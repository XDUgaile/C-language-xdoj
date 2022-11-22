/*
为了方便理解，行和列储存数的位置都从1开始
解题思路：	先判断特殊情况的位置，最后再判断其它的位置
			通过把全部位置初始化为0来判断每个位置是否被赋值过
*/
#include<stdio.h>
int main()
{
	int n;
	printf("请输入魔法阵的阶级数(3.5.7.9.11.13.15中选一个)\n阶级数为：");
	scanf("%d", &n);//记录输入的阶级数
	int num[20][20] = { 0 }, row = 1, col = n / 2 + 1;//先把数组元素全部赋值为0，行和列先赋值为第一个数的位置
	num[row][col] = 1;//把1赋值到数组
	for (int i = 2; i <= n * n; i++)//找出剩下数位置
	{
		if (row == 1 && col == n)//上一个数即是第一行又是第n列
		{
			row += 1;
		}
		else if (row == 1)//上一个数是第一行，但是不是第n列 
		{
			row = n;
			col += 1;
		}
		else if (col == n)//上一个数是第n列，但是不是第一行 
		{
			row -= 1;
			col = 1;
		}
		else if (num[row - 1][col + 1] != 0)//下一个数的默认位置已有数
		{
			row += 1;
		}
		else//下一个数的默认位置没有数
		{
			row -= 1;
			col += 1;
		}
		num[row][col] = i;//找出下一个数的行和列之后赋值
	}
	printf("%d阶的魔法阵为\n", n);
	for (int i = 1; i <= n; i++)//输出魔法阵
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}

