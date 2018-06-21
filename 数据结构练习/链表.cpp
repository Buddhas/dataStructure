#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node * P;
}Node,*PNode;
void Creat(PNode & T)
{
	printf("请输入需要创建的节点数\n");
	int i;
	PNode head,P;
	scanf("%d",&i);
	T = (PNode)malloc(sizeof(Node));
	head = T;
	P = T;
	for(int j = 0; j < i;j++)
	{
		scanf("%d",&head->data);
		if(j != i - 1)
		{
			
			P = (PNode)malloc(sizeof(Node));
			head->P = P;
			head = P;
		}
			
	}
	head->P = NULL;
	
	while(T->P !=NULL)
	{
		printf("%d\t",T->data);
		T = T->P;
	}
	printf("%d",T->data);
}
int main()
{
	PNode T;
	Creat(T);
}
