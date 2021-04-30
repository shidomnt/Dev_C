#include<stdio.h>
#include<conio.h>
int main(){
	float chuyencan,giuaky,cuoiky;
	printf("Nhap diem chuyen can: ");
	scanf("%f",&chuyencan);
	printf("Nhap diem kiem tra giua ky: ");
	scanf("%f",&giuaky);
	printf("Nhap diem thi cuoi ky: ");
	scanf("%f",&cuoiky);
	float tb = chuyencan*0.1 + giuaky*0.3 + cuoiky*0.6;
	printf("DIEM MON HOC LA: %.1f",tb);
	getch();
}

