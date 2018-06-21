#include<stdio.h>
#include<malloc.h>
#define Size 10 //创建的顺序表长度 
typedef struct 
{
	int * p;
	int lenght;
	
}Psize;
void Bulid(Psize & a);//线性表的建立 
void Inser(Psize & a);//线性表的插入 
void Delete(Psize & a);//线性表的删除 
int main() 
{
	Psize a;
	Bulid(a); 
	Inser(a);
	return 0;
}
void Bulid(Psize & a)
{
	a.p=(int *)malloc(sizeof(int)*Size);
	int i,j;
	printf("请输入需要创建的长度\n");
	
	scanf("%d",&i);
	while(i>Size)
	{
		printf("输入值错误，请输入一个小于等于%d的值\n",Size);
		scanf("%d",&i);
	}
	a.lenght=i;
	for(j=0;j<i;j++)
	{
		scanf("%d",&a.p[j]);
	}
	for(j=0;j<i;j++)
	{
		printf("%d\t",a.p[j]);
	}
	printf("\n");
}
void Inser(Psize & a)
{
	int i,j,h;
	printf("请选择要插入的节点以及数值\n");
	scanf("%d%d",&i,&h);
	while(i>=a.lenght || i<0)
	{
		printf("输入值错误，请输入一个大于零且小于数组实际长度的数值\n");
		scanf("%d",&i);
	}
	for(j=a.lenght;j>=i;j--)
	{
		a.p[j]=a.p[j-1];
	}
	a.p[j]=h;
	for(j=0;j<=a.lenght;j++)
	{
		printf("%d\t",a.p[j]);
	}
	printf("\n");
}
void Delete(Psize & a)
{
	printf("请输入需要删除的节点\n");
	int i,j;
	scanf("%d",&i);
	while(i>=a.lenght || i<0)
	{
		printf("输入值错误，请输入一个大于零且小于数组实际长度的数值\n");
		scanf("%d",&i);
	}
	for(j=i-1;j<a.lenght-1;j++)
	{
		a.p[j]=a.p[j+1];
	}
		for(j=0;j<=a.lenght-1;j++)
	{
		printf("%d\t",a.p[j]);
	}
	printf("\n");
}


 
