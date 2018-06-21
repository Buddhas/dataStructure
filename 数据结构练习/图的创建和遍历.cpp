//#include<stdio.h>
//#include<stdlib.h>
//#define max 10
//typedef struct ArcNode // 指向弧的结构体 
//{
//	int adjvex;      //链表下标 
//	struct ArcNode * next;//下一个元素地址 
//}ArcNode;
//typedef struct VNode  // 指向第一个的结构体 
//{
//	char date[2];
//	ArcNode * first;
//	int visit;	
//}VNode,AdjList[max];
//typedef struct ALGaph
//{
//	AdjList vertices;
//	int vexnum,arcnum; // 顶点的个数和弧的个数 
//}ALGraph;
//void CreatGraph(ALGraph & G)
//{
//	printf("请输入需要创建的顶点数和弧数\n");
//	scanf("%d%d",&G.vexnum,&G.arcnum);
//	printf("请输入顶点的值\n");
//	for(int i = 0;i<G.vexnum;i++)
//	{
//		scanf("%s",&G.vertices[i].date);
//		G.vertices[i].visit = 0;
//	}
//	printf("请输入需要创建的链表节点\n");
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
typedef struct ArcNode // 指向弧的结构体 
{
	int adjvex;      //链表下标 
	struct ArcNode * next;//下一个元素地址 
}ArcNode;
typedef struct VNode  // 指向第一个的结构体 
{
	char date[2];
	ArcNode * first;
	int visit;	
}VNode,AdjList[max];
typedef struct ALGaph
{
	AdjList vertices;
	int vexnum,arcnum; // 顶点的个数和弧的个数 
}ALGraph;
void CreatGraph(ALGraph & G)
{
	int i,j,num,k;
	ArcNode *p,*head;
	printf("请输入需要创建的顶点数和弧数\n");
	scanf("%d%d",&G.vexnum,&G.arcnum);
	for(i = 0;i < G.vexnum; i++)
	{
		scanf("%s",G.vertices[i].date);
		G.vertices[i].visit = 0;
	}
	printf("请输入创需要建的节点数\n");
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
