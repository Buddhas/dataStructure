#include<stdio.h>
#include<stdlib.h>
typedef struct Pnode
{
	int date;
	struct Pnode * Pnext; 
}Pnode,*PNode;
typedef struct Queue
{
//	int *base;
	PNode font;
	PNode rear;	
}Queue;

int CreatQueue(Queue & Q)
{
	printf("请输入需要创建的节点数\n");
	int i,j;
	scanf("%d",&i);
	
	Pnode *P = (PNode)malloc(sizeof(Pnode));
	Q.font = P;
	Q.rear = P;
	PNode Node;
	Node = P;
	for(j = 0; j<i;j++)
	{
		scanf("%d",&Node->date);
		Pnode *P = (PNode)malloc(sizeof(Pnode));
		Node->Pnext = P;
		Q.rear = Node;
		Node = P;
	}
	return 0;
}
int InserQueue(Queue & Q)
{
	Pnode *P = (PNode)malloc(sizeof(Pnode));
	Q.rear->Pnext = P;
	scanf("%d",&P->date);
	Q.rear = P;
	return 0;
}
int DeleteQueue(Queue & Q)
{
	if(Q.font == Q.rear)
	{
		printf("队列为空，不能执行删除操作\n");
		return 0;
	}
	else 
	{
		PNode De;
		De = Q.font;
		Q.font = Q.font->Pnext;
		free(De);
	}
}
void PrintfQueue(Queue Q)
{
	while(Q.font != Q.rear)
	{
		printf("%d\t",Q.font->date); 
		Q.font = Q.font->Pnext;
	}
	printf("%d\t",Q.font->date); 
	printf("\n");
}
int main()
{
	Queue Q;
	CreatQueue( Q);
	PrintfQueue(Q);
	printf("入队结果\n");
	InserQueue(Q);
	PrintfQueue(Q);
	printf("出队后结果\n");
	DeleteQueue(Q);
	PrintfQueue(Q);
	
}
