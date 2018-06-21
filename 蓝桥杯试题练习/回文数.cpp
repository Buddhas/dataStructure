#include<iostream>
using namespace std;
int Six(int num);
int Five(int num);
int main()
{
	int num;
	cin>>num;
	Six(num);
	//cout<<"五位回文数"<<endl;
	Five(num);
	return 0;	
} 
int Five(int num)
{
	int a,b,c,d,e;
	for(int i = 10000; i<=99999;i++)
	{
		a = i/10000;
		b = i/1000%10;
		c = i/100%10;
		d = i/10%10;
		e = i%10;
		if( (a == e && b ==d)&& a+b+c+d+e ==num)
		{
			cout<<i<<endl;
		}
	}
}
int Six(int num)
{
	int cir[6],i,j,k,l,sum;
	int n;
	n = num % 2;
	if(n != 0)
	{
		cout<<"输入值没有六位回文数"<<endl;
		return 0;
	}
	else
	{
		n = num / 2;
		for(i = 1;i<=9 ;i++)
		{
			cir[0] = i;
			for(j = 1;j <=9;j++)
			{
				cir[1] = j;
				for(k = 1; k<=9;k++)
				{
					cir[2] = k;
					sum = cir[0]+cir[1]+cir[2];
						if(n == sum)
					{
						cir[5] = cir[0];
						cir[4] = cir[1];
						cir[3] = cir[2];
						for(l=0;l<6;l++)
						{
							cout<<cir[l];
						}
						cout<<endl;
						
					}
				}
			}
		
		}
	}
}
