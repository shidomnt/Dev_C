#include<stdio.h>
//#define PI 3.1415
const float PI=3.1415;
int main(){
	float r,s,v;
	printf("nhap ban kinh= ");
	scanf("%f",&r);
	s=4*PI*r*r;
	v=(4/3)*PI*r*r*r;
	printf("Dien tich= %.2f\nThe tich= %.2f\n",s,v);
	return 0;
}
