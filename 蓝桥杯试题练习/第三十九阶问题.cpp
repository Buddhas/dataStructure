	#include<stdio.h> 
	int fac(int a,int b) 
	{ 
	if(a==1) 
	{ 
	if(b==1)return 1; 
	return 0; 
	} 
	if(a==2) 
	return 1; 
	return (fac(a-1,!b)+fac(a-2,!b)); 
	} 
	int main() 
	{ 
	printf("%d\n",fac(39,0)); 
	//ans = 51167078 true 
	return 0; 
	}
