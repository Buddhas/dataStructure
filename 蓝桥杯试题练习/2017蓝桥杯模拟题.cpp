#include<stdio.h>
int main(){
	int age;
	int year;
	for(age = 41; age < 50; age++){
		for( year = 1800; year <= 1950; year ++){
			if(age*age == year){
				printf("%d\n%d\n",age,year);
				printf("%d\n",year - age);
			}
		}
	}
} 
