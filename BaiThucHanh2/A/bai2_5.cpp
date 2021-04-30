#include<stdio.h>
#include<conio.h>
int main(){
	float a,b;
	printf("Chuong trinh giai phuong trinh bac nhat (ax+b=0)\n");
	printf("Nhap a= ");
	scanf("%f",&a);
	printf("Nhap b= ");
	scanf("%f",&b);
	if(a==0){
		if(b==0) printf("Phuong trinh co vo so nghiem");
		else printf("Phuong trinh vo nghiem");
	}
	else printf("Nghiem cua phuong trinh la %f",-b/a);
	getch();
}

