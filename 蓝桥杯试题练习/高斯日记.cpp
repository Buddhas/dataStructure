//
//#include<iostream>  
//using namespace std;  
//  
////�ж�����Ƿ�������  
//bool IsRunNian(int year)  
//{  
//    if(year%400==0||(year%4==0&&year%100!=0))  
//        return true;  
//    else  
//        return false;  
//}  
//  
//  
////��˹�����ڣ�1777��4��30��  
////�жϸ�˹����n��֮����XXXX��XX��XX��  
//void CalcYMD(int n)  
//{  
//    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};//ÿ���µ�����������δ��������  
//  
//    int shengXia=31+30+31+31+30+31+30+31; //��˹������ʣ����ô����Ź���1777��  
//  
//    int year=1777,month=4,day=30; //��˹����ʱ���ꡢ�¡���  
//  
//    if (n>shengXia) //������  
//    {  
//        int i=1778;  
//        int tmp=n,count=1;  
//        tmp=IsRunNian(i++)?tmp-366:tmp-365;   //������366�죬ƽ����365��  
//        while (tmp>shengXia)  
//        {  
//            tmp=IsRunNian(i++)?tmp-366:tmp-365;  
//            count++;  
//        }   
//        year=year+count;  
//    }  
//  
//    if (n>0) //����·�  
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
//            month=i+1;//�����Ŵ�0��ʼ������Ҫ����1  
//        }  
//    }  
//  
//    if (n>0) //�������  
//    {  
//        int tmp=0,y=1777;  
//        for(int i=4;tmp<n;i++)  
//        {  
//            day=n-tmp-1; //ԭ���Ĵ���Ϊday=n-tmp,�����Һ����ƣ�  
//                        //�����������ȥ�ˣ��㲻��һ�죿  
//                        //����㣬��Ҫ��ȥ��������һ�죬  
//                        //������㣬�Ͳ�Ҫ��һ�ˡ�  
//                        //������Ŀ����5343���ǣ�1791��12��15�ա�  
//                        //�ó������������ȥ��Ҳ����һ��ġ�  
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
//                y++; //��һ��  
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
//    cout<<"\n�����������ȥ�ˣ���5��0�ţ���ְɣ����Ǹ��ٽ��ɣ�\n\n";  
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
	return 0;//0��ʾ����
	else
	return 1;//1��ʾ��ͨ�� 
}
int Cal(date)
{
	int a[12]  = {31,28,31,30,31,30,31,31,30,31,30,31}

	int year = 1777,mon = 4,day = 30; 
		//������
		
}
int main()
{
	
}
