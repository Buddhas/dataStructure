//#include<stdio.h>
//#include<stdlib.h>
//#define max 10
//typedef struct ArcNode // ָ�򻡵Ľṹ�� 
//{
//	int adjvex;      //�����±� 
//	struct ArcNode * next;//��һ��Ԫ�ص�ַ 
//}ArcNode;
//typedef struct VNode  // ָ���һ���Ľṹ�� 
//{
//	char date[2];
//	ArcNode * first;
//	int visit;	
//}VNode,AdjList[max];
//typedef struct ALGaph
//{
//	AdjList vertices;
//	int vexnum,arcnum; // ����ĸ����ͻ��ĸ��� 
//}ALGraph;
//void CreatGraph(ALGraph & G)
//{
//	printf("��������Ҫ�����Ķ������ͻ���\n");
//	scanf("%d%d",&G.vexnum,&G.arcnum);
//	printf("�����붥���ֵ\n");
//	for(int i = 0;i<G.vexnum;i++)
//	{
//		scanf("%s",&G.vertices[i].date);
//		G.vertices[i].visit = 0;
//	}
//	printf("��������Ҫ����������ڵ�\n");
//	int num;
//	ArcNode *p,*head,*test;
//	
//	
//	for(int i = 0;i<G.vexnum;i++)
//	{
//		
//		p = (ArcNode *)malloc(sizeof(ArcNode));
//		head = p;
//		scanf("%d",&num);
//		G.vertices[i].first = head;
//		for(int j = 0;j<num;j++)
//		{
//		
//			scanf("%d",&head->adjvex);
//			p = (ArcNode *)malloc(sizeof(ArcNode));
//			head->next = p;
//			head = p;
//			
//		}
//		
//	}
//	
//} 
//void DFS(ALGraph & G,int v)
//{
//		ArcNode *p;
//
//	
//		if(G.vertices[v].visit == 0)
//		{
//		G.vertices[v].visit == 1;
//		printf("%s",G.vertices[v].date);
//		p = G.vertices[v].first;
//		if(G.vertices[p->adjvex].visit == 0)
//		{
//			DFS(G,p->adjvex);
//		}
//			p = p->next;
//			//printf("%s",G.vertices[p->adjvex].date);
//		//	p = p->next;
//		//	printf("%s",G.vertices[p->adjvex].date);
//			
//	
//		} 
//	
//
//	
//	
//}
// int main()
// {
// 	ALGraph G;
// 	CreatGraph(G);
// 	DFS(G,0);
// 	for(int i = 0;i<G.vexnum;i++)
// 	{
// 		
//	 }
// 	
// }
#include<stdio.h>
#include<stdlib.h>
#define max 10
typedef struct ArcNode // ָ�򻡵Ľṹ�� 
{
	int adjvex;      //�����±� 
	struct ArcNode * next;//��һ��Ԫ�ص�ַ 
}ArcNode;
typedef struct VNode  // ָ���һ���Ľṹ�� 
{
	char date[2];
	ArcNode * first;
	int visit;	
}VNode,AdjList[max];
typedef struct ALGaph
{
	AdjList vertices;
	int vexnum,arcnum; // ����ĸ����ͻ��ĸ��� 
}ALGraph;
void CreatGraph(ALGraph & G)
{
	int i,j,num,k;
	ArcNode *p,*head;
	printf("��������Ҫ�����Ķ������ͻ���\n");
	scanf("%d%d",&G.vexnum,&G.arcnum);
	for(i = 0;i < G.vexnum; i++)
	{
		scanf("%s",G.vertices[i].date);
		G.vertices[i].visit = 0;
	}
	printf("�����봴��Ҫ���Ľڵ���\n");
	for(k = 0;k < G.vexnum;k++)
	{
		scanf("%d",&num);
		for(j = 0; j < num; j++)
		{
			if(j == 0)
			{
					
				p = (ArcNode *)sizeof(ArcNode);
				head = p;
				G.vertices[k].first = head;
				scanf("%d",&head->adjvex);
				
				
			}
			else
			{
					//printf("111\n");
			
				p = (ArcNode *)sizeof(ArcNode);
				
				head->next = p;
				scanf("%d",&head->adjvex);
				head = p;

			}

		}
	}

}
void PGraph(ALGraph & G,int v)
{
	ArcNode * p;
	p = G.vertices[v].first;
	if(G.vertices[v].visit == 0)
	{
		G.vertices[v].visit == 1;
		printf("%s",G.vertices[v].date);
		if(G.vertices[p->adjvex].visit == 0)
		{
			PGraph(G,p->adjvex);
		}
		
	}
}
int main()
{
	ALGraph G;
	CreatGraph(G);
	PGraph(G,0);
}
