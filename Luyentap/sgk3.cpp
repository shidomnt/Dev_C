#include<stdio.h>
int main(){
	int x, y, z;
	printf("Nhap so x= ");
	scanf("%d",&x);
	printf("Nhap so y= ");
	scanf("%d",&y);
	printf("Nhap so z= ");
	scanf("%d",&z);
	if(z-y==y-x) printf("Ba so da cho tao thanh day cap so cong");
	else printf("Ba so da cho khong thoa man tinh chat");
	/*if((float)y=(x+z)/(float)2) prinft("Ba so da cho tao thanh day cap so cong");
	else printf("Ba so da cho khong thoa man tinh chat");*/
}
