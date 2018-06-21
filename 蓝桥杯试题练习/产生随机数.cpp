//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int a[5];
//	int i;
//	for(i = 0;i<5;i++)
//	{
//		a[i] = rand()%10;
//	}
//	for(i = 0; i<5;i++)
//	{
//		cout<<a[i]<<endl;
//	}
//}
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    double random(double,double);
    srand(unsigned(time(0)));
    for(int icnt = 0; icnt != 10; ++icnt)
        cout << "No." << icnt+1 << ": " << int(random(0,10))<< endl;
    return 0;
}

double random(double start, double end)
{
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}
