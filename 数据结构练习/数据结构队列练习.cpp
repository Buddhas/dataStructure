/*α�㷨
��1�����ӣ�2�����
��3���ж�Ϊ�� 
*/

/*#include<iostream>
using namespace std;
#define N 10//�궨�岻�üӷֺ� 
typedef struct QUEEN
{
	int *num;
	int front;
	int rear;
}Queue;//������� �ṹ
bool empty(Queue *q);//�ж϶����Ƿ�Ϊ�� 
Queue  en_init(Queue *q)//��ʼ������ 
{
	q->num=new int[N];
	q->front=0;
	q->rear=0; 
	
}
void init(Queue *q)//�������� ����� 
{
	 if(empty(q))
	 {
	 	cin>>*(q->num);
	 	q->num++;
	 	q->rear=(q->rear+1)%N;
	 }
	
} 
void out(Queue *q)//���� 
{
	cout<<*(q->num);
	q->front=(q->front-1)%N;
}

bool empty(Queue *q)
{
	if((q->rear+1)%6==q->front)
		return false;
		else 
			return true;
}
int main()
{
	Queue q;
	en_init(&q);
	init(&q);init(&q);init(&q);
	out(&q); out(&q);out(&q);
} 
*/
#include<iostream>//������ϰ�����Զ��У��ڶ��Σ���һ����bug������� 
using namespace std;
#define N 10
typedef struct Queue
{
	int *num;
	int front;
	int rear;
} Queue;
bool not_empty(Queue *q)//�ж϶����Ƿ�Ϊ�� 
{
	if(q->front!=((q->rear)+1)%N) 
		return true;
		else 
			return false;
}
bool empty(Queue *q)//�ж��Ƿ�Ϊ�� 
{
	if(q->front!=q->rear)
		return true;
		else 
			return false;
}
void en_init(Queue *q)//��ʼ������ 
{
	q->num=new int[N];
	q->front=0;
	q->rear=0;
}
void init(Queue *q)//��Ӳ��� 
{
	if(not_empty(q))
	{
		cin>>q->num[q->rear];
		q->rear=(q->rear+1)%N;
	}
	else
		cout<<"��������"<<endl;
		 

}
void out(Queue *q)//���Ӳ��� 
{
	if(empty(q))
	{
		cout<<q->num[q->front];
		q->front=(q->front+1)%N;
	} 
	else
		cout<<"����Ϊ��"<<endl;
}
void del(Queue *q)//ɾ������ 
{
		
}

int main()
{
	Queue q;
	en_init(&q);
	for(int i=0;i<11;i++)
	{
		init(&q);
	}
	out(&q);
}
