#include <stdio.h>
#include <math.h>
float dientich(float a, float b, float c)
{
float p=((a+b+c)/2);
return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{

float a, b, c;
do
{
printf("Nhap canh a: ");
scanf("%f",&a);
printf("Nhap canh b: ");
scanf("%f",&b);
printf("Nhap canh c: ");
scanf("%f",&c);
}
while(a>=b+c||b>=a+c||c>=a+b);
printf("Dien tich tam giac la: %.2f",dientich(a,b,c));
return 0;

}
