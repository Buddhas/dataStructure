/*#include<iostream>//����ʾ�� 
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int num;
	struct node *Pnext;	
} Node,*Pnode;

Pnode Add(int len)
{
	Pnode head,tail;
	Node *Pnew=new Node;
	head=Pnew;
	tail=head;
	int val;
	for(int i=0;i<len;i++)
	{
		Node *Pnew=new Node;
		cin>>val;
		tail->num=val;
		tail->Pnext=Pnew;
		tail=Pnew;
		
	}
	tail->Pnext=NULL;
	return head;
}
void print(Pnode head)
{
	while(head->Pnext!=NULL)
	{
		cout<<head->num<<endl;
		head=head->Pnext;
	}
}

int main()
{
	cout<<"��������Ҫ�����Ľڵ���"<<endl;
	int len;
	Pnode head;
	
	cin>>len;
	head=Add(len);
	print(head);
	
	
	
//	print(head);
	return 0;
}*/
#include<iostream>//��һ���������ʵ�� 
using namespace std;
typedef struct Node//��������ṹ 
{
	int num;
	struct Node *Pnext;
}Node,*Pnode;
Pnode Add(int len)//��ʼ������ 
{
	Node *pnew=new Node;
	Pnode head,tail;
	head=pnew;
	tail=pnew;
	tail->Pnext=NULL;
	int val;
	for(int i=0;i<len;i++)
	{
		cin>>val;
		tail->num=val;
		Node *p=new Node;
		tail->Pnext=p;
		tail=p;
	}
	
	tail->Pnext=NULL;
	return head;
}
Pnode dele(Pnode head,int *len)//ɾ���������� 
{
	
	Pnode p,r;
	p=head;
	int i,del,k=1;
	cout<<"��������Ҫɾ��������"<<endl;
	
	
	while(p->num!=del)
	{
		r=p;
		p=p->Pnext;
	} 
	r->Pnext=r->Pnext->Pnext;
	(*len)--;
	return head;
	
	
	
}
Pnode inser(Pnode head,int *len)//�����������ݣ���β��������ߴ��м���룩 
{
	int i;
	Pnode p;
	p=head;
	cout<<"��ѡ���β����������м����" <<endl<<"1Ϊ��β�����룬2Ϊ���м����"<<endl;//��ΪҪ��������������м����û������ 
	cin>>i;
	if(i==1)
	{
		while(p->Pnext!=NULL)
		{
			p=p->Pnext;
		}
		int l;
		//Node *pnew=new Node;
		//p->Pnext=pnew;
		//pnew->Pnext=NULL;
		//p=pnew;
		cout<<"��������Ҫ���ӵĽڵ���"<<endl;
		cin>>l;
		int val;
		for(int j=0;j<l;j++)
		{
			(*len)++;
			Node *pnew=new Node;
			cin>>val;
			p->num=val;
			p->Pnext=pnew;
			p=pnew;
			
			
		} 
	}

	
	p->Pnext=NULL;
	return head;
}

Pnode sort(Pnode head,int len)//���������ݽ������� 
{
	Pnode p,p1;
	p=head;
	int val;
	for(int i=0;i<len;i++)
	{
		val=p->num;
		p1=p;
		for(int j=i+1;j<len;j++)
		{
			p1=p1->Pnext;
			if(p1->num>p->num)
			{
				val=p1->num;
				 p1->num=p->num;
				 p->num=val;
				
			}
		}
		p=p->Pnext;
	}
	
		return head;
}
void print(Pnode head)
{
	while(head->Pnext!=NULL)
	{
		cout<<head->num<<"   ";
		head=head->Pnext;
	}
	
}
int main()
{
	int len;
	cout<<"������Ҫ�����Ľڵ���"<<endl;
	cin>>len;
	Pnode head;
	head=Add(len);
	int del;
	cout<<"�Ƿ�Ҫ�޸ģ��������ӽڵ�����ɾ���ڵ�����"<<endl;
	cout<<"����1Ϊ���ӽڵ㣬2Ϊɾ���ڵ㣬0Ϊ�����޸�"<<endl;
	cin>>del;

		if(del==1)
		{
			
			inser(head,&len);
			
		}
		if(del==2)
		{
		
			head=dele(head,&len);
	
		} 
	head=sort(head,len);
	cout<<"���ս����"<<endl; 
	print(head);
	return 0;
}
/*#include<iostream>
using namespace std;
typedef struct NODE//����ṹ 
{
	int num;
	struct NODE *pnext;
} Node,*Pnode;
Pnode build(int len)//��ʼ������ 
{
	Node *pnew=new Node;
	Pnode head,p;
	head=pnew; p=pnew;
	for(int i=0;i<len;i++)
	{
		Node *pnew=new Node;
		cin>>p->num;
		p->pnext=pnew;
		pnew->pnext=NULL;
		p=pnew;
		
	}
	return head;
	 
}
Pnode Add(Pnode head,int * len)//������������ ,��Ϊ�����������������ֻ��β���������� 
{
	Pnode p;
	p=head;
	while(p->pnext!=NULL)
	{
		p=p->pnext;
	} 
	int add;
	cout<<"��������Ҫ���ӵĽڵ���"<<endl;
	cin>>add;
	for(int i=0;i<add;i++)
	{
		Node *pnew=new Node;
		cin>>p->num;
		p->pnext=pnew;
		p=pnew;
		(*len)++;
		}
	p->pnext=NULL;
	return head;
}
Pnode del(Pnode head,int * len)//ɾ���������� 
{
	return head;
} 
Pnode sort(Pnode head,int len )//���������ݽ������� 
{
	Pnode p,p1;
	p=head;
	int val;
	for(int i=0;i<len;i++)
	{
		
		for(int j=i+1;j<len;j++)
		{
			p1=p->pnext;
			if(p->num<p1->num)
			{
				val=p->num;
				p->num=p1->num;
				p1->num=val; 
			}
			
		}
		p=p->pnext;
	}
	
	return head;
}
Pnode print(Pnode head,int len)//�����������
{
		while(head->pnext!=NULL)
	{
		cout<<head->num<<"   ";
		head=head->pnext;
	}
} 
int main()
{
	Pnode head;
	int len;
	cout<<"��������Ҫ����������ڵ���"<<endl;
	cin>>len;
	head=build(len);
	//int i;
	/*cout<<"�Ƿ���Ҫ���������ݽ����޸�"<<endl;
	cout<<"����1Ϊ�����������ݣ�2Ϊɾ����������,��������Ϊ���������ݲ���"<<endl<<"��ѡ����Ҫ���еĲ���"<<endl;
	cin>>i;
	if(i==1)
	{
		head=Add(head,&len);
	}
	if(i==2)
	{
		head=del(head,&len);
	}
	head=sort(head,len);
	cout<<"���ս������"<<endl;
	print(head,len);
} */
