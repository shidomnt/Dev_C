#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap vao so co 3 chu so: ");
	scanf("%d",&a);
	int t=a/100,c=(a%100)/10,d=a%10;
	if(pow(t,3)+pow(c,3)+pow(d,3)==a)
	printf("So %d co tong lap phuong cua cac chu so bang chinh no",a);
	else
	printf("So %d co tong lap phuong cua cac chu so khong bang chinh no",a);
	getch();
}
