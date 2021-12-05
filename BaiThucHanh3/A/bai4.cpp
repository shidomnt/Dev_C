#include<conio.h>
#include<stdio.h>
#include<math.h>
float F(float x){                               //ham tinh F
    if(x<-1) return cos(21.3*x)-1;
    else if(x>-1) return pow(x,5)+4;
    else return 5;
}
int main(){
    float a,b;
    printf("Nhap so thu nhat: ");
    scanf("%f",&a);
    printf("Nhap so thu hai: ");
    scanf("%f",&b);
    printf("Gia tri x\t\tGia tri F\n");
    printf("x= %6.2f\t\t%6.2f\n",a,F(a));
    printf("x= %6.2f\t\t%6.2f\n",b,F(b));
    getch();
}