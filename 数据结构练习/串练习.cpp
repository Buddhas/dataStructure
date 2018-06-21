#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 20 
typedef struct String
{
	char * ch;
	int lenght;
 }HString;
 int SubString(int pos,int len,HString S)//求字串函数 
 {
 	HString Sub;
 	int j = 0;
	Sub.ch = (char *)malloc(sizeof(char)*(len+1)) ;
	for(int i = pos-1;i<=len;i++)
	{
		Sub.ch[j] = S.ch[i];
		j++; 
	 } 
	 Sub.ch[j] = '\0';
	 printf("%s",Sub.ch);
 }
 int InserString(HString S)
 {
 	int len;
 	HString Sub;
 	char a[Max];
 	printf("请输入插入串的长度\n");
 	scanf("%d",&Sub.lenght);
 	printf("请输入插入串的字符以及插入位置\n");
 	scanf("%s",Sub.ch);
	int i,b,j,k,m,n,l;
	scanf("%d",&b);
	for( i = 0;i<b-1;i++)
	{
		a[i] = S.ch[i];
	 } 
	 j = i;
	 for( l = 0;l<Sub.lenght;l++)
	 {
	 	a[i] = Sub.ch[l];
	 	i++;
	 }
	 for( ;j<S.lenght;j++)
	 {
	 	a[i] = S.ch[j];
	 	i++;
	 }
	printf("%s",a);

  } 
 int main()
 {
 	HString S,Inser;//S为长串，Inser为插入串
 	int pos,len;
	printf("请输入长串的长度\n");
	scanf("%d",&S.lenght);
	S.ch = (char *)malloc(S.lenght*sizeof(char));
//	Inser.ch = (char *)malloc(Inser.lenght*sizeof(char));
	printf("请输入长串的符号\n");
	scanf("%s",S.ch);
	printf("请输入复制的位置 和长度\n");
	scanf("%d%d",&pos,&len);
	SubString(pos,len,S);-
	InserString(S);
	
 }
// int main()
// {
// 	HString a;
// 	scanf("%d",&a.lenght);
// 	a.ch = (char *)malloc(a.lenght*sizeof(char));
// 	scanf("%s",a.ch);
// 	printf("%s",a.ch);
// }
