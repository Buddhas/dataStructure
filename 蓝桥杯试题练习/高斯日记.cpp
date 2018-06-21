//
//#include<iostream>  
//using namespace std;  
//  
////判断年份是否是闰年  
//bool IsRunNian(int year)  
//{  
//    if(year%400==0||(year%4==0&&year%100!=0))  
//        return true;  
//    else  
//        return false;  
//}  
//  
//  
////高斯出生于：1777年4月30日  
////判断高斯出生n天之后，是XXXX年XX月XX日  
//void CalcYMD(int n)  
//{  
//    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};//每个月的天数，二月未考虑闰年  
//  
//    int shengXia=31+30+31+31+30+31+30+31; //高斯出生后还剩下这么多天才过完1777年  
//  
//    int year=1777,month=4,day=30; //高斯出生时的年、月、日  
//  
//    if (n>shengXia) //算出年份  
//    {  
//        int i=1778;  
//        int tmp=n,count=1;  
//        tmp=IsRunNian(i++)?tmp-366:tmp-365;   //闰年有366天，平年有365天  
//        while (tmp>shengXia)  
//        {  
//            tmp=IsRunNian(i++)?tmp-366:tmp-365;  
//            count++;  
//        }   
//        year=year+count;  
//    }  
//  
//    if (n>0) //算出月份  
//    {  
//        int tmp=0,y=1777;  
//        for(int i=4;tmp<n;i++)  
//        {  
//            if (IsRunNian(y))  
//            {  
//                arr[1]=29;  
//            }  
//            else  
//            {  
//                arr[1]=28;  
//            }  
//            if (i>11)  
//            {  
//                i=0;  
//                y++;  
//            }  
//            tmp=tmp+arr[i];  
//            month=i+1;//数组标号从0开始，所以要加上1  
//        }  
//    }  
//  
//    if (n>0) //算出天数  
//    {  
//        int tmp=0,y=1777;  
//        for(int i=4;tmp<n;i++)  
//        {  
//            day=n-tmp-1; //原来的代码为day=n-tmp,这让我很郁闷，  
//                        //出生的那天过去了，算不算一天？  
//                        //如果算，就要减去出生的那一天，  
//                        //如果不算，就不要减一了。  
//                        //根据题目给的5343，是：1791年12月15日。  
//                        //得出出生的那天过去了也算是一天的。  
//              
//            if (IsRunNian(y))  
//            {  
//                arr[1]=29;  
//            }  
//            else  
//            {  
//                arr[1]=28;  
//            }  
//            if (i>11)  
//            {  
//                i=0;  
//                y++; //下一年  
//            }  
//            tmp=tmp+arr[i];  
//        }  
//      
//    }  
//  
//  
//    cout<<year<<" "<<month<<" "<<day<<endl;  
//}  
//  
//  
//  
//int main(int argc, char* argv[])  
//{  
//    cout<<"\n出生的那天过去了，是5月0号，奇怪吧？算是个临界点吧！\n\n";  
//    CalcYMD(1);  
//    CalcYMD(5343);  
//    CalcYMD(8113);  
//    cin.get();  
//    return 0;  
//}
#include<stdio.h>
int Runnian(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	return 0;//0表示闰年
	else
	return 1;//1表示普通年 
}
int Cal(date)
{
	int a[12]  = {31,28,31,30,31,30,31,31,30,31,30,31}

	int year = 1777,mon = 4,day = 30; 
		//算出年份
		
}
int main()
{
	
}
