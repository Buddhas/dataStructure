//#include<iostream>//ûд���� ����bug 
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
//	for(int i=0;i<len;i++)//���������б�� 
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
//	int i=*len;//�ж�while�Ƿ���� 
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
//	cout<<"������һ���ж�����"<<endl;
//	cin>>len;
//	int val;
//	cout<<"��������λΪ�ڼ����˳���"<<endl;
//	cin>>val;
//	head=build(head,len);//��ʼ������
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
	//��ӡ����ǰ��˳��
	printf("����ǰ���Ϊ��");
	for (i=0;i<nAllCount;i++)
	{
		printf("%d",npIndex[i]);
		printf("  ");
	}
	printf("\n");

	printf("=======================================\n");
	printf("��������˳��Ϊ��\n");
	i=-1;
	while(nCount<nAllCount)        //ȫ�����к�ѭ������
	{
		int nIndex=0 ;

		while(nIndex<nStep)        //�������ڲ���ʱ����
		{
			i=(i+1)%nAllCount;      //ѭ������

			if (npIndex[i]==0)      //�����ǰ����ѳ��У�����һλ����
			{
				continue;
			}
			nIndex++;              //����һ��
		}

		//��ӡ��ǰ���еı��
		printf("��%d�����е�Ϊ:%d\n",nCount+1,npIndex[i]);
		npIndex[i]=0;
		nCount++;
	}
	printf("=======================================\n");

	return 0;
}

int main()
{
	int nAllCount=0,nStep=0;

	printf("�������ܸ�����");
	scanf("%d",&nAllCount);
	
	printf("��������в�����");
	scanf("%d",&nStep);
	printf("\n");

	JosephusFun(nAllCount,nStep);

	return 0;
}
 //�������£�
