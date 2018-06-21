#include<stdio.h>
#include<stdlib.h>
int Link = 0;
int Thread = 1;
typedef struct BiThrNode 
{
	char date;
	struct BiThrNode * Lchild;
	struct BiThrNode * Rchild;
	int LTag;
	int RTag;
}BiThrNode,*BiThrTree;
//创建二叉树 
BiThrTree pre;
void CreatTree(BiThrTree & T)
{
	char ch;
	scanf("%c",&ch);
	if(ch == ' ')
	{
		T = NULL;
	}
	else 
	{
		T = (BiThrTree)malloc(sizeof(BiThrNode));
		T->date = ch;
		T->LTag = Link;
		T->RTag = Thread;
		CreatTree(T->Lchild);
		CreatTree(T->Rchild);
	}
}

// 中序遍历线索二叉树
void MFound(BiThrTree & T)
{
	if(T)
	{
		MFound(T->Lchild);
		if(!T->Lchild)
		{
			T->LTag = Thread;
			T->Lchild = pre;
			}	
			if(!pre->Rchild)
			{
				pre->LTag = Thread;
				pre->Rchild = T;
			}
			pre = T;
			MFound(T->Rchild);
	}	
} 
void OrderCreatTree(BiThrTree & T,BiThrTree & pre)
{
	pre = (BiThrTree)malloc(sizeof(BiThrNode));
	pre->Lchild = T;
	pre->LTag = Link;
	 
	MFound(T);
	pre->Rchild = T;
	pre->RTag = Thread;
	T->Rchild = pre; 
}

 void Print(BiThrTree & T)
 {
 	if(T)
 	{
 		Print(T->Lchild);
 		printf("%d\t%c\t%d\n",T->LTag,T->date,T->RTag);
 		//Print(T->Rchild);
	 }
 }
int main()
{
	BiThrTree T;
	CreatTree(T);	

	
	OrderCreatTree(T,pre);
	Print(T);	

	//MFound(T);

}
