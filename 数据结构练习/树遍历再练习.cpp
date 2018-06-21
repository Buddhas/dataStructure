#include<stdio.h>
#include<stdlib.h>
typedef struct Tree
{
	char date;
	struct Tree * Lchild;
	struct Tree * Rchild;
 } Tree,* PTree;
 int count = 0;
 CreatTree(PTree & T)
 {
 	char ch;
 	scanf("%c",&ch);
 	if(ch == ' ')
 	{
 		T = NULL;
	 }
	 else 
	 {
	 	T = (PTree)malloc(sizeof(Tree));
	 	T->date = ch;
	 	CreatTree(T->Lchild);
	 	CreatTree(T->Rchild);
	 }
 }
 void FFound(PTree & T)
 {
 	if(T)
 	{
 		printf("%c",T->date);
 		FFound(T->Lchild);
 		FFound(T->Rchild);
	 }
 }
 void MFound(PTree & T)
 {
 	if(T)
 	{
 		MFound(T->Lchild);
 		printf("%c",T->date);
 		
 		MFound(T->Rchild);
	 }
 }
 void Depth(PTree & T)
 {
 	if(T)
 	{
 		if(T->Lchild == NULL && T->Rchild == NULL)
 		{
 			count++;
		 }
		 else
		 {
		 	Depth(T->Lchild);
		 	Depth(T->Rchild);
		 }
	}
 }
 int main()
 {
 	PTree T;
 	CreatTree(T);
 	FFound(T);
 	printf("\n");
 	MFound(T);
 	printf("\n");
 	Depth(T);
 	printf("%d",count);  
  } 
