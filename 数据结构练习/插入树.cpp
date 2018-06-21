#include<stdio.h>
#include<stdlib.h>
typedef struct Tree
{
	int data;
	struct Tree *Lchild;
	struct Tree *Rchild;
 } Tree,*PTree;
void CreatTree(PTree & T)
{
	int n;
	scanf("%d",&n);
	if(n == 0)
	T = NULL;
	else
	{
		
		T = (PTree)malloc(sizeof(Tree));
		T->data = n;
		CreatTree(T->Lchild);
		CreatTree(T->Rchild);
	}
	
}
void MPTree(PTree & T)
{
	if(T)
	{
	 
		MPTree(T->Lchild);
		printf("%d\t",T->data);
		MPTree(T->Rchild);
	}
}
void SerachTree(PTree  & T,int Inser)
{
	PTree P;
	while(T)
	{
		P = T;
		if (Inser < T->data)
		T = T->Lchild;
		else
		T = T->Rchild;
		
	}
	
	if (P->data > Inser)
	{
	P->Lchild = (PTree)malloc(sizeof(Tree));
	P->Lchild->data= Inser;
	P->Lchild->Lchild = NULL;
	P->Lchild->Rchild= NULL;
	}
	else
	{
	P->Rchild = (PTree)malloc(sizeof(Tree));
	P->Rchild->data= Inser;
	P->Rchild->Lchild = NULL;
	P->Rchild->Rchild= NULL;
	}
	
	
	
}
void InserTree(PTree & T)
{
	printf("请输入需要插入的值\n");
	int Inser;
	
	scanf("%d",&Inser);
	if (Inser < T->data)
	T = T->Lchild;
	else
	T = T->Rchild;
	SerachTree(T,Inser); 
	
	//MPTree(TT);
	
	
}
int main()
{
	PTree T,T1;
	CreatTree(T);
	T1 = T;
	InserTree(T);
	MPTree(T1);
}
