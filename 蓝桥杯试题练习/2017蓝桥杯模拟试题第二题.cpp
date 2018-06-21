//#include<stdio.h>
//int count[10] = {0,0,0,0,0,0,0,0,0,0};
//void panduan(int sum,int d,int e,int f){
//	int sum1;
//	int a1,a2,a3;
//	int b1[3] = {d,e,f};
//	for(int i = 0; i <= 3; i++){
//		sum1 = sum * b1[i];
//		a1 = sum1/100;
//		a2 = sum1%100/10;
//		a3 = sum%100%10/10;
//		count[i]++;
//	}
//}
//int main(){
//	int a,b,c,d,e,f;
//	int sum,sum1;
//	for(a = 0; a <= 9; a++){
//		for(b = 0; b <=9; b++){
//			for(c = 0; c <= 9; c++){
//				for(d = 0; d <= 9; d++){
//					for(e = 0; e <= 9; e++){
//						for(f = 0; f <= 9; f++){
//							count[0] = 0;count[1] = 0;count[2] = 0;count[3] = 0;count[4] = 0;count[5] = 0;count[6] = 0;count[7] = 0;count[8] = 0;count[9] = 0;
//							count[a]++;
//							count[b]++;
//							count[c]++;
//							count[d]++;
//							count[e]++;
//							count[f]++;
//							sum = a*100+b*10+c;
//							panduan(sum,d,e,f);
//							sum1 = sum *(d*100+e*10+f);
//							count[sum1/10000]++;
//							count[sum1%10000/1000]++;
//							count[sum1%10000%1000/100]++;
//							count[sum1%10000%1000%100/10]++;
//							count[sum1%10000%1000%100%10/10]++;
//							if(count[0] == 2&&count[1] == 2&&count[2] == 2&&count[3] == 2&&count[4] == 2&&count[5] == 2&&count[6] == 2&&
//							count[7] == 2&&count[8] == 2&&count[9] == 2){
//								printf("%d    %d%d%d\n",sum,d,e,f);
//								printf("%d",sum1);
//							}
//							
//						}
//					}
//				}
//			}
//		}
//	}
//}

#include <bits/stdc++.h>
using namespace std;
int n;
int a[6];
int pd(){
	int p[10]={0};
	for(int i=0;i<6;i++){
		
		int k=0;
		while(a[i]){
			p[a[i]%10]++;
			if(p[a[i]%10]>2)return 0;
			a[i]/=10;
			k++;
		}
		//if(k<3) return 0;
	}
	return 1;
}
int main()
{
	for(int i=100;i<=999;i++)
		for(int j=100;j<=999;j++){
			a[0]=(j%10)*i;a[1]=(j/10%10)*i;  //a保存每一个状态的信息
			a[2]=(j/100)*i;a[3]=i*j;
			a[4]=i;a[5]=j;
			if(pd()){  //判断是否满足条件
				cout<<i*j<<" ";
				cout<<i<<endl;
				cout<<j<<endl;
			}
		}
	
	
	return 0;
} 
