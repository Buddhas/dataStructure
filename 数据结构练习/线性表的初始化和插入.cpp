#include<stdio.h>
#include<malloc.h>
#define Size 10 //������˳����� 
typedef struct 
{
	int * p;
	int lenght;
	
}Psize;
void Bulid(Psize & a);//���Ա�Ľ��� 
void Inser(Psize & a);//���Ա�Ĳ��� 
void Delete(Psize & a);//���Ա��ɾ�� 
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
	printf("��������Ҫ�����ĳ���\n");
	
	scanf("%d",&i);
	while(i>Size)
	{
		printf("����ֵ����������һ��С�ڵ���%d��ֵ\n",Size);
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
	printf("��ѡ��Ҫ����Ľڵ��Լ���ֵ\n");
	scanf("%d%d",&i,&h);
	while(i>=a.lenght || i<0)
	{
		printf("����ֵ����������һ����������С������ʵ�ʳ��ȵ���ֵ\n");
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
	printf("��������Ҫɾ���Ľڵ�\n");
	int i,j;
	scanf("%d",&i);
	while(i>=a.lenght || i<0)
	{
		printf("����ֵ����������һ����������С������ʵ�ʳ��ȵ���ֵ\n");
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


 
