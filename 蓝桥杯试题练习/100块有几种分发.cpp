#include<stdio.h>
int main(){
	int sum = 0;
	int num = 0;
	for(int i = 0;i<=10;i++){	//ʮ�� 
		for(int j = 0;j<=20;j++){
			for(int n = 0;n<=100;n++){
				for(int m = 0;m<=1000;m++){
					sum = i*100+j*50+n*10+m*1;
					if(sum==1000){
						num++;
						printf("ʮ��Ǯ����%d�ţ����Ǯ����%d�ţ�һ��Ǯ����%d��,һ��Ǯ����%d��\n",i,j,n,m); 
						
					}
				}
			
			}
	}
	
}
	printf("%d\n",num);
} 
