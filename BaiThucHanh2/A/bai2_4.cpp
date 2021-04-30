#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Nhap a= ");
	scanf("%f",&a);
	printf("Nhap b= ");
	scanf("%f",&b);
	printf("Nhap c= ");
	scanf("%f",&c);
	if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&c+a>b){
		float p=(a+b+c)/2;
		printf("Dien tich tam giac = %f",sqrt(p*(p-a)*(p-b)*(p-c)));
	}
	else
		printf("Khong la do dai cua 3 canh tam giac");
	getch();
}

