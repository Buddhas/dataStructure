//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int i, n;
//    char s1[10];    //输入的16进制数
//    char s2[20];    //输出的八进制数
//   
//    cin >> s1;      //输入0~9, A~F, 不要输入其它符号
//
//    n = 0;
//    i = 0;
//    while (s1[i]) {
//      n *= 16;
//      if ((s1[i] >= '0') && (s1[i] <= '9'))  n += (s1[i] - 48);
//      if ((s1[i] >= 'A') && (s1[i] <= 'F'))  n += (s1[i] - 55);
////无视其它符号
//      i++;
//    }
//
//    cout << "_10_ = " << n;
//    cout << endl << "__8_ = ";
//
//    s2[0] = n % 8 + 48;
//    n /= 8;
//
//    i = 1;
//    while (n) {
//      s2[i] = n % 8 + 48;
//      n /= 8;
//      i++;
//    }
//    while (i) {
//      cout << s2[i - 1];
//      i--;
//    }
//    cout << endl;
//    system("pause");
//}//网上答案 
/*
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<math.h>
using namespace std;
void fun(char *,int num);
int main()
{
	char a[20];
	int num;
	cin>>a;
	num=strlen(a);
	fun(a,num);
	return 0;
}
void fun(char * a,int n)
{
	int sum,j,dec;
	sum = 0;
	for(j=0;j<n;j++)
	{
		if(a[j]>='0'&&a[j]<='9')
		{
			dec = a[j]-'0';
			sum+=dec * pow(16,n-j-1);
		}
		if(a[j]>='A'&&a[j]<='Z')
		{
			dec = a[j] - 55;
			sum+=dec * pow(16,n-j-1);
		}
	}
	cout<<sum<<endl;
}*/
//再试十六进制转换十进制
#include<stdlib.h>
#include<stdio.h> 
#include<string.h>
#include<math.h>
void Trans(char * ch,int len)
{
	int i,j,sum,k;
	for(int i = 0;i < len; i++)
	{
		if(ch[i] >='0' && ch[i] <= '9')
		{
			k = ch[i] - '0';
			sum+= pow(10,len-i-1);
		}
		if(ch[i] >='A' && ch[i] <='Z')
		{
			k = ch[i] - 55;
			sum+= pow(10,len-i-1);
		}
		printf("%d",sum);
	}
}
int main()
{
	char ch[20];
	scanf("%s",ch);
	int Len;
	Len = strlen(ch);
	Trans(ch,Len);
	return 0;	
} 
