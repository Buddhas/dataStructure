#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int fir,sec,thir,sum;
	for(int i = 100; i<1000; i++)
	{
		fir = i/100;
		sec = i/10%10;
		thir = i%10;
		sum = pow(fir,3)+pow(sec,3)+pow(thir,3);
		if(sum == i)
		{
			cout<<i<<endl;
		}
	}
 } 
