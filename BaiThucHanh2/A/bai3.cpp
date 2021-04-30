#include<stdio.h>
#include<conio.h>
int main(){
	float dtb;
	printf("Nhap diem trung binh: ");
	scanf("%f",&dtb);
	if(dtb>=8) printf("Loai Gioi");
	else if(dtb>=6.5) printf("Loai Kha");
	else if(dtb>=6.0) printf("Loai Trung Binh kha");
	else if(dtb>=5) printf("Loai Trung binh");
	getch();
}

