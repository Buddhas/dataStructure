#include<stdio.h>
#include<stdlib.h>
#define N 5
typedef struct LNode
{
	int date;
	struct LNode*next; 

}LNode,*LinkList;
void CreateList(LinkList&L,int n)
{	LinkList p;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	for(int i=n;i>0;--i)
	{
			p=(LinkList)malloc(sizeof(LNode));
			scanf("%d",&p->date);
			p->next=L->next;L->next=p;

	}	p=L->next;
	while(p)
	{
		printf("%d",p->date);
		p=p->next;
	
	}
}
void ListDelte_L(LinkList&L,int i,int &e)
{
	LinkList p,q;
	p=L;int j=0;
	while(p->next&&j<i-1)
	{
		p=p->next;++j;
	}
	q=p->next;p->next=q->next;
	e=q->date;free(q);

	p=L->next;
	while(p)
	{
		printf("%d",p->date);
		p=p->next;
	
	}

}
void ListInsert(LinkList&L,int i,int &e)
{	
	LinkList p,s;
	p=L;int j=0;
	while(p&&j<i-1)
	{
		p=p->next;++j;
	}
	s=(LinkList)malloc(sizeof(LNode));
	s->date=e;
	s->next=p->next;
	p->next=s;
p=L->next;
	while(p)
	{
		printf("%d",p->date);
		p=p->next;
	
	}

}
int main()
{	int e,i;
	LinkList L;
	printf("请输入数据");
	CreateList(L,N);printf("\n");
	printf("请输入删除数据序号"); 
	scanf("%d",&i);
	ListDelte_L(L,i,e);printf("\n");
	printf("请输入插入数据序号和数字");
	scanf("%d%d",&i,&e);
	ListInsert(L,i,e);

}
