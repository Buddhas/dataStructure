
//不懂 
#include<stdio.h>
int count = 0;
int HanNuoTa(int i,char A,char B,char C)
{
	if(i == 1)
	{
		printf("%c->%c\n",A,C);
		count++;
		return 0;
	}
	else
	{
		HanNuoTa(i-1,A,C,B);   //将i-1盘子从A借C移动到B 
		count++; 
		printf("%c->%c\n",A,C);//将盘子从A移动到C 
		HanNuoTa(i-1,B,A,C);//将n-1盘子从B借A移动到C 
		count++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	HanNuoTa(n,'A','B','C');
	printf("需要经过%d步\n",count);
} 
