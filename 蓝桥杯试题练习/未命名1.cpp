#include<stdio.h>
#include<malloc.h>
typedef struct 
{
	int * p;
	int lenght;
	int size;
}Psize;
void Bulid(Psize & a);
void Inser(Psize & a);
int main() 
{
	Psize a;
	Bulid(a); 
	Inser(a);
	return 0;
}
void Bulid(Psize & a)
{
	a.p=(int *)malloc(sizeof(int)*20);
	int i,j;
	printf("请输入需要创建的长度\n");
	scanf("%d",&i);
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
 
