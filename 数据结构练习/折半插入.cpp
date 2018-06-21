#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct SqList
{
	int r[MAX];
	int lenght;
}SqList;
void Inser(SqList & S)
{
	
	for(int i = 2; i <= S.lenght; i++)
	{
		S.r[0] = S.r[i];
		for(int j = i - 1; j >=1; j--)
		{
			if(S.r[j] > S.r[0])
			{
				S.r[j+1] = S.r[j];
			}
			else
				break;
		}
		S.r[j+1] = S.r[0];
	}
	
	for(int m = 1; m <= S.lenght; m++)
	{
		
		printf("%3d",S.r[m]);
	}
	
}
void HalfInser(SqList & S)
{
	int low,hight,mid;
	low = 1;
	for(int i = 2; i <= S.lenght; i++)
	{
		hight = i - 1;
		low = 1;
		S.r[0] = S.r[i];
		
		while(low <= hight)
		{
			mid = (low + hight)/2;
			if(S.r[mid] > S.r[0])
				hight = mid - 1;
			if(S.r[mid] < S.r[0])
				low = mid + 1;
			
			
		}
		for()
	}
		for(int m = 1; m <= S.lenght; m++)
	{
		
		printf("%3d",S.r[m]);
	}
}
int main()
{
	SqList S,T;
	int num,i,t;
	printf("请输入初始值的个数\n");
	scanf("%d",&num);
	S.lenght = num;
	T.lenght = num;
	for(int j = 1;j <= num; j++)
	{
		scanf("%d",&S.r[j]);
	}

	for(int m = 1;m <= num; m++)
	{
		scanf("%d",&T.r[m]);
	}

	printf("插入排序结果\n");
	//插入操作,直接查找
	Inser(S);
	printf("\n");
	printf("折半排序结果\n");
	HalfInser(T);
	printf("\n");
	//插入操作，折半查找



}
