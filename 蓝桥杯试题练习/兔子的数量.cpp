//�ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ�������
//��ÿ���µ���������Ϊ���٣�
//(���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....)��Ҳ��������쳲��������С�

#include<stdio.h>
int main()
{
	int Finally,Font,Mid;
	Font = 1;
	Mid = 1; 
	int num,i = 3;
	printf("������ڼ�����\n");
	scanf("%d",&num);
	while( i <= num)
	{
		if(num <= 2)
		{
			printf("���ӵ�������1");
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
	printf("���ӵ�������%d",Finally);
 } 
