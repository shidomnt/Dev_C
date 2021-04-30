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
	long int N,Q;
	scanf("%li%li",&N,&Q);
	int bin[N];
	for(int i=0;i<N;i++){
		scanf("%d",&bin[i]);
	}
	int ketqua[Q];
	int a,b,c;
	char d='1';
	int dem=0;
	bool mark=true;
	for(int j=0;j<Q;j++){
		for(int i=0;i<3;i++){
			scanf("%d",&a);
			scanf("%d",&b);
			d=getchar();
			if(d=='\n'){
				mark=false;
				break;
			}
			scanf("%d",&c);
		}
		if(mark){
			ketqua[dem]=bin2dec(bin,b,c);
		}
		else{
			if(bin[b]==1) bin[b]=0;
			else bin[b]=1;
		}
	}
	for(int k=0;k<dem-1;k++){
		if(ketqua[k]%2==0) printf("EVEN\n");
		else printf("ODD\n");
	}
	return 0;
}
