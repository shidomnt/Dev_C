#include<stdio.h>
void nhapmang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
int main(){
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int a[n];
	nhapmang(a,n);
	int max=a[0];
	printf("So lon nhat o vi tri: ");
	for(int i=0;i<n;i++){
		if(max<a[i]) max=a[i];
	}
	for(int i=0;i<n;i++){
		if(max==a[i]){
			printf("%d",i);
			printf(" ");
		}
	}
}
