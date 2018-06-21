#include<stdio.h>
bool runnian(int year){
	if(year%4==0 && year%100!=0)
	return true;
	return false;
}
int main(){
	int year,mon,day;
	int sum = 0;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&year,&mon,&day);
	if(runnian(year)){
		a[1] = 29;
	}
	for(int i = 1; i < mon; i++){
		sum = sum + a[i];
	}
	sum = sum + day;
	printf("%d",sum);
	
}

