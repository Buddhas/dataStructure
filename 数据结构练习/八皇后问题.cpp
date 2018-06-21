#include<stdio.h>
int notdanger (int row,int j,int (*chess)[8]); 
int sum=0;
int main ()
{
	int EightQueen(int row,int col,int (*chess)[8]);
	int notdanger(int row,int col,int (*chess)[8]);
	int chess[8][8],i,j;
	for (i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
			chess[i][j]=0;
	}
	EightQueen(0,8,chess);
	printf("一共有 %d 种方案\n",sum);
	return 0;
}
int EightQueen(int row,int col,int (*chess)[8])
{
	int chess2[8][8],i,j;
	for (i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{chess2[i][j]=chess[i][j];}
	}
	if (row==8)
	{   
		printf ("第 %d 种解法",sum+1);
		for (i=0;i<8;i++)
		{
			for (j=0;j<8;j++)
				printf("%d",(*(*chess2+i)+j));
			printf("\n");
		}
		printf("\n");
		sum++;
	}
	else
		for (j=0;j<8;j++)
		{
			if (notdanger(row,j,chess))
			{
				for(i=0;i<8;i++)
				{
					*(*(chess2+row)+i)=0;
					*(*(chess2+row)+j)=1;
				}
				EightQueen(row+1,col,chess2);
			}
			return 0;
		}
}
int notdanger (int row,int j,int (*chess)[8])
{
	int i,k,flag1=0,flag2=0,flag3=0;
	/*判断列方向*/
	for (i=0;i<8;i++)
	{
		if ((*(*chess+i)+j)!=0)
		{
			flag1=1;
			break;
		}    
	}
	/*判断左上方*/
	for (i=row,k=j;i>=0&&k>=0;i--,k--)
	{
		if ((*(*chess+i)+k)!=0)
		{
			flag2=1;
			break;
		}    
	}
	/*判断右上方*/
	for(i=row,k=j;i>=0 && k<8;i--,k++)
	{
		if ((*(*chess+i)+k)!=0)
		{
			flag3=1;
			break;
		}
	}    
	if (flag1||flag2||flag3)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

