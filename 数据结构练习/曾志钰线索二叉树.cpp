# include <stdio.h>
# include <stdlib.h>

typedef enum PointerTag
{
	Link,Thread
};

typedef struct Node
{
	char data;
	struct Node *lchild,*rchild;
	PointerTag LTag,RTag;
}Node,*Tree;

Tree pre;

void Creat(Tree &T)
{
	char ch;
	scanf("%c",&ch);
	if(ch == ' ')
	{	
		T = NULL;
	}
	else
	{
		if(!(T = (Tree)malloc(sizeof(Node))))
			printf("开辟空间失败!");
		T->data = ch;
		Creat(T->lchild);
		Creat(T->rchild);
	}
}

void InThreading(Tree p)
{
	if(p)
	{
		InThreading(p->lchild);  //左子树线索化
		//处理根节点
		if(!p->lchild)
		{
			p->LTag = Thread;
			p->lchild = pre;
		}
		else
			p->LTag=Link;
		if(!pre->rchild)
		{
			pre->RTag = Thread;
			pre->rchild = p;
		}
		else pre->RTag=Link;
		pre = p;
		InThreading(p->rchild);
	}
}

void InOrderThreading(Tree &Thrt,Tree T)
{
	if(!(Thrt = (Tree)malloc(sizeof(Node))))
		printf("开辟空间失败!");
	Thrt->LTag = Link;
	Thrt->RTag = Thread;
	Thrt->rchild = Thrt;
	if(!T)
		Thrt->lchild = Thrt;
	else
	{
		Thrt->lchild = T;
		pre = Thrt;
		InThreading(T);
		pre->rchild = Thrt;
		pre->RTag = Thread;
		Thrt->rchild = pre;
	}
}

void InOrderTraverse_Thr(Tree T)
{
	Tree p = T->lchild;
	while(p != T)
	{
		while(p->LTag == Link)
			p = p->lchild;
		printf("data = %c\t\t",p->data);
		printf("LTag = %d\t",p->LTag);
		printf("RTag = %d\n",p->RTag);
		while(p->RTag == Thread && p->rchild != T)
		{
			p = p->rchild;
			printf("data = %c\t\t",p->data);
			printf("LTag = %d\t",p->LTag);
			printf("RTag = %d\n",p->RTag);
		}
		p = p->rchild;
	}
}
int main()
{
	Tree T;
	Creat(T);
	Tree Thrt;
	InOrderThreading(Thrt,T);
	InOrderTraverse_Thr(Thrt);
	return 0;
}
