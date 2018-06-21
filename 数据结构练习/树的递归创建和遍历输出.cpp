#include<stdio.h>
#include<malloc.h>
#define ok 1
#define error -1
#define dep 5
typedef struct BiTrNode
{
	BiTrNode *lchild;
	BiTrNode *rchild;
	char date;

}*BiTree;
void creat(BiTree &T)
{
	char c;
	scanf("%c",&c);
 	if(c==' ')  
		T=NULL;
	else{
	T=(BiTrNode *)malloc(sizeof(BiTrNode));
	T->date=c;
	creat(T->lchild);
	creat(T->rchild);
	}

}
void printxuan(BiTree T)
{
	if(T)
	{
		printf("%c",T->date);
		
	}
	if(!T->lchild)
	{
		printf(" ");
	}else
	{

		printxuan(T->lchild);
	}if(!T->rchild)
	{
		printf(" ");
	}else
	{

		printxuan(T->rchild);
	}
		
}
void printzhong(BiTree T)
{	if(!T->lchild)
	{
		printf(" ");
	}else
	{

		printzhong(T->lchild);
	}
	if(T)
	{
		printf("%c",T->date);
		
	}
	if(!T->rchild)
	{
		printf(" ");
	}else
	{

		printzhong(T->rchild);
	}
		
}
void printhou(BiTree T)
{
	
	if(!T->lchild)
	{
		printf(" ");
	}else
	{

		printhou(T->lchild);
	}if(!T->rchild)
	{
		printf(" ");
	}else
	{

		printhou(T->rchild);
	}
		if(T)
	{
		printf("%c",T->date);
		
	}
}
int  depth(BiTree &T)
{
	if(!T) return 0;
	int x=0,y=0;
	x=depth(T->lchild);
	y=depth(T->rchild);
	return x>y?x+1:y+1;

}
void leave(BiTree T,int &count)
{if(T){

	if(T->lchild==NULL&&T->rchild==NULL)
		count++;
	else{
	leave(T->lchild,count);
	leave(T->rchild,count);
}
}

}

int main()
{
	int count=0;
	BiTree T;
	creat(T);
	printxuan(T);
	printf("\n");
	printzhong(T);
	printf("\n");
	printhou(T);
	leave(T,count);
	printf("\nÉî¶È£º%d\n",depth(T));
	printf("%Ò¶×ÓÊ÷£º%d",count);
}
