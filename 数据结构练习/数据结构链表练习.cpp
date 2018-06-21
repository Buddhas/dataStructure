/*#include<iostream>//链表示例 
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
	cout<<"请输入需要创建的节点数"<<endl;
	int len;
	Pnode head;
	
	cin>>len;
	head=Add(len);
	print(head);
	
	
	
//	print(head);
	return 0;
}*/
#include<iostream>//第一次链表操作实例 
using namespace std;
typedef struct Node//定义链表结构 
{
	int num;
	struct Node *Pnext;
}Node,*Pnode;
Pnode Add(int len)//初始化链表 
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
Pnode dele(Pnode head,int *len)//删除链表数据 
{
	
	Pnode p,r;
	p=head;
	int i,del,k=1;
	cout<<"请输入需要删除的数据"<<endl;
	
	
	while(p->num!=del)
	{
		r=p;
		p=p->Pnext;
	} 
	r->Pnext=r->Pnext->Pnext;
	(*len)--;
	return head;
	
	
	
}
Pnode inser(Pnode head,int *len)//增加链表数据（从尾部插入或者从中间插入） 
{
	int i;
	Pnode p;
	p=head;
	cout<<"请选择从尾部插入或者中间插入" <<endl<<"1为从尾部插入，2为从中间插入"<<endl;//因为要经过排序操作，中间插入没有意义 
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
		cout<<"请输入需要增加的节点数"<<endl;
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

Pnode sort(Pnode head,int len)//对链表数据进行排序 
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
	cout<<"请输入要创建的节点数"<<endl;
	cin>>len;
	Pnode head;
	head=Add(len);
	int del;
	cout<<"是否要修改（包括增加节点数与删除节点数）"<<endl;
	cout<<"输入1为增加节点，2为删除节点，0为不做修改"<<endl;
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
	cout<<"最终结果是"<<endl; 
	print(head);
	return 0;
}
/*#include<iostream>
using namespace std;
typedef struct NODE//链表结构 
{
	int num;
	struct NODE *pnext;
} Node,*Pnode;
Pnode build(int len)//初始化链表 
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
Pnode Add(Pnode head,int * len)//插入链表数据 ,因为进行了排序操作，故只从尾部插入数据 
{
	Pnode p;
	p=head;
	while(p->pnext!=NULL)
	{
		p=p->pnext;
	} 
	int add;
	cout<<"请输入需要增加的节点数"<<endl;
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
Pnode del(Pnode head,int * len)//删除链表数据 
{
	return head;
} 
Pnode sort(Pnode head,int len )//对链表数据进行排序 
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
Pnode print(Pnode head,int len)//输出链表数据
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
	cout<<"请输入需要创建的链表节点数"<<endl;
	cin>>len;
	head=build(len);
	//int i;
	/*cout<<"是否需要对链表数据进行修改"<<endl;
	cout<<"输入1为增加链表数据，2为删除链表数据,其他数据为不进行数据操作"<<endl<<"请选择需要进行的操作"<<endl;
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
	cout<<"最终结果如下"<<endl;
	print(head,len);
} */
