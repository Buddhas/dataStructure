//#include<stdio.h>
//int Qsort(int * a,int left,int right)
//{
//	int i,j,key;
//	if(left >= right)
//	return 0;
//	else
//	{
//	i = left;
//	j = right;
//	key = a[i];
//	while(i < j)
//	{
//		while(i < j && a[j] >= key)
//		{
//			j--;
//		}
//		a[i] = a[j]; 
//		while(i < j &&a[i] <= key)
//		{
//			i++;
//		}
//		a[j] = a[i];
//		a[i] = key;
//	}	
//	
//	Qsort(a,left,i-1);
//	Qsort(a,i+1,right);
//	}
//
//}
//int main()
//{
//	int a[10] = {5,2,6,0,1,3,8,7,4,9};
//	Qsort(a,0,9);
//	for(int k = 0; k <=9; k++)
//	{
//		printf("%d\t",a[k]);
//	}
//	return 0;
//} 









#include<stdio.h>
int count1 = 0;
int count2 = 0;
//¿ìËÙÅÅÐò 
int Qsort(int * a,int left,int right)
{
	int i,j,key;
	if(left >= right)
	return 0;
	else
	{
	i = left;
	j = right;
	key = a[i];
	while(i < j)
	{
		while(i < j && a[j] >= key)
		{
			j--;
		}
		a[i] = a[j]; 
		while(i < j &&a[i] <= key)
		{
			i++;
		}
		a[j] = a[i];
		a[i] = key;
	}	
	count1++;
	Qsort(a,left,i-1);
	Qsort(a,i+1,right);
	}
}
//Ã°ÅÝÅÅÐò
int Bsort(int b[],int num)
{
	int a[num];
	for(int i = 0;i < num; i++)
	{
		a[i] = b[i];
	}
	int temp;
	for(int i = 0; i < num;i++)
	{
		for(int j = i+1;j<num;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}	
		}
		count2++;
	}
	for(int i = 0; i < num;i++)
	{
		printf("%4d\t",a[i]);
	}
	printf("\n");
	printf("Ã°ÅÝÅÅÐò´ÎÊýÎª");
	printf("%d\n",count2);
		
			
} 
//²åÈëÅÅÐò
void Isort(int b[],int num)
{
	
	int a[num];
	int key;
	int j;
	for(int i = 0;i < num; i++)
	{
		a[i] = b[i];
	}
	for(int i = 1; i < num; i++)
	{
		key = a[i];
		for(j = i - 1;j <= num; j--)
		{
			if(a[j] > key)
			{
				a[j+1] = a[j]; 
			}
			else
			break;
		}
		a[j + 1] = key;
	}
	for(int i = 0; i < num; i++)
	{
		printf("%4d\t",a[i]);
	}
	printf("\n");
	
} 
//Ñ¡ÔñÅÅÐò 
int Csort(int b[],int num)
{
	int a[num];
	int min;
	int index;
	for(int i = 0; i < num; i++)
	{
		a[i] = b[i];
	}
	for(int i = 0;i < num; i++)
	{
		min = a[i];
		for(int j = i+1; j < num; j++)
		{
			if(min > a[j])
			{
				min = a[j];
				index = j;
			}
		}
		a[index] = a[i];
		a[i] = min;
		
	}
	for(int i = 0;i < num; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int Hsort(int b[],int num)
{
	int a[num];
	for(int i = 0; i < num; i++)
	{
		a[i] = b[i];
	}
	int key,left,right,mid;
	for(int i = 1;i < num; i++)
	{
		left = 0;
		right = i - 1;
		key = b[i];
		
		while(left <= right)
		{
			mid = (left + right)/2;
			if(a[mid] <= key)
				left = mid + 1;
			if(a[mid] >= key)
				right = mid - 1;
			
		}
		for(int j = i - 1; j >= mid; j--)
		{
			a[j + 1] = a[j];
		}
		a[right+1] = key;  
	}
	for(int i = 0; i < num; i++)
	{
		printf("%4d\t",a[i]);
	}
	printf("\n");
}
int Ssort(int b[],int num)
{
	int a[num];
	int temp;
	for(int i = 0; i < num; i++)
	{
		a[i] = b[i];
	}
	int gap[3] = {5,3,1};
	for(int i = 0; i < 3;i++)
	{
		for(int j = gap[i];j<num;j++)
		{
			if(a[j] > a[j - gap[i]])
			{
				temp = a[j];
				a[j] = a[j-gap[i]];
				a[j-gap[i]] = temp;
			}
		}
	}
	for(int i = 0; i < num; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[20],num;
	printf("ÇëÊäÈëÐèÒª¸öÊý\n");
	scanf("%d",&num);
	for(int i = 0;i<num;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("------------------------------------------------------------------------------------\n");
	printf("\t\tÅÅÐòÑ¡Ôñ\n");
	printf("1 Ö±½Ó²åÈëÅÅÐò\t\t\t");
	printf("2 ÕÛ°ë²åÈëÅÅÐò\n");
	printf("3 Ï£¶ûÅÅÐò\t\t\t");
	printf("4 Ã°ÅÝÅÅÐò\n");
	printf("5 Ñ¡ÔñÅÅÐò\t\t\t");
	printf("6 ¿ìËÙÅÅÐò\n");
	printf("\t\t7 ÍË³ö\n");
	printf("------------------------------------------------------------------------------------\n");

	int key;
	while(key!=7)
	{
	printf("ÇëÊäÈëÑ¡ÔñµÄÅÅÐò·½·¨\n");
	scanf("%d",&key);
	switch(key)
	{
		case 1:Isort(a,num);break; 
		case 2:Hsort(a,num);break;
		case 3:Ssort(a,num);break;
		case 4:Bsort(a,num);break;
		case 5:Csort(a,num);break;
		case 6:Qsort(a,0,num-1);break;
		case 7:break;
	}
	 } 
	

	
}
