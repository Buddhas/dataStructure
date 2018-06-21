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
	cout<<"请输入要字符的个数:";
	cin>>n;
	T.length=n;
	//cout<<T.length<<endl;
    cout<<"请输入"<<n<<"个字符:"<<endl;
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
	cout<<"请输入要查找的字符:";
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
			cout<<"已找到:"<<e<<endl;
			cout<<"共找了:"<<n<<"次"<<endl;
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
