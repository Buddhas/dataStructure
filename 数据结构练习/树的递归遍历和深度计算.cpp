#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	char date;
	struct tree *Lchild;
	struct tree *Rchild;
}*PTree;
void CreatTree(PTree & T)
{
	char ch;
	scanf("%c",&ch);
	if(ch == ' ')
	{
		T = NULL;
	}
	else
	{
		T = (PTree)malloc(sizeof(tree));
		T->date = ch;
		CreatTree(T->Lchild);
		CreatTree(T->Rchild);
	}
}
void FPrint(PTree T)
{
	if(T)
	{
		printf("%c",T->date);
		FPrint(T->Lchild);
		FPrint(T->Rchild);
	}
	
}
void MPrint(PTree T)
{
	if(T)
	{
		MPrint(T->Lchild);
		printf("%c",T->date);
		MPrint(T->Rchild);
	}
	
	
}
void LPrint(PTree T)
{
	if(T)
	{
		LPrint(T->Lchild);
		LPrint(T->Rchild);
		printf("%c",T->date);
	}
 } 
int Depth(PTree & T)
{
	if(!T)
	return 0;
	else
	{
		int x,y;
		x = Depth(T->Lchild);
		y = Depth(T->Rchild);
		return x>y?x+1:y+1;	
	} 	
} 
int Leave(PTree & T,int & count)
{
	
	if(T){
			if(T->Lchild == NULL && T->Rchild == NULL)
	{
		count++;
	}
	else
	{
		Leave(T->Lchild,count);
		Leave(T->Rchild,count);
	}
	}
	return count;
}

int main()
{
	int count = 0;
	PTree T;
	CreatTree(T);
	FPrint(T);
	printf("\n");
	MPrint(T);
	printf("\n");
	LPrint(T);
	printf("\n");
	printf("树的深度为:%d\n",Depth(T));
	printf("树的叶子数为:%d\n",Leave(T,count));
}
