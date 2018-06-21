#include<stdio.h>
#include<stdlib.h>
#define max 20
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
	for(k=0;k <G.vexnum;k++)
	{
		int n;
		scanf("%d",&num);
		for(j = 0; j < num; j++)
		{
			if(j == 0)
			{
					
				p = (ArcNode *)malloc(sizeof(ArcNode));
				head = p;
				G.vertices[k].first = head;
				
				scanf("%d",&n);
				
				
				
			}
		
			else
			{
					//printf("111\n");
			
				p = (ArcNode *)malloc(sizeof(ArcNode));	
				head->next = p;	
				head = p; 
				scanf("%d",&head->adjvex);
					
				

			}

		}
		p->next = NULL;
	}

}
void PLGraph(ALGraph & G)
{
	int i = 0;
	for(i = 0;i<G.vexnum;i++)
	{
		printf("%s\t",G.vertices[i].date);
	}
}
void PGraph(ALGraph & G,int v)
{
	ArcNode * p;
	int w;
	p = G.vertices[v].first;
	printf("%s",G.vertices[v].date);
	p = p->next;
		printf("%s",G.vertices[p->adjvex].date);
		p = p->next;
		printf("%s",G.vertices[p->adjvex].date);

}
int main()
{
	ALGraph G;
	CreatGraph(G);
	PLGraph(G);
}