#include<stdio.h>
int main()
{
	int fir,mid,last;
	for(int i = 100;i<1000;i++)
	{
		fir = i /100;
		mid = i%100/10;
		last =i%100%10;
		if(fir*fir*fir+mid*mid*mid+last*last*last == i)
		printf("%d\n",i);	
	}	
} 
