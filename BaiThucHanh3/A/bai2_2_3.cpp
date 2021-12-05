#include<conio.h>
#include<stdio.h>
#include<math.h>
float Ctamgiac(float a,float b,float c){        //Ham tinh chu vi tam giac
    return a+b+c;
}

float Stamgiac(float a,float b,float c){        //Ham tinh dien tich tam giac
    float p=(Ctamgiac(a,b,c))/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    float a,b,c;
    do{
        printf("Nhap vao canh thu nhat: ");
        scanf("%f",&a);
        printf("Nhap vao canh thu hai: ");
        scanf("%f",&b);
        printf("Nhap vao canh thu ba: ");
        scanf("%f",&c);
    }
    while(a<=0||b<=0||c<=0||a>=b+c||b>=a+c||c>=a+b);
    printf("Dien tich tam giac la: %6.2f",Stamgiac(a,b,c));
    getch();
}