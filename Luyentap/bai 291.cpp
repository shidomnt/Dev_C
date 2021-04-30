#include<stdio.h>
int min(int a[], int b,int n){
	int m=a[b];
	for(int i=b;i<n;i++){
		if(m>a[i]) m=a[i];
	}
	return m;
}
int main(){
	int n;
	printf("Ban muon nhap bao nhieu so?\t");
	scanf("%d",&n);
	while(n<=0){
		printf("Vui long nhap lai: ");
		scanf("%d",&n);
	}
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("Day da sap xep: ");
	for(int b=0;b<n;b++){
		
	}
		
}
