/*
#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

typedef struct Stack
{
	int Size;
	int * base;
	int * top;
}Stack,*Sstack;
int Transform(Stack &a);
int main()
{
	Stack a;
	a.base = (int *)malloc(SIZE*sizeof(int));
	a.top = a.base;
	Transform(a);
	return 0;
}                                                                                         
int Transform(Stack &a)
{
	int num,i;
	printf("请输入一个十进制的数\n");
	scanf("%d",&num);
	*a.top = num%8;
	i = num/8;
	while(i>0)
	{
		
		a.top++;
		*a.top = i%8;
		i = i/8;
		
	}
//	a.top++;
//	*a.top = i%8;
//	i = num/8;
	while(a.top!=a.base)
	{
		printf("%d",*a.top);
		a.top--;
	}
	printf("%d",*a.top);
	printf("\n");
	return 0;
}*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void fun(int i)
{
	int n = 1,m = 0,l,d;
	d = i;
	int a[10];
	while(n != 0)
	{
		a[m] = d % 8;
		
		d = d/8;
		
		n = a[m];
	
		m++;
		
	}

	for(int j = 0;j < m-1;j++)
	{
		printf("%d",a[m-2-j]);
	}
}
int main()
{
	int i;
	scanf("%d",&i);
	fun(i);
}
