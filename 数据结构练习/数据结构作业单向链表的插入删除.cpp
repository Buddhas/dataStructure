#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int n;
	struct Node * p;
}Node,* Pnode;
Pnode CreatList();//创建链表函数 
Pnode Inser(Pnode &head);//链表插入 
int Delete(Pnode head);//链表删除
int Printf(Pnode head);//链表的倒叙输出 
int main()
{
	Pnode head;
	head = CreatList();
	Printf(head);
	Inser(head);
	Printf(head);
//	Delete(head);
	return 0;
}
Pnode CreatList()
{
	Pnode head,tail;
	Pnode Pnew = (Pnode)malloc(sizeof(Node));
	head = Pnew;
	tail = Pnew;
	int i,j;
	printf("请输入需要创建的节点个数\n");
	scanf("%d",&i);
	printf("请输入节点的数值\n"); 
	for(j=0;j<i;j++)
	{
		scanf("%d",&tail->n);
		Pnode Pnew = (Pnode)malloc(sizeof(Node));
		tail->p = Pnew;
		tail = Pnew;
		
	}
	tail->p = NULL;
	return head;
}
Pnode Inser(Pnode &head)
{
	Pnode P,front;
	P = head;
	front = head;
	printf("请输入需要在哪里插入一个节点\n");
	int i,j;
	scanf("%d",&i);
	if(i == 1)
	{
		Pnode Pnew = (Pnode)malloc(sizeof(Node));
		Pnew->p = head;
		head = Pnew;
		printf("请输入节点的值\n");
		scanf("%d",&head->n);
		
	}
	else
	{
		for(j=1;j<i;j++)
		{
			front = P;
			P = P->p;
		}
		Pnode Pnew = (Pnode)malloc(sizeof(Node));
		Pnew->p = front->p;
		front->p = Pnew;
		printf("请输入插入的数值\n");
		scanf("%d",&Pnew->n);
	}
	
	
	return head;
}
int Delete(Pnode head)
{
	
	return 0;
}
int Printf(Pnode head)
{	
	Pnode P;
	P = head;
	while(P->p != NULL)
	{
		printf("%d\t",P->n);
		P = P->p;
	}
	printf("\n");
	return 0;
}
