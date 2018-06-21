#include<stdio.h>
bool RunNian(int year)
{
	if((year%4 == 0)&&(year%100 != 0) || year%400 == 0)
	return true;
	else
	return false;
}
int main()
{
	int a[13];
	int year,mon,day,sum = 0;
	scanf("%d%d%d",&year,&mon,&day);
	for(int i = 1; i <=12;i++)
	{
		//printf("1111\n");
		if(i == 1 || i == 3 ||i == 5 ||i == 7||i ==8 ||i ==10 || i ==12)
		{
			a[i] = 31;
		}
		if(i == 4 || i==6 || i==9 ||i ==11)	
		a[i] = 30;
		if(i == 2)
		{
			if(RunNian(year))
				a[i] = 29;
				else 
					a[i] =28;
		}
		
	}	
	for(int i = 1;i <=12;i++)
	{
		printf("第%d个月天数为%d\n",i,a[i]);
	}
	for(int i = 1; i < mon; i++)
	{
		sum = sum + a[i];
	}
	sum = sum + day;
	printf("%d\n",sum);
} 
