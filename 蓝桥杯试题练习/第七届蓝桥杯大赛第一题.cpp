 #include<stdio.h>
 int main()
{
	int sum,j;
	sum = 0;
	j = 0;
	for(int i = 1;i<=100;i++){
		j = j+i;
		sum = sum+j;
	} 	
	printf("%d",sum);
} 
