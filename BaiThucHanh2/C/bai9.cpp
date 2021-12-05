#include<conio.h>
#include<stdio.h>
int main(){
    int a,b;
    printf("Nhap a= ");
    scanf("%d",&a);
    printf("Nhap b= ");
    scanf("%d",&b);
    int ucln,bcnn;
    for(int i=b;i<=a*b;i+=b){
        if(i%a==0){
            bcnn=i;
            break;
        }
    }
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    ucln=a;
    printf("Uoc chung lon nhat la: %d\n",ucln);
    printf("Boi chung nho nhat la: %d",bcnn);
    getch();
}