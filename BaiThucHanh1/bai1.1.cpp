#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float x;
	printf("Nhap x= ");
	scanf("%f",&x);
	float y = pow(x,3) + sin(2.5*x) - 1.68;
	printf("GIA TRI CUA y = %6.2f", y);

	getch();
}

