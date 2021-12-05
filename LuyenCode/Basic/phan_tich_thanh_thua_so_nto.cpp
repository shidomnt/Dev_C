#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int dem;
	for(int i=2;i<=a;i++){
		dem=0;
		while(a%i==0){
			dem++;
			a/=i;
		}
		if(dem){
			if(dem==1) printf("%d",i);
			else printf("%d^%d",i,dem);
			if(a>i) printf("*");
		}
	}
	return 0;
}
