#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main(){
	float r;
	printf("Nhap ban kinh r(dm)= ");
	scanf("%f",&r);
	printf("HINH CAU CO BAN KINH %2.2f CO DIEN TICH MAT CAU LA %3.3f(dm^2)\n\tVA THE TICH LA %3.3f(dm^3)",r,4*pi*r*r,(4/3)*pi*r*r*r);
	getch();
}

