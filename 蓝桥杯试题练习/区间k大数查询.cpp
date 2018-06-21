//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Sort(int *arr,int low,int hight);
//int main()
//{
//    int arr[1001];
//    int tmp[1001];
//    int n,m,l,r,k;
//    int i;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    scanf("%d",&m);
//    while(m--)
//    {
//        scanf("%d %d %d",&l,&r,&k);
//        memcpy(tmp,&arr[l],sizeof(int)*(r-l+1)); 
//        Sort(tmp,0,r-l);
//        printf("%d\n",tmp[k-1]);
//    }
//    return 0;
//}
//void Sort(int *arr,int low,int hight)
//{
//    if(low<hight)
//    {
//        int l = low,h = hight;
//        int tmp = arr[low];
//        while(l < h)
//        {
//            while(l < h && tmp >= arr[h])
//            {
//                h--;
//            }
//            arr[l] = arr[h];
//            while(l < h && tmp <= arr[l])
//            {
//                l++;
//            }
//            arr[h] = arr[l];
//        }
//        arr[l] = tmp;
//        Sort(arr,low,l-1);
//        Sort(arr,l+1,hight);
//    }
//}
#include<iostream>
using namespace std;
int sort(int i,int *a);
int main()
{
	int a[100];
	int i;//数的个数 
	cin>>i;
	for(int j = 0;j<i;j++)
	{
		cin>>a[j];
	}
	int l;
	cin>>l;
	sort(l,a);
	return 0;
}
int sort(int i,int *a)
{
	int j,k,l,max,max1;//第几个数以及第几大数
	int b[100]; 
	for(int m=0;m<i;m++)
	{
		cin>>l;
		cin>>j;
		cin>>k;
		max = a[0]; 
		b[0] = 0;
		for(int n = 0;n<j-1;n++)
		{
			for(int x = n+1;x<j-1;x++)
			{
				if(max<a[x])
				{
					b[n+1] = a[x];
				}
			}
		}
		cout<<b[k];
	}
	return 0;
	
}
