#include<conio.h>
#include<stdio.h>
float max2(float a,float b){        //tim max 2 so
    return a>b?a:b;
}
float max3(float a, float b, float c){      //tim max 3 so
    return max2(a,b)>c?max2(a,b):c;
}
int main(){
    float a,b,c;
    printf("Nhap 3 so bat ky: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("So lon nhat la: %f",max3(a,b,c));
    getch();
}