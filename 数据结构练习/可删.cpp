/*#include<iostream>
using namespace std;
int main()
{
	/*int *i;int a[5];i=a;
	int *j;
	j=i;
	for(int k=0;k<5;k++)
	{
		cin>>(*i);
		i++;
	}
	int *i;int a[5];
	i=a;
	for(int j=0;j<5;j++)
	{
		cin>>i[j];
	}
	for(int j=0;j<5;j++)
	{
		cout<<i[j]<<endl;;
	}
	
} */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int number = 12345;
char string[25];
itoa(number, string, 10);
printf("integer = %d string = %s\n", number, string);
return 0;
}
