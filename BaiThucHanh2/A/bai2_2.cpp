#include<stdio.h>
#include<conio.h>
int main(){
	char K;
	printf("Nhap mot ky tu: ");
	scanf("%c",&K);
	if(K<=90&&K>=65)
	printf("Ky tu %c la chu cai hoa",K);
	else
	printf("Ky tu vua nhap khong phai chu cai hoa");
	getch();
}

