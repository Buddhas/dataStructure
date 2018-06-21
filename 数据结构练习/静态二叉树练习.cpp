#include<iostream>
using namespace std;
typedef struct tree
{
	int num;
	struct tree * plchild;//左子树指针
	struct tree * prchild;//右子树指针 
} tree ,* ptree;
/*ptree cread(ptree head)
{
	tree p1,p2,p3,p4,p5,p6,p7;
	head=&p1;
	p1.num=1;
	p2.num=2;
	p3.num=3;
	p4.num=4;
	p5.num=5;
	p6.num=6;
	p7.num=7;
	p1.plchild=&p2;
	p1.prchild=&p5;
	p2.plchild=&p3;
	p2.prchild=&p4;
	p3.plchild=NULL;
	p3.prchild=NULL;
	p4.plchild=NULL;
	p4.prchild=NULL;
	p5.plchild=&p6;
	p5.prchild=&p7;
	p6.plchild=NULL;
	p6.prchild=NULL;
	p7.plchild=NULL;
	p7.prchild=NULL;
	
	return head;	

} *///需要动态分配内存 
ptree cread(ptree head)
{
	tree *p1=new tree;
	tree *p2=new tree;
	tree *p3=new tree;
	tree *p4=new tree;
	tree *p5=new tree;
	tree *p6=new tree;
	tree *p7=new tree;
	p1->num=1;
	p2->num=2;
	p3->num=3;
	p4->num=4;
	p5->num=5;
	p6->num=6;
	p7->num=7;
	p1->plchild=p2;
	p1->prchild=p5;
	p2->plchild=p3;
	p2->prchild=p4;
	p3->plchild=NULL;
	p3->prchild=NULL;
	p5->plchild=p6;
	p5->prchild=p7;
	p6->plchild=NULL;
	p6->prchild=NULL;
	p7->plchild=NULL;
	p7->prchild=NULL;
	p4->plchild=NULL;
	p4->prchild=NULL;
	return p1;
	 
}
void print(ptree head)
{
	if(head!=NULL)
	
	{
		cout<<head->num<<"   ";
		print(head->plchild);
		print(head->prchild);
	}
}
int main()
{
	ptree head;
	head=cread(head);//创建树
	
	print(head);//输出树 
} 
