#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main(){
	float r;
	printf("Nhap ban kinh r(cm) =");
	scanf("%f",&r);
	printf("DUONG TRON BAN KINH %2.2f CO CHU VI LA %3.2f(cm)\n\tVA DIEN TICH LA %3.3f(cm^2)",r,2*pi*r,pi*r*r);
	getch();
}

