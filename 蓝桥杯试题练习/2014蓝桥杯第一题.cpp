#include<stdio.h>
int main(){
	int x,y;
	float sum = 0;
	for(int i = 1; i< 36; i++){		//i��ʾơ��2.3Ԫ��j��ʾ����1.9 
		sum = 0;
		for(int j = 1; j < 44; j++){
			sum = i * 2.3 + j *1.9;
			
			if(sum == 82.3 && i < j) {
				printf("ơ��Ϊ%d,����Ϊ%d",i,j);
			}
		}
	}
	 
} 
 
