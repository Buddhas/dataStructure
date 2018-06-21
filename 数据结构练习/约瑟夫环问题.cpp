//#include<iostream>//没写出来 ，有bug 
//using namespace std;
//typedef struct Node
//{
//	int num;
//	struct Node *Pnode;
//}Node,*Pnode;
//Pnode build(Pnode head,int len)
//{
//	Pnode p;
//	
//	Node *pnew=new Node; 
//	p=pnew;
//	head=pnew;
//	for(int i=0;i<len;i++)//对人数进行编号 
//	{
//		Node *pnew=new Node; 
//		p->num=i+1;
//		p->Pnode=pnew;
//		pnew->Pnode=NULL;
//		p=pnew;
//		 
//	}
//	return head;
//	
//}
//void out(Pnode head,int *len,int val)
//{
//	Pnode p,r;
//	p=head;
//	
//	int i=*len;//判断while是否结束 
//	int j=*len; 
//	int a=0;
//	
//		for(int n=0;n<*len;n++)
//		{
//			
//			for(int m=1;m<=val;m++)
//		{
//			if(m==val)
//			{
//				cout<<p->num<<endl;
//				r->Pnode=r->Pnode->Pnode;
//			}
//			else
//			{
//				r=p;
//				p=p->Pnode;
//			}
//			
//			a++;
//		}
//		if(i==a)
//		{
//			p=head;
//			a=0;
//		}
//		i--;
//		
//		}
//		
//}
//int main()
//{
//	Pnode head;
//	int len;
//	cout<<"请输入一共有多少人"<<endl;
//	cin>>len;
//	int val;
//	cout<<"请输入排位为第几的人出列"<<endl;
//	cin>>val;
//	head=build(head,len);//初始化链表
//	out(head,&len, val);
// 
//}







#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int JosephusFun(int nAllCount,int nStep)
{
	int *npIndex=NULL , i=0 ,nCount=0;

	npIndex=(int *)malloc(sizeof(int)*nAllCount);

	for (i=0;i<nAllCount;i++)
	{
		npIndex[i]=i+1;
	}
	//打印报数前的顺序
	printf("报数前序号为：");
	for (i=0;i<nAllCount;i++)
	{
		printf("%d",npIndex[i]);
		printf("  ");
	}
	printf("\n");

	printf("=======================================\n");
	printf("报数出列顺序为：\n");
	i=-1;
	while(nCount<nAllCount)        //全部出列后循环结束
	{
		int nIndex=0 ;

		while(nIndex<nStep)        //报数等于步距时出列
		{
			i=(i+1)%nAllCount;      //循环报数

			if (npIndex[i]==0)      //如果当前序号已出列，则下一位报数
			{
				continue;
			}
			nIndex++;              //报数一次
		}

		//打印当前出列的编号
		printf("第%d个出列的为:%d\n",nCount+1,npIndex[i]);
		npIndex[i]=0;
		nCount++;
	}
	printf("=======================================\n");

	return 0;
}

int main()
{
	int nAllCount=0,nStep=0;

	printf("请输入总个数：");
	scanf("%d",&nAllCount);
	
	printf("请输入出列步长：");
	scanf("%d",&nStep);
	printf("\n");

	JosephusFun(nAllCount,nStep);

	return 0;
}
 //测试如下：
