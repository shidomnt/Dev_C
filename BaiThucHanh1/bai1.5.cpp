#include<stdio.h>
#include<conio.h>
#define bongden 40
#define bomnuoc 750
#define tulanh 1200
int main(){
	float a = 4*bongden*8 + bomnuoc*2 + tulanh*24;
	printf("TONG DIEN NANG TIEU THU TRONG THANG LA %4.1f (kwh)",(a*30)/1000);
	getch();
}

