#include<iostream>
using namespace std;
void Sort(int *a,int n)
{	//≤Â»Î≈≈–Ú 
  int i,j,k;
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(a[i]>a[j])
  		{
  			k=a[j];
  			a[j]=a[i];
  			a[i]=k;
		  }
	  }
  }
}
int main()
{
  int n,*a;
  cin>>n;
  a = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>*(a+i);
  }
  Sort(a,n);
  for(int i=0;i<n;i++)
  {
    cout<<*(a+i)<<" ";
  }
  delete [] a;
}
