#include<conio.h>
#include<stdio.h>
float giatrihamso(int a){           //ham tinh gia tri ham so
    if(a>=0) return 3*a*a-2*a+5;
    else return 2*a*a+1;
}
int main(){
    int a;
    printf("Nhap a= ");
    scanf("%d",&a);
    printf("GIA TRI CUA HAM TAI %d LA: %6.2f",a,giatrihamso(a));
    getch();
}