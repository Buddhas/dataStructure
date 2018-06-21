//´òÓ¡Ñî»ÔÈý½Ç
 
/*#include<stdio.h>
int main()
{
	int a[80][80];
	int n;
	scanf("%d",&n); 
	for(int i = 1; i <= n; i++)	
	{
		a[i][1] = 1;
		a[i][i] = 1;
		if(i > 2)
		{
			for(int j = 1; j < i; j++)
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; 
			}
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1; j <=i ;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
} */
#include<stdio.h>
int main()
{
	int a[80][80];
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
		if(i > 1)
		{
			for(int j = 1; j < i; j++ )
			{
				a[i][j] = a[i - 1][j - 1]+a[i - 1][j];
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0; j <= i; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
