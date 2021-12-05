#include <stdio.h>
#include<conio.h>
int main(){
    int nam;
    printf("Nhap vao nam: ");
    scanf("%d",&nam);
    printf("Nam %d la nam con giap: ",nam);
    switch(nam%12){
        case 0:printf("Than");
        break;
        case 1:printf("Dau");
        break;
        case 2:printf("Tuat");
        break;
        case 3:printf("Hoi");
        break;
        case 4:printf("Ty");
        break;
        case 5:printf("Suu");
        break;
        case 6:printf("Dan");
        break;
        case 7:printf("Mao");
        break;
        case 8:printf("Thin");
        break;
        case 9:printf("Ty");
        break;
        case 10:printf("Ngo");
        break;
        case 11:printf("Mui");
        break;
    }
    getch();
}