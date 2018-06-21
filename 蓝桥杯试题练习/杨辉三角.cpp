//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int s = 1, h;                    // 数值和高度
//    int i, j;                        // 循环计数
//    scanf("%d", &h);                 // 输入层数
//    printf("1\n");                   // 输出第一个 1
//    for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
//    {
//        printf("1 ");                // 第一个 1
//        for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
//            printf("%d ", (s = (i - j) / j * s));
//            //printf("%d ", (s = (i - j) * s / j));
//        printf("1\n");               // 最后一个 1，换行
//    }
//    getchar();                       // 暂停等待
//    return 0;
//}
#include<iostream>
using namespace std;
#define N 40
int main()
{
	int a[N][N];
	int i,j,k;
	cout<<"请输入需要创建的三角数量"<<endl;
	cin>>i;
	for(j = 0; j < i; j++)
	{
		a[j][0] = 1;
		a[j][j] = 1;
		for(k = 1; k < j; k++)
		{
			a[j][k] = a[j - 1][k - 1]+a[j - 1][k]; 
		}
	}
	for(j = 0; j < i; j++)
	{
		for(k = 0; k <= j; k++)
		{
			cout<<a[j][k]<<"\t";
		}
		cout<<endl;
	}
}
