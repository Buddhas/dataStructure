
//���� 
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
		HanNuoTa(i-1,A,C,B);   //��i-1���Ӵ�A��C�ƶ���B 
		count++; 
		printf("%c->%c\n",A,C);//�����Ӵ�A�ƶ���C 
		HanNuoTa(i-1,B,A,C);//��n-1���Ӵ�B��A�ƶ���C 
		count++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	HanNuoTa(n,'A','B','C');
	printf("��Ҫ����%d��\n",count);
} 
