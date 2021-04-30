#include<stdio.h>
int tong(int n){
	int i,S=0;
	for(i=1;i<=n;i++){
		S+=i;
	}
	/*while(i<=n){
		S+=i;
		i++;
	}*/
	/*do{
		S+=i;
		i++;
	}
	while(i<=n);*/
	return S;
	}
int main(){
	int n;
	printf("Nhap so N= ");
	scanf("%d",&n);
	printf("Tong cac so tu 1 den %d la: %d",n,tong(n));
	return 0;
}
