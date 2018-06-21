/*伪算法
（1）出队（2）入队
（3）判断为满 
*/

/*#include<iostream>
using namespace std;
#define N 10//宏定义不用加分号 
typedef struct QUEEN
{
	int *num;
	int front;
	int rear;
}Queue;//定义队列 结构
bool empty(Queue *q);//判断队列是否为满 
Queue  en_init(Queue *q)//初始化队列 
{
	q->num=new int[N];
	q->front=0;
	q->rear=0; 
	
}
void init(Queue *q)//插入数据 ，入队 
{
	 if(empty(q))
	 {
	 	cin>>*(q->num);
	 	q->num++;
	 	q->rear=(q->rear+1)%N;
	 }
	
} 
void out(Queue *q)//出队 
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
#include<iostream>//队列练习，线性队列，第二次，第一次有bug，不想改 
using namespace std;
#define N 10
typedef struct Queue
{
	int *num;
	int front;
	int rear;
} Queue;
bool not_empty(Queue *q)//判断队列是否为满 
{
	if(q->front!=((q->rear)+1)%N) 
		return true;
		else 
			return false;
}
bool empty(Queue *q)//判断是否为空 
{
	if(q->front!=q->rear)
		return true;
		else 
			return false;
}
void en_init(Queue *q)//初始化队列 
{
	q->num=new int[N];
	q->front=0;
	q->rear=0;
}
void init(Queue *q)//入队操作 
{
	if(not_empty(q))
	{
		cin>>q->num[q->rear];
		q->rear=(q->rear+1)%N;
	}
	else
		cout<<"队列已满"<<endl;
		 

}
void out(Queue *q)//出队操作 
{
	if(empty(q))
	{
		cout<<q->num[q->front];
		q->front=(q->front+1)%N;
	} 
	else
		cout<<"队列为空"<<endl;
}
void del(Queue *q)//删除数据 
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
