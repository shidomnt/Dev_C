#include<conio.h>
#include<stdio.h>
float trungbinh(float a,float b){       //ham tinh trung binh 2 so
    return (a+b)/2;
}
int main(){
    float a,b;
    printf("Nhap so thu nhat: ");
    scanf("%f",&a);
    printf("Nhap so thu hai: ");
    scanf("%f",&b);
    printf("GIA TRI TRUNG BINH LA: %6.2f",trungbinh(a,b));
    getch();
}