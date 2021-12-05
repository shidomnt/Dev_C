#include<stdio.h>
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
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("Day so da sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
