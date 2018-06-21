#include<stdio.h>
#include<stdlib.h>
bool runnian(int n)
{
	if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
	return true;
	else 
		return false;
 } 
 int main()
 {
 	int year,mon,day,sum = 0;
 	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 	scanf("%d%d%d",&year,&mon,&day);
 	if(runnian)
 	a[1] = 29;
 	for(int i = 0;i<mon-1;i++)
 	{
 		sum+=a[i];
	 }
	 sum = sum+day;
	 printf("%d",sum);
 }
