#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main(){
	float h,r;
	printf("Nhap chieu cao (m)=");
	scanf("%f",&h);
	printf("Nhap ban kinh (m)=");
	scanf("%f",&r);
	float Sxq = 2*pi*r*h;
	float Sd = pi*r*r;
	printf("SO TON CAN DUNG DE GO MOT THUNG DUNG THOC HINH TRU CA NAP BANG TON\n CO CHIEU CAO %.1f(m) VA BAN KINH DAY %.1f(m) LA %.2f(m^2) TON",h,r,(Sxq+2*Sd)*1.05);
	getch();
}

