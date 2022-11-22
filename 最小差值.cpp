#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, i, number[1000], dlta = 10000;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &number[i]);
	sort(number, number + n);
	for(i = 1; i < n; i++)
	{
		if(dlta > number[i] - number[i - 1])
			dlta = number[i] - number[i - 1];
	}
	printf("%d", dlta);
	return 0;
}

