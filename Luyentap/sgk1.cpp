#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int a;
	printf("Nhap vao so co 3 chu so: ");
	scanf("%d",&a);
	int tram=a/100,chuc=(a-tram*100)/10,donvi=a-tram*100-chuc*10;
	if(a==(pow(tram,3)+pow(chuc,3)+pow(donvi,3))) printf("ok");
	else printf("not ok");
	getch();
}
