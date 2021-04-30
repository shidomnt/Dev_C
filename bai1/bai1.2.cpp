#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float x;
	printf("Nhap x= ");
	scanf("%f",&x);
	float y = sin(0.7*x) + pow(x,7) + pow((fabs(x-1)-2),1/5);
	printf("GIA TRI CUA BIEU THUC LA : %3.2f", y );

	getch();
}

