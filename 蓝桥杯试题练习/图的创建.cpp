#include<stdio.h>
#include<stdlib.h>
#define max 20
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