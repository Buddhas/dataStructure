//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int s = 1, h;                    // ��ֵ�͸߶�
//    int i, j;                        // ѭ������
//    scanf("%d", &h);                 // �������
//    printf("1\n");                   // �����һ�� 1
//    for (i = 2; i <= h; s = 1, i++)         // ���� i �� 2 �����
//    {
//        printf("1 ");                // ��һ�� 1
//        for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
//            printf("%d ", (s = (i - j) / j * s));
//            //printf("%d ", (s = (i - j) * s / j));
//        printf("1\n");               // ���һ�� 1������
//    }
//    getchar();                       // ��ͣ�ȴ�
//    return 0;
//}
#include<iostream>
using namespace std;
#define N 40
int main()
{
	int a[N][N];
	int i,j,k;
	cout<<"��������Ҫ��������������"<<endl;
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
