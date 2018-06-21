#include<stdio.h>
int main(){
	int second;
	int num1,num2;
	for(int n = 1;n<=49;n++){
		second = n+2;
		for(int m = second;m<=49;m++){
			num1 = n*(n+1);
			num2 = m*(m+1);
			if(num1+num2+1225-n-n-1-m-m-1==2015){
				printf("%d\n",n);
			}
		}
	}
}

