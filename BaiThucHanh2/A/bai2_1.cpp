#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap vao so co 3 chu so: ");
	scanf("%d",&a);
	int t=a/100,c=(a%100)/10,d=a%10;
	//Giải thích:
	//Số abc( không phải a * b * c, mà là số có 3 chữ số: a: hàng trăm, b: chục, c: đơn vị)
	//Số abc nếu có a^3 + b^3 + c^3 == abc => thõa mãn
	//Các số có tính chất như vậy đc gọi là số amstrong/ số tự mãn
	//Số amstrong có 3 chữ số gồm : 153 , 370 , 371 , 407
	//Ví dụ: 153 = 1^3 + 5^3 + 3^ => thõa mãn
	if(pow(t,3)+pow(c,3)+pow(d,3)==a)
	printf("So %d co tong lap phuong cua cac chu so bang chinh no",a);
	else
	printf("So %d co tong lap phuong cua cac chu so khong bang chinh no",a);
	getch();
}
