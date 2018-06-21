#include<stdio.h>
int main()
{
	int i = 0,j = 1,l,k,flag = 0;
	while( j <= 10000)
	{
		flag = 0;
		for( k = 2; k <= j - 1; k++ )
		{
			l = j % k;
			if(l == 0)
			{
				flag = 1;
				break;
			}
		} 
		if(flag == 0)
		printf("%d\n",j);
		j++;
	}
} 
