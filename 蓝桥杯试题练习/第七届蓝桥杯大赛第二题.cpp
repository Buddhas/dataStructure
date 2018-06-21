//Çî¾Ù·¨ 
#include<stdio.h>
int main(){
	int i,j,sum = 0;
	for(i = 0;i<100;i++){
		sum = 0;
		for(j = i;j<100;j++){
			sum = sum+j;
			if(sum==236){
				printf("%d",i);
			}
		}
	}
} 
