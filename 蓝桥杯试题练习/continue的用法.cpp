#include<stdio.h>
int main(){
	for(int i = 1;i<9;i++){
		for(int j = 1;j<9;j++){
			if(i==j){
				continue;
			}
			printf("%d,%d\n",i,j);
		}
	}
}
