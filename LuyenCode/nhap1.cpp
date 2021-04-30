#include<stdio.h>
#include<math.h>
int bin2dec(int bin[],long int bd, long int kt){
	int dec=0,p=0;
	for(int i=kt;i>=bd;i--){
		dec+=bin[i]*pow(2,p);
		p++;
	}
	return dec;
}
int main(){
int Q=2;
int bin[5];
int ketqua[Q];
	int a,b,c;
	int i=0;
	char d='1';
	int dem=0;
	bool mark=true;
for(int j=0;j<Q;j++){
		while(i<3){
			scanf("%d",&a);
			scanf("%d",&b);
			d=getchar();
			if(d=='\n'){
				mark=false;
				break;
			}
			scanf("%d",&c);
			i++;
		}
		if(mark){
			ketqua[dem]=bin2dec(bin,b,c);
			printf("3so");
		}
		else{
			if(bin[b]==1) bin[b]=0;
			else bin[b]=1;
			printf("2so");
		}
	}
}
