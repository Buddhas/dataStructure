#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20
typedef struct Bunch
{
	char * ch;
	int lenght;
}Bunch;
int Find(Bunch LBunch,Bunch Sub,int pos)
{
	int len,i,Llen,j,l;
	len = strlen(Sub.ch);
	Llen = strlen(LBunch.ch) - len+1;
	for(int i = pos-1;i<Llen;i++)
	{
		l = 0;
		j = i;
		for(int k = 0;k<len;k++)
		{
		
			if(LBunch.ch[j] == Sub.ch[k])
			{
				j++;
				l++;
				
			}
			
			
		}
		
		if(l == len)
		{
			printf("匹配\n");
		}
	}
}
int main()
{
	Bunch LBunch;
	LBunch.ch = (char *)malloc(sizeof(char)*N);
	printf("请输入长串的字符\n");
	scanf("%s",LBunch.ch);
	Bunch Sub;
	Sub.ch = (char *)malloc(sizeof(char)*N);
	printf("请输入需要查询的字符\n");
	scanf("%s",Sub.ch);
	printf("请输入pos位置\n");
	int pos;
	scanf("%d",&pos); 
	Find(LBunch,Sub,pos);
}
