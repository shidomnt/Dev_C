#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Chuong trinh giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
	printf("Nhap a= ");
	scanf("%f",&a);
	printf("Nhap b= ");
	scanf("%f",&b);
	printf("Nhap c= ");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0) printf("Phuong trinh co vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else printf("Nghiem cua phuong trinh x= %f",-c/b);
	}
	else{
		float delta = b*b - 4*a*c;
		if(delta<0) printf("Phuong trinh vo nghiem");
		else if(delta==0) printf("Phuong trinh co nghiem kep x= %f",-b/(2*a));
		else{
			delta=sqrt(delta);
			printf("Phuong trinh co 2 nghiem\nx1= %f\nx2= %f",(-b-delta)/(2*a),(-b+delta)/(2*a));
		}
	}
	getch();
}

