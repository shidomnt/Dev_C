//Tinh dien tich tam giac
#include<math.h>
#include<stdio.h>
float dientich(float a, float b, float c)
{
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
	float a,b,c;
	printf("Nhap lan luot 3 canh tam giac: ");
	scanf("%f%f%f",&a,&b,&c);
	if((a<=0||b<=0||c<=0)||(a>=b+c||b>=a+c||c>=a+b))
	{
		printf("Khong phai 3 canh cua 1 tam giac!");
	}
	else
	{
		printf("Dien tich tam giac= %.2f",dientich(a,b,c));
	}
	return 0;
}
