#include<math.h>
#include<stdio.h>
int main()
{
	int giay, phut, gio;
	printf("Nhap so giay= ");
	scanf("%d",&giay);
	phut=giay/60;
	giay%=60;
	gio=phut/60;
	phut%=60;
	printf("%02d/%02d/%02d",gio,phut,giay);
	return 0;
}
