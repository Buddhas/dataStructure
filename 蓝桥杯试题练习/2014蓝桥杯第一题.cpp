#include<stdio.h>
int main(){
	int x,y;
	float sum = 0;
	for(int i = 1; i< 36; i++){		//i表示啤酒2.3元，j表示饮料1.9 
		sum = 0;
		for(int j = 1; j < 44; j++){
			sum = i * 2.3 + j *1.9;
			
			if(sum == 82.3 && i < j) {
				printf("啤酒为%d,饮料为%d",i,j);
			}
		}
	}
	 
} 
 
