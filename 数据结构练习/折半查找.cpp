#include<iostream>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define Max 20
int i,j;
using namespace std;
typedef struct
{
	int *a;
	int length;
}table;
int Create(table &T)
{
	T.a=new int[Max];
	int n;
	cout<<"������Ҫ�ַ��ĸ���:";
	cin>>n;
	T.length=n;
	//cout<<T.length<<endl;
    cout<<"������"<<n<<"���ַ�:"<<endl;
	for(i=1;i<=n;i++)
	{
		cin>>T.a[i];
	}
	return OK;
}
void show(table T)
{
	for(i=0;i<T.length;i++)
	{
		cout<<T.a[i]<<endl;
	}
}
int Search(table T)
{
	int e;
	int n=1;
	cout<<"������Ҫ���ҵ��ַ�:";
    cin>>e;
	int low,high,mid;
	low=1;
	high=T.length;
	while(low<=high)
	{
	    mid=(low+high)/2;
		//cout<<"mid="<<mid<<endl;
		if(e==T.a[mid])
		{
			cout<<"���ҵ�:"<<e<<endl;
			cout<<"������:"<<n<<"��"<<endl;
			break;
		}
		else if(T.a[mid]<e)
			low=mid+1;
		else
			high=mid-1;
		n++;
	}
	return OK;
}
int main()
{
	table T;
	Create(T);
	Search(T);
	//show(T);
	return 0;
}
