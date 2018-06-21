#include<stdio.h>
int main(){
	int c = 3;
	switch(c){
		case 1: c++;printf("%d\n",c);;
		default: c++;printf("我是default   %d\n",c);
		case 2: c++;printf("我是case2   %d\n",c);
		case 5: c++;printf("我是case2   %d\n",c);
	}
	printf("%d\n",c);
	 
} 
