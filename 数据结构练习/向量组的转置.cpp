#include<stdio.h>
#include<stdlib.h>
typedef struct Tripe
{
	int i,j;
	int date;
}Tripe;
typedef struct
{
	int mu;//行标
	int nu;//列标
	 
}TSMatrix;
int Init(int num,int & a);
int main()
{
	Tripe A;
	printf("请输入行标和列标\n");
	scanf("%d%d",&A.i,&A.j);
	int a[A.i*A.j] ={0};
	printf("请输入需要创建的非零元素的个数\n");
	
	 
 } 
