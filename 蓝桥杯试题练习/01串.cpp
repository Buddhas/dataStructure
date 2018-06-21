#include<iostream>
using namespace std;
int main()
{
	int a[5] = {0};
	for(int i = 0;i<=1;i++)
	{
		a[0] = i;
		for(int j = 0;j<=1;j++)
		{
			a[1] = j;
			for(int k = 0;k<=1;k++)
			{
				a[2] = k;
				for(int l = 0;l<=1;l++)
				{
					a[3] = l;
					for(int n = 0;n<=1;n++)
					{
						a[4] = n;
						cout<<a[0];
						cout<<a[1];
						cout<<a[2];
						cout<<a[3];
						cout<<a[4]<<endl;
					}
				}
			}
		}
	}
	return 0;
 } 
