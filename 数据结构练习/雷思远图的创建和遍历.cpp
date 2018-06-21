#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>
#define MAX 20
typedef struct ArcNode
{
	int adjvex;
	struct ArcNode* next;
}ArcNode;
typedef struct VNode
{
	std::string data;
	ArcNode* first;
}VNode,AdjList[MAX];
typedef struct s
{
	AdjList vertices;
	int vexnum,arcnum;
}ALGraph;
int Locate(ALGraph& G,std::string s)
{
	for(int i=0;i<G.vexnum;i++)
	{
		if(s==G.vertices[i].data)
			return i;
	}
	return -1;
}
void CreateGraph(ALGraph& G)
{
	printf("请输入定点数和边数\n");
	scanf("%d%d",&G.vexnum,&G.arcnum);
	printf("请输入顶点\n");
	int i;
	for(i=0;i<G.vexnum;i++)
	{
		std::cin>>G.vertices[i].data;
		G.vertices[i].first=NULL;
	}
	int j,k,m,n;
	struct ArcNode* p,*q;
	std::string s;
	for(j=0;j<G.vexnum;j++)
	{
		std::cout<<"顶点"<<G.vertices[j].data<<"节点数\n";
		scanf("%d",&n);
		//G.vertices[j].first=(ArcNode*)malloc(sizeof(ArcNode));
        //G.vertices[j].first->next=NULL;
		for(k=0;k<n;k++)
		{
			std::cin>>s;
			p=(ArcNode*) malloc(sizeof(ArcNode));
			m=Locate(G,s); 
			p->adjvex=m;
			p->next=G.vertices[j].first;
			G.vertices[j].first=p;
		}
		/*q=G.vertices[j].first;
		while(q)
		{
			printf("%5d",q->adjvex);
			q=q->next;
		}*/
	}
	/*for(j=0;j<G.vexnum;j++)
	{
		p=G.vertices[j].first;
		while(p)
		{
			printf("%5d",p->adjvex);
			p=p->next;
		}
		putchar('\n');
	}*/
}
bool visit[MAX];
void DFS(ALGraph& G,int v)
{
	visit[v]=true;
	std::cout<<G.vertices[v].data<<"   ";
	int w;
	struct ArcNode* p=G.vertices[v].first;
	while(p)
	{
		w=p->adjvex;
		//printf("%5d",w);
		if(!visit[w])
		{
			DFS(G,w);
		}
		p=p->next;
	} 
}
void DFSTravel(ALGraph& G)
{
	int i;
	for(i=0;i<G.vexnum;i++)
		visit[i]=false;
	for(i=0;i<G.vexnum;i++)
	{
		if(!visit[i])
			DFS(G,i);
	}
}
int main()
{
	ALGraph G;
    CreateGraph(G);
	DFS(G,0);
	int m;

}
