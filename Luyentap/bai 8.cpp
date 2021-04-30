//Xem so ngay trong thang
//Co the ghep thanh 2 nhom 31 ngay va 30 ngay . thang 2 de rieng.
#include<stdio.h>
int main(){
	int a;
	printf("nhap vao thang: ");
	scanf("%d",&a);
	switch(a){
		case 1 : printf("Thang %d co 31 ngay",a);
				 break;
		case 2 : printf("Thang %d co 28 ngay",a);
				 break;
		case 3 : printf("Thang %d co 31 ngay",a);
				 break;
		case 4 : printf("Thang %d co 30 ngay",a);
				 break;
		case 5 : printf("Thang %d co 31 ngay",a);
				 break;
		case 6 : printf("Thang %d co 30 ngay",a);
				 break;
		case 7 : printf("Thang %d co 31 ngay",a);
				 break;
		case 8 : printf("Thang %d co 31 ngay",a);
				 break;
		case 9 : printf("Thang %d co 30 ngay",a);
				 break;
		case 10 : printf("Thang %d co 31 ngay",a);
				 break;
		case 11: printf("Thang %d co 30 ngay",a);
				 break;
		case 12: printf("Thang %d co 31 ngay",a);
				 break;
		default : printf("So ban nhap khong phai la mot thang trong nam!");
				 break;
}
}
