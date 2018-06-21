//古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，
//问每个月的兔子总数为多少？
//(兔子的规律为数列1,1,2,3,5,8,13,21....)这也是著名的斐波那契数列。

#include<stdio.h>
int main()
{
	int Finally,Font,Mid;
	Font = 1;
	Mid = 1; 
	int num,i = 3;
	printf("请输入第几个月\n");
	scanf("%d",&num);
	while( i <= num)
	{
		if(num <= 2)
		{
			printf("兔子的数量是1");
			return 0;
		}
		else
		{
			Finally = Mid + Font;    
			Mid = Font;
			Font = Finally;
			
			
		} 
		i++;
	}
	printf("兔子的数量是%d",Finally);
 } 
