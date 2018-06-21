#include<stdio.h>
int main(){
	int num=0;
	float A,B,C,D,E,F,G,H,I;
	float fenmu;
	float fenzi;
	float sum = 0;
	for(float a = 1;a<=9;a++){
		sum = 0;
		A = a;
		for(float b =1;b<=9;b++){
			if(b==a){
				continue;
			}
			B=b;
			for(float c = 1;c<=9;c++){
				if(c==a||c==b){
					continue;
				}
				C=c;
				for(float d = 1;d<=9;d++){
					if(d==a||d==b||d==c){
						continue;
					}
					D=d;
					for(float e = 1;e<=9;e++){
						if(e==a||e==b||e==c||e==d){
							continue;
						}
						E=e;
						for(float f = 1;f<=9;f++){
							if(f==a||f==b||f==c||f==d||f==e){
								continue;
							}
							F=f;
							for(float g = 1;g<=9;g++){
								if(g==a||g==b||g==c||g==d||g==e||g==f){
									continue;
								}
								G=g;
								for(float h = 1;h<=9;h++){
									if(h==a||h==b||h==c||h==d||h==e||h==f||h==g)
									{
										continue;
									}
									H=h;
									for(float i = 1;i<=9;i++){
										if(i==a||i==b||i==c||i==d||i==e||i==f||i==g||i==h){
											continue;
										}
										I=i;
										fenmu = 100*D+10*E+F;
										fenzi = 100*G+10*H+I;
										sum = A+B/C+fenzi/fenmu;
										if(sum == 10){
											num++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d",num);
}
