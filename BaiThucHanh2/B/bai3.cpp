#include<stdio.h>
#include<conio.h>
int main(){
    int thang;
    printf("Nhap vao 1 thang trong nam: ");
    scanf("%d",&thang);
    printf("Thang %d thuoc mua: ",thang);
    switch(thang){
        case 2:
        case 3:
        case 4: printf("xuan");
        break;
        case 5:
        case 6:
        case 7: printf("ha");
        break;
        case 8:
        case 9:
        case 10: printf("thu");
        break;
        case 1:
        case 11:
        case 12: printf("dong");
        break;
        default: printf("\nSo vua nhap khong phai la 1 thang!");
    }
    getch();
}