#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,f;
	cin >>a >>b;
	for(int i=a; i<=b; i++){
		cout <<i <<"=";
		c=i, d=2, f=1;
		while(c>d){
			if(c%d==0){
				if(f){
					cout <<d;
					f=0;
				}else
				cout <<"*" <<d;
				c/=d;
			}else
				d++;
		}
		if(f==0)
			cout <<"*";
		cout <<c <<endl;
	}
}
