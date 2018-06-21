#include<stdio.h>
int main()
{
	int sum,i,j;
	int a[80];
	for(int i = 1; i < 1000; i++)
	{
		sum = 0;
		for(int j = 1; j < i; j++)
		{
			if(i%j == 0)
			{
				
				sum = sum + j;
			}
		}
		if(sum == i)
		printf("%d\n",i);
	}
}
