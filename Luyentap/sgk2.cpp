#include<stdio.h>
int main(){
	char a;
	printf("Nhap 1 ky tu: ");
	scanf("%c",&a);
	if((int)a>66&&(int)a<90) printf("Ky tu %c la chu hoa!",a);
	else printf("Ky tu %c khong phai chu hoa!",a);
	
}
