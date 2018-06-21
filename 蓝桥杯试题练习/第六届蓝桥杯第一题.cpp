#include<stdio.h>
int main(){
	int a,b,c,d,e;
	int num = 0;
	for(a = 1;a<10;a++){
		for(b = 0;b<10;b++){
			for(c = 0;c<10;c++){
				for(d = 0;d<10;d++){
					for(e = 0;e<10;e++){
						if(a==4||b==4||c==4||d==4||e==4){
							continue;
						}else{
							num++;
						}
					}
				}
			}
		}
	}
	printf("%d",num);
} 
