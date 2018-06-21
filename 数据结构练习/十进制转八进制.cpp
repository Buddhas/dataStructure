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
	while(i>=8)
	{
		
		a.top++;
		*a.top = i%8;
		i = i/8;
		
	}
	a.top++;
	*a.top = i%8;
	i = num/8;
	while(a.top!=a.base)
	{
		printf("%d",*a.top);
		a.top--;
	}
	printf("%d",*a.top);
	printf("\n");
	return 0;
}
