#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c;
printf("Nhap canh a: ");
scanf("%f",&a);
printf("Nhap canh b: ");
scanf("%f",&b);
printf("Nhap canh c: ");
scanf("%f",&c);
float p=((a+b+c)/2);
printf("Dien tich tam giac= %.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
}
