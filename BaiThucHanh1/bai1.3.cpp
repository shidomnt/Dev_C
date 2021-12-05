#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Nhap 1 so nguyen co 3 chu so: ");
	scanf("%d",&a);
	printf("\tSO %d GOM CAC CHU SO O :\n",a);
	printf("\t  b. HANG TRAM : %2d\n",a/100); a%=100;
	printf("\t  b. HANG CHUC : %2d\n",a/10); a%=10;
	printf("\t  b. HANG DON VI : %2d\n",a);
	getch();
}

