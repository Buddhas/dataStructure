#include<stdio.h>
#define PI 3.1415926f
int main()
{
	int radius;
	double area,b;

	scanf("%d",&radius);
	b=radius;
	area=b*PI*b;
	 printf("%.7lf\n", b * b * PI);
}
//#include <stdio.h>
// 
//#define PI 3.14159265358979323
// 
//int main(int argc, char *argv[])
//{
//        int a;
//        double b;
// 
//        scanf("%d", &a);
//        b = a;
//        printf("%.7lf\n", b * b * PI);
// 
//        return 0;
//}
