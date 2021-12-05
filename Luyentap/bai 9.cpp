//Giai PT bac2
#include<stdio.h>
#include<math.h>
int ptb2(float a, float b, float c){
	float delta=b*b-4*a*c;
	if(delta<0){
		printf("Phuong trinh vo nghiem");
		return 0;
	}
	else if(delta==0){
		printf("Phuong trinh co nghiem kep x= %.2f", -b/(2*a));
		return 0;
	}
	else {
		delta=sqrt(delta);
		printf("Phuong trinh co 2 nghiem phan biet: \nx1=%.2f\nx2=%.2f",(-b+delta)/(2*a),(-b-delta)/(2*a));
		return 0;
	}
}
int main(){
	float a,b,c;
	do{
	
	printf("Nhap a= ");
	scanf("%f",&a);
	printf("Nhap b= ");
	scanf("%f",&b);
	printf("Nhap c= ");
	scanf("%f",&c);
}
	while(!a);
	ptb2(a,b,c);
	return 0;
}
