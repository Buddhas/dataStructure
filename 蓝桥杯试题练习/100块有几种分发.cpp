#include<stdio.h>
int main(){
	int sum = 0;
	int num = 0;
	for(int i = 0;i<=10;i++){	//十块 
		for(int j = 0;j<=20;j++){
			for(int n = 0;n<=100;n++){
				for(int m = 0;m<=1000;m++){
					sum = i*100+j*50+n*10+m*1;
					if(sum==1000){
						num++;
						printf("十块钱的有%d张，五块钱的有%d张，一块钱的有%d张,一分钱的有%d张\n",i,j,n,m); 
						
					}
				}
			
			}
	}
	
}
	printf("%d\n",num);
} 
