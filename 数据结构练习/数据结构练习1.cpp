#include<iostream>
using namespace std;
typedef struct NODE
{
	int num;
	struct NODE *pn;
}Node,*Pnode;
Pnode buliding(int len)
{
	Pnode head,p;
	Node *pnew=new Node;
	p=pnew;
	head=pnew;
	cout<<"����ڵ�ֵ"<<endl;
	for(int i=0; i<len;i++)
	{
		cin>>p->num;
		Node *pnew=new Node;
		p->pn=pnew;
		p=pnew;
		p->pn=NULL;
	}
	return head;
}
void show(Pnode head)
{
	Pnode p;
	p=head;
	while(p->pn!=NULL)
	{
		cout<<p->num;
		p=p->pn;
	}
}
int main()
{
	Pnode head;
	cout<<"��������Ҫ�����Ľڵ���"<<endl;
	int a;
	cin>>a;
	head=buliding(a);
	//cout<<head->num;
	//head=head->pn;
	//cout<<head->num;
	show(head);
	return 0;
} 
