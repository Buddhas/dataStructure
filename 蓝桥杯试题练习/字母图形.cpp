#include<stdio.h>
#define Max 26
int main()
{
	char M[Max][Max];
	int line,list;
	char a = 'A';
	scanf("%d%d",&line,&list);
	for(int i = 0;i<line; i++)
	{
		a = 'A';
		for(int j = i;j<list; j++)
		{
			M[i][j] = a;
			a++;
		}
		a = 'A';
		for(int k = i;k>=0;k--)
		{
			
			M[i][k] = a;
			a++; 
		}
		
	}
	for(int i = 0;i<line;i++)
	{
		for(int j = 0;j<list;j++)
		{
			printf("%c",M[i][j]);
		}
		printf("\n");
	}
}
