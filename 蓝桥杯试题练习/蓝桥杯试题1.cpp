#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define M 10007
main()
{long n=-1;
int a1=1,a2=1,sum=0,t,i;
do
{
scanf("%ld",&n);
}
while(n<1||n>1000000);
for(i=1;i<=n;i++)
{
sum=a1%M;
t=a2;
a2=(a1+a2)%M;
a1=t;
}
printf("%d\n",sum);
}
