#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node * P;
}Node,*Pnode;
Pnode BulidList();
int main()
{
	Pnode head;
	head = BulidList();
	return 0;
 } 
