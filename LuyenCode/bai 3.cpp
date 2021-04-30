#include<stdio.h>
void hoanvi(int a, int b){
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Sau khi hoan vi a= %d, b=%d",a,b);
}
int main(){
	int a,b;
	printf("Nhap so a=");
	scanf("%d",&a);
	printf("Nhap so b=");
	scanf("%d",&b);
	hoanvi(a,b);
	return 0;
}
