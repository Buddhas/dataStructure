#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int n;
	struct Node * p;
}Node,* Pnode;
Pnode CreatList();//���������� 
Pnode Inser(Pnode &head);//������� 
int Delete(Pnode head);//����ɾ��
int Printf(Pnode head);//����ĵ������ 
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
	printf("��������Ҫ�����Ľڵ����\n");
	scanf("%d",&i);
	printf("������ڵ����ֵ\n"); 
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
	printf("��������Ҫ���������һ���ڵ�\n");
	int i,j;
	scanf("%d",&i);
	if(i == 1)
	{
		Pnode Pnew = (Pnode)malloc(sizeof(Node));
		Pnew->p = head;
		head = Pnew;
		printf("������ڵ��ֵ\n");
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
		printf("������������ֵ\n");
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
