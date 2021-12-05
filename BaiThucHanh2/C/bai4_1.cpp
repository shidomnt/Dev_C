#include<stdio.h>
#include<conio.h>
int main(){
    int thang,nam;
    printf("Nhap thang: ");
    scanf("%d",&thang);
    while(thang<1||thang>12){
        printf("%d khong phai la 1 thang!\n",thang);
        printf("Nhap lai thang: ");
        scanf("%d",&thang);
    }
    printf("So ngay cua thang %d la: ",thang);
    switch(thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf(" 31 ngay");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf(" 30 ngay");
        break;
        case 2:
        printf("\nNam nao? ");
        scanf("%d",&nam);
        if(nam%400==0||(nam%4==0&&nam%100!=0))
        printf("Nam nhuan, co 29 ngay");
        else
        printf(" 28 ngay");
        break;
    }
    getch();
}