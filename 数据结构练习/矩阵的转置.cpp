#include<stdlib.h> 
#include<stdio.h>
#define MAXSIZE 11
#define ROW_ 11
#define COL_ 11

typedef struct
{   
    int row,col;  
    int e;
}Triple;

typedef struct
{  
    Triple data[MAXSIZE+1];  
    int m,n,len;        
}TSMatrix;


void FastTransposeTSMatrix(TSMatrix A,TSMatrix *B){
    int num[MAXSIZE],pos[MAXSIZE];
    int i,col,p;

    B->n=A.m;
    B->m=A.n;
    B->len=A.len;
  if(B->len){

    for(col=1;col<=A.n;col++){
        num[col]=0;
    }


    for(i=1;i<=A.len;i++){
        num[A.data[i].col]++;
    }

    pos[1]=1;

    for(i=2;i<=A.len;i++){
        pos[i]=pos[i-1]+num[i-1];    
    }

    for(i=1;i<=A.len;i++){
        col=A.data[i].col;
        p=pos[col];
        B->data[p].col=A.data[i].row;
        B->data[p].row=A.data[i].col;
        B->data[p].e=A.data[i].e;
        pos[col]++;
    }
}
}



int main(){
    int i,j;
    int num[ROW_][COL_]={0};
    int a[8]={1,4,3,3,7,8,6,1};
    int b[8]={2,7,2,8,3,2,7,4};
    int c[8]={12,9,-3,14,24,18,15,-7};    
    TSMatrix A,*B;
    A.m=ROW_-1;
    A.n=COL_-1;
    A.len=8;

    for(i=1;i<=A.len;i++){
        A.data[i].row=a[i-1];
        A.data[i].col=b[i-1];
        A.data[i].e=c[i-1];
        num[a[i-1]][b[i-1]]=c[i-1];
    }

    
    printf("\n");
    printf("转换之前:\n\n");

for(i=1;i<ROW_;i++){
        for(j=1;j<COL_;j++){
            printf("%-3d",num[i][j]);
        }
        printf("\n");
    }

    printf("\n三元组表:\n\nrow col E\n");
    for(i=1;i<=A.len;i++)  
    {  
        printf(" %d  %d  %d\n",A.data[i].row,A.data[i].col,A.data[i].e);  
    }  

    B=(TSMatrix *)malloc(sizeof(TSMatrix));
    FastTransposeTSMatrix(A,B);    
    
    for(i=1;i<ROW_;i++){
        for(j=1;j<COL_;j++){
            num[i][j]=0;
        }
       
    }


    for(i=1;i<=B->len;i++){
        num[B->data[i].row][B->data[i].col]=B->data[i].e;
    }

    printf("转换之后:\n\n");

for(i=1;i<ROW_;i++){
        for(j=1;j<COL_;j++){
            printf("%-3d",num[i][j]);
        }
        printf("\n");
    }


    printf("\n三元组表:\n\nrow col E\n");
    for(i=1;i<=B->len;i++)  
    {  
        printf(" %d  %d  %d\n\n",B->data[i].row,B->data[i].col,B->data[i].e);  
    }  

}
