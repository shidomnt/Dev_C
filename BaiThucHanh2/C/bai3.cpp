#include<stdio.h>
#include<conio.h>
int main(){
    int diem;
    printf("Nhap diem: ");
    scanf("%d",&diem);
    while(diem<0||diem>10){
        printf("SAI! Nhap lai: ");
        scanf("%d",&diem);
    }
    getch();
}