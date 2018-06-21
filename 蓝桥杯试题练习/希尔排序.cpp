#include<stdio.h>
int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	int gap = 5;
	int temp;
	do
	{
		for(int i = gap; i < 10;i++)
		{
		
			if(a[i] < a[i - gap])
			{
				temp = a[i];
				a[i] = a[i-gap];
				a[i-gap] = temp;		
			}	

		}	


	} while(gap > 5);
		do
	{
		gap = 3;
		for(int i = gap; i < 10;i++)
		{
		
			if(a[i] < a[i - gap])
			{
				temp = a[i];
				a[i] = a[i-gap];
				a[i-gap] = temp;		
			}	

		}	

	} while(gap > 3);
	do
	{
		gap = 1;
		for(int i = gap; i < 10;i++)
		{
		
			if(a[i] < a[i - gap])
			{
				temp = a[i];
				a[i] = a[i-gap];
				a[i-gap] = temp;		
			}	

		}	

	} while(gap > 1);
	for(int i = 0; i < 10; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	
} 
