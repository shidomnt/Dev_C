#include<stdio.h>
#include<conio.h>
int main(){
    int thang,nam;
    printf("Nhap thang: ");
    scanf("%d",&thang);
    printf("\nSo ngay cua thang %d la: ",thang);
    switch(thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf(" co 31 ngay");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf(" co 30 ngay");
        break;
        case 2:
        printf("\nNam nao? ");
        scanf("%d",&nam);
        if(nam%400==0||(nam%4==0&&nam%100!=0))
        printf("nam nhuan, co 29 ngay");
        else
        printf("co 28 ngay");
        break;
    }
    getch();
}