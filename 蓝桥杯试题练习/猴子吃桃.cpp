#include<stdio.h>
int main()
{
	int day = 9;
	int i = 1,j;
	while(day > 0)
	{
		i = (i + 1)*2;
		day--;
	}
	printf("%d",i);
} 
